#include "../../include/visitor/ProcedureVisitor.h"
#include "../../include/exception/NotImplemented.h"
#include <llvm/IR/Constants.h>
#include <regex>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Host.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/ValueSymbolTable.h"
#include "../../include/exception/CompileException.h"
#include "../../include/model/Field.h"
#include "../../include/utils/Utils.h"
#include "../../include/model/NumberField.h"
#include <algorithm>
#include <spdlog/spdlog.h>

using namespace std;
using namespace utils;

std::any ProcedureVisitor::visitParagraph(BabyCobolParser::ParagraphContext *ctx) {

    // find parameters in symbol table
    vector<llvm::Type*> paramType;
    for (auto param : ctx->atomic()) {
        auto v = any_cast<llvm::Value*>(visit(param));
        paramType.push_back(v->getType());
    }

    // return type
    auto void_type = llvm::Type::getVoidTy(this->bcModule->getContext());

    // create function callee
    string procedureName = ctx->label()->getText(); //todo: lower case this // this label is just a string literal, not (yet) a value reference

    llvm::FunctionType *function_type = llvm::FunctionType::get(void_type, paramType, false);
    auto function = builder->CreateProcedure(function_type, llvm::GlobalValue::CommonLinkage, procedureName);

    // visit body
    auto bodyBlock = llvm::BasicBlock::Create(this->bcModule->getContext(), "", function);
    this->builder->SetInsertPoint(bodyBlock);
    for (auto sentence : ctx->sentence()) {
        visit(sentence);
    }

    // insert return (void)
    builder->CreateRetVoid();

    // return function callee
    return function;
}

std::any ProcedureVisitor::visitDisplay(BabyCobolParser::DisplayContext *ctx) {

    // TODO: Add delimiter
    bool nextLine = ctx->ADVANCING() == nullptr;
    bool spacer = false;

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());

    for (int i = 0; i < ctx->atomic().size(); ++i) {

        if (i == 1) {
            spacer = true;
        }

        llvm::FunctionCallee *printf_func = bcModule->getPrintf();
        std::string format;

        auto value = any_cast<llvm::Value *>(visit(ctx->atomic()[i]));

        if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            format = "%d";
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            format = "%s";
        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            format = "%f"; // todo: determine the number of decimals
        }

        if (!dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i])) {
            // print a literal

            if (spacer) {
                format = " " + format;
            }

            auto formatValue = builder->CreateString(format);

            builder->CreateCall(*printf_func, { formatValue, value });

        } else if (auto identifierContext = dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i])) {

            // find more meta-data about this value in the symbol table
            DataEntry* dataEntry = bcModule->findDataEntry(identifierContext->identifiers()->IDENTIFIER()[0]->getText()); // todo: array access without check

            if (!dataEntry) {
                throw CompileException("Could not find value " + identifierContext->identifiers()->IDENTIFIER()[0]->getText());
            }

            std::vector<llvm::Value *> parameters;
            parameters.reserve(2);
            parameters.push_back(value);
            if (spacer) {
                parameters.push_back(llvm::ConstantInt::getTrue(bcModule->getContext()));
            } else {
                parameters.push_back(llvm::ConstantInt::getFalse(bcModule->getContext()));
            }

            std::vector<llvm::Type *> param_types;
            param_types.reserve(parameters.size());
            transform(parameters.begin(), parameters.end(), back_inserter(param_types), [] (auto v) { return v->getType(); });

            // todo: support record types here too
            if (dataEntry->isRecord()) {
                throw CompileException("Unimplemented feature: cannot DISPLAY Records.");
            }

            auto field = dynamic_cast<Field*>(dataEntry);

            FunctionCallee print_func;

            if (field->isNumber()) {
                llvm::FunctionType *print_func_types = llvm::FunctionType::get(void_t, param_types, true);
                print_func = bcModule->getOrInsertFunction("bstd_print_number", print_func_types);
            } else {
                // todo: there is a "spacer" parameter. We will probably get some interesting stochastic behaviour here...
                llvm::FunctionType *print_func_types = llvm::FunctionType::get(void_t, param_types, true);
                print_func = bcModule->getOrInsertFunction("bstd_print_picture", print_func_types);
            }

            auto function = cast<Function>(print_func.getCallee());
            function->addParamAttr(0, Attribute::getWithByValType(bcModule->getContext(), bcModule->getNumberStructType()));

            builder->CreateCall(print_func, parameters);

        } else {
            throw NotImplemented("Visitor:visitDisplay() We should never reach this statement!!!");
        }
    }

    if (nextLine) {

        std::string format = "%s";
        std::string linefeed = "\n\r";
        auto formatValue = builder->CreateString(format);
        auto value = builder->CreateString(linefeed);

        llvm::FunctionCallee *printf_func = bcModule->getPrintf();
        builder->CreateCall(*printf_func, { formatValue, value });

    }

    return 0;
}

std::any ProcedureVisitor::visitMove(BabyCobolParser::MoveContext *ctx) {
    // Prepare the struct we will be copying
    llvm::Value *picValue = nullptr;
    llvm::Value *numValue = nullptr;
    std::string mask;

    std::vector<DataEntry*> identifiers = {};

    for (auto identifier: ctx->identifiers()) {
        auto *val = any_cast<llvm::Value*>(visit(identifier));
        auto *tree = bcModule->findDataEntry(val->getName().str());
        identifiers.push_back(tree);
    }

    // Get a Field that will be the figure
    DataEntry* tree = identifiers.at(0);

    if (tree->isRecord()) {
        throw CompileException("MOVE TO record is not supported!");
    }

    auto target = dynamic_cast<Field *>(tree);
    mask = target->getMask();

    if (target->isNumber()) {

        numValue = builder->CreateAlloca(bcModule->getNumberStructType());
        builder->CreateMemCpy(numValue, llvm::MaybeAlign(), target->getValue(), llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));

    } else {

        picValue = builder->CreateAlloca(bcModule->getPictureStructType());
        llvm::Value *pictureToAssignBits = builder->CreateBitCast(picValue, llvm::Type::getInt8PtrTy(bcModule->getContext()));
        llvm::Value *pictureSourceBits = builder->CreateBitCast(target->getValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));
        builder->CreateMemCpy(pictureToAssignBits,llvm::MaybeAlign(), pictureSourceBits,llvm::MaybeAlign(), 24);
    }

    // Fill the struct we will be copying
    if (ctx->HIGH() != nullptr) {
        throw CompileException("MOVE HIGH TO is not implemented!");
        if (target->isNumber()) {
            // TODO: assign value to numValue using mask
        } else {
            // TODO: assign value to picValue using mask
        }
    } else if (ctx->LOW() != nullptr) {
        throw CompileException("MOVE LOW TO is not implemented!");
        if (target->isNumber()) {
            // TODO: assign value to numValue using mask
        } else {
            // TODO: assign value to picValue using mask
        }
    } else if (ctx->SPACES() != nullptr) {
        throw CompileException("MOVE SPACES TO is not implemented!");
        if (target->isNumber()) {
            // TODO: assign value to numValue using mask
        } else {
            // TODO: assign value to picValue using mask
        }
    } else if (ctx->atomic() != nullptr) {

        if (dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()) != nullptr) {

            auto *identifier = dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic());
            auto *currentTree = any_cast<DataEntry*>(visit(identifier));

            if (currentTree->isRecord()) {

                throw CompileException("record MOVE TO is not supported!");
            }

            auto field = dynamic_cast<Field*>(currentTree);

            if (field->isNumber() != target->isNumber()) {
                throw CompileException("Incompatible types between fields " + field->getName() + " and " + target->getName());
            }

            if (field->isNumber()) {

                // take the Number to copy
                llvm::Value *numberToAssign = builder->CreateAlloca(bcModule->getNumberStructType());
                builder->CreateMemCpy(numberToAssign, llvm::MaybeAlign(), field->getValue(), llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));

                // then call assign Number with Number
                callAssignNumber(numValue, numberToAssign);

            } else {

                // take the Picture to copy
                llvm::Value *pictureToAssign = builder->CreateAlloca(bcModule->getPictureStructType());

                llvm::Value *pictureToAssignBits = builder->CreateBitCast(pictureToAssign, llvm::Type::getInt8PtrTy(bcModule->getContext()));
                llvm::Value *pictureSourceBits = builder->CreateBitCast(field->getValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));

                builder->CreateMemCpy(pictureToAssignBits,llvm::MaybeAlign(), pictureSourceBits,llvm::MaybeAlign(), 24);

                // then call assign Picture with Picture
                callAssignPicture(picValue, pictureToAssign);
            }

        } else if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()) != nullptr) {

            if (target->isNumber()) {

                // assign value to numValue
                llvm::Value *value = builder->CreateNumber(
                        dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()));

                callAssignNumber(numValue, value);

            } else {
                // TODO: Cast int to string and try to assign
            }

        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()) != nullptr) {

            if (target->isNumber()) {

                // assign value to numValue
                llvm::Value *value = builder->CreateNumber(
                        dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()));

                callAssignNumber(numValue, value);

            } else {
                // TODO: Cast double to string and try to assign
            }

        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()) != nullptr) {

            if (target->isNumber()) {

                // TODO: We don't know what to do...
                throw CompileException("MOVE does not know what to do when parsing a String to Number...");
            }

            // assign value to picValue
            llvm::Value *value = builder->CreatePicture(
                    dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()));
            callAssignPicture(picValue, value);
        }
    }

    // Assign to identifiers
    for (auto currentTree: identifiers) {

        if (currentTree->isRecord()) {

            throw CompileException("MOVE TO record is not supported!");

        } else {

            auto field = dynamic_cast<Field *>(currentTree);

            if (field->isNumber() != target->isNumber()) {
                throw CompileException("Incompatible types between fields " + field->getName() + " and " + target->getName());
            }

            if (field->isNumber()) {

                // take the Number to copy
                // then call assign Number with Number
                callAssignNumber(field->getValue(), numValue);

            } else {

                // then call assign Picture with Picture
                callAssignPicture(field->getValue(), picValue);
            }
        }
    }
    return 0;
}

std::any ProcedureVisitor::visitAdd(BabyCobolParser::AddContext *ctx) {

    auto atomics = ctx->atomic();

    auto base = any_cast<llvm::Value*>(visit(ctx->to));

    auto operand = any_cast<llvm::Value*>(visit(ctx->atomic()[0]));

    // todo: we're assuming _base_ is an identifier. Extend this
    builder->CreateAddIntToNumber(base, operand);

    return base;
}

std::any ProcedureVisitor::visitLoop(BabyCobolParser::LoopContext *ctx) {

    Function* TheFunction = builder->GetInsertBlock()->getParent();

    // create new basic block, set our current insertion point to it
    llvm::BasicBlock* loop_body = llvm::BasicBlock::Create(this->builder->getContext(), "loop_body", TheFunction, nullptr);
    // create a new block (label) for the code to continue after the loop
    llvm::BasicBlock* loop_end = llvm::BasicBlock::Create(this->builder->getContext(), "loop_end", TheFunction, nullptr);

    // visit loop conditional expression
    auto conditional = std::any_cast<llvm::Value*>(visit(ctx->loopExpression()));

    // conditional branch
    this->builder->CreateCondBr(conditional, loop_body, loop_end);

    // set builder insertion point
    this->builder->SetInsertPoint(loop_body);

    // save stack state
    auto stack_save = builder->CreateIntrinsic(Intrinsic::stacksave, {}, {});

    // visit loop body
    for (auto s : ctx->statement()) {
        BabyCobolBaseVisitor::visitStatement(s);
    }

    // restore stack state
    builder->CreateIntrinsic(Intrinsic::stackrestore, {}, stack_save);

    // Backward conditional, or exit loop body basic block
    auto conditional_b = std::any_cast<llvm::Value*>(visit(ctx->loopExpression()));
    this->builder->CreateCondBr(conditional_b, loop_body, loop_end);

    this->builder->SetInsertPoint(loop_end);

    return nullptr;
}

std::any ProcedureVisitor::visitIfStatement(BabyCobolParser::IfStatementContext *ctx) {

    Function* TheFunction = builder->GetInsertBlock()->getParent();

    llvm::BasicBlock* if_body = llvm::BasicBlock::Create(this->builder->getContext(), "if_body", TheFunction, nullptr);
    llvm::BasicBlock* else_body = llvm::BasicBlock::Create(this->builder->getContext(), "else_body", TheFunction, nullptr);
    llvm::BasicBlock* end_label = llvm::BasicBlock::Create(this->builder->getContext(), "if_end", TheFunction, nullptr);

    auto conditional = std::any_cast<llvm::Value*>(visit(ctx->booleanExpression()));
    this->builder->CreateCondBr(conditional, if_body, else_body);

    { // start IF branch

        this->builder->SetInsertPoint(if_body);

        // save stack state
        auto stack_save_if = builder->CreateIntrinsic(Intrinsic::stacksave, {}, {});

        // visit if body
        for (auto s: ctx->t) {
            BabyCobolBaseVisitor::visitStatement(s);
        }

        // restore stack state
        builder->CreateIntrinsic(Intrinsic::stackrestore, {}, stack_save_if);

        builder->CreateBr(end_label);

    } // end IF branch

    {// start ELSE branch

        builder->SetInsertPoint(else_body);

        if (ctx->ELSE()) {
            // save stack state
            auto stack_save_else = builder->CreateIntrinsic(Intrinsic::stacksave, {}, {});

            // visit else body
            for (auto s: ctx->f) {
                BabyCobolBaseVisitor::visitStatement(s);
            }

            // restore stack state
            builder->CreateIntrinsic(Intrinsic::stackrestore, {}, stack_save_else);
        }

        builder->CreateBr(end_label);

    }// end ELSE branch

    builder->SetInsertPoint(end_label);

    return nullptr;
}

std::any ProcedureVisitor::visitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) {

    auto int64t = llvm::Type::getInt64Ty(this->bcModule->getContext());

    int val = stoi(ctx->getText());

    return (llvm::Value*)llvm::ConstantInt::get(int64t, val, true);
}

std::any ProcedureVisitor::visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) {

    // Get the text and remove the quotes to get the string content
    std::string value = ctx->LITERAL()->getText().substr(1, ctx->LITERAL()->getText().size() - 2);

    return builder->CreateString(value);
}

std::any ProcedureVisitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {

    // todo: implement searching through records
    string name = ctx->IDENTIFIER()[0]->getText();

    auto result = bcModule->findDataEntry(name);

    if (!result) {
        throw CompileException("Undefined reference to \"" + name + "\".");
    }

    return result->getValue();
}

any ProcedureVisitor::visitInt(BabyCobolParser::IntContext *ctx) {
    return stoi(ctx->getText());
}

any ProcedureVisitor::visitDoubleLiteral(BabyCobolParser::DoubleLiteralContext *ctx) {
    string s = ctx->getText();
    replace(s.begin(), s.end(), ',', '.');
    return stod(s);
}

void ProcedureVisitor::int_ptr_re_entry_handler_generator(BCBuilder *builder, BCModule *module, llvm::Value *original,
                                                          llvm::Value *intPtr) {

    auto int_t = llvm::Type::getInt64Ty(builder->getContext());

    // dereference intPtr
    auto int_val = builder->CreateLoad(int_t, intPtr);

    auto assign_int_func = module->getAssignIntFunc();
    builder->CreateCall(*assign_int_func, {original, int_val});
}

void ProcedureVisitor::double_ptr_re_entry_handler_generator(BCBuilder *builder, BCModule *module, llvm::Value *original,
                                                          llvm::Value *doublePtr) {

    auto field = dynamic_cast<Field*>(module->findDataEntry(original->getName().str()));
    auto original_t = field->getType(module->getContext());
    auto const_i64 = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, 64));

    // dereference intPtr
    auto int_val = builder->CreateLoad(original_t, doublePtr);

    auto assign_double_func = module->getAssignDoubleFunc();
    builder->CreateCall(*assign_double_func, {original, int_val});

    // free allocated memory
    builder->CreateLifetimeEnd(doublePtr, const_i64);
}

void ProcedureVisitor::cstr_re_entry_handler_generator(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* cstr) {

    builder->CreateCStrToPictureCall(original, cstr);

}

any ProcedureVisitor::visitCallStatement(BabyCobolParser::CallStatementContext *ctx) {

    // todo: replace these tuples with enums.
    // True, True if -> BY VALUE, AS PRIMITIVE
    // False, False if -> BY REFERENCE, AS STRUCT
    // false, true -> by reference, as primitive
    // true, false -> by value, as struct
    vector<tuple<bool, bool>> passType(ctx->atomic().size());

    std::vector<std::pair<llvm::Value*, llvm::Type*>> parameters;
    parameters.reserve(ctx->atomic().size());

    // (original, copy, handler)
    vector<tuple<llvm::Value *, llvm::Value *, re_entry_handler_generator_t>> re_entry_cache;

    map<BabyCobolParser::AtomicContext *, const char *> stringsToMutate;
    map<BabyCobolParser::AtomicContext *, double *> doublesToMutate;
    map<BabyCobolParser::AtomicContext *, int *> intsToMutate;
    vector<tuple<int, Type *>> byvalTracker;

    // todo: the body of this branch is technical debt
    if (ctx->USING() != nullptr) {
        populatePassTypeVector(&passType, ctx);

        for (int i = 0; i < ctx->atomic().size(); i++) {

            tuple<bool, bool> modifiers = passType[i];
            auto paramContext = ctx->atomic()[i];

            auto param = any_cast<llvm::Value*>(visit(paramContext));

            /** DATA DIV STUFF */
            if (auto idCtx = dynamic_cast<BabyCobolParser::IdentifierContext *>(paramContext)) {

                auto dataEntry = bcModule->findDataEntry(param->getName().str());

                llvm::Value *marshalledParam = param;
                llvm::Type *paramType;
                llvm::Value* (BCBuilder::*marshallFunction)(llvm::Value*);
                re_entry_handler_generator_t re_entry_handler;

                if (!dataEntry->isRecord()) { // field

                    auto field = dynamic_cast<Field*>(dataEntry);

                    paramType = field->getType(bcModule->getContext());

                    if (field->isNumber()) { // number

                        auto number = dynamic_cast<NumberField*>(field);

                        if (number->isInteger()) {

                            marshallFunction = &BCBuilder::CreateNumberToIntCall;
                            re_entry_handler = &ProcedureVisitor::int_ptr_re_entry_handler_generator;

                        } else { // fixed-point

                            marshallFunction = &BCBuilder::CreateNumberToDoubleCall;
                            re_entry_handler = &ProcedureVisitor::double_ptr_re_entry_handler_generator;
                        }

                    } else { // picture field (not number)

                        marshallFunction = &BCBuilder::CreatePictureToCStrCall;
                        re_entry_handler = &ProcedureVisitor::cstr_re_entry_handler_generator;

                    }

                } else { // record

                    paramType = param->getType();

                    // todo: we could do passing by value (deep copy -> recursive memcopy?) currently we only pass by reference as struct.

                    if (get<0>(modifiers) || get<1>(modifiers)) {
                        // we only support BY REFERENCE, AS STRUCT for records
                        throw CompileException("Invalid modifiers on record call parameter " + dataEntry->getName());
                    }

                    marshalledParam = param;
                }

                // handle modifiers on parameter

                if (get<0>(modifiers) && get<1>(modifiers)) { // by value as primitive

                    marshalledParam = (builder->*marshallFunction)(param);

                } else if (get<0>(modifiers) && !get<1>(modifiers)) { // by value, as struct

                    byvalTracker.emplace_back(i, bcModule->getNumberStructType());

                } else if (!get<0>(modifiers) && get<1>(modifiers)) { // by reference, as primitive

                    auto field = dynamic_cast<Field*>(dataEntry);

                    if (!field) {
                        throw CompileException("Invalid modifiers on record call parameter " + dataEntry->getName());
                    }

                    auto reference_t = llvm::PointerType::get(field->getType(bcModule->getContext()), 4);

                    // create a reference to pass
                    marshalledParam = builder->CreateAlloca(reference_t);
                    // marshall number to integer, store it at the new reference
                    auto _param = (builder->*marshallFunction)(param);
                    builder->CreateStore(_param, marshalledParam, false);

                    // keep track of this value for upon re-entry
                    auto copy_handler_tuple = tuple(param, marshalledParam, re_entry_handler);
                    re_entry_cache.push_back(copy_handler_tuple);

                } else if (!get<0>(modifiers) && !get<1>(modifiers)) { // by reference, as struct

                    // TODO: At re-entry we could marshall (align) this value

                }

                if (!get<0>(modifiers)) { // by ref
                    paramType = llvm::PointerType::get(paramType, 0);
                }

                parameters.emplace_back(marshalledParam, paramType);

                /** LITERAL STUFF */
            } else {

                // literal parameters never require marshalling upon re-entry

                // todo: implement all field types

                llvm::Type *paramType;

                // determine literal type
                if (dynamic_cast<BabyCobolParser::StringLiteralContext*>(paramContext)) {

                    paramType = llvm::Type::getInt8Ty(bcModule->getContext());

                } else if (dynamic_cast<BabyCobolParser::IntLiteralContext*>(paramContext)) {

                    paramType = llvm::Type::getInt64Ty(bcModule->getContext());

                } else if (dynamic_cast<BabyCobolParser::StringLiteralContext*>(paramContext)) {

                    paramType = llvm::Type::getDoubleTy(bcModule->getContext());

                }

                // by value as primitive
                if (get<0>(modifiers) && get<1>(modifiers)) {
                    // if we have a string, we still have to pass a char ptr
                    if (dynamic_cast<BabyCobolParser::StringLiteralContext*>(paramContext)) {
                        paramType = llvm::PointerType::get(paramType, 0);
                    }
                    // ... for ints and doubles we just pass as basic type.
                }

                // by reference as primitive
                if (!get<0>(modifiers) && get<1>(modifiers)) {
                    paramType = llvm::PointerType::get(paramType, 0);
                }

                // todo: implement passing literals as BSTD structs

                parameters.emplace_back(param, paramType);
            }
        }
    }

    string functionName = ctx->function_name->getText();

    llvm::Value* return_target = nullptr;
    llvm::Type* return_type = llvm::Type::getVoidTy(bcModule->getContext());

    DataEntry* data_entry = nullptr;

    if (ctx->RETURNING()) {

        return_target = any_cast<llvm::Value*>(visit(ctx->returning));

        // Find the data tree entry that the return clause is referring to
        data_entry = bcModule->findDataEntry(ctx->returning->IDENTIFIER()[0]->getText());

        if (!data_entry) {
            throw CompileException("Could not find field " + ctx->returning->IDENTIFIER()[0]->getText());
        }

        if (ctx->reference_return != nullptr) {

            // return type is a pointer to our identifier
            return_type = llvm::PointerType::get(return_type, 4); // pointers are opaque

        } else {

            if (data_entry->isRecord()) {

                // todo: implement
                throw CompileException("Returning to Record types is currently unimplemented.");
            }

            if (auto field = dynamic_cast<Field*>(data_entry)) {

                if (auto number = dynamic_cast<NumberField*>(field)) {

                    if (ctx->primitive_return) {

                        return_type = field->getType(this->bcModule->getContext());

                    } else {
                        // return type is bstd_number by value
                        return_type = bcModule->getNumberStructType();
                    }

                } else {

                    if (ctx->primitive_return) {

                        // return type is char pointer
                        return_type = field->getType(this->bcModule->getContext());

                    } else {

                        // return type is bstd_picture by value
                        return_type = bcModule->getPictureStructType();

                    }
                }
            }
        }

    }

    std::vector<llvm::Value*> param_values;
    param_values.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_values), [] (auto v) { return get<0>(v); });

    std::vector<llvm::Type*> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), [] (auto v) { return get<1>(v); });

    bool hasProgramName = ctx->program_name;

    llvm::Value* call = nullptr;

    if (!hasProgramName) {
        // try to find the procedure in our internal shadow symbol table

        if (auto procedure = this->bcModule->findProcedure(functionName)) {
            // call the procedure

            call = builder->CreateCall(procedure, param_values);

        } else {
            // we can not find a match. Warn user.
            auto format = "No function named %s found in this baby cobol file. Continuing without resolving symbol...";
            auto size = std::snprintf(nullptr, 0, format, functionName.c_str());
            char warning[size + 1];
            warning[size] = '\0';
            std::sprintf(warning, format, functionName.c_str());
            std::cerr << warning << endl;

            // construct it anyway, and hope it is available when we link

            llvm::FunctionType *new_function_types = llvm::FunctionType::get(return_type, param_types, false);
            auto new_function = bcModule->getOrInsertFunction(functionName, new_function_types);
            call = builder->CreateCall(new_function, param_values);
        }

    } else {

        string programName = ctx->program_name->getText();
        if (extTable->find(programName) != extTable->end()) {

            vector<string> programFunctions = extTable->find(programName)->second;

            if (std::find(programFunctions.begin(), programFunctions.end(), functionName) ==
                programFunctions.end()) {
                auto format = "No function named %s found in program %s. Continuing without resolving symbol...";
                auto size = std::snprintf(nullptr, 0, format, functionName.c_str());
                char warning[size + 1];
                warning[size] = '\0';
                std::sprintf(warning, format, functionName.c_str());
                std::cerr << warning << endl;
                throw CompileException(warning);
            }

            llvm::FunctionType *new_function_types = llvm::FunctionType::get(return_type, param_types, true);
            auto new_function = bcModule->getOrInsertFunction(functionName, new_function_types);

            auto function = cast<Function>(new_function.getCallee());
            for (auto currentAttributeTuple: byvalTracker) {
                function->addParamAttr(get<0>(currentAttributeTuple),
                                       Attribute::getWithByValType(bcModule->getContext(),
                                                                   get<1>(currentAttributeTuple)));
            }

            call = builder->CreateCall(new_function, param_values);

        } else {
            auto format = "No program named %s provided.";
            auto size = std::snprintf(nullptr, 0, format, programName.c_str());
            std::string errormessage(size + 1, '\0');
            std::sprintf(&errormessage[0], format, programName.c_str());
            throw CompileException(errormessage);
        }
    }

    // if we have a returning clause
    if (call && return_target) {
        // assign result of the call to the return value.

        if (ctx->primitive_return != nullptr) {
            // we expect a basic data type, so we need to marshall

            if (data_entry->isRecord()) {
                throw CompileException("Can not use \"AS PRIMITIVE\" return clause modifier on a Record target.");
            }

            // determine which type our target is - a number or a picture
            auto field = dynamic_cast<Field*>(data_entry);

            llvm::Value* value;

            if (ctx->reference_return != nullptr) {

                // returning by reference, so load the primitive
                value = builder->CreateLoad(field->getType(this->bcModule->getContext()), call);

            } else {
                // returning by vale, so we do not need to load
                value = call;
            }

            if (auto number_field = dynamic_cast<NumberField*>(field)) {

                // we're assigning the return value to a number
                if (number_field->isInteger()) {
                    builder->CreateAssignIntToNumber(return_target, value);
                } else {
                    builder->CreateAssignDoubleToNumber(return_target, value);
                }

            } else {
                builder->CreateAssignCStrToPicture(return_target, value);
            }


        } else {    // We know the return value is either bstd_number or bstd_bstd_picture, so no marshalling is needed

            llvm::Value* value;

            if (ctx->reference_return != nullptr) {
                // returning by reference, so no need to create a pointer
                value = call;
            } else {
                // returned by value, so create a pointer to it
                auto alloc = builder->CreateAlloca(bcModule->getNumberStructType());
                builder->CreateMemCpy(alloc, llvm::MaybeAlign(), call, llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));

                value = alloc;
            }

            // we are assigning the result to a picture or a number

            if (data_entry->isRecord()) {
                // todo: implement this
                throw CompileException("Returning to Record types is currently unimplemented.");
            } else {

                // determine which it is - number or picture
                auto field = dynamic_cast<Field*>(data_entry);

                if (field->isNumber()) {
                    // we're assigning the return value to a number
                    builder->CreateAssignNumberToNumber(return_target, value);
                } else {
                    // we're assigning the return value to a picture
                    builder->CreateAssignPictureToPicture(return_target, value);
                }

            }
        }

    }

    // generate re-entry handlers
    for (auto &it: re_entry_cache) {
        auto original = get<0>(it);
        auto copy = get<1>(it);
        auto handler = get<2>(it);
        (*handler)(this->builder, this->bcModule, original, copy);
    }

    return nullptr;
}

void ProcedureVisitor::populatePassTypeVector(std::vector<tuple<bool, bool>> *passType,
                                              BabyCobolParser::CallStatementContext *ctx) {
    int valuePrimCursor = 0;
    int referencePrimCursor = 0;
    int valueStructCursor = 0;
    int referenceStructCursor = 0;
    for (int i = 0; i < ctx->atomic().size(); i++) {
        if (!ctx->byreferenceatomicsprim.empty()) {
            if (ctx->byreferenceatomicsprim[referencePrimCursor] == ctx->atomic()[i]) {
                passType->at(i) = tuple(false, true);
                referencePrimCursor++;
            }
        }
        if (!ctx->byvalueatomicsprim.empty()) {
            if (ctx->byvalueatomicsprim[valuePrimCursor] == ctx->atomic()[i]) {
                passType->at(i) = tuple(true, true);
                valuePrimCursor++;
            }
        }
        if (!ctx->byreferenceatomicsstruct.empty()) {
            if (ctx->byreferenceatomicsstruct[referenceStructCursor] == ctx->atomic()[i]) {
                passType->at(i) = tuple(false, false);
                referenceStructCursor++;
            }
        }
        if (!ctx->byvalueatomicsstruct.empty()) {
            if (ctx->byvalueatomicsstruct[valueStructCursor] == ctx->atomic()[i]) {
                passType->at(i) = tuple(true, false);
                valueStructCursor++;
            }
        }
    }
}

void ProcedureVisitor::callAssignNumber(llvm::Value *assignee, llvm::Value *value) {
    std::vector<llvm::Value *> parameters;
    parameters.reserve(2);
    parameters.push_back(assignee);
    parameters.push_back(value);

    std::vector<llvm::Type *> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), [] (auto v) { return v->getType(); });

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType *bstd_assign_number_types = llvm::FunctionType::get(void_t, param_types, true);
    FunctionCallee bstd_assign_number = bcModule->getOrInsertFunction("bstd_assign_number", bstd_assign_number_types);
    builder->CreateCall(bstd_assign_number, parameters);
}

void ProcedureVisitor::callAssignPicture(llvm::Value *assignee, llvm::Value *value) {
    std::vector<llvm::Value *> parameters;
    parameters.reserve(2);
    parameters.push_back(assignee);
    parameters.push_back(value);

    std::vector<llvm::Type *> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), [] (auto v) { return v->getType(); });

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType *bstd_assign_picture_types = llvm::FunctionType::get(void_t, param_types, true);
    FunctionCallee bstd_assign_picture = bcModule->getOrInsertFunction("bstd_assign_picture", bstd_assign_picture_types);
    builder->CreateCall(bstd_assign_picture, parameters);
}

llvm::Value *marshallDataEntry(BCBuilder *builder, DataEntry *dataEntry) {

    if (dataEntry->isRecord()) {
        throw CompileException("Cannot perform arithmetic operation on record type " + dataEntry->getName());
    }

    auto field = dynamic_cast<Field*>(dataEntry);

    if (!field->isNumber()) {
        throw CompileException("Cannot perform arithmetic operation on picture type " + dataEntry->getName());
    }

    auto numberField = dynamic_cast<NumberField*>(field);

    if (numberField->isInteger()) {
        return builder->CreateNumberToIntCall(dataEntry->getValue());
    }

    return builder->CreateNumberToDoubleCall(dataEntry->getValue());
}

std::any ProcedureVisitor::visitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) {
    return visit(ctx->atomic());
}

std::any ProcedureVisitor::visitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) {

    auto lhs = std::any_cast<llvm::Value*>(visit(ctx->left));
    auto rhs = std::any_cast<llvm::Value*>(visit(ctx->right));

    auto marshalledLhs = lhs;
    auto marshalledRhs = rhs;

    if (auto dataEntry = bcModule->findDataEntry(lhs->getName().str())) {
        marshalledLhs = marshallDataEntry(builder, dataEntry);
    }

    if (auto dataEntry = bcModule->findDataEntry(rhs->getName().str())) {
        marshalledRhs = marshallDataEntry(builder, dataEntry);
    }

    if (ctx->arithmeticOp()->SYMBOL_PLUS()) {

        return builder->CreateFAdd(marshalledLhs, marshalledRhs);

    } else if (ctx->arithmeticOp()->SYMBOL_MINUS()) {

        return builder->CreateFSub(marshalledLhs, marshalledRhs);

    } else if (ctx->arithmeticOp()->SYMBOL_MULT()) {

        return builder->CreateFMul(marshalledLhs, marshalledRhs);

    } else if (ctx->arithmeticOp()->SYMBOL_DIV()) {

        return builder->CreateFDiv(marshalledLhs, marshalledRhs);

    } else if (ctx->arithmeticOp()->SYMBOL_EXP()) {

        return builder->CreatePow(marshalledLhs, marshalledRhs);
    }

    return nullptr;
}

static llvm::Value *floatingPointComparison(BabyCobolParser::CompareOpBooleanExpContext *ctx, BCBuilder *builder, llvm::Value *marshalledLhs, llvm::Value *marshalledRhs) {

    if (ctx->comparisonOp()->NEQ()) {

        return builder->CreateFCmpUNE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->LT()) {

        return builder->CreateFCmpULT(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->LTE()) {

        return builder->CreateFCmpULE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->EQ()) {

        return builder->CreateFCmpUEQ(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->GTE()) {

        return builder->CreateFCmpUGE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->GT()) {

        return builder->CreateFCmpUGT(marshalledLhs, marshalledRhs);
    }

    return nullptr;
}

static llvm::Value *integerComparison(BabyCobolParser::CompareOpBooleanExpContext *ctx, BCBuilder *builder, llvm::Value *marshalledLhs, llvm::Value *marshalledRhs) {

    if (ctx->comparisonOp()->NEQ()) {

        return builder->CreateICmpNE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->LT()) {

        return builder->CreateICmpSLT(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->LTE()) {

        return builder->CreateICmpSLE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->EQ()) {

        return builder->CreateICmpEQ(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->GTE()) {

        return builder->CreateICmpSGE(marshalledLhs, marshalledRhs);

    } else if (ctx->comparisonOp()->GT()) {

        return builder->CreateICmpSGT(marshalledLhs, marshalledRhs);
    }

    return nullptr;
}

std::any ProcedureVisitor::visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) {

    auto lhs = any_cast<llvm::Value*>(visit(ctx->left));
    auto rhs = any_cast<llvm::Value*>(visit(ctx->right));

    auto marshalledLhs = lhs;
    auto marshalledRhs = rhs;

    if (auto dataEntry = bcModule->findDataEntry(lhs->getName().str())) {
        marshalledLhs = marshallDataEntry(builder, dataEntry);
    }

    if (auto dataEntry = bcModule->findDataEntry(rhs->getName().str())) {
        marshalledRhs = marshallDataEntry(builder, dataEntry);
    }

    if (marshalledLhs->getType()->isFloatingPointTy() || marshalledRhs->getType()->isFloatingPointTy()) {
        // we need to cast and do floating-point comparison
        return floatingPointComparison(ctx, builder, marshalledLhs, marshalledRhs);
    } else {
        // neither operand is floating-point, we can do integer comparison
        return integerComparison(ctx, builder, marshalledLhs, marshalledRhs);
    }

    return nullptr;
}

std::any ProcedureVisitor::visitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) {
    return (llvm::Value*)llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(1, 1, false));
}

std::any ProcedureVisitor::visitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) {
    return (llvm::Value*)llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(1, 0, false));
}

llvm::Value* CreateNot(BCBuilder *builder, llvm::Value *operand) {
    auto constFalse = llvm::ConstantInt::get(builder->getContext(), llvm::APInt(1, 0, false));
    return builder->CreateICmpEQ(operand, constFalse);
}

std::any ProcedureVisitor::visitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) {
    auto operand = std::any_cast<llvm::Value*>(visit(ctx->booleanExpression()));
    return CreateNot(builder, operand);
}

std::any ProcedureVisitor::visitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) {

    auto lhs = std::any_cast<llvm::Value*>(visit(ctx->left));
    auto rhs = std::any_cast<llvm::Value*>(visit(ctx->right));

    if (ctx->booleanOp()->AND()) {

        return builder->CreateLogicalAnd(lhs, rhs);

    } else if (ctx->booleanOp()->OR()) {

        return builder->CreateLogicalOr(lhs, rhs);

    } else if (ctx->booleanOp()->XOR()) {

        auto notRhs = CreateNot(builder, rhs);
        auto c1 = builder->CreateLogicalAnd(lhs, notRhs);

        auto notLhs = CreateNot(builder, lhs);
        auto c2 = builder->CreateLogicalAnd(notLhs, rhs);

        return builder->CreateLogicalOr(c1, c2);
    }

    return nullptr;
}

#include "Visitor.h"
#include "../Exceptions/NotImplemented.h"
#include <llvm/IR/Constants.h>
#include <regex>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Host.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/ValueSymbolTable.h"
#include "../Exceptions/CompileException.h"
#include "../datastructures/Field.h"
#include "../../include/utils/utils.h"
#include <algorithm>
#include <cctype>

using namespace std;
using namespace utils;

std::any Visitor::visitIdentification(BabyCobolParser::IdentificationContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentification(ctx);
}

std::any Visitor::visitProgram(BabyCobolParser::ProgramContext *ctx) {

    // todo: this should have its own visitor
    visit(ctx->identification());

    visit(ctx->procedure());

    return nullptr;
}

std::any Visitor::visitName(BabyCobolParser::NameContext *ctx) {
    return BabyCobolBaseVisitor::visitName(ctx);
}

std::any Visitor::visitValue(BabyCobolParser::ValueContext *ctx) {
    return BabyCobolBaseVisitor::visitValue(ctx);
}

std::any Visitor::visitProcedure(BabyCobolParser::ProcedureContext *ctx) {
    return BabyCobolBaseVisitor::visitProcedure(ctx);
}

std::any Visitor::visitParagraph(BabyCobolParser::ParagraphContext *ctx) {

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

std::any Visitor::visitSentence(BabyCobolParser::SentenceContext *ctx) {
    return BabyCobolBaseVisitor::visitSentence(ctx);
}

std::any Visitor::visitStatement(BabyCobolParser::StatementContext *ctx) {
    return BabyCobolBaseVisitor::visitStatement(ctx);
}

std::any Visitor::visitLabel(BabyCobolParser::LabelContext *ctx) {
    return BabyCobolBaseVisitor::visitLabel(ctx);
}

std::any Visitor::visitDisplay(BabyCobolParser::DisplayContext *ctx) {

    // TODO: Add delimiter
    bool nextLine = ctx->ADVANCING() == nullptr;
    bool spacer = false;

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());

    for (int i = 0; i < ctx->atomic().size(); ++i) {
        if (i == 1) {
            spacer = true;
        }
        if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(to_string(any_cast<int>(visit(ctx->atomic()[i]))), spacer);
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(any_cast<string>(visit(ctx->atomic()[i])), spacer);
        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(to_string(any_cast<double>(visit(ctx->atomic()[i]))), spacer);
        } else if (auto identifierContext = dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i])) {

            auto value = any_cast<llvm::Value *>(visit(ctx->atomic()[i]));

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
        printDisplayItem("\n\r", false);
    }
    return 0;
}

void Visitor::printDisplayItem(const string &value, bool spacer) {
    llvm::FunctionCallee *printf_func = bcModule->getPrintf();

    llvm::Value *raw = builder->CreateGlobalStringPtr(value);
    llvm::Value *strPtr;
    if (spacer) {
        // create a printf call for every operand
        strPtr = builder->CreateGlobalStringPtr(" %s");
    } else {
        strPtr = builder->CreateGlobalStringPtr("%s");
    }

    llvm::ArrayRef<llvm::Value *> aref = {strPtr, raw};
    builder->CreateCall(*printf_func, aref);
}

std::any Visitor::visitStop(BabyCobolParser::StopContext *ctx) {
    return BabyCobolBaseVisitor::visitStop(ctx);
}

std::any Visitor::visitMove(BabyCobolParser::MoveContext *ctx) {
    // Prepare the struct we will be copying
    llvm::Value *picValue = nullptr;
    llvm::Value *numValue = nullptr;
    bool isNum = false;
    std::string mask;

    std::vector<DataEntry*> identifiers = {};

    for (auto identifier: ctx->identifiers()) {
        auto *tree = any_cast<DataEntry*>(visit(identifier));
        identifiers.push_back(tree);
    }

    // Get a Field that will be the figure
    DataEntry *tree = identifiers.at(0);

    if (tree->isRecord()) {

        throw CompileException("MOVE TO record is not supported!");

    } else {

        auto *field = dynamic_cast<Field *>(tree);
        mask = field->getMask();
        auto dataType = field->getType();

        if (dataType == Field::Type::INT || dataType == Field::Type::DOUBLE) {

            // TODO: Check if this works
            numValue = builder->CreateAlloca(bcModule->getNumberStructType());
            builder->CreateMemCpy(numValue, llvm::MaybeAlign(), field->getValue(), llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));
            isNum = true;

        } else if (dataType == Field::Type::STRING) {

            picValue = builder->CreateAlloca(bcModule->getPictureStructType());
            llvm::Value *pictureToAssignBits = builder->CreateBitCast(picValue, llvm::Type::getInt8PtrTy(bcModule->getContext()));
            llvm::Value *pictureSourceBits = builder->CreateBitCast(field->getValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));
            builder->CreateMemCpy(pictureToAssignBits,llvm::MaybeAlign(), pictureSourceBits,llvm::MaybeAlign(), 24);
        }
    }

    // Fill the struct we will be copying
    if (ctx->HIGH() != nullptr) {
        throw CompileException("MOVE HIGH TO is not implemented!");
        if (isNum) {
            // TODO: assign value to numValue using mask
        } else {
            // TODO: assign value to picValue using mask
        }
    } else if (ctx->LOW() != nullptr) {
        throw CompileException("MOVE LOW TO is not implemented!");
        if (isNum) {
            // TODO: assign value to numValue using mask
        } else {
            // TODO: assign value to picValue using mask
        }
    } else if (ctx->SPACES() != nullptr) {
        throw CompileException("MOVE SPACES TO is not implemented!");
        if (isNum) {
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
            } else {
                auto *field = dynamic_cast<Field *>(currentTree);
                auto dataType = field->getType();
                if (dataType == Field::Type::INT || dataType == Field::Type::DOUBLE) {
                    if (isNum) {
                        // TODO: Check if this works
                        // take the Number to copy
                        llvm::Value *numberToAssign = builder->CreateAlloca(bcModule->getNumberStructType());
                        builder->CreateMemCpy(numberToAssign, llvm::MaybeAlign(), field->getValue(), llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));

                        // then call assign Number with Number
                        callAssignNumber(numValue, numberToAssign);
                    } else {
                        // TODO: What do we do in case the
                        throw CompileException("MOVE does not know what to do when assigning a Picture to Number...");
                    }
                } else if (dataType == Field::Type::STRING) {
                    if (!isNum) {
                        // take the Picture to copy
                        llvm::Value *pictureToAssign = builder->CreateAlloca(bcModule->getPictureStructType());

                        llvm::Value *pictureToAssignBits = builder->CreateBitCast(pictureToAssign, llvm::Type::getInt8PtrTy(bcModule->getContext()));
                        llvm::Value *pictureSourceBits = builder->CreateBitCast(field->getValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));

                        builder->CreateMemCpy(pictureToAssignBits,llvm::MaybeAlign(), pictureSourceBits,llvm::MaybeAlign(), 24);

                        // then call assign Picture with Picture
                        callAssignPicture(picValue, pictureToAssign);
                    } else {
                        // TODO: What do we do in case the figure is not a Picture?
                        throw CompileException("MOVE does not know what to do when assigning a Number to Picture...");
                    }
                }
            }
        } else if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()) != nullptr) {
            if (isNum) {
                // assign value to numValue
                llvm::Value *value = builder->CreateNumber(
                        dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()));

                callAssignNumber(numValue, value);
            } else {
                // TODO: Cast int to string and try to assign
            }
        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()) != nullptr) {
            if (isNum) {
                // assign value to numValue
                llvm::Value *value = builder->CreateNumber(
                        dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()));

                callAssignNumber(numValue, value);
            } else {
                // TODO: Cast double to string and try to assign
            }
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()) != nullptr) {
            if (isNum) {
                // TODO: We don't know what to do...
                throw CompileException("MOVE does not know what to do when parsing a String to Number...");
            } else {
                // assign value to picValue
                llvm::Value *value = builder->CreatePicture(
                        dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()));
                callAssignPicture(picValue, value);
            }
        }
    }

    // Assign to identifiers
    for (auto currentTree: identifiers) {
        if (currentTree->isRecord()) {
            throw CompileException("MOVE TO record is not supported!");
        } else {
            auto *field = dynamic_cast<Field *>(currentTree);
            auto dataType = field->getType();
            if (dataType == Field::Type::INT || dataType == Field::Type::DOUBLE) {
                if (isNum) {
                    // take the Number to copy
                    // then call assign Number with Number
                    callAssignNumber(field->getValue(), numValue);
                } else {
                    // TODO: What do we do in case the figure is not a Number?
                    throw CompileException("MOVE does not know what to do when assigning a Picture to Number...");
                }
            } else if (dataType == Field::Type::STRING) {
                if (!isNum) {
                    // then call assign Picture with Picture
                    callAssignPicture(field->getValue(), picValue);
                } else {
                    // TODO: What do we do in case the figure is not a Picture?
                    throw CompileException("MOVE does not know what to do when assigning a Number to Picture...");
                }
            }
        }
    }
    return 0;
}

std::any Visitor::visitSubtract(BabyCobolParser::SubtractContext *ctx) {
    return BabyCobolBaseVisitor::visitSubtract(ctx);
}

std::any Visitor::visitMultiply(BabyCobolParser::MultiplyContext *ctx) {
    return BabyCobolBaseVisitor::visitMultiply(ctx);
}

std::any Visitor::visitPerform(BabyCobolParser::PerformContext *ctx) {
    return BabyCobolBaseVisitor::visitPerform(ctx);
}

std::any Visitor::visitIfStatement(BabyCobolParser::IfStatementContext *ctx) {
    return BabyCobolBaseVisitor::visitIfStatement(ctx);
}

std::any Visitor::visitAccept(BabyCobolParser::AcceptContext *ctx) {
    return BabyCobolBaseVisitor::visitAccept(ctx);
}

std::any Visitor::visitAdd(BabyCobolParser::AddContext *ctx) {

    auto atomics = ctx->atomic();

    auto base = any_cast<llvm::Value*>(visit(ctx->to));

    auto operand = any_cast<llvm::ConstantInt*>(visit(ctx->atomic()[0]));

    // todo: we're assuming _base_ is an identifier. Extend this
    builder->CreateAddIntToNumber(base, operand);

    return base;
}

std::any Visitor::visitDivide(BabyCobolParser::DivideContext *ctx) {
    return BabyCobolBaseVisitor::visitDivide(ctx);
}

std::any Visitor::visitEvaluate(BabyCobolParser::EvaluateContext *ctx) {
    return BabyCobolBaseVisitor::visitEvaluate(ctx);
}

std::any Visitor::visitNextSentence(BabyCobolParser::NextSentenceContext *ctx) {
    return BabyCobolBaseVisitor::visitNextSentence(ctx);
}

std::any Visitor::visitLoop(BabyCobolParser::LoopContext *ctx) {

    auto current_scope = this->builder->GetInsertBlock();

    Function* TheFunction = builder->GetInsertBlock()->getParent();
    // create new basic block, set our current insertion point to it
    llvm::BasicBlock* loop_body = llvm::BasicBlock::Create(this->builder->getContext(), "loop_start", TheFunction, nullptr);
    // create a new block (label) for the code to continue after the loop
    llvm::BasicBlock* loop_end = llvm::BasicBlock::Create(this->builder->getContext(), "loop_end", TheFunction, nullptr);

    // visit loop conditional expression
    auto conditional = std::any_cast<llvm::Value*>(visitWhileLoopExp((BabyCobolParser::WhileLoopExpContext*)ctx->loopExpression()));

    auto int64t = llvm::Type::getInt64Ty(this->builder->getContext());

//    auto lhs = llvm::ConstantInt::get(int64t, 4, true);
//    auto rhs = llvm::ConstantInt::get(int64t, 5, true);
//    auto conditional = this->builder->CreateICmpSLT(lhs, rhs);

    // no forward conditional (fall through)
    this->builder->CreateCondBr(conditional, loop_body, loop_end);

    // set builder insertion point
    this->builder->SetInsertPoint(loop_body);

    // todo: remove this hard coded stuff
//    llvm::Value *val = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(64, 0, false));
//    builder->llvm::IRBuilderBase::CreateAdd(temp, val, "mAdd");

    // todo: visit loop body
    auto statements = ctx->statement();
    for (auto c : statements) {
        BabyCobolBaseVisitor::visitStatement(c);
    }

    // Backward conditional, or exit loop body basic block
    auto conditional_b = std::any_cast<llvm::Value*>(visitWhileLoopExp((BabyCobolParser::WhileLoopExpContext*)ctx->loopExpression()));

    this->builder->CreateCondBr(conditional_b, loop_body, loop_end); // maybe should be a "return from block"?

    this->builder->SetInsertPoint(loop_end);
    // todo: remove this hard coded stuff
//    builder->llvm::IRBuilderBase::CreateAdd(temp, val, "mAdd");

    return nullptr;
}

std::any Visitor::visitGotoStatement(BabyCobolParser::GotoStatementContext *ctx) {
    return BabyCobolBaseVisitor::visitGotoStatement(ctx);
}

std::any Visitor::visitSignal(BabyCobolParser::SignalContext *ctx) {
    return BabyCobolBaseVisitor::visitSignal(ctx);
}

std::any Visitor::visitAlter(BabyCobolParser::AlterContext *ctx) {
    return BabyCobolBaseVisitor::visitAlter(ctx);
}

std::any Visitor::visitAnyExpression(BabyCobolParser::AnyExpressionContext *ctx) {
    return BabyCobolBaseVisitor::visitAnyExpression(ctx);
}

std::any Visitor::visitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) {
    return BabyCobolBaseVisitor::visitAtomicArithmeticExp(ctx);
}

std::any Visitor::visitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) {
    return BabyCobolBaseVisitor::visitArithOpArithmeticExp(ctx);
}

std::any Visitor::visitAtomicStringExp(BabyCobolParser::AtomicStringExpContext *ctx) {
    return BabyCobolBaseVisitor::visitAtomicStringExp(ctx);
}

std::any Visitor::visitAdditionStringExp(BabyCobolParser::AdditionStringExpContext *ctx) {
    return BabyCobolBaseVisitor::visitAdditionStringExp(ctx);
}

std::any Visitor::visitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) {
    return BabyCobolBaseVisitor::visitTrueBooleanExp(ctx);
}

std::any Visitor::visitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) {
    return BabyCobolBaseVisitor::visitBoolOpBooleanExp(ctx);
}

std::any Visitor::visitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) {
    return BabyCobolBaseVisitor::visitFalseBooleanExp(ctx);
}

std::any Visitor::visitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *ctx) {
    return BabyCobolBaseVisitor::visitContractedBooleanExp(ctx);
}

std::any Visitor::visitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) {
    return BabyCobolBaseVisitor::visitNotBooleanExp(ctx);
}

std::any Visitor::visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) {

    auto int64t = llvm::Type::getInt64Ty(this->builder->getContext());

    //TODO: dyncast to field* = continue; dyncast to record* = fail;

    // visit lhs
    auto lhs = any_cast<llvm::Value*>(visitAtomicArithmeticExp((BabyCobolParser::AtomicArithmeticExpContext*)ctx->left));
    // marshall number to int

    // todo: check if this is a bstd value or an atomic.
//    if (bstd) {
//        marshall;
//    }

    // todo: replace the hard coded statements with the one above
    auto c = builder->CreateNumberToIntPtrCall(lhs);
    auto marshalled_lhs = builder->CreateLoad(int64t, c);

    // visit rhs
    auto a = visitAtomicArithmeticExp((BabyCobolParser::AtomicArithmeticExpContext*)ctx->right);
    auto rhs = any_cast<llvm::ConstantInt*>(a);

    // do comparison and return as llvm value

    // todo: make some parsing and enums happen
    // visit comparison operator
//    if (visit(ctx->comparisonOp()) == Comparison::LT) {
//
//    }

    // todo: remove this hard coded comparison
    return this->builder->CreateICmpSLT(marshalled_lhs, rhs);
}

std::any Visitor::visitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) {
    return BabyCobolBaseVisitor::visitVaryingLoopExp(ctx);
}

std::any Visitor::visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) {
    // todo: other forms of boolean expressions. Just restructure the grammar...
    return visitCompareOpBooleanExp((BabyCobolParser::CompareOpBooleanExpContext*)ctx->booleanExpression());
}

std::any Visitor::visitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) {
    return BabyCobolBaseVisitor::visitUntilLoopExp(ctx);
}

std::any Visitor::visitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *ctx) {
    return BabyCobolBaseVisitor::visitContractedBooleanPart(ctx);
}

std::any Visitor::visitComparisonOp(BabyCobolParser::ComparisonOpContext *ctx) {
    return BabyCobolBaseVisitor::visitComparisonOp(ctx);
}

std::any Visitor::visitBooleanOp(BabyCobolParser::BooleanOpContext *ctx) {
    return BabyCobolBaseVisitor::visitBooleanOp(ctx);
}

std::any Visitor::visitArithmeticOp(BabyCobolParser::ArithmeticOpContext *ctx) {
    return BabyCobolBaseVisitor::visitArithmeticOp(ctx);
}

std::any Visitor::visitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *ctx) {
    return BabyCobolBaseVisitor::visitWhenAnyExpression(ctx);
}

std::any Visitor::visitWhenOther(BabyCobolParser::WhenOtherContext *ctx) {
    return BabyCobolBaseVisitor::visitWhenOther(ctx);
}

std::any Visitor::visitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) {
    auto int64t = llvm::Type::getInt64Ty(this->bcModule->getContext());

    int val = stoi(ctx->getText());

    return llvm::ConstantInt::get(int64t, val, true);
}

std::any Visitor::visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) {
    // Get the text and remove the quotes to get the string
    string value = ctx->LITERAL()->getText().substr(1, ctx->LITERAL()->getText().size() - 2);

    values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    return value;
}

std::any Visitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {

    // todo: implement searching through records
    string name = ctx->IDENTIFIER()[0]->getText();

    auto result = bcModule->findDataEntry(name);

    if (!result) {
        throw CompileException("Encountered unknown identifier \"" + name + "\".");
    }

    return result->getValue();
}

any Visitor::visitInt(BabyCobolParser::IntContext *ctx) {
    return stoi(ctx->getText());
}

any Visitor::visitDoubleLiteral(BabyCobolParser::DoubleLiteralContext *ctx) {
    string s = ctx->getText();
    replace(s.begin(), s.end(), ',', '.');
    return stod(s);
}

void Visitor::int_ptr_re_entry_handler_generator(BCBuilder *builder, BCModule *module, llvm::Value *original,
                                                 llvm::Value *intPtr) {

    auto int_t = llvm::Type::getInt64Ty(builder->getContext());
    auto const_i64 = llvm::ConstantInt::get(int_t, 64);

    // dereference intPtr
    auto int_val = builder->CreateLoad(int_t, intPtr);

    auto assign_int_func = module->getAssignIntFunc();
    builder->CreateCall(*assign_int_func, {original, int_val});

    // free allocated memory
    builder->CreateLifetimeEnd(intPtr, const_i64);
}

void Visitor::cstr_re_entry_handler_generator(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* cstr) {

    builder->CreateCStrToPictureCall(original, cstr);

    // todo: free allocated memory

}

any Visitor::visitCallStatement(BabyCobolParser::CallStatementContext *ctx) {

    // todo: replace these tuples with enums.
    // True, True if -> BY VALUE, AS PRIMITIVE
    // False, False if -> BY REFERENCE, AS STRUCT
    vector<tuple<bool, bool>> passType(ctx->atomic().size());

    std::vector<llvm::Value *> parameters;
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
            tuple<bool, bool> currentType = passType[i];

            /** DATA DIV STUFF */
            if (dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i]) != nullptr) {

                auto field = any_cast<llvm::Value*>(visit(ctx->atomic()[i]));
                parameters.push_back(field);

                if (false) {

                    if (field->getType()->isIntegerTy()) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            // int
                            llvm::Type *int_t = llvm::Type::getInt64Ty(bcModule->getContext());
                            llvm::FunctionType *new_function_types = llvm::FunctionType::get(int_t, PointerType::get(
                                    bcModule->getNumberStructType(), 0), false);
                            auto *new_function = new llvm::FunctionCallee();
                            *(new_function) = bcModule->getOrInsertFunction("bstd_number_to_int", new_function_types);

                            llvm::ArrayRef<llvm::Value *> args = field;

                            llvm::Value *alloc = builder->CreateCall(*new_function, args);
                            parameters.push_back(alloc);

                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(int)
                            parameters.push_back(field);
                            byvalTracker.emplace_back(i, bcModule->getNumberStructType());

                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // int*

                            // convert number to integer pointer
                            auto original = field;
                            auto intPtr = builder->CreateNumberToIntPtrCall(original);

                            // use integer pointer as call parameter
                            parameters.push_back(intPtr);

                            // keep track of this value for upon re-entry
                            auto handler = &Visitor::int_ptr_re_entry_handler_generator;
                            auto copy_handler_tuple = tuple(original, intPtr, handler);
                            re_entry_cache.push_back(copy_handler_tuple);

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(int)*
                            // TODO: At re-entry we should marshall this value!
                            parameters.push_back(field);
                        }

                    } else if (field->getType()->isFloatTy() || field->getType()->isDoubleTy()) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            // double
                            llvm::Type *double_t = llvm::Type::getDoubleTy(bcModule->getContext());
                            llvm::FunctionType *new_function_types = llvm::FunctionType::get(double_t, PointerType::get(
                                    bcModule->getNumberStructType(), 0), false);
                            auto *new_function = new llvm::FunctionCallee();
                            *(new_function) = bcModule->getOrInsertFunction("bstd_number_to_double", new_function_types);

                            llvm::ArrayRef<llvm::Value *> args = field;

                            llvm::Value *alloc = builder->CreateCall(*new_function, args);
                            parameters.push_back(alloc);
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)
                            parameters.push_back(field);
                            byvalTracker.emplace_back(i, bcModule->getNumberStructType());
                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // double*
                            // TODO: Marshall the newly created pointer back into the picture

                            llvm::Type *double_t = llvm::Type::getDoubleTy(bcModule->getContext());
                            llvm::Type *double_ptr_t = llvm::Type::getDoublePtrTy(bcModule->getContext());
                            llvm::FunctionType *new_function_types = llvm::FunctionType::get(double_t, PointerType::get(
                                    bcModule->getNumberStructType(), 0), false);
                            auto *bstd_get_double = new llvm::FunctionCallee();
                            *(bstd_get_double) = bcModule->getOrInsertFunction("bstd_number_to_double", new_function_types);

                            llvm::ArrayRef<llvm::Value *> args = field;

                            llvm::Value *value = builder->CreateCall(*bstd_get_double, args);
                            llvm::Value *alloc = builder->CreateAlloca(double_ptr_t);

                            builder->CreateStore(value, alloc, false);
                            parameters.push_back(alloc);

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)*
                            // TODO: At re-entry we should marshall this value!
                            parameters.push_back(field);
                        }
                    } else if (field->getType()->isArrayTy()) { // STRING

                        if (get<0>(currentType) && get<1>(currentType)) {
//                            pushStringOnParameterList(&parameters, field->getName()); // todo: @mart, what case is this?
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)

                            parameters.push_back(field);
                            byvalTracker.emplace_back(i, bcModule->getPictureStructType());

                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // string*

                            auto original = field;
                            auto cstr = builder->CreatePictureToCStrCall(original);
                            parameters.push_back(cstr);

                            // keep track of this value for upon re-entry
                            auto handler = &Visitor::cstr_re_entry_handler_generator;
                            auto copy_handler_tuple = tuple(original, cstr, handler);
                            re_entry_cache.push_back(copy_handler_tuple);

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)*
                            parameters.push_back(field);
                        }
                    }

                } else if (false && dynamic_cast<Record *>(any_cast<DataEntry*>(visit(ctx->atomic()[i]))) != nullptr) {
                    // Identifier was a Record
                    auto record = *dynamic_cast<Record*>(any_cast<DataEntry*>(visit(ctx->atomic()[i])));
                    parameters.push_back(record.getValue());
                    // Pass the record as class
                }

                /** LITERAL STUFF */
            } else {
                // 0 == int, 1 == double, 2 == string.
                int dataType = -1;
                // atomic is a literal. So either an int, double or string
                if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]) != nullptr) {
                    BabyCobolParser::IntLiteralContext *intLiteralContext = dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]);
                    dataType = 0;
                    int value = any_cast<int>(visitIntLiteral(intLiteralContext));
                    if (get<0>(currentType) && get<1>(currentType)) {
                        pushIntOnParameterList(&parameters, value);
                    } else if (get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(int)
                        // TODO: Release LLVM value on return
                        parameters.push_back(builder->CreateNumber(intLiteralContext));
                        byvalTracker.emplace_back(i, bcModule->getNumberStructType());
                    } else if (!get<0>(currentType) && get<1>(currentType)) {
                        // int*
                        auto int64_t = llvm::IntegerType::getInt64Ty(bcModule->getContext());
                        auto v_t = llvm::Type::getInt64PtrTy(bcModule->getContext());
                        auto alloc = builder->CreateAlloca(v_t);
                        llvm::Value *v = llvm::ConstantInt::get(int64_t, value, true);
                        builder->CreateStore(v, alloc, false);
                        parameters.push_back(alloc);
                    } else if (!get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(int)*
                        // TODO: Release LLVM value on return
                        parameters.push_back(builder->CreateNumber(intLiteralContext));
                    }
                } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]) != nullptr) {
                    BabyCobolParser::DoubleLiteralContext *doubleLiteralContext = dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]);
                    dataType = 1;
                    auto value = any_cast<double>(visitDoubleLiteral(doubleLiteralContext));
                    if (get<0>(currentType) && get<1>(currentType)) {
                        pushDoubleOnParameterList(&parameters, value);
                    } else if (get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(double)
                        // TODO: Release LLVM value on return
                        parameters.push_back(builder->CreateNumber(doubleLiteralContext));
                        byvalTracker.emplace_back(i, bcModule->getNumberStructType());
                    } else if (!get<0>(currentType) && get<1>(currentType)) {
                        // double*
                        auto double_t = llvm::Type::getDoubleTy(bcModule->getContext());
                        auto v_t = llvm::Type::getDoublePtrTy(bcModule->getContext());
                        auto alloc = builder->CreateAlloca(v_t);
                        llvm::Value *v = llvm::ConstantFP::get(double_t, value);
                        builder->CreateStore(v, alloc, false);
                        parameters.push_back(alloc);
                    } else if (!get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(double)*
                        // TODO: Release LLVM value on return
                        parameters.push_back(builder->CreateNumber(doubleLiteralContext));
                    }
                } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
                    dataType = 2;
                    auto value = any_cast<string>(visit(ctx->atomic()[i]));
                    if (get<0>(currentType) && get<1>(currentType)) {
                        // string
                        pushStringOnParameterList(&parameters, value);
                    } else if (get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(string)
                    } else if (!get<0>(currentType) && get<1>(currentType)) {
                        // string*
                        pushStringOnParameterList(&parameters, value);
                    } else if (!get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(string)*
                    }

                    /** Example:
                    if (get<1>(currentType)) {
                        // AS Primitive, so use dataType (C++ primitives)
                    } else {
                        // AS Struct, so wrap in struct
                    }

                    if (get<0>(currentType)) {
                        // BY Value
                    } else {
                        // BY Reference, so add *
                    }
                     */
                } else {
                    // TODO: Throw Compile Exception! We should never be in this code block!
                    throw std::logic_error("We should never be in this code block!");
                }
            }
        }
    }

    string functionName = ctx->function_name->getText();

    llvm::Value* return_target = nullptr;
    llvm::Type* return_type = llvm::Type::getVoidTy(bcModule->getContext());

    const auto int64_type = llvm::IntegerType::getInt64Ty(bcModule->getContext());
    auto int8_type = llvm::IntegerType::getInt8Ty(bcModule->getContext());
    auto int8_ptr_type = llvm::PointerType::get(int8_type, 4);

    // todo: hacky!
    DataEntry* dataTreeEntry = nullptr;

    if (ctx->RETURNING() != nullptr) {

        return_target = any_cast<llvm::Value*>(visit(ctx->returning));

        // Find the data tree entry that the return clause is referring to
        dataTreeEntry = bcModule->findDataEntry(ctx->returning->IDENTIFIER()[0]->getText());

        if (!dataTreeEntry) {
            throw CompileException("Could not find field " + ctx->returning->IDENTIFIER()[0]->getText());
        }

        if (ctx->reference_return != nullptr) {

            // return type is a pointer to our identifier
            return_type = llvm::PointerType::get(return_type, 4); // pointers are opaque

        } else {

            if (dataTreeEntry->isRecord()) {

                // todo: implement
                throw CompileException("Returning to Record types is currently unimplemented.");

            }

            if (auto field = dynamic_cast<Field*>(dataTreeEntry)) {

                if (field->isNumber()) {

                    if (ctx->primitive_return) {
                        // return type is integer
                        return_type = int64_type;
                    } else {
                        // return type is bstd_number by value
                        return_type = bcModule->getNumberStructType();
                    }

                } else {

                    if (ctx->primitive_return) {
                        // return type is char pointer
                        return_type = int8_ptr_type;
                    } else {
                        // return type is bstd_picture by value
                        return_type = bcModule->getPictureStructType();
                    }
                }
            }
        }

    }

    std::vector<llvm::Type *> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), [] (auto v) { return v->getType(); });

    //create function call w/ no output (void)
    bool hasProgramName = ctx->program_name;

    // todo: the code for constructing the call instructions below is technical debt.
    llvm::Value* call = nullptr;

    if (!generate_structs) { // if user wants to generate structs these errors should not be thrown since the program will not be linked yet

        if (!hasProgramName) {
            // try to find the procedure in our internal shadow symbol table

            if (auto procedure = this->bcModule->findProcedure(functionName)) {
                // call the procedure

                call = builder->CreateCall(procedure, parameters);

            } else {
                // we can not find a match. Throw a compile exception.
                auto format = "No function named %s found in this baby cobol file. Specify an OF clause to search another file.";
                auto size = std::snprintf(nullptr, 0, format, functionName.c_str(), functionName.c_str());
                std::string errormessage(size + 1, '\0');
                std::sprintf(&errormessage[0], format, functionName.c_str(), functionName.c_str());
                cerr << errormessage << endl;

                // construct it anyway, and hope it is available when we link

                if (!ctx->byvalueatomicsprim.empty()) {

                    // todo: function types are not OK...
                    // todo: let's generate an int for PIC 9*, a double for PIC 9*V9*, and a char* for PIC (X|A|9)*
                    std::vector<llvm::Type *> primitive_types;
                    primitive_types.reserve(parameters.size());
                    transform(parameters.begin(), parameters.end(), back_inserter(primitive_types),
                              [&int64_type](auto param) { return int64_type; });

                    // marshall parameters...
                    std::vector<llvm::Value *> marshalled_params;
                    marshalled_params.reserve(parameters.size());
                    for (auto param : parameters) {
                        // todo: support pics... (check the data tree, etc)
                        auto v = builder->CreateNumberToIntCall(param);
                        marshalled_params.push_back(v);
                    }

                    llvm::FunctionType *new_function_types = llvm::FunctionType::get(return_type, primitive_types,
                                                                                     true);
                    auto new_function = bcModule->getOrInsertFunction(functionName, new_function_types);
                    call = builder->CreateCall(new_function, marshalled_params);

                }

            }

        } else {

            string programName = ctx->program_name->getText();
            if (extTable->find(programName) != extTable->end()) {

                vector<string> programFunctions = extTable->find(programName)->second;

                if (std::find(programFunctions.begin(), programFunctions.end(), functionName) ==
                    programFunctions.end()) {
                    auto format = "No function named %s found in program %s.";
                    auto size = std::snprintf(nullptr, 0, format, functionName.c_str(), programName.c_str());
                    std::string errormessage(size + 1, '\0');
                    std::sprintf(&errormessage[0], format, functionName.c_str(), programName.c_str());
                    throw CompileException(errormessage);
                }

                llvm::FunctionType *new_function_types = llvm::FunctionType::get(return_type, param_types, true);
                auto new_function = bcModule->getOrInsertFunction(functionName, new_function_types);

                auto function = cast<Function>(new_function.getCallee());
                for (auto currentAttributeTuple: byvalTracker) {
                    function->addParamAttr(get<0>(currentAttributeTuple),
                                           Attribute::getWithByValType(bcModule->getContext(),
                                                                       get<1>(currentAttributeTuple)));
                }

                llvm::ArrayRef<llvm::Value *> args = parameters;

                call = builder->CreateCall(new_function, args);

            } else {
                auto format = "No program named %s provided.";
                auto size = std::snprintf(nullptr, 0, format, programName.c_str());
                std::string errormessage(size + 1, '\0');
                std::sprintf(&errormessage[0], format, programName.c_str());
                throw CompileException(errormessage);
            }
        }
    }

    // if we have a returning clause
    if (call && return_target) {
        // assign result of the call to the return value.

        if (ctx->primitive_return != nullptr) {
            // we expect a basic data type, so we need to marshall

            if (dataTreeEntry->isRecord()) {
                throw CompileException("Can not use \"AS PRIMITIVE\" return clause modifier on a Record target.");
            }

            // determine which it is - number or picture
            auto field = dynamic_cast<Field*>(dataTreeEntry);

            llvm::Value* value;

            // todo: we need to make a distinction between assigning doubles/floats and assigning integers
            if (ctx->reference_return != nullptr) {

                // returning by reference, so load the primitive
                if (field->isNumber()) {

                    value = builder->CreateLoad(int64_type, call);

                } else {

                    value = builder->CreateLoad(int8_ptr_type, call);

                }

            } else {
                // returning by vale, so we do not need to load
                value = call;
            }

            if (field->isNumber()) {
                // we're assigning the return value to a number
                builder->CreateAssignIntToNumber(return_target, value);
            } else {
                builder->CreateAssignCStrToPicture(return_target, value);
            }


        } else {    // We know the return value is either bstd_number or bstd_bstd_picture, so no marshalling is needed
//        else if (return_target->getType() == bcModule->getPictureStructType() || return_target->getType() == bcModule->getNumberStructType()) {

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

            if (dataTreeEntry->isRecord()) {
                // todo: implement this
                throw CompileException("Returning to Record types is currently unimplemented.");
            } else {

                // determine which it is - number or picture
                auto field = dynamic_cast<Field*>(dataTreeEntry);

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

/**
 * ================
 * HELPER FUNCTIONS
 * ================
 */

void Visitor::pushIntOnParameterList(std::vector<llvm::Value *> *parameters, int value) {
    auto v_t = llvm::Type::getInt64Ty(bcModule->getContext());
    auto v = llvm::ConstantInt::get(v_t, value, true);
    parameters->push_back(v);
}

void Visitor::pushDoubleOnParameterList(std::vector<llvm::Value *> *parameters, double value) {
    auto v_t = llvm::Type::getDoubleTy(bcModule->getContext());
    auto v = llvm::ConstantFP::get(v_t, value);
    parameters->push_back(v);
}

void Visitor::pushStringOnParameterList(std::vector<llvm::Value *> *parameters, string value) {

    auto int8_t = llvm::Type::getInt8Ty(bcModule->getContext());
    llvm::ArrayType *arrayType = llvm::ArrayType::get(int8_t, value.size() + 1);
    auto alloc = builder->CreateAlloca(arrayType);

    std::vector<llvm::Constant *> chars(value.length());

    for (unsigned int i = 0; i < value.size(); i++) {
        chars[i] = llvm::ConstantInt::get(int8_t, value[i]);
    }

    chars.push_back(llvm::ConstantInt::get(int8_t, 0)); // null-terminator

    llvm::Value *v = llvm::ConstantArray::get(arrayType, chars);
    builder->CreateStore(v, alloc, false);
    parameters->push_back(alloc);
}

void Visitor::populatePassTypeVector(std::vector<tuple<bool, bool>> *passType,
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

void Visitor::callAssignNumber(llvm::Value *assignee, llvm::Value *value) {
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

void Visitor::callAssignPicture(llvm::Value *assignee, llvm::Value *value) {
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

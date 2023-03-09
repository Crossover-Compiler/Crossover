#include "Visitor.h"
#include "../Exceptions/NotImplemented.h"
#include <llvm/IR/Constants.h>
#include <regex>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/ValueSymbolTable.h"
#include "../Exceptions/CompileException.h"
#include "../datastructures/Field.h"
#include "../datastructures/Record.h"
#include "../../include/utils/utils.h"

using namespace std;
using namespace utils;

llvm::Type *Visitor::getType(llvm::Value *value) {
    return value->getType();
}

std::any Visitor::visitIdentification(BabyCobolParser::IdentificationContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentification(ctx);
}

std::any Visitor::visitProgram(BabyCobolParser::ProgramContext *ctx) {
    visit(ctx->identification());

    if (ctx->data() != nullptr) {
        visit(ctx->data());
    }

    visit(ctx->procedure());
    return compiledVector;
}

std::any Visitor::visitName(BabyCobolParser::NameContext *ctx) {
    return BabyCobolBaseVisitor::visitName(ctx);
}

std::any Visitor::visitValue(BabyCobolParser::ValueContext *ctx) {
    return BabyCobolBaseVisitor::visitValue(ctx);
}

std::any Visitor::visitData(BabyCobolParser::DataContext *ctx) {

    cout << "Starting DATA DIVISION" << endl;

    for (auto l: ctx->line()) {
        visitLine(l);
    }

    reset();

    std::vector<llvm::Value *> values;
    // compile the data division
    for (DataTree *tree: dataStructures) {
        llvm::Value *v = tree->codegen(builder, bcModule, false);
        tree->setLlvmValue(v);
        values.push_back(v);
    }

    cout << "Finished DATA DIVISION" << endl;
    return nullptr;
}

std::any Visitor::visitLine(BabyCobolParser::LineContext *ctx) {

    auto f = ctx->field();
    auto r = ctx->record();

    if (f != nullptr) {
        visitField(f);
    } else if (r != nullptr) {
        visitRecord(r);
    }

    return nullptr;
}

std::any Visitor::visitField(BabyCobolParser::FieldContext *ctx) {
    int level = stoi(ctx->level()->getText());
    if (topLevel == -1) {
        topLevel = level;
    }
    string identifier = ctx->IDENTIFIER()->getText();
    auto picture = ctx->representation();
    auto pictureString = any_cast<string>(visit(ctx->representation()));


    // TODO: The values of Field should not be set to pictureString in every case.
    if (level == topLevel) {
        root = new Field(identifier, level, pictureString);
        setPictureForDataTree(root, picture);
        dataStructures.push_back(root);

    } else if (level > topLevel) {
        DataTree *child = new Field(identifier, level, pictureString);
        setPictureForDataTree(child, picture);

        while (root->getLevel() >= level) {
            root = root->getPrevious();
        }

        child->setPrevious(root);
        root->addNext(child);
        root = child;

    } else if (level < topLevel) {
        string exceptionString =
                "Invalid level DATA level: " + to_string(level) + " is smaller than root level: " + to_string(topLevel);
        throw CompileException(exceptionString);
    }

    return nullptr;
}

std::any Visitor::visitRecord(BabyCobolParser::RecordContext *ctx) {

    int level = stoi(ctx->level()->getText());
    if (topLevel == -1) {
        topLevel = level;
    }
    string identifier = ctx->IDENTIFIER()->getText();


    if (level == topLevel) {
        root = new Record(identifier, level);
        dataStructures.push_back(root);

    } else if (level > topLevel) {
        DataTree *child = new Record(identifier, level);

        while (root != nullptr && root->getLevel() >= level) {
            root = root->getPrevious();
        }

        if (root == nullptr) {
            root = new Record(identifier, level);
            dataStructures.push_back(root);
        } else {
            child->setPrevious(root);
            root->addNext(child);
            root = child;
        }

    } else if (level < topLevel) {
        string exceptionString =
                "Invalid level DATA level: " + to_string(level) + " is smaller than root level: " + to_string(topLevel);
        throw CompileException(exceptionString);
    }

    return nullptr;
}

std::any Visitor::visitLevel(BabyCobolParser::LevelContext *ctx) {
    return BabyCobolBaseVisitor::visitLevel(ctx);
}

std::any Visitor::visitRepresentation(BabyCobolParser::RepresentationContext *ctx) {
    if (ctx->INT() != nullptr) {
        if (!ctx->INT()->getText().empty()) {
            return ctx->INT()->getText();
        }
    }
    return ctx->IDENTIFIER()->getText();
}

std::any Visitor::visitProcedure(BabyCobolParser::ProcedureContext *ctx) {
    return BabyCobolBaseVisitor::visitProcedure(ctx);
}

std::any Visitor::visitParagraph(BabyCobolParser::ParagraphContext *ctx) {
    return BabyCobolBaseVisitor::visitParagraph(ctx);
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

    for (int i = 0; i < ctx->atomic().size(); ++i) {
        if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(to_string(any_cast<int>(visit(ctx->atomic()[i]))), nextLine);
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(any_cast<string>(visit(ctx->atomic()[i])), nextLine);
        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            printDisplayItem(to_string(any_cast<double>(visit(ctx->atomic()[i]))), nextLine);
        } else if (dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i]) != nullptr) {
            auto dataTree = any_cast<DataTree *>(visit(ctx->atomic()[i]));
            if (dynamic_cast<Field *>(dataTree) != nullptr) {

                auto field = dynamic_cast<Field *>(dataTree);
                std::vector<llvm::Value *> parameters;
                parameters.reserve(2);
                parameters.push_back(field->getLlvmValue());
                if (nextLine) {
                    parameters.push_back(llvm::ConstantInt::getTrue(bcModule->getContext()));
                } else {
                    parameters.push_back(llvm::ConstantInt::getFalse(bcModule->getContext()));
                }

                std::vector<llvm::Type *> param_types;
                param_types.reserve(parameters.size());
                transform(parameters.begin(), parameters.end(), back_inserter(param_types), Visitor::getType);

                llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());
                llvm::FunctionType *new_function_types = llvm::FunctionType::get(void_t, param_types, true);
                FunctionCallee new_function;


                auto type = field->getPrimitiveType();
                if (type == DataType::INT || type == DataType::DOUBLE) {
                    new_function = bcModule->getOrInsertFunction("bstd_print_number", new_function_types);
                    auto function = cast<Function>(new_function.getCallee());
                    function->addParamAttr(0, Attribute::getWithByValType(bcModule->getContext(),
                                                                          bcModule->getNumberStructType()));
                } else if (type == DataType::STRING) {
                    new_function = bcModule->getOrInsertFunction("bstd_print_picture", new_function_types);
                    auto function = cast<Function>(new_function.getCallee());
                    function->addParamAttr(0, Attribute::getWithByValType(bcModule->getContext(),
                                                                          bcModule->getPictureStructType()));
                } else {
                    throw CompileException(
                            "Can't print Field '" + field->getName() + "' in display type == DataType::UNDEFINED");
                }

                builder->CreateCall(new_function, parameters);
            } else if (dynamic_cast<Record *>(dataTree) != nullptr) {
                throw NotImplemented("Visitor:visitDisplay() Printing by identifier->Record is not implemented...");
            }
        } else {
            throw NotImplemented("Visitor:visitDisplay() We should never reach this statement!!!");
        }
    }
    return 0;
}

void Visitor::printDisplayItem(const string &value, bool nextLine) {
    llvm::FunctionCallee *printf_func = bcModule->getPrintf();

    cout << value << endl;
    llvm::Value *raw = builder->CreateGlobalStringPtr(value);
    llvm::Value *strPtr;
    if (nextLine) {
        // create a printf call for every operand
        strPtr = builder->CreateGlobalStringPtr("%s\r\n");
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

    std::vector<DataTree*> identifiers = {};
    for (auto identifier: ctx->identifiers()) {
        auto *tree = any_cast<DataTree *>(visit(identifier));
        identifiers.push_back(tree);
    }

    // Get a Field that will be the figure
    DataTree *tree = identifiers.at(0);
    if (tree->isRecord()) {
        throw CompileException("MOVE TO record is not supported!");
    } else {
        auto *field = dynamic_cast<Field *>(tree);
        mask = field->picture;
        auto dataType = field->getPrimitiveType();
        if (dataType == DataType::INT || dataType == DataType::DOUBLE) {
            // TODO: Check if this works
            numValue = builder->CreateAlloca(bcModule->getNumberStructType());
            builder->CreateMemCpy(numValue,llvm::MaybeAlign(), field->getLlvmValue(),llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));
            isNum = true;
        } else if (dataType == DataType::STRING) {
            picValue = builder->CreateAlloca(bcModule->getPictureStructType());
            llvm::Value *pictureToAssignBits = builder->CreateBitCast(picValue, llvm::Type::getInt8PtrTy(bcModule->getContext()));
            llvm::Value *pictureSourceBits = builder->CreateBitCast(field->getLlvmValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));
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
            auto *currentTree = any_cast<DataTree *>(visit(identifier));
            if (currentTree->isRecord()) {
                throw CompileException("record MOVE TO is not supported!");
            } else {
                auto *field = dynamic_cast<Field *>(currentTree);
                auto dataType = field->getPrimitiveType();
                if (dataType == DataType::INT || dataType == DataType::DOUBLE) {
                    if (isNum) {
                        // TODO: Check if this works
                        // take the Number to copy
                        llvm::Value *numberToAssign = builder->CreateAlloca(bcModule->getNumberStructType());
                        builder->CreateMemCpy(numberToAssign,llvm::MaybeAlign(), field->getLlvmValue(),llvm::MaybeAlign(), ConstantExpr::getSizeOf(bcModule->getNumberStructType()));

                        // then call assign Number with Number
                        callAssignNumber(numValue, numberToAssign);
                    } else {
                        // TODO: What do we do in case the
                        throw CompileException("MOVE does not know what to do when assigning a Picture to Number...");
                    }
                } else if (dataType == DataType::STRING) {
                    if (!isNum) {
                        // take the Picture to copy
                        llvm::Value *pictureToAssign = builder->CreateAlloca(bcModule->getPictureStructType());

                        llvm::Value *pictureToAssignBits = builder->CreateBitCast(pictureToAssign, llvm::Type::getInt8PtrTy(bcModule->getContext()));
                        llvm::Value *pictureSourceBits = builder->CreateBitCast(field->getLlvmValue(), llvm::Type::getInt8PtrTy(bcModule->getContext()));

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
            auto dataType = field->getPrimitiveType();
            if (dataType == DataType::INT || dataType == DataType::DOUBLE) {
                if (isNum) {
                    // take the Number to copy
                    // then call assign Number with Number
                    callAssignNumber(field->getLlvmValue(), numValue);
                } else {
                    // TODO: What do we do in case the figure is not a Number?
                    throw CompileException("MOVE does not know what to do when assigning a Picture to Number...");
                }
            } else if (dataType == DataType::STRING) {
                if (!isNum) {
                    // then call assign Picture with Picture
                    callAssignPicture(field->getLlvmValue(), picValue);
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
    current_id = "baseValue";
    visit(ctx->atomic()[ctx->atomic().size() - 1]);
    for (int i = 0; i < ctx->atomic().size() - 1; i++) {
        current_id = "visitAdd_" + std::to_string(i);
        visit(ctx->atomic()[i]);
        values["baseValue"] = builder->llvm::IRBuilderBase::CreateAdd(values[current_id], values["baseValue"],
                                                                      "mAdd");
    }
    return BabyCobolBaseVisitor::visitAdd(ctx);
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
    return BabyCobolBaseVisitor::visitLoop(ctx);
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
    return BabyCobolBaseVisitor::visitCompareOpBooleanExp(ctx);
}

std::any Visitor::visitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) {
    return BabyCobolBaseVisitor::visitVaryingLoopExp(ctx);
}

std::any Visitor::visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) {
    return BabyCobolBaseVisitor::visitWhileLoopExp(ctx);
}

std::any Visitor::visitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) {
    return BabyCobolBaseVisitor::visitUntilLoopExp(ctx);
}

std::any Visitor::visitLoopStatement(BabyCobolParser::LoopStatementContext *ctx) {
    return BabyCobolBaseVisitor::visitLoopStatement(ctx);
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
    // TODO: Check
    return stoi(ctx->getText());
}

std::any Visitor::visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) {
    // Get the text and remove the quotes to get the string
    string value = ctx->LITERAL()->getText().substr(1, ctx->LITERAL()->getText().size() - 2);

    values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    return value;
}

std::any Visitor::visitIdentifier(BabyCobolParser::IdentifierContext *ctx) {
    // TODO: Add OF IDENTIFIERS
    string name = ctx->identifiers()[0].getText();
    int resultsAmount = 0;
    DataTree *result = nullptr;
    for (DataTree *dt: dataStructures) {
        DataTree *tempResult = dt->findDataTreeByName(name);
        if (tempResult != nullptr) {
            resultsAmount++;
            result = tempResult;
        }
    }

    if (resultsAmount > 1) {
        throw CompileException("Insufficient Qualification! Found multiple DataTree items with name: " + name);
    } else if (resultsAmount == 0) {
        throw CompileException("No Value " + ctx->identifiers()->IDENTIFIER()[0]->getText() + " found!");
    }
    return result;
}

std::any Visitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {
    string name = ctx->IDENTIFIER()[0]->getText();
    int resultsAmount = 0;
    DataTree *result = nullptr;
    for (DataTree *dt: dataStructures) {
        DataTree *tempResult = dt->findDataTreeByName(name);
        if (tempResult != nullptr) {
            resultsAmount++;
            result = tempResult;
        }
    }

    if (resultsAmount > 1) {
        throw CompileException("Insufficient Qualification! Found multiple DataTree items with name: " + name);
    } else if (resultsAmount == 0) {
        throw CompileException("No Value " + ctx->IDENTIFIER()[0]->getText() + " found!");
    }
    return result;
}

any Visitor::visitInt(BabyCobolParser::IntContext *ctx) {
    // TODO: This code might be useful somewhere:
    // string value = ctx->INT()->getText();
    // values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    // return value;

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
    callCount++;

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

    if (ctx->USING() != nullptr) {
        populatePassTypeVector(&passType, ctx);

        for (int i = 0; i < ctx->atomic().size(); i++) {
            tuple<bool, bool> currentType = passType[i];

            /** DATA DIV STUFF */
            if (dynamic_cast<BabyCobolParser::IdentifierContext *>(ctx->atomic()[i]) != nullptr) {
                // atomic is an item in the datatree. So either a field or record
                if (dynamic_cast<Field *>(any_cast<DataTree *>(visit(ctx->atomic()[i]))) != nullptr) {
                    auto field = *dynamic_cast<Field *>(any_cast<DataTree *>(visit(ctx->atomic()[i])));
                    if (field.getPrimitiveType() == DataType::UNDEFINED) {
                        throw CompileException("unable to pass field: " + field.getName());
                    } else if (field.getPrimitiveType() == DataType::INT) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            // int
                            llvm::Type *int_t = llvm::Type::getInt64Ty(bcModule->getContext());
                            llvm::FunctionType *new_function_types = llvm::FunctionType::get(int_t, PointerType::get(
                                    bcModule->getNumberStructType(), 0), false);
                            auto *new_function = new llvm::FunctionCallee();
                            *(new_function) = bcModule->getOrInsertFunction("bstd_number_to_int", new_function_types);

                            llvm::ArrayRef<llvm::Value *> args = field.getLlvmValue();

                            llvm::Value *alloc = builder->CreateCall(*new_function, args);
                            parameters.push_back(alloc);

                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(int)
                            parameters.push_back(field.getLlvmValue());
                            byvalTracker.emplace_back(i, bcModule->getNumberStructType());

                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // int*

                            // convert number to integer pointer
                            auto original = field.getLlvmValue();
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
                            parameters.push_back(field.getLlvmValue());
                        }

                    } else if (field.getPrimitiveType() == DataType::DOUBLE) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            // double
                            llvm::Type *double_t = llvm::Type::getDoubleTy(bcModule->getContext());
                            llvm::FunctionType *new_function_types = llvm::FunctionType::get(double_t, PointerType::get(
                                    bcModule->getNumberStructType(), 0), false);
                            auto *new_function = new llvm::FunctionCallee();
                            *(new_function) = bcModule->getOrInsertFunction("bstd_number_to_double", new_function_types);

                            llvm::ArrayRef<llvm::Value *> args = field.getLlvmValue();

                            llvm::Value *alloc = builder->CreateCall(*new_function, args);
                            parameters.push_back(alloc);
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)
                            parameters.push_back(field.getLlvmValue());
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

                            llvm::ArrayRef<llvm::Value *> args = field.getLlvmValue();

                            llvm::Value *value = builder->CreateCall(*bstd_get_double, args);
                            llvm::Value *alloc = builder->CreateAlloca(double_ptr_t);

                            builder->CreateStore(value, alloc, false);
                            parameters.push_back(alloc);

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)*
                            // TODO: At re-entry we should marshall this value!
                            parameters.push_back(field.getLlvmValue());
                        }
                    } else if (field.getPrimitiveType() == DataType::STRING) {

                        if (get<0>(currentType) && get<1>(currentType)) {
                            pushStringOnParameterList(&parameters, field.getValue());
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)

                            parameters.push_back(field.getLlvmValue());
                            byvalTracker.emplace_back(i, bcModule->getPictureStructType());

                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // string*

                            auto original = field.getLlvmValue();
                            auto cstr = builder->CreatePictureToCStrCall(original);
                            parameters.push_back(cstr);

                            // keep track of this value for upon re-entry
                            auto handler = &Visitor::cstr_re_entry_handler_generator;
                            auto copy_handler_tuple = tuple(original, cstr, handler);
                            re_entry_cache.push_back(copy_handler_tuple);

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)*
                            parameters.push_back(field.getLlvmValue());
                        }
                    }

                } else if (dynamic_cast<Record *>(any_cast<DataTree *>(visit(ctx->atomic()[i]))) != nullptr) {
                    // Identifier was a Record
                    auto record = *any_cast<Record *>(visit(ctx->atomic()[i]));
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
//    cout << functionName << endl;

    if (ctx->RETURNING() != nullptr) {
        // TODO: return type is a value. So get the value
    } else if (ctx->RETURNINGBYREFERENCE() != nullptr) {
        // TODO: return type is a pointer. So get the value from the pointer
    }

    std::vector<llvm::Type *> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), Visitor::getType);

    //create function call w/ no output (void)
    string programName = ctx->program_name->getText();

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType *new_function_types = llvm::FunctionType::get(void_t, param_types, true);
    auto *new_function = new llvm::FunctionCallee();

    vector<string> programFunctions;
    if (extTable->find(programName) != extTable->end()) {
        programFunctions = extTable->find(programName)->second;
    } else {
        auto format = "No program named %s provided.";
        auto size = std::snprintf(nullptr, 0, format, programName.c_str());
        std::string errormessage(size + 1, '\0');
        std::sprintf(&errormessage[0], format, programName.c_str());
        throw CompileException(errormessage);
    }

    if (std::find(programFunctions.begin(), programFunctions.end(), functionName) == programFunctions.end()) {
        auto format = "No function named %s found in program %s.";
        auto size = std::snprintf(nullptr, 0, format, functionName.c_str(), programName.c_str());
        std::string errormessage(size + 1, '\0');
        std::sprintf(&errormessage[0], format, functionName.c_str(), programName.c_str());
        throw CompileException(errormessage);
    }

    *(new_function) = bcModule->getOrInsertFunction(functionName, new_function_types);
    Function *function = cast<Function>(new_function->getCallee());
    for (auto currentAttributeTuple: byvalTracker) {
        function->addParamAttr(get<0>(currentAttributeTuple),
                               Attribute::getWithByValType(bcModule->getContext(), get<1>(currentAttributeTuple)));
    }

    llvm::ArrayRef<llvm::Value *> args = parameters;

    builder->CreateCall(*new_function, args);

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


void Visitor::reset() {
    for (DataTree *dataStructure: dataStructures) {
        while (dataStructure->getPrevious() != nullptr) {
            dataStructure = dataStructure->getPrevious();
        }
    }
}

void Visitor::setPictureForDataTree(DataTree *dataTree, BabyCobolParser::RepresentationContext *picture) {
    auto *field = dynamic_cast<Field *>(dataTree);
    if (picture != nullptr) {
        string pictureString;
        if (picture->INT() != nullptr) {
            // This is when there are only 9s
            pictureString = picture->INT()->getText();
        } else if (picture->IDENTIFIER() != nullptr) {
            pictureString = picture->IDENTIFIER()->getText();
        } else {
            throw CompileException("No picture found in INT or IDENTIFIER");
        }

        std::regex r("S?Z*(A|X|V|9)*S?");
        bool match = std::regex_match(pictureString, r);
        std::regex r_int("S?Z*9*S?");
        bool match_int = std::regex_match(pictureString, r_int);
        std::regex r_double("S?Z*9*V9*S?");
        bool match_double = std::regex_match(pictureString, r_double);


        if (match) {
            cout << "Correct Picture: " << pictureString << endl;
            field->setPicture(pictureString);
            field->setCardinality(pictureString.size());

            if (match_int) {
                field->setPrimitiveType(DataType::INT);
                field->isSigned = pictureString.find('S') != std::string::npos;
                field->isPositive = true;
                field->scale = 0;
            } else if (match_double) {
                field->setPrimitiveType(DataType::DOUBLE);
                field->isSigned = pictureString.find('S') != std::string::npos;
                field->isPositive = true;
                field->scale = utils::split(pictureString, "V").at(1).length();
            } else {
                field->setPrimitiveType(DataType::STRING);
            }

            // TODO: Set default value if we want to
        } else {
            throw CompileException("Invalid PICTURE: " + pictureString);
        }
    }
}


vector<DataTree *> Visitor::getNodes(string path) {
    reset();
    vector<DataTree *> result;
    for (auto d: dataStructures) {
        vector<DataTree *> tempVec;
        tempVec = d->getNodesFromPath(path, tempVec);
        for (auto item: tempVec) {
            result.push_back(item);
        }
    }
    return result;
}

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
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), Visitor::getType);

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
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), Visitor::getType);

    llvm::Type *void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType *bstd_assign_number_types = llvm::FunctionType::get(void_t, param_types, true);
    FunctionCallee bstd_assign_number = bcModule->getOrInsertFunction("bstd_assign_picture", bstd_assign_number_types);
    builder->CreateCall(bstd_assign_number, parameters);
}

//
// Created by bruh on 21-9-22.
//

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
#include "../Exceptions/CompileException.h"
#include "../datastructures/Field.h"
#include "../datastructures/Record.h"

using namespace std;

llvm::Type* Visitor::getType(llvm::Value* value) {
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

    for (auto l : ctx->line()) {
        visitLine(l);
    }

    reset();

    std::vector<llvm::Value*> values;
    // compile the data division
    for (DataTree* tree: dataStructures) {
        // TODO: stoi is invalid here. Add switch to find out which type should be codegen'ed
        llvm::Value* v = tree->codegen(builder, bcModule, nullptr);
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

    if (level == topLevel) {
        root = new Field(identifier, level, identifier);
        setPictureForDataTree(root, picture);
        dataStructures.push_back(root);

    } else if (level > topLevel) {
        DataTree* child = new Field(identifier, level, identifier);
        setPictureForDataTree(child, picture);

        while (root->getLevel() >= level) {
            root = root->getPrevious();
        }

        child->setPrevious(root);
        root->addNext(child);
        root = child;

    } else if(level < topLevel) {
        string exceptionString = "Invalid level DATA level: " + to_string(level) + " is smaller than root level: " + to_string(topLevel);
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
        DataTree* child = new Record(identifier, level);

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

    } else if(level < topLevel) {
        string exceptionString = "Invalid level DATA level: " + to_string(level) + " is smaller than root level: " + to_string(topLevel);
        throw CompileException(exceptionString);
    }

    return nullptr;
}

std::any Visitor::visitLevel(BabyCobolParser::LevelContext *ctx) {
    return BabyCobolBaseVisitor::visitLevel(ctx);
}

std::any Visitor::visitRepresentation(BabyCobolParser::RepresentationContext *ctx) {
    return BabyCobolBaseVisitor::visitRepresentation(ctx);
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
    string value;

    for (int i = 0; i < ctx->atomic().size(); ++i) {
        if (dynamic_cast<BabyCobolParser::IntLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            value += to_string(any_cast<int>(visit(ctx->atomic()[i])));;
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            value += any_cast<string>(visit(ctx->atomic()[i]));
        } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            value += to_string(any_cast<double>(visit(ctx->atomic()[i])));
        } else {
            throw NotImplemented("Visitor:visitDisplay() Printing by identifier is not implemented");
        }
        i++;
    }

    std::vector<llvm::Value*> outputValues;
    outputValues.reserve(value.size());

    llvm::FunctionCallee* printf_func = bcModule->getPrintf();

    bool nextLine = ctx->ADVANCING() == nullptr;
    llvm::Value* raw = builder->CreateGlobalStringPtr(value);
    llvm::Value* strPtr;
    if (nextLine) {
        // create a printf call for every operand
        strPtr = builder->CreateGlobalStringPtr("%s\r\n");
    } else {
        strPtr = builder->CreateGlobalStringPtr("%s");
    }

    llvm::ArrayRef<llvm::Value*> aref = { strPtr, raw };
    builder->CreateCall(*printf_func, aref);

    return 0;
}

std::any Visitor::visitStop(BabyCobolParser::StopContext *ctx) {
    return BabyCobolBaseVisitor::visitStop(ctx);
}

std::any Visitor::visitMove(BabyCobolParser::MoveContext *ctx) {
    return BabyCobolBaseVisitor::visitMove(ctx);
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
        values["baseValue"] = builder->llvm::IRBuilderBase::CreateAdd(values[current_id], values["baseValue"], "mAdd");
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
    // TODO once data division is ready
    return BabyCobolBaseVisitor::visitIdentifier(ctx);
}

std::any Visitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentifiers(ctx);
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

any Visitor::visitCallStatement(BabyCobolParser::CallStatementContext *ctx) {
    // True, True if -> BY VALUE, AS PRIMITIVE
    // False, False if -> BY REFERENCE, AS STRUCT
    vector<tuple<bool,bool>> passType(ctx->atomic().size());
    std::vector<llvm::Value*> parameters;
    parameters.reserve(ctx->atomic().size());
    map<BabyCobolParser::AtomicContext*, const char*> stringsToMutate;
    map<BabyCobolParser::AtomicContext*, double*> doublesToMutate;
    map<BabyCobolParser::AtomicContext*, int*> intsToMutate;

    if (ctx->USING() != nullptr) {
        populatePassTypeVector(&passType, ctx);

        for (int i = 0; i < ctx->atomic().size(); i++) {
            tuple<bool, bool> currentType = passType[i];

            /** DATA DIV STUFF */
            if (dynamic_cast<BabyCobolParser::IdentifierContext*>(ctx->atomic()[i]) != nullptr) {
                // atomic is an item in the datatree. So either a field or record
                if (any_cast<Field*>(visit(ctx->atomic()[i])) != nullptr ) {
                    auto field = *any_cast<Field*>(visit(ctx->atomic()[i]));
                    if (field.getPrimitiveType() == DataType::UNDEFINED) {
                        throw CompileException("unable to pass field: " + field.getName());
                    } else if (field.getPrimitiveType() == DataType::INT) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            pushIntOnParameterList(&parameters, stoi(field.getValue()));
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(int)

                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // int*
                            // TODO: Pass memory address of the field itself

                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(int)*
                        }

                    } else if (field.getPrimitiveType() == DataType::DOUBLE) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            pushDoubleOnParameterList(&parameters, stod(field.getValue()));
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)
                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // double*
                            // TODO: Pass memory address of the field itself
                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(double)*
                        }
                    } else if (field.getPrimitiveType() == DataType::STRING) {
                        if (get<0>(currentType) && get<1>(currentType)) {
                            pushStringOnParameterList(&parameters, field.getValue());
                        } else if (get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)
                        } else if (!get<0>(currentType) && get<1>(currentType)) {
                            // string*
                             stringsToMutate[ctx->atomic()[i]] = field.getValue().c_str();

                            //TODO: create a temporary char* of the string, and after the call statement make string = char*
                        } else if (!get<0>(currentType) && !get<1>(currentType)) {
                            // wrap(string)*
                        }
                    }

                } else if (any_cast<Record*>(visit(ctx->atomic()[i])) != nullptr) {
                    // Identifier was a Record
                    auto record = *any_cast<Record*>(visit(ctx->atomic()[i]));
                    // Pass the record as class
                }

            /** LITERAL STUFF */
            } else {
                // 0 == int, 1 == double, 2 == string.
                int dataType = -1;
                // atomic is a literal. So either an int, double or string
                if (dynamic_cast<BabyCobolParser::IntLiteralContext*>(ctx->atomic()[i]) != nullptr) {
                    dataType = 0;
                    int value = any_cast<int>(visit(ctx->atomic()[i]));
                    if (get<0>(currentType) && get<1>(currentType)) {
                        pushIntOnParameterList(&parameters, value);
                    } else if (get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(int)

                    } else if (!get<0>(currentType) && get<1>(currentType)) {
                        // int*
                        auto int64_t = llvm::IntegerType::getInt64Ty(bcModule->getContext());
                        auto v_t = llvm::Type::getInt64PtrTy(bcModule->getContext());
                        auto alloc = builder->CreateAlloca(v_t);
                        llvm::Value* v = llvm::ConstantInt::get(int64_t, value, true);
                        builder->CreateStore(v, alloc, false);
                        parameters.push_back(alloc);
                    } else if (!get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(int)*
                    }
                } else if (dynamic_cast<BabyCobolParser::DoubleLiteralContext*>(ctx->atomic()[i]) != nullptr) {
                    dataType = 1;
                    auto value = any_cast<double>(visit(ctx->atomic()[i]));
                    if (get<0>(currentType) && get<1>(currentType)) {
                        pushDoubleOnParameterList(&parameters, value);
                    } else if (get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(double)
                    } else if (!get<0>(currentType) && get<1>(currentType)) {
                        // double*
                        auto double_t = llvm::Type::getDoubleTy(bcModule->getContext());
                        auto v_t = llvm::Type::getDoublePtrTy(bcModule->getContext());
                        auto alloc = builder->CreateAlloca(v_t);
                        llvm::Value* v = llvm::ConstantFP::get(double_t, value);
                        builder->CreateStore(v, alloc, false);
                        parameters.push_back(alloc);
                    } else if (!get<0>(currentType) && !get<1>(currentType)) {
                        // wrap(double)*
                    }
                } else if (dynamic_cast<BabyCobolParser::StringLiteralContext*>(ctx->atomic()[i]) != nullptr) {
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
    cout << functionName << endl;

    if (ctx->RETURNING() != nullptr) {
        // TODO: return type is a value. So get the value
    } else if (ctx->RETURNINGBYREFERENCE() != nullptr) {
        // TODO: return type is a pointer. So get the value from the pointer
    }

    std::vector<llvm::Type*> param_types;
    param_types.reserve(parameters.size());
    transform(parameters.begin(), parameters.end(), back_inserter(param_types), Visitor::getType);

    //create function call w/ no input
    llvm::Type* void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType* new_function_types = llvm::FunctionType::get(void_t, param_types, true);
    auto* new_function = new llvm::FunctionCallee();
    *(new_function) = bcModule->getOrInsertFunction(functionName, new_function_types);

    llvm::ArrayRef<llvm::Value*> args = parameters;

    builder->CreateCall(*new_function, args);

    return nullptr;
}

/**
 * ================
 * HELPER FUNCTIONS
 * ================
 */


void Visitor::reset() {
    for (DataTree* dataStructure : dataStructures) {
        while (dataStructure->getPrevious() != nullptr) {
            dataStructure = dataStructure->getPrevious();
        }
    }
}

void Visitor::setPictureForDataTree(DataTree* dataTree, BabyCobolParser::RepresentationContext* picture) {
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

        std::regex r ("S?Z*(A|X|V|9)*S?");
        bool match = std::regex_match(pictureString, r);
        std::regex r_int ("S?Z*9*S?");
        bool match_int = std::regex_match(pictureString, r_int);
        std::regex r_double ("S?Z*9*V9*S?");
        bool match_double = std::regex_match(pictureString, r_double);



        if (match) {
            cout << "Correct Picture: " << pictureString << endl;
            // TODO: Set picture
            dataTree->setPicture(pictureString);
            dataTree->setCardinality(pictureString.size());

            if (match_int) {
                dataTree->setPrimitiveType(DataType::INT);
            } else if (match_double) {
                dataTree->setPrimitiveType(DataType::DOUBLE);
            } else {
                dataTree->setPrimitiveType(DataType::STRING);
            }

            // TODO: Set default value if we want to
        } else {
            throw CompileException("Invalid PICTURE: " + pictureString);
        }
    }
}


vector<DataTree*> Visitor::getNodes(string path) {
    reset();
    vector<DataTree*> result;
    for (auto d : dataStructures) {
        vector<DataTree*> tempVec;
        tempVec = d->getNodesFromPath(path, tempVec);
        for (auto item: tempVec) {
            result.push_back(item);
        }
    }
    return result;
}

// JAVA-like split function for strings
vector<string> Visitor::split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
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
    auto v_t = llvm::Type::getInt8Ty(bcModule->getContext());
    ArrayType* arrayType = ArrayType::get(v_t, value.size() + 1);
    auto alloc = builder->CreateAlloca(arrayType);

    auto charType = llvm::IntegerType::get(bcModule->getContext(), 8);
    std::vector<llvm::Constant *> chars(value.length());
    for(unsigned int i = 0; i < value.size(); i++) {
        chars[i] = llvm::ConstantInt::get(charType, value[i]);
    }
    chars.push_back(llvm::ConstantInt::get(charType, 0));

    llvm::Value* v = llvm::ConstantArray::get(arrayType, chars);
    builder->CreateStore(v, alloc, false);
    parameters->push_back(alloc);
}

void Visitor::populatePassTypeVector(std::vector<tuple<bool, bool>> *passType, BabyCobolParser::CallStatementContext *ctx) {
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
            if (ctx->byvalueatomicsstruct[referenceStructCursor] == ctx->atomic()[i]) {
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

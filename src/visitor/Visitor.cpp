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
            value += any_cast<string>(visit(ctx->atomic()[i]));
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext *>(ctx->atomic()[i]) != nullptr) {
            value += any_cast<string>(visit(ctx->atomic()[i]));
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
    string value = ctx->INT()->getText();
    values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    return value;
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
        // TODO: Check for valid regex
        string pictureString;
        if (picture->INT() != nullptr) {
            pictureString = picture->INT()->getText();
        } else if (picture->IDENTIFIER() != nullptr) {
            pictureString = picture->IDENTIFIER()->getText();
        } else {
            throw CompileException("No picture found in INT or INDENTIFIER");
        }

        std::regex r ("S?Z*(A|X|V|9)*S?");
        bool match = std::regex_match(pictureString, r);



        if (match) {
            cout << "Correct Picture: " << pictureString << endl;
            // TODO: Set picture
            dataTree->setPicture(pictureString);
            dataTree->setCardinality(pictureString.size());
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

any Visitor::visitCallStatement(BabyCobolParser::CallStatementContext *ctx) {
    // Literals in the using clause
    vector<string> strings;
    vector<int> ints;
    for (BabyCobolParser::AtomicContext* atomic: ctx->byvalueatomics) {
        if (dynamic_cast<BabyCobolParser::IntLiteralContext*>(atomic) != nullptr) {
            cout << "IntLiteralContext" << endl;
            ints.push_back(any_cast<int>(visitIntLiteral(dynamic_cast<BabyCobolParser::IntLiteralContext *>(atomic))));
        } else if (dynamic_cast<BabyCobolParser::StringLiteralContext*>(atomic) != nullptr) {
            cout << "StringLiteralContext" << endl;
            strings.push_back(any_cast<string>(visitStringLiteral(dynamic_cast<BabyCobolParser::StringLiteralContext *>(atomic))));
        } else if (dynamic_cast<BabyCobolParser::IdentifierContext *>(atomic) != nullptr) {
            cout << "IdentifierContext" << endl;
            visitIdentifier(dynamic_cast<BabyCobolParser::IdentifierContext *>(atomic));
        }
    }

    for (BabyCobolParser::AtomicContext)


    cout << strings.size() << endl;
    cout << ints.size() << endl;

    string functionName = ctx->FUNCTIONNAME()->getText().substr(1, ctx->FUNCTIONNAME()->getText().size() - 2);

    cout << functionName << endl;

    //create function call w/ no input
    llvm::Type* void_t = llvm::Type::getVoidTy(bcModule->getContext());
    llvm::FunctionType* new_function_types = llvm::FunctionType::get(void_t, true);
    auto* new_function = new llvm::FunctionCallee();
    *(new_function) = bcModule->getOrInsertFunction(functionName, new_function_types);

    builder->CreateCall(*new_function);

    return BabyCobolBaseVisitor::visitCallStatement(ctx);
}


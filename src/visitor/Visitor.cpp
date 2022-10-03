//
// Created by bruh on 21-9-22.
//

#include "Visitor.h"
#include "../Exceptions/NotImplemented.h"
#include <llvm/IR/Constants.h>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Verifier.h"

using namespace std;


std::any Visitor::visitIdentification(BabyCobolParser::IdentificationContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentification(ctx);
}

std::any Visitor::visitProgram(BabyCobolParser::ProgramContext *ctx) {
    BabyCobolBaseVisitor::visitProgram(ctx);
    return compiledVector;
}

std::any Visitor::visitName(BabyCobolParser::NameContext *ctx) {
    return BabyCobolBaseVisitor::visitName(ctx);
}

std::any Visitor::visitValue(BabyCobolParser::ValueContext *ctx) {
    return BabyCobolBaseVisitor::visitValue(ctx);
}

std::any Visitor::visitData(BabyCobolParser::DataContext *ctx) {
    return BabyCobolBaseVisitor::visitData(ctx);
}

std::any Visitor::visitVariable(BabyCobolParser::VariableContext *ctx) {
    return BabyCobolBaseVisitor::visitVariable(ctx);
}

std::any Visitor::visitLevel(BabyCobolParser::LevelContext *ctx) {
    return BabyCobolBaseVisitor::visitLevel(ctx);
}

std::any Visitor::visitRepresentation(BabyCobolParser::RepresentationContext *ctx) {
    return BabyCobolBaseVisitor::visitRepresentation(ctx);
}

std::any Visitor::visitProcedure(BabyCobolParser::ProcedureContext *ctx) {

    any return_val = BabyCobolBaseVisitor::visitProcedure(ctx);
    builder->CreateRetVoid(); // TODO: Change based on actual return type
    return return_val;
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

    // trying to invoke external function, TODO: remove later
    // https://stackoverflow.com/questions/71655233/linking-llvm-getorinsertfunction-to-a-external-c-function-in-a-llvm-pass

    // prog says
    llvm::FunctionCallee* prog_says_func = bcModule->getProgSays();
    llvm::ArrayRef<llvm::Value*> aref2 = { raw };
    builder->CreateCall(*prog_says_func, aref2);

    //fib
    llvm::FunctionCallee* fib_func = bcModule->getFib();
    builder->CreateCall(*fib_func);


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
        values["baseValue"] = builder->CreateAdd(values[current_id], values["baseValue"], "mAdd");
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
    return BabyCobolBaseVisitor::visitIntLiteral(ctx);
}

std::any Visitor::visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) {
    // Get the text and remove the quotes to get the string
    string value = ctx->LITERAL()->getText().substr(1, ctx->LITERAL()->getText().size() - 2);

    values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    return value;
}

std::any Visitor::visitIdentifier(BabyCobolParser::IdentifierContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentifier(ctx);
}

std::any Visitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentifiers(ctx);
}

any Visitor::visitInt(BabyCobolParser::IntContext *ctx) {
    string value;
    if (ctx->NINE() != nullptr) {
        value = ctx->NINE()->getText();
    } else {
        value = ctx->INT()->getText();
    }

    values[current_id] = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(builder->getContext()), value, 10);
    return value;
}

//
// Created by bruh on 21-9-22.
//

#ifndef CROSSOVER_VISITOR_H
#define CROSSOVER_VISITOR_H


//
// Created by bruh on 21-9-22.
//

#include "../../include/antlr/BabyCobolBaseVisitor.h"

class Visitor : public BabyCobolBaseVisitor {
public:
    std::any visitIdentification(BabyCobolParser::IdentificationContext *ctx) override;

    std::any visitProgram(BabyCobolParser::ProgramContext *ctx) override;

    std::any visitName(BabyCobolParser::NameContext *ctx) override;

    std::any visitValue(BabyCobolParser::ValueContext *ctx) override;

    std::any visitData(BabyCobolParser::DataContext *ctx) override;

    std::any visitVariable(BabyCobolParser::VariableContext *ctx) override;

    std::any visitLevel(BabyCobolParser::LevelContext *ctx) override;

    std::any visitRepresentation(BabyCobolParser::RepresentationContext *ctx) override;

    std::any visitProcedure(BabyCobolParser::ProcedureContext *ctx) override;

    std::any visitParagraph(BabyCobolParser::ParagraphContext *ctx) override;

    std::any visitSentence(BabyCobolParser::SentenceContext *ctx) override;

    std::any visitStatement(BabyCobolParser::StatementContext *ctx) override;

    std::any visitLabel(BabyCobolParser::LabelContext *ctx) override;

    std::any visitDisplay(BabyCobolParser::DisplayContext *ctx) override;

    std::any visitStop(BabyCobolParser::StopContext *ctx) override;

    std::any visitMove(BabyCobolParser::MoveContext *ctx) override;

    std::any visitSubtract(BabyCobolParser::SubtractContext *ctx) override;

    std::any visitMultiply(BabyCobolParser::MultiplyContext *ctx) override;

    std::any visitPerform(BabyCobolParser::PerformContext *ctx) override;

    std::any visitIfStatement(BabyCobolParser::IfStatementContext *ctx) override;

    std::any visitAccept(BabyCobolParser::AcceptContext *ctx) override;

    std::any visitAdd(BabyCobolParser::AddContext *ctx) override;

    std::any visitDivide(BabyCobolParser::DivideContext *ctx) override;

    std::any visitEvaluate(BabyCobolParser::EvaluateContext *ctx) override;

    std::any visitNextSentence(BabyCobolParser::NextSentenceContext *ctx) override;

    std::any visitLoop(BabyCobolParser::LoopContext *ctx) override;

    std::any visitGotoStatement(BabyCobolParser::GotoStatementContext *ctx) override;

    std::any visitSignal(BabyCobolParser::SignalContext *ctx) override;

    std::any visitAlter(BabyCobolParser::AlterContext *ctx) override;

    std::any visitAnyExpression(BabyCobolParser::AnyExpressionContext *ctx) override;

    std::any visitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) override;

    std::any visitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) override;

    std::any visitAtomicStringExp(BabyCobolParser::AtomicStringExpContext *ctx) override;

    std::any visitAdditionStringExp(BabyCobolParser::AdditionStringExpContext *ctx) override;

    std::any visitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) override;

    std::any visitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) override;

    std::any visitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) override;

    std::any visitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *ctx) override;

    std::any visitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) override;

    std::any visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) override;

    std::any visitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) override;

    std::any visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) override;

    std::any visitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) override;

    std::any visitLoopStatement(BabyCobolParser::LoopStatementContext *ctx) override;

    std::any visitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *ctx) override;

    std::any visitComparisonOp(BabyCobolParser::ComparisonOpContext *ctx) override;

    std::any visitBooleanOp(BabyCobolParser::BooleanOpContext *ctx) override;

    std::any visitArithmeticOp(BabyCobolParser::ArithmeticOpContext *ctx) override;

    std::any visitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *ctx) override;

    std::any visitWhenOther(BabyCobolParser::WhenOtherContext *ctx) override;

    std::any visitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) override;

    std::any visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) override;

    std::any visitIdentifier(BabyCobolParser::IdentifierContext *ctx) override;

    std::any visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) override;

};

std::any Visitor::visitIdentification(BabyCobolParser::IdentificationContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentification(ctx);
}

std::any Visitor::visitProgram(BabyCobolParser::ProgramContext *ctx) {
    return BabyCobolBaseVisitor::visitProgram(ctx);
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
    return BabyCobolBaseVisitor::visitDisplay(ctx);
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
    return BabyCobolBaseVisitor::visitStringLiteral(ctx);
}

std::any Visitor::visitIdentifier(BabyCobolParser::IdentifierContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentifier(ctx);
}

std::any Visitor::visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) {
    return BabyCobolBaseVisitor::visitIdentifiers(ctx);
}

#endif //CROSSOVER_VISITOR_H

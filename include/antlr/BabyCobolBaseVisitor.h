
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyCobolVisitor.h"


/**
 * This class provides an empty implementation of BabyCobolVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BabyCobolBaseVisitor : public BabyCobolVisitor {
public:

  virtual std::any visitProgram(BabyCobolParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentification(BabyCobolParser::IdentificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(BabyCobolParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(BabyCobolParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData(BabyCobolParser::DataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(BabyCobolParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecord(BabyCobolParser::RecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField(BabyCobolParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel(BabyCobolParser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepresentation(BabyCobolParser::RepresentationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure(BabyCobolParser::ProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParagraph(BabyCobolParser::ParagraphContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSentence(BabyCobolParser::SentenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(BabyCobolParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(BabyCobolParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDisplay(BabyCobolParser::DisplayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStop(BabyCobolParser::StopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMove(BabyCobolParser::MoveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtract(BabyCobolParser::SubtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiply(BabyCobolParser::MultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPerform(BabyCobolParser::PerformContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(BabyCobolParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccept(BabyCobolParser::AcceptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(BabyCobolParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivide(BabyCobolParser::DivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvaluate(BabyCobolParser::EvaluateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNextSentence(BabyCobolParser::NextSentenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(BabyCobolParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStatement(BabyCobolParser::GotoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignal(BabyCobolParser::SignalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter(BabyCobolParser::AlterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStatement(BabyCobolParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnyExpression(BabyCobolParser::AnyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomicStringExp(BabyCobolParser::AtomicStringExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionStringExp(BabyCobolParser::AdditionStringExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopStatement(BabyCobolParser::LoopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOp(BabyCobolParser::ComparisonOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanOp(BabyCobolParser::BooleanOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticOp(BabyCobolParser::ArithmeticOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenOther(BabyCobolParser::WhenOtherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(BabyCobolParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(BabyCobolParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};


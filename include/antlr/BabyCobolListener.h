
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyCobolParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BabyCobolParser.
 */
class  BabyCobolListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(BabyCobolParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(BabyCobolParser::ProgramContext *ctx) = 0;

  virtual void enterIdentification(BabyCobolParser::IdentificationContext *ctx) = 0;
  virtual void exitIdentification(BabyCobolParser::IdentificationContext *ctx) = 0;

  virtual void enterName(BabyCobolParser::NameContext *ctx) = 0;
  virtual void exitName(BabyCobolParser::NameContext *ctx) = 0;

  virtual void enterValue(BabyCobolParser::ValueContext *ctx) = 0;
  virtual void exitValue(BabyCobolParser::ValueContext *ctx) = 0;

  virtual void enterData(BabyCobolParser::DataContext *ctx) = 0;
  virtual void exitData(BabyCobolParser::DataContext *ctx) = 0;

  virtual void enterVariable(BabyCobolParser::VariableContext *ctx) = 0;
  virtual void exitVariable(BabyCobolParser::VariableContext *ctx) = 0;

  virtual void enterLevel(BabyCobolParser::LevelContext *ctx) = 0;
  virtual void exitLevel(BabyCobolParser::LevelContext *ctx) = 0;

  virtual void enterRepresentation(BabyCobolParser::RepresentationContext *ctx) = 0;
  virtual void exitRepresentation(BabyCobolParser::RepresentationContext *ctx) = 0;

  virtual void enterProcedure(BabyCobolParser::ProcedureContext *ctx) = 0;
  virtual void exitProcedure(BabyCobolParser::ProcedureContext *ctx) = 0;

  virtual void enterParagraph(BabyCobolParser::ParagraphContext *ctx) = 0;
  virtual void exitParagraph(BabyCobolParser::ParagraphContext *ctx) = 0;

  virtual void enterSentence(BabyCobolParser::SentenceContext *ctx) = 0;
  virtual void exitSentence(BabyCobolParser::SentenceContext *ctx) = 0;

  virtual void enterStatement(BabyCobolParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BabyCobolParser::StatementContext *ctx) = 0;

  virtual void enterLabel(BabyCobolParser::LabelContext *ctx) = 0;
  virtual void exitLabel(BabyCobolParser::LabelContext *ctx) = 0;

  virtual void enterDisplay(BabyCobolParser::DisplayContext *ctx) = 0;
  virtual void exitDisplay(BabyCobolParser::DisplayContext *ctx) = 0;

  virtual void enterStop(BabyCobolParser::StopContext *ctx) = 0;
  virtual void exitStop(BabyCobolParser::StopContext *ctx) = 0;

  virtual void enterMove(BabyCobolParser::MoveContext *ctx) = 0;
  virtual void exitMove(BabyCobolParser::MoveContext *ctx) = 0;

  virtual void enterSubtract(BabyCobolParser::SubtractContext *ctx) = 0;
  virtual void exitSubtract(BabyCobolParser::SubtractContext *ctx) = 0;

  virtual void enterMultiply(BabyCobolParser::MultiplyContext *ctx) = 0;
  virtual void exitMultiply(BabyCobolParser::MultiplyContext *ctx) = 0;

  virtual void enterPerform(BabyCobolParser::PerformContext *ctx) = 0;
  virtual void exitPerform(BabyCobolParser::PerformContext *ctx) = 0;

  virtual void enterIfStatement(BabyCobolParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BabyCobolParser::IfStatementContext *ctx) = 0;

  virtual void enterAccept(BabyCobolParser::AcceptContext *ctx) = 0;
  virtual void exitAccept(BabyCobolParser::AcceptContext *ctx) = 0;

  virtual void enterAdd(BabyCobolParser::AddContext *ctx) = 0;
  virtual void exitAdd(BabyCobolParser::AddContext *ctx) = 0;

  virtual void enterDivide(BabyCobolParser::DivideContext *ctx) = 0;
  virtual void exitDivide(BabyCobolParser::DivideContext *ctx) = 0;

  virtual void enterEvaluate(BabyCobolParser::EvaluateContext *ctx) = 0;
  virtual void exitEvaluate(BabyCobolParser::EvaluateContext *ctx) = 0;

  virtual void enterNextSentence(BabyCobolParser::NextSentenceContext *ctx) = 0;
  virtual void exitNextSentence(BabyCobolParser::NextSentenceContext *ctx) = 0;

  virtual void enterLoop(BabyCobolParser::LoopContext *ctx) = 0;
  virtual void exitLoop(BabyCobolParser::LoopContext *ctx) = 0;

  virtual void enterGotoStatement(BabyCobolParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(BabyCobolParser::GotoStatementContext *ctx) = 0;

  virtual void enterSignal(BabyCobolParser::SignalContext *ctx) = 0;
  virtual void exitSignal(BabyCobolParser::SignalContext *ctx) = 0;

  virtual void enterAlter(BabyCobolParser::AlterContext *ctx) = 0;
  virtual void exitAlter(BabyCobolParser::AlterContext *ctx) = 0;

  virtual void enterAnyExpression(BabyCobolParser::AnyExpressionContext *ctx) = 0;
  virtual void exitAnyExpression(BabyCobolParser::AnyExpressionContext *ctx) = 0;

  virtual void enterAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) = 0;
  virtual void exitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *ctx) = 0;

  virtual void enterArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) = 0;
  virtual void exitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *ctx) = 0;

  virtual void enterAtomicStringExp(BabyCobolParser::AtomicStringExpContext *ctx) = 0;
  virtual void exitAtomicStringExp(BabyCobolParser::AtomicStringExpContext *ctx) = 0;

  virtual void enterAdditionStringExp(BabyCobolParser::AdditionStringExpContext *ctx) = 0;
  virtual void exitAdditionStringExp(BabyCobolParser::AdditionStringExpContext *ctx) = 0;

  virtual void enterTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) = 0;
  virtual void exitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *ctx) = 0;

  virtual void enterBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) = 0;
  virtual void exitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *ctx) = 0;

  virtual void enterFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) = 0;
  virtual void exitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *ctx) = 0;

  virtual void enterContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *ctx) = 0;
  virtual void exitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *ctx) = 0;

  virtual void enterNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) = 0;
  virtual void exitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *ctx) = 0;

  virtual void enterCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) = 0;
  virtual void exitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) = 0;

  virtual void enterVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) = 0;
  virtual void exitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *ctx) = 0;

  virtual void enterWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) = 0;
  virtual void exitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) = 0;

  virtual void enterUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) = 0;
  virtual void exitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *ctx) = 0;

  virtual void enterLoopStatement(BabyCobolParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(BabyCobolParser::LoopStatementContext *ctx) = 0;

  virtual void enterContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *ctx) = 0;
  virtual void exitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *ctx) = 0;

  virtual void enterComparisonOp(BabyCobolParser::ComparisonOpContext *ctx) = 0;
  virtual void exitComparisonOp(BabyCobolParser::ComparisonOpContext *ctx) = 0;

  virtual void enterBooleanOp(BabyCobolParser::BooleanOpContext *ctx) = 0;
  virtual void exitBooleanOp(BabyCobolParser::BooleanOpContext *ctx) = 0;

  virtual void enterArithmeticOp(BabyCobolParser::ArithmeticOpContext *ctx) = 0;
  virtual void exitArithmeticOp(BabyCobolParser::ArithmeticOpContext *ctx) = 0;

  virtual void enterWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *ctx) = 0;
  virtual void exitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *ctx) = 0;

  virtual void enterWhenOther(BabyCobolParser::WhenOtherContext *ctx) = 0;
  virtual void exitWhenOther(BabyCobolParser::WhenOtherContext *ctx) = 0;

  virtual void enterIntLiteral(BabyCobolParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(BabyCobolParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) = 0;

  virtual void enterIdentifier(BabyCobolParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(BabyCobolParser::IdentifierContext *ctx) = 0;

  virtual void enterIdentifiers(BabyCobolParser::IdentifiersContext *ctx) = 0;
  virtual void exitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) = 0;


};


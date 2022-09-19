
// Generated from BabyCobol.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "BabyCobolListener.h"


/**
 * This class provides an empty implementation of BabyCobolListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BabyCobolBaseListener : public BabyCobolListener {
public:

  virtual void enterProgram(BabyCobolParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(BabyCobolParser::ProgramContext * /*ctx*/) override { }

  virtual void enterIdentification(BabyCobolParser::IdentificationContext * /*ctx*/) override { }
  virtual void exitIdentification(BabyCobolParser::IdentificationContext * /*ctx*/) override { }

  virtual void enterName(BabyCobolParser::NameContext * /*ctx*/) override { }
  virtual void exitName(BabyCobolParser::NameContext * /*ctx*/) override { }

  virtual void enterValue(BabyCobolParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(BabyCobolParser::ValueContext * /*ctx*/) override { }

  virtual void enterData(BabyCobolParser::DataContext * /*ctx*/) override { }
  virtual void exitData(BabyCobolParser::DataContext * /*ctx*/) override { }

  virtual void enterVariable(BabyCobolParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(BabyCobolParser::VariableContext * /*ctx*/) override { }

  virtual void enterLevel(BabyCobolParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(BabyCobolParser::LevelContext * /*ctx*/) override { }

  virtual void enterRepresentation(BabyCobolParser::RepresentationContext * /*ctx*/) override { }
  virtual void exitRepresentation(BabyCobolParser::RepresentationContext * /*ctx*/) override { }

  virtual void enterProcedure(BabyCobolParser::ProcedureContext * /*ctx*/) override { }
  virtual void exitProcedure(BabyCobolParser::ProcedureContext * /*ctx*/) override { }

  virtual void enterParagraph(BabyCobolParser::ParagraphContext * /*ctx*/) override { }
  virtual void exitParagraph(BabyCobolParser::ParagraphContext * /*ctx*/) override { }

  virtual void enterSentence(BabyCobolParser::SentenceContext * /*ctx*/) override { }
  virtual void exitSentence(BabyCobolParser::SentenceContext * /*ctx*/) override { }

  virtual void enterStatement(BabyCobolParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BabyCobolParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabel(BabyCobolParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(BabyCobolParser::LabelContext * /*ctx*/) override { }

  virtual void enterDisplay(BabyCobolParser::DisplayContext * /*ctx*/) override { }
  virtual void exitDisplay(BabyCobolParser::DisplayContext * /*ctx*/) override { }

  virtual void enterStop(BabyCobolParser::StopContext * /*ctx*/) override { }
  virtual void exitStop(BabyCobolParser::StopContext * /*ctx*/) override { }

  virtual void enterMove(BabyCobolParser::MoveContext * /*ctx*/) override { }
  virtual void exitMove(BabyCobolParser::MoveContext * /*ctx*/) override { }

  virtual void enterSubtract(BabyCobolParser::SubtractContext * /*ctx*/) override { }
  virtual void exitSubtract(BabyCobolParser::SubtractContext * /*ctx*/) override { }

  virtual void enterMultiply(BabyCobolParser::MultiplyContext * /*ctx*/) override { }
  virtual void exitMultiply(BabyCobolParser::MultiplyContext * /*ctx*/) override { }

  virtual void enterPerform(BabyCobolParser::PerformContext * /*ctx*/) override { }
  virtual void exitPerform(BabyCobolParser::PerformContext * /*ctx*/) override { }

  virtual void enterIfStatement(BabyCobolParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BabyCobolParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterAccept(BabyCobolParser::AcceptContext * /*ctx*/) override { }
  virtual void exitAccept(BabyCobolParser::AcceptContext * /*ctx*/) override { }

  virtual void enterAdd(BabyCobolParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(BabyCobolParser::AddContext * /*ctx*/) override { }

  virtual void enterDivide(BabyCobolParser::DivideContext * /*ctx*/) override { }
  virtual void exitDivide(BabyCobolParser::DivideContext * /*ctx*/) override { }

  virtual void enterEvaluate(BabyCobolParser::EvaluateContext * /*ctx*/) override { }
  virtual void exitEvaluate(BabyCobolParser::EvaluateContext * /*ctx*/) override { }

  virtual void enterNextSentence(BabyCobolParser::NextSentenceContext * /*ctx*/) override { }
  virtual void exitNextSentence(BabyCobolParser::NextSentenceContext * /*ctx*/) override { }

  virtual void enterLoop(BabyCobolParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(BabyCobolParser::LoopContext * /*ctx*/) override { }

  virtual void enterGotoStatement(BabyCobolParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(BabyCobolParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterSignal(BabyCobolParser::SignalContext * /*ctx*/) override { }
  virtual void exitSignal(BabyCobolParser::SignalContext * /*ctx*/) override { }

  virtual void enterAlter(BabyCobolParser::AlterContext * /*ctx*/) override { }
  virtual void exitAlter(BabyCobolParser::AlterContext * /*ctx*/) override { }

  virtual void enterAnyExpression(BabyCobolParser::AnyExpressionContext * /*ctx*/) override { }
  virtual void exitAnyExpression(BabyCobolParser::AnyExpressionContext * /*ctx*/) override { }

  virtual void enterAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext * /*ctx*/) override { }
  virtual void exitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext * /*ctx*/) override { }

  virtual void enterArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext * /*ctx*/) override { }
  virtual void exitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext * /*ctx*/) override { }

  virtual void enterAtomicStringExp(BabyCobolParser::AtomicStringExpContext * /*ctx*/) override { }
  virtual void exitAtomicStringExp(BabyCobolParser::AtomicStringExpContext * /*ctx*/) override { }

  virtual void enterAdditionStringExp(BabyCobolParser::AdditionStringExpContext * /*ctx*/) override { }
  virtual void exitAdditionStringExp(BabyCobolParser::AdditionStringExpContext * /*ctx*/) override { }

  virtual void enterTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext * /*ctx*/) override { }
  virtual void exitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext * /*ctx*/) override { }

  virtual void enterBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext * /*ctx*/) override { }
  virtual void exitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext * /*ctx*/) override { }

  virtual void enterFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext * /*ctx*/) override { }
  virtual void exitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext * /*ctx*/) override { }

  virtual void enterContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext * /*ctx*/) override { }
  virtual void exitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext * /*ctx*/) override { }

  virtual void enterNotBooleanExp(BabyCobolParser::NotBooleanExpContext * /*ctx*/) override { }
  virtual void exitNotBooleanExp(BabyCobolParser::NotBooleanExpContext * /*ctx*/) override { }

  virtual void enterCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext * /*ctx*/) override { }
  virtual void exitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext * /*ctx*/) override { }

  virtual void enterVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext * /*ctx*/) override { }
  virtual void exitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext * /*ctx*/) override { }

  virtual void enterWhileLoopExp(BabyCobolParser::WhileLoopExpContext * /*ctx*/) override { }
  virtual void exitWhileLoopExp(BabyCobolParser::WhileLoopExpContext * /*ctx*/) override { }

  virtual void enterUntilLoopExp(BabyCobolParser::UntilLoopExpContext * /*ctx*/) override { }
  virtual void exitUntilLoopExp(BabyCobolParser::UntilLoopExpContext * /*ctx*/) override { }

  virtual void enterLoopStatement(BabyCobolParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(BabyCobolParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext * /*ctx*/) override { }
  virtual void exitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext * /*ctx*/) override { }

  virtual void enterComparisonOp(BabyCobolParser::ComparisonOpContext * /*ctx*/) override { }
  virtual void exitComparisonOp(BabyCobolParser::ComparisonOpContext * /*ctx*/) override { }

  virtual void enterBooleanOp(BabyCobolParser::BooleanOpContext * /*ctx*/) override { }
  virtual void exitBooleanOp(BabyCobolParser::BooleanOpContext * /*ctx*/) override { }

  virtual void enterArithmeticOp(BabyCobolParser::ArithmeticOpContext * /*ctx*/) override { }
  virtual void exitArithmeticOp(BabyCobolParser::ArithmeticOpContext * /*ctx*/) override { }

  virtual void enterWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext * /*ctx*/) override { }
  virtual void exitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext * /*ctx*/) override { }

  virtual void enterWhenOther(BabyCobolParser::WhenOtherContext * /*ctx*/) override { }
  virtual void exitWhenOther(BabyCobolParser::WhenOtherContext * /*ctx*/) override { }

  virtual void enterIntLiteral(BabyCobolParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(BabyCobolParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(BabyCobolParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(BabyCobolParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(BabyCobolParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(BabyCobolParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifiers(BabyCobolParser::IdentifiersContext * /*ctx*/) override { }
  virtual void exitIdentifiers(BabyCobolParser::IdentifiersContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


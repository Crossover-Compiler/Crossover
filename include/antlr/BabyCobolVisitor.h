
// Generated from /home/manzi/repos/Crossover/grammar/BabyCobol.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BabyCobolParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BabyCobolParser.
 */
class  BabyCobolVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BabyCobolParser.
   */
    virtual std::any visitProgram(BabyCobolParser::ProgramContext *context) = 0;

    virtual std::any visitIdentificationDiv(BabyCobolParser::IdentificationDivContext *context) = 0;

    virtual std::any visitIdentificationEntry(BabyCobolParser::IdentificationEntryContext *context) = 0;

    virtual std::any visitDataDivision(BabyCobolParser::DataDivisionContext *context) = 0;

    virtual std::any visitLine(BabyCobolParser::LineContext *context) = 0;

    virtual std::any visitRecord(BabyCobolParser::RecordContext *context) = 0;

    virtual std::any visitField(BabyCobolParser::FieldContext *context) = 0;

    virtual std::any visitLevel(BabyCobolParser::LevelContext *context) = 0;

    virtual std::any visitMask(BabyCobolParser::MaskContext *context) = 0;

    virtual std::any visitProcedure(BabyCobolParser::ProcedureContext *context) = 0;

    virtual std::any visitParagraph(BabyCobolParser::ParagraphContext *context) = 0;

    virtual std::any visitSentence(BabyCobolParser::SentenceContext *context) = 0;

    virtual std::any visitStatement(BabyCobolParser::StatementContext *context) = 0;

    virtual std::any visitLabel(BabyCobolParser::LabelContext *context) = 0;

    virtual std::any visitDisplay(BabyCobolParser::DisplayContext *context) = 0;

    virtual std::any visitStop(BabyCobolParser::StopContext *context) = 0;

    virtual std::any visitMove(BabyCobolParser::MoveContext *context) = 0;

    virtual std::any visitSubtract(BabyCobolParser::SubtractContext *context) = 0;

    virtual std::any visitMultiply(BabyCobolParser::MultiplyContext *context) = 0;

    virtual std::any visitPerform(BabyCobolParser::PerformContext *context) = 0;

    virtual std::any visitIfStatement(BabyCobolParser::IfStatementContext *context) = 0;

    virtual std::any visitAccept(BabyCobolParser::AcceptContext *context) = 0;

    virtual std::any visitAdd(BabyCobolParser::AddContext *context) = 0;

    virtual std::any visitDivide(BabyCobolParser::DivideContext *context) = 0;

    virtual std::any visitEvaluate(BabyCobolParser::EvaluateContext *context) = 0;

    virtual std::any visitNextSentence(BabyCobolParser::NextSentenceContext *context) = 0;

    virtual std::any visitLoop(BabyCobolParser::LoopContext *context) = 0;

    virtual std::any visitGotoStatement(BabyCobolParser::GotoStatementContext *context) = 0;

    virtual std::any visitSignal(BabyCobolParser::SignalContext *context) = 0;

    virtual std::any visitAlter(BabyCobolParser::AlterContext *context) = 0;

    virtual std::any visitCallStatement(BabyCobolParser::CallStatementContext *context) = 0;

    virtual std::any visitAnyExpression(BabyCobolParser::AnyExpressionContext *context) = 0;

    virtual std::any visitAtomicArithmeticExp(BabyCobolParser::AtomicArithmeticExpContext *context) = 0;

    virtual std::any visitArithOpArithmeticExp(BabyCobolParser::ArithOpArithmeticExpContext *context) = 0;

    virtual std::any visitAtomicStringExp(BabyCobolParser::AtomicStringExpContext *context) = 0;

    virtual std::any visitAdditionStringExp(BabyCobolParser::AdditionStringExpContext *context) = 0;

    virtual std::any visitTrueBooleanExp(BabyCobolParser::TrueBooleanExpContext *context) = 0;

    virtual std::any visitBoolOpBooleanExp(BabyCobolParser::BoolOpBooleanExpContext *context) = 0;

    virtual std::any visitFalseBooleanExp(BabyCobolParser::FalseBooleanExpContext *context) = 0;

    virtual std::any visitContractedBooleanExp(BabyCobolParser::ContractedBooleanExpContext *context) = 0;

    virtual std::any visitNotBooleanExp(BabyCobolParser::NotBooleanExpContext *context) = 0;

    virtual std::any visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *context) = 0;

    virtual std::any visitVaryingLoopExp(BabyCobolParser::VaryingLoopExpContext *context) = 0;

    virtual std::any visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *context) = 0;

    virtual std::any visitUntilLoopExp(BabyCobolParser::UntilLoopExpContext *context) = 0;

    virtual std::any visitContractedBooleanPart(BabyCobolParser::ContractedBooleanPartContext *context) = 0;

    virtual std::any visitComparisonOp(BabyCobolParser::ComparisonOpContext *context) = 0;

    virtual std::any visitBooleanOp(BabyCobolParser::BooleanOpContext *context) = 0;

    virtual std::any visitArithmeticOp(BabyCobolParser::ArithmeticOpContext *context) = 0;

    virtual std::any visitWhenAnyExpression(BabyCobolParser::WhenAnyExpressionContext *context) = 0;

    virtual std::any visitWhenOther(BabyCobolParser::WhenOtherContext *context) = 0;

    virtual std::any visitIntLiteral(BabyCobolParser::IntLiteralContext *context) = 0;

    virtual std::any visitDoubleLiteral(BabyCobolParser::DoubleLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(BabyCobolParser::StringLiteralContext *context) = 0;

    virtual std::any visitIdentifier(BabyCobolParser::IdentifierContext *context) = 0;

    virtual std::any visitIdentifiers(BabyCobolParser::IdentifiersContext *context) = 0;

    virtual std::any visitInt(BabyCobolParser::IntContext *context) = 0;


};


//
// Created by bruh on 21-9-22.
//

#ifndef CROSSOVER_VISITOR_H
#define CROSSOVER_VISITOR_H

#include "../../include/antlr/BabyCobolBaseVisitor.h"
#include "../../include/ir/bcmodule.h"
#include "../datastructures/DataTree.h"
#include <llvm/IR/IRBuilder.h>

using namespace llvm;
using namespace std;

class Visitor: public BabyCobolBaseVisitor {

private:
    vector<std::string> compiledVector;
    map<string, Value*> values;
    int topLevel;
    DataTree* root;
    string current_id;
    BCModule* bcModule;
    BCBuilder* builder;

public:
    vector<DataTree*> dataStructures;

    Visitor(BCModule* bcModule, BCBuilder* builder) : bcModule(bcModule), builder(builder), topLevel(-1) {}

    void setPictureForDataTree(DataTree* dataTree, BabyCobolParser::RepresentationContext* picture);

    std::any visitIdentification(BabyCobolParser::IdentificationContext *ctx) override;

    std::any visitProgram(BabyCobolParser::ProgramContext *ctx) override;

    std::any visitName(BabyCobolParser::NameContext *ctx) override;

    std::any visitValue(BabyCobolParser::ValueContext *ctx) override;

    std::any visitData(BabyCobolParser::DataContext *ctx) override;

    std::any visitLine(BabyCobolParser::LineContext *ctx) override;

    std::any visitField(BabyCobolParser::FieldContext *ctx) override;

    std::any visitRecord(BabyCobolParser::RecordContext *ctx) override;

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

    std::any visitInt(BabyCobolParser::IntContext *ctx) override;

    void reset();

    vector<DataTree*> getNodes(string path);

    vector<string> split(string s, string delimiter);

};


#endif //CROSSOVER_VISITOR_H

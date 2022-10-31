
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  BabyCobolParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, IDENTIFICATION = 14, 
    DIVISION = 15, PROCEDURE = 16, DATA = 17, DISPLAY = 18, WITH = 19, NO = 20, 
    ADVANCING = 21, STOP = 22, MOVE = 23, TO = 24, SUBTRACT = 25, FROM = 26, 
    GIVING = 27, MULTIPLY = 28, BY = 29, PERFORM = 30, TIMES = 31, IF = 32, 
    THEN = 33, ELSE = 34, END = 35, ACCEPT = 36, ADD = 37, DIVIDE = 38, 
    INTO = 39, EVALUATE = 40, WHEN = 41, OTHER = 42, TRUE = 43, FALSE = 44, 
    NOT = 45, OR = 46, AND = 47, XOR = 48, NEXT = 49, SENTENCE = 50, REMAINDER = 51, 
    LOOP = 52, VARYING = 53, WHILE = 54, UNTIL = 55, OF = 56, THROUGH = 57, 
    PICTURE = 58, IS = 59, LIKE = 60, OCCURS = 61, GO = 62, SPACES = 63, 
    HIGH = 64, LOW = 65, SIGNAL = 66, ONERROR = 67, OFF = 68, ALTER = 69, 
    PROCEED = 70, NINE = 71, A = 72, X = 73, Z = 74, S = 75, V = 76, COMMENTLINE = 77, 
    WS = 78, INT = 79, LITERAL = 80, DOT = 81, VAR = 82
  };

  enum {
    RuleProgram = 0, RuleIdentification = 1, RuleName = 2, RuleValue = 3, 
    RuleData = 4, RuleLine = 5, RuleRecord = 6, RuleField = 7, RuleLevel = 8, 
    RuleRepresentation = 9, RuleProcedure = 10, RuleParagraph = 11, RuleSentence = 12, 
    RuleStatement = 13, RuleLabel = 14, RuleDisplay = 15, RuleStop = 16, 
    RuleMove = 17, RuleSubtract = 18, RuleMultiply = 19, RulePerform = 20, 
    RuleIfStatement = 21, RuleAccept = 22, RuleAdd = 23, RuleDivide = 24, 
    RuleEvaluate = 25, RuleNextSentence = 26, RuleLoop = 27, RuleGotoStatement = 28, 
    RuleSignal = 29, RuleAlter = 30, RuleAnyExpression = 31, RuleArithmeticExpression = 32, 
    RuleStringExpression = 33, RuleBooleanExpression = 34, RuleLoopExpression = 35, 
    RuleContractedBooleanPart = 36, RuleComparisonOp = 37, RuleBooleanOp = 38, 
    RuleArithmeticOp = 39, RuleWhenBlock = 40, RuleAtomic = 41, RuleIdentifiers = 42, 
    RuleInt = 43, RuleVar = 44, RuleIdentifier = 45
  };

  explicit BabyCobolParser(antlr4::TokenStream *input);

  BabyCobolParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BabyCobolParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class IdentificationContext;
  class NameContext;
  class ValueContext;
  class DataContext;
  class LineContext;
  class RecordContext;
  class FieldContext;
  class LevelContext;
  class RepresentationContext;
  class ProcedureContext;
  class ParagraphContext;
  class SentenceContext;
  class StatementContext;
  class LabelContext;
  class DisplayContext;
  class StopContext;
  class MoveContext;
  class SubtractContext;
  class MultiplyContext;
  class PerformContext;
  class IfStatementContext;
  class AcceptContext;
  class AddContext;
  class DivideContext;
  class EvaluateContext;
  class NextSentenceContext;
  class LoopContext;
  class GotoStatementContext;
  class SignalContext;
  class AlterContext;
  class AnyExpressionContext;
  class ArithmeticExpressionContext;
  class StringExpressionContext;
  class BooleanExpressionContext;
  class LoopExpressionContext;
  class ContractedBooleanPartContext;
  class ComparisonOpContext;
  class BooleanOpContext;
  class ArithmeticOpContext;
  class WhenBlockContext;
  class AtomicContext;
  class IdentifiersContext;
  class IntContext;
  class VarContext;
  class IdentifierContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentificationContext *identification();
    ProcedureContext *procedure();
    antlr4::tree::TerminalNode *EOF();
    DataContext *data();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  IdentificationContext : public antlr4::ParserRuleContext {
  public:
    IdentificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFICATION();
    antlr4::tree::TerminalNode *DIVISION();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentificationContext* identification();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  DataContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::LineContext *lineContext = nullptr;
    std::vector<LineContext *> lines;
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIVISION();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataContext* data();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RecordContext *record();
    FieldContext *field();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  RecordContext : public antlr4::ParserRuleContext {
  public:
    RecordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LevelContext *level();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordContext* record();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LevelContext *level();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *PICTURE();
    antlr4::tree::TerminalNode *IS();
    RepresentationContext *representation();
    antlr4::tree::TerminalNode *LIKE();
    IdentifiersContext *identifiers();
    antlr4::tree::TerminalNode *OCCURS();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *TIMES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntContext *int_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelContext* level();

  class  RepresentationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *leadingS = nullptr;
    antlr4::Token *zToken = nullptr;
    std::vector<antlr4::Token *> leadingZ;
    antlr4::Token *trailingS = nullptr;
    RepresentationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *S();
    std::vector<antlr4::tree::TerminalNode *> Z();
    antlr4::tree::TerminalNode* Z(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NINE();
    antlr4::tree::TerminalNode* NINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> A();
    antlr4::tree::TerminalNode* A(size_t i);
    std::vector<antlr4::tree::TerminalNode *> X();
    antlr4::tree::TerminalNode* X(size_t i);
    std::vector<antlr4::tree::TerminalNode *> V();
    antlr4::tree::TerminalNode* V(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepresentationContext* representation();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *DIVISION();
    antlr4::tree::TerminalNode *DOT();
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);
    std::vector<ParagraphContext *> paragraph();
    ParagraphContext* paragraph(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureContext* procedure();

  class  ParagraphContext : public antlr4::ParserRuleContext {
  public:
    ParagraphContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    antlr4::tree::TerminalNode *DOT();
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParagraphContext* paragraph();

  class  SentenceContext : public antlr4::ParserRuleContext {
  public:
    SentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SentenceContext* sentence();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DisplayContext *display();
    StopContext *stop();
    MoveContext *move();
    SubtractContext *subtract();
    MultiplyContext *multiply();
    PerformContext *perform();
    IfStatementContext *ifStatement();
    AcceptContext *accept();
    AddContext *add();
    DivideContext *divide();
    EvaluateContext *evaluate();
    NextSentenceContext *nextSentence();
    LoopContext *loop();
    GotoStatementContext *gotoStatement();
    SignalContext *signal();
    AlterContext *alter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  DisplayContext : public antlr4::ParserRuleContext {
  public:
    DisplayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISPLAY();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ADVANCING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DisplayContext* display();

  class  StopContext : public antlr4::ParserRuleContext {
  public:
    StopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopContext* stop();

  class  MoveContext : public antlr4::ParserRuleContext {
  public:
    MoveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *SPACES();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *LOW();
    AtomicContext *atomic();
    std::vector<IdentifiersContext *> identifiers();
    IdentifiersContext* identifiers(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveContext* move();

  class  SubtractContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::AtomicContext *atomicContext = nullptr;
    std::vector<AtomicContext *> as;
    BabyCobolParser::AtomicContext *from = nullptr;
    BabyCobolParser::IdentifiersContext *giving = nullptr;
    SubtractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *FROM();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);
    antlr4::tree::TerminalNode *GIVING();
    IdentifiersContext *identifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubtractContext* subtract();

  class  MultiplyContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::AtomicContext *at = nullptr;
    BabyCobolParser::AtomicContext *atomicContext = nullptr;
    std::vector<AtomicContext *> as;
    BabyCobolParser::IdentifiersContext *giving = nullptr;
    MultiplyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *BY();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);
    antlr4::tree::TerminalNode *GIVING();
    IdentifiersContext *identifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplyContext* multiply();

  class  PerformContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::LabelContext *procedureName = nullptr;
    BabyCobolParser::LabelContext *through = nullptr;
    BabyCobolParser::AtomicContext *times = nullptr;
    PerformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERFORM();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIMES();
    AtomicContext *atomic();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PerformContext* perform();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::StatementContext *statementContext = nullptr;
    std::vector<StatementContext *> t;
    std::vector<StatementContext *> f;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    BooleanExpressionContext *booleanExpression();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  AcceptContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::IdentifiersContext *identifiersContext = nullptr;
    std::vector<IdentifiersContext *> id;
    AcceptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCEPT();
    std::vector<IdentifiersContext *> identifiers();
    IdentifiersContext* identifiers(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcceptContext* accept();

  class  AddContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::AtomicContext *to = nullptr;
    BabyCobolParser::IdentifiersContext *id = nullptr;
    AddContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *TO();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);
    antlr4::tree::TerminalNode *GIVING();
    IdentifiersContext *identifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddContext* add();

  class  DivideContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::AtomicContext *at = nullptr;
    BabyCobolParser::AtomicContext *atomicContext = nullptr;
    std::vector<AtomicContext *> as;
    BabyCobolParser::IdentifiersContext *id = nullptr;
    BabyCobolParser::IdentifiersContext *rem = nullptr;
    DivideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *INTO();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);
    antlr4::tree::TerminalNode *GIVING();
    antlr4::tree::TerminalNode *REMAINDER();
    std::vector<IdentifiersContext *> identifiers();
    IdentifiersContext* identifiers(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivideContext* divide();

  class  EvaluateContext : public antlr4::ParserRuleContext {
  public:
    EvaluateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVALUATE();
    AnyExpressionContext *anyExpression();
    antlr4::tree::TerminalNode *END();
    std::vector<WhenBlockContext *> whenBlock();
    WhenBlockContext* whenBlock(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EvaluateContext* evaluate();

  class  NextSentenceContext : public antlr4::ParserRuleContext {
  public:
    NextSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *SENTENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NextSentenceContext* nextSentence();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END();
    std::vector<LoopExpressionContext *> loopExpression();
    LoopExpressionContext* loopExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopContext* loop();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *TO();
    NameContext *name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  SignalContext : public antlr4::ParserRuleContext {
  public:
    SignalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *ONERROR();
    LabelContext *label();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalContext* signal();

  class  AlterContext : public antlr4::ParserRuleContext {
  public:
    BabyCobolParser::LabelContext *l1 = nullptr;
    BabyCobolParser::LabelContext *l2 = nullptr;
    AlterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    antlr4::tree::TerminalNode *PROCEED();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterContext* alter();

  class  AnyExpressionContext : public antlr4::ParserRuleContext {
  public:
    AnyExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmeticExpressionContext *arithmeticExpression();
    StringExpressionContext *stringExpression();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnyExpressionContext* anyExpression();

  class  ArithmeticExpressionContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArithmeticExpressionContext() = default;
    void copyFrom(ArithmeticExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AtomicArithmeticExpContext : public ArithmeticExpressionContext {
  public:
    AtomicArithmeticExpContext(ArithmeticExpressionContext *ctx);

    AtomicContext *atomic();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithOpArithmeticExpContext : public ArithmeticExpressionContext {
  public:
    ArithOpArithmeticExpContext(ArithmeticExpressionContext *ctx);

    BabyCobolParser::ArithmeticExpressionContext *left = nullptr;
    BabyCobolParser::ArithmeticExpressionContext *right = nullptr;
    ArithmeticOpContext *arithmeticOp();
    std::vector<ArithmeticExpressionContext *> arithmeticExpression();
    ArithmeticExpressionContext* arithmeticExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArithmeticExpressionContext* arithmeticExpression();
  ArithmeticExpressionContext* arithmeticExpression(int precedence);
  class  StringExpressionContext : public antlr4::ParserRuleContext {
  public:
    StringExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StringExpressionContext() = default;
    void copyFrom(StringExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AtomicStringExpContext : public StringExpressionContext {
  public:
    AtomicStringExpContext(StringExpressionContext *ctx);

    AtomicContext *atomic();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditionStringExpContext : public StringExpressionContext {
  public:
    AdditionStringExpContext(StringExpressionContext *ctx);

    BabyCobolParser::StringExpressionContext *left = nullptr;
    BabyCobolParser::StringExpressionContext *right = nullptr;
    std::vector<StringExpressionContext *> stringExpression();
    StringExpressionContext* stringExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StringExpressionContext* stringExpression();
  StringExpressionContext* stringExpression(int precedence);
  class  BooleanExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleanExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExpressionContext() = default;
    void copyFrom(BooleanExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TrueBooleanExpContext : public BooleanExpressionContext {
  public:
    TrueBooleanExpContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *TRUE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolOpBooleanExpContext : public BooleanExpressionContext {
  public:
    BoolOpBooleanExpContext(BooleanExpressionContext *ctx);

    BabyCobolParser::BooleanExpressionContext *left = nullptr;
    BabyCobolParser::BooleanExpressionContext *right = nullptr;
    BooleanOpContext *booleanOp();
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FalseBooleanExpContext : public BooleanExpressionContext {
  public:
    FalseBooleanExpContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *FALSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContractedBooleanExpContext : public BooleanExpressionContext {
  public:
    ContractedBooleanExpContext(BooleanExpressionContext *ctx);

    BabyCobolParser::AtomicContext *left = nullptr;
    BabyCobolParser::ArithmeticExpressionContext *right = nullptr;
    BabyCobolParser::ContractedBooleanPartContext *contractedBooleanPartContext = nullptr;
    std::vector<ContractedBooleanPartContext *> contract;
    ComparisonOpContext *comparisonOp();
    AtomicContext *atomic();
    ArithmeticExpressionContext *arithmeticExpression();
    std::vector<ContractedBooleanPartContext *> contractedBooleanPart();
    ContractedBooleanPartContext* contractedBooleanPart(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotBooleanExpContext : public BooleanExpressionContext {
  public:
    NotBooleanExpContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    BooleanExpressionContext *booleanExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareOpBooleanExpContext : public BooleanExpressionContext {
  public:
    CompareOpBooleanExpContext(BooleanExpressionContext *ctx);

    BabyCobolParser::ArithmeticExpressionContext *left = nullptr;
    BabyCobolParser::ArithmeticExpressionContext *right = nullptr;
    ComparisonOpContext *comparisonOp();
    std::vector<ArithmeticExpressionContext *> arithmeticExpression();
    ArithmeticExpressionContext* arithmeticExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExpressionContext* booleanExpression();
  BooleanExpressionContext* booleanExpression(int precedence);
  class  LoopExpressionContext : public antlr4::ParserRuleContext {
  public:
    LoopExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LoopExpressionContext() = default;
    void copyFrom(LoopExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VaryingLoopExpContext : public LoopExpressionContext {
  public:
    VaryingLoopExpContext(LoopExpressionContext *ctx);

    BabyCobolParser::IdentifiersContext *id = nullptr;
    BabyCobolParser::AtomicContext *from = nullptr;
    BabyCobolParser::AtomicContext *to = nullptr;
    BabyCobolParser::AtomicContext *by = nullptr;
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BY();
    IdentifiersContext *identifiers();
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopStatementContext : public LoopExpressionContext {
  public:
    LoopStatementContext(LoopExpressionContext *ctx);

    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilLoopExpContext : public LoopExpressionContext {
  public:
    UntilLoopExpContext(LoopExpressionContext *ctx);

    antlr4::tree::TerminalNode *UNTIL();
    BooleanExpressionContext *booleanExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileLoopExpContext : public LoopExpressionContext {
  public:
    WhileLoopExpContext(LoopExpressionContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    BooleanExpressionContext *booleanExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopExpressionContext* loopExpression();

  class  ContractedBooleanPartContext : public antlr4::ParserRuleContext {
  public:
    ContractedBooleanPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanOpContext *booleanOp();
    ArithmeticExpressionContext *arithmeticExpression();
    ComparisonOpContext *comparisonOp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContractedBooleanPartContext* contractedBooleanPart();

  class  ComparisonOpContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOpContext* comparisonOp();

  class  BooleanOpContext : public antlr4::ParserRuleContext {
  public:
    BooleanOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *XOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanOpContext* booleanOp();

  class  ArithmeticOpContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticOpContext* arithmeticOp();

  class  WhenBlockContext : public antlr4::ParserRuleContext {
  public:
    WhenBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WhenBlockContext() = default;
    void copyFrom(WhenBlockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhenOtherContext : public WhenBlockContext {
  public:
    WhenOtherContext(WhenBlockContext *ctx);

    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *OTHER();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhenAnyExpressionContext : public WhenBlockContext {
  public:
    WhenAnyExpressionContext(WhenBlockContext *ctx);

    antlr4::tree::TerminalNode *WHEN();
    std::vector<AnyExpressionContext *> anyExpression();
    AnyExpressionContext* anyExpression(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WhenBlockContext* whenBlock();

  class  AtomicContext : public antlr4::ParserRuleContext {
  public:
    AtomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtomicContext() = default;
    void copyFrom(AtomicContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierAtomicContext : public AtomicContext {
  public:
    IdentifierAtomicContext(AtomicContext *ctx);

    IdentifiersContext *identifiers();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLiteralContext : public AtomicContext {
  public:
    StringLiteralContext(AtomicContext *ctx);

    antlr4::tree::TerminalNode *LITERAL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLiteralContext : public AtomicContext {
  public:
    IntLiteralContext(AtomicContext *ctx);

    IntContext *int_();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AtomicContext* atomic();

  class  IdentifiersContext : public antlr4::ParserRuleContext {
  public:
    IdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    IntContext *int_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiersContext* identifiers();

  class  IntContext : public antlr4::ParserRuleContext {
  public:
    IntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *NINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntContext* int_();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> A();
    antlr4::tree::TerminalNode* A(size_t i);
    std::vector<antlr4::tree::TerminalNode *> X();
    antlr4::tree::TerminalNode* X(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Z();
    antlr4::tree::TerminalNode* Z(size_t i);
    std::vector<antlr4::tree::TerminalNode *> S();
    antlr4::tree::TerminalNode* S(size_t i);
    std::vector<antlr4::tree::TerminalNode *> V();
    antlr4::tree::TerminalNode* V(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool arithmeticExpressionSempred(ArithmeticExpressionContext *_localctx, size_t predicateIndex);
  bool stringExpressionSempred(StringExpressionContext *_localctx, size_t predicateIndex);
  bool booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


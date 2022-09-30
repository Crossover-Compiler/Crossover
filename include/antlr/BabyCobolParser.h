
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
    PROCEED = 70, NINE = 71, X = 72, COMMENTLINE = 73, IDENTIFIER = 74, 
    INT = 75, LITERAL = 76, DOT = 77, VAR = 78, WS = 79
  };

  enum {
    RuleProgram = 0, RuleIdentification = 1, RuleName = 2, RuleValue = 3, 
    RuleData = 4, RuleVariable = 5, RuleLevel = 6, RuleRepresentation = 7, 
    RuleProcedure = 8, RuleParagraph = 9, RuleSentence = 10, RuleStatement = 11, 
    RuleLabel = 12, RuleDisplay = 13, RuleStop = 14, RuleMove = 15, RuleSubtract = 16, 
    RuleMultiply = 17, RulePerform = 18, RuleIfStatement = 19, RuleAccept = 20, 
    RuleAdd = 21, RuleDivide = 22, RuleEvaluate = 23, RuleNextSentence = 24, 
    RuleLoop = 25, RuleGotoStatement = 26, RuleSignal = 27, RuleAlter = 28, 
    RuleAnyExpression = 29, RuleArithmeticExpression = 30, RuleStringExpression = 31, 
    RuleBooleanExpression = 32, RuleLoopExpression = 33, RuleContractedBooleanPart = 34, 
    RuleComparisonOp = 35, RuleBooleanOp = 36, RuleArithmeticOp = 37, RuleWhenBlock = 38, 
    RuleAtomic = 39, RuleIdentifiers = 40, RuleInt = 41
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
  class VariableContext;
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
    antlr4::tree::TerminalNode *IDENTIFIER();


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
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIVISION();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataContext* data();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LevelContext *level();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *PICTURE();
    antlr4::tree::TerminalNode *IS();
    RepresentationContext *representation();
    antlr4::tree::TerminalNode *LIKE();
    IdentifiersContext *identifiers();
    antlr4::tree::TerminalNode *OCCURS();
    IntContext *int_();
    antlr4::tree::TerminalNode *TIMES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

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
    RepresentationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NINE();
    antlr4::tree::TerminalNode *X();


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
    antlr4::tree::TerminalNode *IDENTIFIER();


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
    BabyCobolParser::AtomicContext *a = nullptr;
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
    BabyCobolParser::AtomicContext *a = nullptr;
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

  class  IdentifierContext : public AtomicContext {
  public:
    IdentifierContext(AtomicContext *ctx);

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
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
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



// Generated from /home/manzi/repos/Crossover/grammar/BabyCobol.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  BabyCobolParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, STRUCT = 14, 
    PRIMITIVE = 15, IDENTIFICATION = 16, DIVISION = 17, PROCEDURE = 18, 
    DATA = 19, DISPLAY = 20, WITH = 21, NO = 22, ADVANCING = 23, STOP = 24, 
    MOVE = 25, TO = 26, SUBTRACT = 27, FROM = 28, GIVING = 29, MULTIPLY = 30, 
    BY = 31, PERFORM = 32, TIMES = 33, IF = 34, THEN = 35, ELSE = 36, END = 37, 
    ACCEPT = 38, ADD = 39, DIVIDE = 40, INTO = 41, EVALUATE = 42, WHEN = 43, 
    OTHER = 44, TRUE = 45, FALSE = 46, NOT = 47, OR = 48, AND = 49, XOR = 50, 
    NEXT = 51, SENTENCE = 52, REMAINDER = 53, LOOP = 54, VARYING = 55, WHILE = 56, 
    UNTIL = 57, OF = 58, THROUGH = 59, PICTURE = 60, IS = 61, LIKE = 62, 
    OCCURS = 63, GO = 64, SPACES = 65, HIGH = 66, LOW = 67, SIGNAL = 68, 
    ONERROR = 69, OFF = 70, ALTER = 71, PROCEED = 72, CALL = 73, RETURNING = 74, 
    BYVALUE = 75, BYREFERENCE = 76, RETURNINGBYREFERENCE = 77, USING = 78, 
    AS = 79, WS = 80, FUNCTIONNAME = 81, INT = 82, DOUBLE = 83, LITERAL = 84, 
    DOT = 85, IDENTIFIER = 86, COMMENTLINE = 87
  };

  enum {
    RuleProgram = 0, RuleIdentification = 1, RuleName = 2, RuleValue = 3, 
    RuleData = 4, RuleLine = 5, RuleRecord = 6, RuleField = 7, RuleLevel = 8, 
    RuleRepresentation = 9, RuleProcedure = 10, RuleParagraph = 11, RuleSentence = 12, 
    RuleStatement = 13, RuleLabel = 14, RuleDisplay = 15, RuleStop = 16, 
    RuleMove = 17, RuleSubtract = 18, RuleMultiply = 19, RulePerform = 20, 
    RuleIfStatement = 21, RuleAccept = 22, RuleAdd = 23, RuleDivide = 24, 
    RuleEvaluate = 25, RuleNextSentence = 26, RuleLoop = 27, RuleGotoStatement = 28, 
    RuleSignal = 29, RuleAlter = 30, RuleCallStatement = 31, RuleAnyExpression = 32, 
    RuleArithmeticExpression = 33, RuleStringExpression = 34, RuleBooleanExpression = 35, 
    RuleLoopExpression = 36, RuleContractedBooleanPart = 37, RuleComparisonOp = 38, 
    RuleBooleanOp = 39, RuleArithmeticOp = 40, RuleWhenBlock = 41, RuleAtomic = 42, 
    RuleIdentifiers = 43, RuleInt = 44
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
  class CallStatementContext;
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
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordContext* record();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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
    RepresentationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INT();


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
    antlr4::tree::TerminalNode *USING();
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);


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
    CallStatementContext *callStatement();


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
    LoopExpressionContext *loopExpression();
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


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

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *function_name = nullptr;
    antlr4::Token *program_name = nullptr;
    BabyCobolParser::AtomicContext *atomicContext = nullptr;
    std::vector<AtomicContext *> byvalueatomicsprim;
    std::vector<AtomicContext *> byreferenceatomicsprim;
    std::vector<AtomicContext *> byvalueatomicsstruct;
    std::vector<AtomicContext *> byreferenceatomicsstruct;
    antlr4::Token *returning = nullptr;
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURNINGBYREFERENCE();
    std::vector<antlr4::tree::TerminalNode *> BYVALUE();
    antlr4::tree::TerminalNode* BYVALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIMITIVE();
    antlr4::tree::TerminalNode* PRIMITIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BYREFERENCE();
    antlr4::tree::TerminalNode* BYREFERENCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRUCT();
    antlr4::tree::TerminalNode* STRUCT(size_t i);
    std::vector<AtomicContext *> atomic();
    AtomicContext* atomic(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStatementContext* callStatement();

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

  class  DoubleLiteralContext : public AtomicContext {
  public:
    DoubleLiteralContext(AtomicContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();

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


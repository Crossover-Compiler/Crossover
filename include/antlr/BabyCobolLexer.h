
// Generated from /home/manzi/repos/Crossover/grammar/BabyCobol.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  BabyCobolLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, STRUCT = 3, PRIMITIVE = 4, IDENTIFICATION = 5, DIVISION = 6, 
    PROCEDURE = 7, DATA = 8, DISPLAY = 9, WITH = 10, NO = 11, ADVANCING = 12, 
    STOP = 13, MOVE = 14, TO = 15, SUBTRACT = 16, FROM = 17, GIVING = 18, 
    MULTIPLY = 19, BY = 20, PERFORM = 21, TIMES = 22, IF = 23, THEN = 24, 
    ELSE = 25, END = 26, ACCEPT = 27, ADD = 28, DIVIDE = 29, INTO = 30, 
    EVALUATE = 31, WHEN = 32, OTHER = 33, TRUE = 34, FALSE = 35, NOT = 36, 
    OR = 37, AND = 38, XOR = 39, NEXT = 40, SENTENCE = 41, REMAINDER = 42, 
    LOOP = 43, VARYING = 44, WHILE = 45, UNTIL = 46, OF = 47, THROUGH = 48, 
    PICTURE = 49, IS = 50, LIKE = 51, OCCURS = 52, GO = 53, SPACES = 54, 
    HIGH = 55, LOW = 56, SIGNAL = 57, ONERROR = 58, OFF = 59, ALTER = 60, 
    PROCEED = 61, CALL = 62, RETURNING = 63, BYVALUE = 64, BYREFERENCE = 65, 
    RETURNINGBYREFERENCE = 66, USING = 67, AS = 68, NEQ = 69, LTE = 70, 
    LT = 71, EQ = 72, GT = 73, GTE = 74, SYMBOL_PLUS = 75, SYMBOL_MINUS = 76, 
    SYMBOL_MULT = 77, SYMBOL_DIV = 78, SYMBOL_EXP = 79, WS = 80, FUNCTIONNAME = 81, 
    INT = 82, DOUBLE = 83, LITERAL = 84, DOT = 85, IDENTIFIER = 86, COMMENTLINE = 87
  };

  explicit BabyCobolLexer(antlr4::CharStream *input);

  ~BabyCobolLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};


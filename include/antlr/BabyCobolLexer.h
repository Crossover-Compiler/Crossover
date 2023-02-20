
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  BabyCobolLexer : public antlr4::Lexer {
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


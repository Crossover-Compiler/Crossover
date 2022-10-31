
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  BabyCobolLexer : public antlr4::Lexer {
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


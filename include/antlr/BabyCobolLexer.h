
// Generated from BabyCobol.g4 by ANTLR 4.7.2

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
    PROCEED = 70, NINE = 71, X = 72, COMMENTLINE = 73, IDENTIFIER = 74, 
    INT = 75, LITERAL = 76, DOT = 77, VAR = 78, WS = 79
  };

  BabyCobolLexer(antlr4::CharStream *input);
  ~BabyCobolLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


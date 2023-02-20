
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1


#include "BabyCobolLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BabyCobolLexerStaticData final {
  BabyCobolLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BabyCobolLexerStaticData(const BabyCobolLexerStaticData&) = delete;
  BabyCobolLexerStaticData(BabyCobolLexerStaticData&&) = delete;
  BabyCobolLexerStaticData& operator=(const BabyCobolLexerStaticData&) = delete;
  BabyCobolLexerStaticData& operator=(BabyCobolLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag babycobollexerLexerOnceFlag;
BabyCobolLexerStaticData *babycobollexerLexerStaticData = nullptr;

void babycobollexerLexerInitialize() {
  assert(babycobollexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<BabyCobolLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "STRUCT", "PRIMITIVE", "IDENTIFICATION", 
      "DIVISION", "PROCEDURE", "DATA", "DISPLAY", "WITH", "NO", "ADVANCING", 
      "STOP", "MOVE", "TO", "SUBTRACT", "FROM", "GIVING", "MULTIPLY", "BY", 
      "PERFORM", "TIMES", "IF", "THEN", "ELSE", "END", "ACCEPT", "ADD", 
      "DIVIDE", "INTO", "EVALUATE", "WHEN", "OTHER", "TRUE", "FALSE", "NOT", 
      "OR", "AND", "XOR", "NEXT", "SENTENCE", "REMAINDER", "LOOP", "VARYING", 
      "WHILE", "UNTIL", "OF", "THROUGH", "PICTURE", "IS", "LIKE", "OCCURS", 
      "GO", "SPACES", "HIGH", "LOW", "SIGNAL", "ONERROR", "OFF", "ALTER", 
      "PROCEED", "CALL", "RETURNING", "BYVALUE", "BYREFERENCE", "RETURNINGBYREFERENCE", 
      "USING", "AS", "WS", "FUNCTIONNAME", "INT", "DOUBLE", "LITERAL", "DOT", 
      "IDENTIFIER", "COMMENTLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'*'", "'-'", "'+'", "'='", "'>'", "'<'", "'>='", "'<='", "'!='", 
      "'/'", "'**'", "'('", "')'", "'STRUCT'", "'PRIMITIVE'", "'IDENTIFICATION'", 
      "'DIVISION'", "'PROCEDURE'", "'DATA'", "'DISPLAY'", "'WITH'", "'NO'", 
      "'ADVANCING'", "'STOP'", "'MOVE'", "'TO'", "'SUBTRACT'", "'FROM'", 
      "'GIVING'", "'MULTIPLY'", "'BY'", "'PERFORM'", "'TIMES'", "'IF'", 
      "'THEN'", "'ELSE'", "'END'", "'ACCEPT'", "'ADD'", "'DIVIDE'", "'INTO'", 
      "'EVALUATE'", "'WHEN'", "'OTHER'", "'TRUE'", "'FALSE'", "'NOT'", "'OR'", 
      "'AND'", "'XOR'", "'NEXT'", "'SENTENCE'", "'REMAINDER'", "'LOOP'", 
      "'VARYING'", "'WHILE'", "'UNTIL'", "'OF'", "'THROUGH'", "'PICTURE'", 
      "'IS'", "'LIKE'", "'OCCURS'", "'GO'", "'SPACES'", "'HIGH-VALUES'", 
      "'LOW-VALUES'", "'SIGNAL'", "'ON ERROR'", "'OFF'", "'ALTER'", "'PROCEED'", 
      "'CALL'", "'RETURNING'", "'BY VALUE'", "'BY REFERENCE'", "", "'USING'", 
      "'AS'", "", "", "", "", "", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "STRUCT", 
      "PRIMITIVE", "IDENTIFICATION", "DIVISION", "PROCEDURE", "DATA", "DISPLAY", 
      "WITH", "NO", "ADVANCING", "STOP", "MOVE", "TO", "SUBTRACT", "FROM", 
      "GIVING", "MULTIPLY", "BY", "PERFORM", "TIMES", "IF", "THEN", "ELSE", 
      "END", "ACCEPT", "ADD", "DIVIDE", "INTO", "EVALUATE", "WHEN", "OTHER", 
      "TRUE", "FALSE", "NOT", "OR", "AND", "XOR", "NEXT", "SENTENCE", "REMAINDER", 
      "LOOP", "VARYING", "WHILE", "UNTIL", "OF", "THROUGH", "PICTURE", "IS", 
      "LIKE", "OCCURS", "GO", "SPACES", "HIGH", "LOW", "SIGNAL", "ONERROR", 
      "OFF", "ALTER", "PROCEED", "CALL", "RETURNING", "BYVALUE", "BYREFERENCE", 
      "RETURNINGBYREFERENCE", "USING", "AS", "WS", "FUNCTIONNAME", "INT", 
      "DOUBLE", "LITERAL", "DOT", "IDENTIFIER", "COMMENTLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,87,694,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,11,1,
  	11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,
  	16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,
  	18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,
  	20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,32,1,
  	32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,1,35,1,
  	35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,
  	40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,
  	42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,44,1,
  	45,1,45,1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,48,1,
  	48,1,48,1,48,1,49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,
  	51,1,51,1,51,1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,52,1,52,1,52,1,
  	52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,54,1,54,1,54,1,
  	54,1,54,1,55,1,55,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,56,1,56,1,
  	57,1,57,1,57,1,58,1,58,1,58,1,58,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,
  	59,1,59,1,59,1,59,1,59,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,62,1,
  	62,1,62,1,62,1,62,1,62,1,62,1,63,1,63,1,63,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,
  	66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,
  	67,1,67,1,67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,69,1,
  	69,1,69,1,69,1,70,1,70,1,70,1,70,1,70,1,70,1,71,1,71,1,71,1,71,1,71,1,
  	71,1,71,1,71,1,72,1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,73,1,73,1,73,1,
  	73,1,73,1,73,1,73,1,74,1,74,1,74,1,74,1,74,1,74,1,74,1,74,1,74,1,75,1,
  	75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,76,1,76,1,
  	76,1,77,1,77,1,77,1,77,1,77,1,77,1,78,1,78,1,78,1,79,4,79,634,8,79,11,
  	79,12,79,635,1,79,1,79,1,80,1,80,1,80,1,80,1,81,4,81,645,8,81,11,81,12,
  	81,646,1,82,3,82,650,8,82,1,82,1,82,1,82,1,82,1,83,1,83,4,83,658,8,83,
  	11,83,12,83,659,1,83,1,83,1,84,1,84,1,85,4,85,667,8,85,11,85,12,85,668,
  	1,85,4,85,672,8,85,11,85,12,85,673,1,85,4,85,677,8,85,11,85,12,85,678,
  	5,85,681,8,85,10,85,12,85,684,9,85,1,86,1,86,5,86,688,8,86,10,86,12,86,
  	691,9,86,1,86,1,86,0,0,87,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,
  	33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,
  	89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,
  	111,56,113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,64,129,65,
  	131,66,133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,74,149,75,
  	151,76,153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,84,169,85,
  	171,86,173,87,1,0,7,3,0,9,10,12,13,32,32,1,0,48,57,2,0,43,43,45,45,1,
  	0,34,34,3,0,48,57,65,90,97,122,2,0,45,45,95,95,2,0,10,10,13,13,702,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,
  	0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,
  	87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,
  	0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,
  	0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,
  	0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,
  	0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,
  	0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,
  	0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,
  	0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,
  	0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,1,175,1,0,0,0,3,177,1,
  	0,0,0,5,179,1,0,0,0,7,181,1,0,0,0,9,183,1,0,0,0,11,185,1,0,0,0,13,187,
  	1,0,0,0,15,190,1,0,0,0,17,193,1,0,0,0,19,196,1,0,0,0,21,198,1,0,0,0,23,
  	201,1,0,0,0,25,203,1,0,0,0,27,205,1,0,0,0,29,212,1,0,0,0,31,222,1,0,0,
  	0,33,237,1,0,0,0,35,246,1,0,0,0,37,256,1,0,0,0,39,261,1,0,0,0,41,269,
  	1,0,0,0,43,274,1,0,0,0,45,277,1,0,0,0,47,287,1,0,0,0,49,292,1,0,0,0,51,
  	297,1,0,0,0,53,300,1,0,0,0,55,309,1,0,0,0,57,314,1,0,0,0,59,321,1,0,0,
  	0,61,330,1,0,0,0,63,333,1,0,0,0,65,341,1,0,0,0,67,347,1,0,0,0,69,350,
  	1,0,0,0,71,355,1,0,0,0,73,360,1,0,0,0,75,364,1,0,0,0,77,371,1,0,0,0,79,
  	375,1,0,0,0,81,382,1,0,0,0,83,387,1,0,0,0,85,396,1,0,0,0,87,401,1,0,0,
  	0,89,407,1,0,0,0,91,412,1,0,0,0,93,418,1,0,0,0,95,422,1,0,0,0,97,425,
  	1,0,0,0,99,429,1,0,0,0,101,433,1,0,0,0,103,438,1,0,0,0,105,447,1,0,0,
  	0,107,457,1,0,0,0,109,462,1,0,0,0,111,470,1,0,0,0,113,476,1,0,0,0,115,
  	482,1,0,0,0,117,485,1,0,0,0,119,493,1,0,0,0,121,501,1,0,0,0,123,504,1,
  	0,0,0,125,509,1,0,0,0,127,516,1,0,0,0,129,519,1,0,0,0,131,526,1,0,0,0,
  	133,538,1,0,0,0,135,549,1,0,0,0,137,556,1,0,0,0,139,565,1,0,0,0,141,569,
  	1,0,0,0,143,575,1,0,0,0,145,583,1,0,0,0,147,588,1,0,0,0,149,598,1,0,0,
  	0,151,607,1,0,0,0,153,620,1,0,0,0,155,623,1,0,0,0,157,629,1,0,0,0,159,
  	633,1,0,0,0,161,639,1,0,0,0,163,644,1,0,0,0,165,649,1,0,0,0,167,655,1,
  	0,0,0,169,663,1,0,0,0,171,666,1,0,0,0,173,685,1,0,0,0,175,176,5,42,0,
  	0,176,2,1,0,0,0,177,178,5,45,0,0,178,4,1,0,0,0,179,180,5,43,0,0,180,6,
  	1,0,0,0,181,182,5,61,0,0,182,8,1,0,0,0,183,184,5,62,0,0,184,10,1,0,0,
  	0,185,186,5,60,0,0,186,12,1,0,0,0,187,188,5,62,0,0,188,189,5,61,0,0,189,
  	14,1,0,0,0,190,191,5,60,0,0,191,192,5,61,0,0,192,16,1,0,0,0,193,194,5,
  	33,0,0,194,195,5,61,0,0,195,18,1,0,0,0,196,197,5,47,0,0,197,20,1,0,0,
  	0,198,199,5,42,0,0,199,200,5,42,0,0,200,22,1,0,0,0,201,202,5,40,0,0,202,
  	24,1,0,0,0,203,204,5,41,0,0,204,26,1,0,0,0,205,206,5,83,0,0,206,207,5,
  	84,0,0,207,208,5,82,0,0,208,209,5,85,0,0,209,210,5,67,0,0,210,211,5,84,
  	0,0,211,28,1,0,0,0,212,213,5,80,0,0,213,214,5,82,0,0,214,215,5,73,0,0,
  	215,216,5,77,0,0,216,217,5,73,0,0,217,218,5,84,0,0,218,219,5,73,0,0,219,
  	220,5,86,0,0,220,221,5,69,0,0,221,30,1,0,0,0,222,223,5,73,0,0,223,224,
  	5,68,0,0,224,225,5,69,0,0,225,226,5,78,0,0,226,227,5,84,0,0,227,228,5,
  	73,0,0,228,229,5,70,0,0,229,230,5,73,0,0,230,231,5,67,0,0,231,232,5,65,
  	0,0,232,233,5,84,0,0,233,234,5,73,0,0,234,235,5,79,0,0,235,236,5,78,0,
  	0,236,32,1,0,0,0,237,238,5,68,0,0,238,239,5,73,0,0,239,240,5,86,0,0,240,
  	241,5,73,0,0,241,242,5,83,0,0,242,243,5,73,0,0,243,244,5,79,0,0,244,245,
  	5,78,0,0,245,34,1,0,0,0,246,247,5,80,0,0,247,248,5,82,0,0,248,249,5,79,
  	0,0,249,250,5,67,0,0,250,251,5,69,0,0,251,252,5,68,0,0,252,253,5,85,0,
  	0,253,254,5,82,0,0,254,255,5,69,0,0,255,36,1,0,0,0,256,257,5,68,0,0,257,
  	258,5,65,0,0,258,259,5,84,0,0,259,260,5,65,0,0,260,38,1,0,0,0,261,262,
  	5,68,0,0,262,263,5,73,0,0,263,264,5,83,0,0,264,265,5,80,0,0,265,266,5,
  	76,0,0,266,267,5,65,0,0,267,268,5,89,0,0,268,40,1,0,0,0,269,270,5,87,
  	0,0,270,271,5,73,0,0,271,272,5,84,0,0,272,273,5,72,0,0,273,42,1,0,0,0,
  	274,275,5,78,0,0,275,276,5,79,0,0,276,44,1,0,0,0,277,278,5,65,0,0,278,
  	279,5,68,0,0,279,280,5,86,0,0,280,281,5,65,0,0,281,282,5,78,0,0,282,283,
  	5,67,0,0,283,284,5,73,0,0,284,285,5,78,0,0,285,286,5,71,0,0,286,46,1,
  	0,0,0,287,288,5,83,0,0,288,289,5,84,0,0,289,290,5,79,0,0,290,291,5,80,
  	0,0,291,48,1,0,0,0,292,293,5,77,0,0,293,294,5,79,0,0,294,295,5,86,0,0,
  	295,296,5,69,0,0,296,50,1,0,0,0,297,298,5,84,0,0,298,299,5,79,0,0,299,
  	52,1,0,0,0,300,301,5,83,0,0,301,302,5,85,0,0,302,303,5,66,0,0,303,304,
  	5,84,0,0,304,305,5,82,0,0,305,306,5,65,0,0,306,307,5,67,0,0,307,308,5,
  	84,0,0,308,54,1,0,0,0,309,310,5,70,0,0,310,311,5,82,0,0,311,312,5,79,
  	0,0,312,313,5,77,0,0,313,56,1,0,0,0,314,315,5,71,0,0,315,316,5,73,0,0,
  	316,317,5,86,0,0,317,318,5,73,0,0,318,319,5,78,0,0,319,320,5,71,0,0,320,
  	58,1,0,0,0,321,322,5,77,0,0,322,323,5,85,0,0,323,324,5,76,0,0,324,325,
  	5,84,0,0,325,326,5,73,0,0,326,327,5,80,0,0,327,328,5,76,0,0,328,329,5,
  	89,0,0,329,60,1,0,0,0,330,331,5,66,0,0,331,332,5,89,0,0,332,62,1,0,0,
  	0,333,334,5,80,0,0,334,335,5,69,0,0,335,336,5,82,0,0,336,337,5,70,0,0,
  	337,338,5,79,0,0,338,339,5,82,0,0,339,340,5,77,0,0,340,64,1,0,0,0,341,
  	342,5,84,0,0,342,343,5,73,0,0,343,344,5,77,0,0,344,345,5,69,0,0,345,346,
  	5,83,0,0,346,66,1,0,0,0,347,348,5,73,0,0,348,349,5,70,0,0,349,68,1,0,
  	0,0,350,351,5,84,0,0,351,352,5,72,0,0,352,353,5,69,0,0,353,354,5,78,0,
  	0,354,70,1,0,0,0,355,356,5,69,0,0,356,357,5,76,0,0,357,358,5,83,0,0,358,
  	359,5,69,0,0,359,72,1,0,0,0,360,361,5,69,0,0,361,362,5,78,0,0,362,363,
  	5,68,0,0,363,74,1,0,0,0,364,365,5,65,0,0,365,366,5,67,0,0,366,367,5,67,
  	0,0,367,368,5,69,0,0,368,369,5,80,0,0,369,370,5,84,0,0,370,76,1,0,0,0,
  	371,372,5,65,0,0,372,373,5,68,0,0,373,374,5,68,0,0,374,78,1,0,0,0,375,
  	376,5,68,0,0,376,377,5,73,0,0,377,378,5,86,0,0,378,379,5,73,0,0,379,380,
  	5,68,0,0,380,381,5,69,0,0,381,80,1,0,0,0,382,383,5,73,0,0,383,384,5,78,
  	0,0,384,385,5,84,0,0,385,386,5,79,0,0,386,82,1,0,0,0,387,388,5,69,0,0,
  	388,389,5,86,0,0,389,390,5,65,0,0,390,391,5,76,0,0,391,392,5,85,0,0,392,
  	393,5,65,0,0,393,394,5,84,0,0,394,395,5,69,0,0,395,84,1,0,0,0,396,397,
  	5,87,0,0,397,398,5,72,0,0,398,399,5,69,0,0,399,400,5,78,0,0,400,86,1,
  	0,0,0,401,402,5,79,0,0,402,403,5,84,0,0,403,404,5,72,0,0,404,405,5,69,
  	0,0,405,406,5,82,0,0,406,88,1,0,0,0,407,408,5,84,0,0,408,409,5,82,0,0,
  	409,410,5,85,0,0,410,411,5,69,0,0,411,90,1,0,0,0,412,413,5,70,0,0,413,
  	414,5,65,0,0,414,415,5,76,0,0,415,416,5,83,0,0,416,417,5,69,0,0,417,92,
  	1,0,0,0,418,419,5,78,0,0,419,420,5,79,0,0,420,421,5,84,0,0,421,94,1,0,
  	0,0,422,423,5,79,0,0,423,424,5,82,0,0,424,96,1,0,0,0,425,426,5,65,0,0,
  	426,427,5,78,0,0,427,428,5,68,0,0,428,98,1,0,0,0,429,430,5,88,0,0,430,
  	431,5,79,0,0,431,432,5,82,0,0,432,100,1,0,0,0,433,434,5,78,0,0,434,435,
  	5,69,0,0,435,436,5,88,0,0,436,437,5,84,0,0,437,102,1,0,0,0,438,439,5,
  	83,0,0,439,440,5,69,0,0,440,441,5,78,0,0,441,442,5,84,0,0,442,443,5,69,
  	0,0,443,444,5,78,0,0,444,445,5,67,0,0,445,446,5,69,0,0,446,104,1,0,0,
  	0,447,448,5,82,0,0,448,449,5,69,0,0,449,450,5,77,0,0,450,451,5,65,0,0,
  	451,452,5,73,0,0,452,453,5,78,0,0,453,454,5,68,0,0,454,455,5,69,0,0,455,
  	456,5,82,0,0,456,106,1,0,0,0,457,458,5,76,0,0,458,459,5,79,0,0,459,460,
  	5,79,0,0,460,461,5,80,0,0,461,108,1,0,0,0,462,463,5,86,0,0,463,464,5,
  	65,0,0,464,465,5,82,0,0,465,466,5,89,0,0,466,467,5,73,0,0,467,468,5,78,
  	0,0,468,469,5,71,0,0,469,110,1,0,0,0,470,471,5,87,0,0,471,472,5,72,0,
  	0,472,473,5,73,0,0,473,474,5,76,0,0,474,475,5,69,0,0,475,112,1,0,0,0,
  	476,477,5,85,0,0,477,478,5,78,0,0,478,479,5,84,0,0,479,480,5,73,0,0,480,
  	481,5,76,0,0,481,114,1,0,0,0,482,483,5,79,0,0,483,484,5,70,0,0,484,116,
  	1,0,0,0,485,486,5,84,0,0,486,487,5,72,0,0,487,488,5,82,0,0,488,489,5,
  	79,0,0,489,490,5,85,0,0,490,491,5,71,0,0,491,492,5,72,0,0,492,118,1,0,
  	0,0,493,494,5,80,0,0,494,495,5,73,0,0,495,496,5,67,0,0,496,497,5,84,0,
  	0,497,498,5,85,0,0,498,499,5,82,0,0,499,500,5,69,0,0,500,120,1,0,0,0,
  	501,502,5,73,0,0,502,503,5,83,0,0,503,122,1,0,0,0,504,505,5,76,0,0,505,
  	506,5,73,0,0,506,507,5,75,0,0,507,508,5,69,0,0,508,124,1,0,0,0,509,510,
  	5,79,0,0,510,511,5,67,0,0,511,512,5,67,0,0,512,513,5,85,0,0,513,514,5,
  	82,0,0,514,515,5,83,0,0,515,126,1,0,0,0,516,517,5,71,0,0,517,518,5,79,
  	0,0,518,128,1,0,0,0,519,520,5,83,0,0,520,521,5,80,0,0,521,522,5,65,0,
  	0,522,523,5,67,0,0,523,524,5,69,0,0,524,525,5,83,0,0,525,130,1,0,0,0,
  	526,527,5,72,0,0,527,528,5,73,0,0,528,529,5,71,0,0,529,530,5,72,0,0,530,
  	531,5,45,0,0,531,532,5,86,0,0,532,533,5,65,0,0,533,534,5,76,0,0,534,535,
  	5,85,0,0,535,536,5,69,0,0,536,537,5,83,0,0,537,132,1,0,0,0,538,539,5,
  	76,0,0,539,540,5,79,0,0,540,541,5,87,0,0,541,542,5,45,0,0,542,543,5,86,
  	0,0,543,544,5,65,0,0,544,545,5,76,0,0,545,546,5,85,0,0,546,547,5,69,0,
  	0,547,548,5,83,0,0,548,134,1,0,0,0,549,550,5,83,0,0,550,551,5,73,0,0,
  	551,552,5,71,0,0,552,553,5,78,0,0,553,554,5,65,0,0,554,555,5,76,0,0,555,
  	136,1,0,0,0,556,557,5,79,0,0,557,558,5,78,0,0,558,559,5,32,0,0,559,560,
  	5,69,0,0,560,561,5,82,0,0,561,562,5,82,0,0,562,563,5,79,0,0,563,564,5,
  	82,0,0,564,138,1,0,0,0,565,566,5,79,0,0,566,567,5,70,0,0,567,568,5,70,
  	0,0,568,140,1,0,0,0,569,570,5,65,0,0,570,571,5,76,0,0,571,572,5,84,0,
  	0,572,573,5,69,0,0,573,574,5,82,0,0,574,142,1,0,0,0,575,576,5,80,0,0,
  	576,577,5,82,0,0,577,578,5,79,0,0,578,579,5,67,0,0,579,580,5,69,0,0,580,
  	581,5,69,0,0,581,582,5,68,0,0,582,144,1,0,0,0,583,584,5,67,0,0,584,585,
  	5,65,0,0,585,586,5,76,0,0,586,587,5,76,0,0,587,146,1,0,0,0,588,589,5,
  	82,0,0,589,590,5,69,0,0,590,591,5,84,0,0,591,592,5,85,0,0,592,593,5,82,
  	0,0,593,594,5,78,0,0,594,595,5,73,0,0,595,596,5,78,0,0,596,597,5,71,0,
  	0,597,148,1,0,0,0,598,599,5,66,0,0,599,600,5,89,0,0,600,601,5,32,0,0,
  	601,602,5,86,0,0,602,603,5,65,0,0,603,604,5,76,0,0,604,605,5,85,0,0,605,
  	606,5,69,0,0,606,150,1,0,0,0,607,608,5,66,0,0,608,609,5,89,0,0,609,610,
  	5,32,0,0,610,611,5,82,0,0,611,612,5,69,0,0,612,613,5,70,0,0,613,614,5,
  	69,0,0,614,615,5,82,0,0,615,616,5,69,0,0,616,617,5,78,0,0,617,618,5,67,
  	0,0,618,619,5,69,0,0,619,152,1,0,0,0,620,621,3,147,73,0,621,622,3,151,
  	75,0,622,154,1,0,0,0,623,624,5,85,0,0,624,625,5,83,0,0,625,626,5,73,0,
  	0,626,627,5,78,0,0,627,628,5,71,0,0,628,156,1,0,0,0,629,630,5,65,0,0,
  	630,631,5,83,0,0,631,158,1,0,0,0,632,634,7,0,0,0,633,632,1,0,0,0,634,
  	635,1,0,0,0,635,633,1,0,0,0,635,636,1,0,0,0,636,637,1,0,0,0,637,638,6,
  	79,0,0,638,160,1,0,0,0,639,640,5,39,0,0,640,641,3,171,85,0,641,642,5,
  	39,0,0,642,162,1,0,0,0,643,645,7,1,0,0,644,643,1,0,0,0,645,646,1,0,0,
  	0,646,644,1,0,0,0,646,647,1,0,0,0,647,164,1,0,0,0,648,650,7,2,0,0,649,
  	648,1,0,0,0,649,650,1,0,0,0,650,651,1,0,0,0,651,652,3,163,81,0,652,653,
  	5,44,0,0,653,654,3,163,81,0,654,166,1,0,0,0,655,657,5,34,0,0,656,658,
  	8,3,0,0,657,656,1,0,0,0,658,659,1,0,0,0,659,657,1,0,0,0,659,660,1,0,0,
  	0,660,661,1,0,0,0,661,662,5,34,0,0,662,168,1,0,0,0,663,664,5,46,0,0,664,
  	170,1,0,0,0,665,667,7,4,0,0,666,665,1,0,0,0,667,668,1,0,0,0,668,666,1,
  	0,0,0,668,669,1,0,0,0,669,682,1,0,0,0,670,672,7,5,0,0,671,670,1,0,0,0,
  	672,673,1,0,0,0,673,671,1,0,0,0,673,674,1,0,0,0,674,676,1,0,0,0,675,677,
  	7,4,0,0,676,675,1,0,0,0,677,678,1,0,0,0,678,676,1,0,0,0,678,679,1,0,0,
  	0,679,681,1,0,0,0,680,671,1,0,0,0,681,684,1,0,0,0,682,680,1,0,0,0,682,
  	683,1,0,0,0,683,172,1,0,0,0,684,682,1,0,0,0,685,689,5,42,0,0,686,688,
  	8,6,0,0,687,686,1,0,0,0,688,691,1,0,0,0,689,687,1,0,0,0,689,690,1,0,0,
  	0,690,692,1,0,0,0,691,689,1,0,0,0,692,693,6,86,0,0,693,174,1,0,0,0,10,
  	0,635,646,649,659,668,673,678,682,689,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  babycobollexerLexerStaticData = staticData.release();
}

}

BabyCobolLexer::BabyCobolLexer(CharStream *input) : Lexer(input) {
  BabyCobolLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *babycobollexerLexerStaticData->atn, babycobollexerLexerStaticData->decisionToDFA, babycobollexerLexerStaticData->sharedContextCache);
}

BabyCobolLexer::~BabyCobolLexer() {
  delete _interpreter;
}

std::string BabyCobolLexer::getGrammarFileName() const {
  return "BabyCobol.g4";
}

const std::vector<std::string>& BabyCobolLexer::getRuleNames() const {
  return babycobollexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BabyCobolLexer::getChannelNames() const {
  return babycobollexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BabyCobolLexer::getModeNames() const {
  return babycobollexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BabyCobolLexer::getVocabulary() const {
  return babycobollexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BabyCobolLexer::getSerializedATN() const {
  return babycobollexerLexerStaticData->serializedATN;
}

const atn::ATN& BabyCobolLexer::getATN() const {
  return *babycobollexerLexerStaticData->atn;
}




void BabyCobolLexer::initialize() {
  std::call_once(babycobollexerLexerOnceFlag, babycobollexerLexerInitialize);
}

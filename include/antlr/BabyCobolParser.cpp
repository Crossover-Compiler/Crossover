
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1


#include "BabyCobolVisitor.h"

#include "BabyCobolParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BabyCobolParserStaticData final {
  BabyCobolParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BabyCobolParserStaticData(const BabyCobolParserStaticData&) = delete;
  BabyCobolParserStaticData(BabyCobolParserStaticData&&) = delete;
  BabyCobolParserStaticData& operator=(const BabyCobolParserStaticData&) = delete;
  BabyCobolParserStaticData& operator=(BabyCobolParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag babycobolParserOnceFlag;
BabyCobolParserStaticData *babycobolParserStaticData = nullptr;

void babycobolParserInitialize() {
  assert(babycobolParserStaticData == nullptr);
  auto staticData = std::make_unique<BabyCobolParserStaticData>(
    std::vector<std::string>{
      "program", "identification", "name", "value", "data", "variable", 
      "level", "representation", "procedure", "paragraph", "sentence", "statement", 
      "label", "display", "stop", "move", "subtract", "multiply", "perform", 
      "ifStatement", "accept", "add", "divide", "evaluate", "nextSentence", 
      "loop", "gotoStatement", "signal", "alter", "anyExpression", "arithmeticExpression", 
      "stringExpression", "booleanExpression", "loopExpression", "contractedBooleanPart", 
      "comparisonOp", "booleanOp", "arithmeticOp", "whenBlock", "atomic", 
      "identifiers"
    },
    std::vector<std::string>{
      "", "'*'", "'-'", "'+'", "'='", "'>'", "'<'", "'>='", "'<='", "'!='", 
      "'/'", "'**'", "'('", "')'", "'IDENTIFICATION'", "'DIVISION'", "'PROCEDURE'", 
      "'DATA'", "'DISPLAY'", "'WITH'", "'NO'", "'ADVANCING'", "'STOP'", 
      "'MOVE'", "'TO'", "'SUBTRACT'", "'FROM'", "'GIVING'", "'MULTIPLY'", 
      "'BY'", "'PERFORM'", "'TIMES'", "'IF'", "'THEN'", "'ELSE'", "'END'", 
      "'ACCEPT'", "'ADD'", "'DIVIDE'", "'INTO'", "'EVALUATE'", "'WHEN'", 
      "'OTHER'", "'TRUE'", "'FALSE'", "'NOT'", "'OR'", "'AND'", "'XOR'", 
      "'NEXT'", "'SENTENCE'", "'REMAINDER'", "'LOOP'", "'VARYING'", "'WHILE'", 
      "'UNTIL'", "'OF'", "'THROUGH'", "'PICTURE'", "'IS'", "'LIKE'", "'OCCURS'", 
      "'GO'", "'SPACES'", "'HIGH-VALUES'", "'LOW-VALUES'", "'SIGNAL'", "'ON ERROR'", 
      "'OFF'", "'ALTER'", "'PROCEED'", "", "", "", "", "", "", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFICATION", 
      "DIVISION", "PROCEDURE", "DATA", "DISPLAY", "WITH", "NO", "ADVANCING", 
      "STOP", "MOVE", "TO", "SUBTRACT", "FROM", "GIVING", "MULTIPLY", "BY", 
      "PERFORM", "TIMES", "IF", "THEN", "ELSE", "END", "ACCEPT", "ADD", 
      "DIVIDE", "INTO", "EVALUATE", "WHEN", "OTHER", "TRUE", "FALSE", "NOT", 
      "OR", "AND", "XOR", "NEXT", "SENTENCE", "REMAINDER", "LOOP", "VARYING", 
      "WHILE", "UNTIL", "OF", "THROUGH", "PICTURE", "IS", "LIKE", "OCCURS", 
      "GO", "SPACES", "HIGH", "LOW", "SIGNAL", "ONERROR", "OFF", "ALTER", 
      "PROCEED", "NINE", "X", "COMMENTLINE", "IDENTIFIER", "INT", "LITERAL", 
      "DOT", "VAR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,79,468,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,1,0,1,0,3,0,85,8,
  	0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,98,8,1,10,1,12,1,101,
  	9,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,5,4,110,8,4,10,4,12,4,113,9,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,3,5,122,8,5,1,5,1,5,1,5,3,5,127,8,5,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,8,1,8,5,8,139,8,8,10,8,12,8,142,9,8,1,8,4,8,145,8,
  	8,11,8,12,8,146,1,9,1,9,1,9,4,9,152,8,9,11,9,12,9,153,1,10,4,10,157,8,
  	10,11,10,12,10,158,1,10,1,10,1,11,3,11,164,8,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,182,8,
  	11,1,12,1,12,1,13,1,13,4,13,188,8,13,11,13,12,13,189,1,13,1,13,1,13,3,
  	13,195,8,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,3,15,204,8,15,1,15,1,15,
  	4,15,208,8,15,11,15,12,15,209,1,16,1,16,4,16,214,8,16,11,16,12,16,215,
  	1,16,1,16,1,16,1,16,3,16,222,8,16,1,17,1,17,1,17,1,17,4,17,228,8,17,11,
  	17,12,17,229,1,17,1,17,3,17,234,8,17,1,18,1,18,1,18,1,18,3,18,240,8,18,
  	1,18,1,18,1,18,3,18,245,8,18,1,19,1,19,1,19,1,19,4,19,251,8,19,11,19,
  	12,19,252,1,19,1,19,4,19,257,8,19,11,19,12,19,258,3,19,261,8,19,1,19,
  	1,19,1,20,1,20,4,20,267,8,20,11,20,12,20,268,1,21,1,21,4,21,273,8,21,
  	11,21,12,21,274,1,21,1,21,1,21,1,21,3,21,281,8,21,1,22,1,22,1,22,1,22,
  	4,22,287,8,22,11,22,12,22,288,1,22,1,22,3,22,293,8,22,1,22,1,22,3,22,
  	297,8,22,1,23,1,23,1,23,5,23,302,8,23,10,23,12,23,305,9,23,1,23,1,23,
  	1,24,1,24,1,24,1,25,1,25,5,25,314,8,25,10,25,12,25,317,9,25,1,25,1,25,
  	1,26,1,26,1,26,1,26,1,27,1,27,1,27,3,27,328,8,27,1,27,1,27,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,3,29,342,8,29,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,5,30,351,8,30,10,30,12,30,354,9,30,1,31,1,31,1,31,
  	1,31,1,31,1,31,5,31,362,8,31,10,31,12,31,365,9,31,1,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,4,32,374,8,32,11,32,12,32,375,1,32,1,32,1,32,1,32,1,32,
  	1,32,3,32,384,8,32,1,32,1,32,1,32,1,32,5,32,390,8,32,10,32,12,32,393,
  	9,32,1,33,1,33,3,33,397,8,33,1,33,1,33,3,33,401,8,33,1,33,1,33,3,33,405,
  	8,33,1,33,1,33,3,33,409,8,33,1,33,1,33,1,33,1,33,1,33,3,33,416,8,33,1,
  	34,1,34,3,34,420,8,34,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,
  	38,4,38,432,8,38,11,38,12,38,433,1,38,4,38,437,8,38,11,38,12,38,438,1,
  	38,1,38,1,38,4,38,444,8,38,11,38,12,38,445,3,38,448,8,38,1,39,1,39,1,
  	39,3,39,453,8,39,1,40,1,40,1,40,5,40,458,8,40,10,40,12,40,461,9,40,1,
  	40,1,40,1,40,3,40,466,8,40,1,40,0,3,60,62,64,41,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,0,6,1,0,71,72,1,0,1,2,2,0,35,35,77,77,1,0,
  	4,9,1,0,46,48,2,0,1,3,10,11,502,0,82,1,0,0,0,2,89,1,0,0,0,4,102,1,0,0,
  	0,6,104,1,0,0,0,8,106,1,0,0,0,10,114,1,0,0,0,12,130,1,0,0,0,14,132,1,
  	0,0,0,16,134,1,0,0,0,18,148,1,0,0,0,20,156,1,0,0,0,22,163,1,0,0,0,24,
  	183,1,0,0,0,26,185,1,0,0,0,28,196,1,0,0,0,30,198,1,0,0,0,32,211,1,0,0,
  	0,34,223,1,0,0,0,36,235,1,0,0,0,38,246,1,0,0,0,40,264,1,0,0,0,42,270,
  	1,0,0,0,44,282,1,0,0,0,46,298,1,0,0,0,48,308,1,0,0,0,50,311,1,0,0,0,52,
  	320,1,0,0,0,54,324,1,0,0,0,56,331,1,0,0,0,58,341,1,0,0,0,60,343,1,0,0,
  	0,62,355,1,0,0,0,64,383,1,0,0,0,66,415,1,0,0,0,68,417,1,0,0,0,70,423,
  	1,0,0,0,72,425,1,0,0,0,74,427,1,0,0,0,76,447,1,0,0,0,78,452,1,0,0,0,80,
  	454,1,0,0,0,82,84,3,2,1,0,83,85,3,8,4,0,84,83,1,0,0,0,84,85,1,0,0,0,85,
  	86,1,0,0,0,86,87,3,16,8,0,87,88,5,0,0,1,88,1,1,0,0,0,89,90,5,14,0,0,90,
  	91,5,15,0,0,91,99,5,77,0,0,92,93,3,4,2,0,93,94,5,77,0,0,94,95,3,6,3,0,
  	95,96,5,77,0,0,96,98,1,0,0,0,97,92,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,
  	0,99,100,1,0,0,0,100,3,1,0,0,0,101,99,1,0,0,0,102,103,5,74,0,0,103,5,
  	1,0,0,0,104,105,5,76,0,0,105,7,1,0,0,0,106,107,5,17,0,0,107,111,5,15,
  	0,0,108,110,3,10,5,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,
  	111,112,1,0,0,0,112,9,1,0,0,0,113,111,1,0,0,0,114,115,3,12,6,0,115,121,
  	5,74,0,0,116,117,5,58,0,0,117,118,5,59,0,0,118,122,3,14,7,0,119,120,5,
  	60,0,0,120,122,3,80,40,0,121,116,1,0,0,0,121,119,1,0,0,0,121,122,1,0,
  	0,0,122,126,1,0,0,0,123,124,5,61,0,0,124,125,5,75,0,0,125,127,5,31,0,
  	0,126,123,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,129,5,77,0,0,129,
  	11,1,0,0,0,130,131,5,75,0,0,131,13,1,0,0,0,132,133,7,0,0,0,133,15,1,0,
  	0,0,134,135,5,16,0,0,135,136,5,15,0,0,136,140,5,77,0,0,137,139,3,20,10,
  	0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,
  	144,1,0,0,0,142,140,1,0,0,0,143,145,3,18,9,0,144,143,1,0,0,0,145,146,
  	1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,17,1,0,0,0,148,149,3,24,12,
  	0,149,151,5,77,0,0,150,152,3,20,10,0,151,150,1,0,0,0,152,153,1,0,0,0,
  	153,151,1,0,0,0,153,154,1,0,0,0,154,19,1,0,0,0,155,157,3,22,11,0,156,
  	155,1,0,0,0,157,158,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,160,1,
  	0,0,0,160,161,5,77,0,0,161,21,1,0,0,0,162,164,7,1,0,0,163,162,1,0,0,0,
  	163,164,1,0,0,0,164,181,1,0,0,0,165,182,3,26,13,0,166,182,3,28,14,0,167,
  	182,3,30,15,0,168,182,3,32,16,0,169,182,3,34,17,0,170,182,3,36,18,0,171,
  	182,3,38,19,0,172,182,3,40,20,0,173,182,3,42,21,0,174,182,3,44,22,0,175,
  	182,3,46,23,0,176,182,3,48,24,0,177,182,3,50,25,0,178,182,3,52,26,0,179,
  	182,3,54,27,0,180,182,3,56,28,0,181,165,1,0,0,0,181,166,1,0,0,0,181,167,
  	1,0,0,0,181,168,1,0,0,0,181,169,1,0,0,0,181,170,1,0,0,0,181,171,1,0,0,
  	0,181,172,1,0,0,0,181,173,1,0,0,0,181,174,1,0,0,0,181,175,1,0,0,0,181,
  	176,1,0,0,0,181,177,1,0,0,0,181,178,1,0,0,0,181,179,1,0,0,0,181,180,1,
  	0,0,0,182,23,1,0,0,0,183,184,5,74,0,0,184,25,1,0,0,0,185,187,5,18,0,0,
  	186,188,3,78,39,0,187,186,1,0,0,0,188,189,1,0,0,0,189,187,1,0,0,0,189,
  	190,1,0,0,0,190,194,1,0,0,0,191,192,5,19,0,0,192,193,5,20,0,0,193,195,
  	5,21,0,0,194,191,1,0,0,0,194,195,1,0,0,0,195,27,1,0,0,0,196,197,5,22,
  	0,0,197,29,1,0,0,0,198,203,5,23,0,0,199,204,5,63,0,0,200,204,5,64,0,0,
  	201,204,5,65,0,0,202,204,3,78,39,0,203,199,1,0,0,0,203,200,1,0,0,0,203,
  	201,1,0,0,0,203,202,1,0,0,0,204,205,1,0,0,0,205,207,5,24,0,0,206,208,
  	3,80,40,0,207,206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,209,210,1,0,
  	0,0,210,31,1,0,0,0,211,213,5,25,0,0,212,214,3,78,39,0,213,212,1,0,0,0,
  	214,215,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,217,1,0,0,0,217,218,
  	5,26,0,0,218,221,3,78,39,0,219,220,5,27,0,0,220,222,3,80,40,0,221,219,
  	1,0,0,0,221,222,1,0,0,0,222,33,1,0,0,0,223,224,5,28,0,0,224,225,3,78,
  	39,0,225,227,5,29,0,0,226,228,3,78,39,0,227,226,1,0,0,0,228,229,1,0,0,
  	0,229,227,1,0,0,0,229,230,1,0,0,0,230,233,1,0,0,0,231,232,5,27,0,0,232,
  	234,3,80,40,0,233,231,1,0,0,0,233,234,1,0,0,0,234,35,1,0,0,0,235,236,
  	5,30,0,0,236,239,3,24,12,0,237,238,5,57,0,0,238,240,3,24,12,0,239,237,
  	1,0,0,0,239,240,1,0,0,0,240,244,1,0,0,0,241,242,3,78,39,0,242,243,5,31,
  	0,0,243,245,1,0,0,0,244,241,1,0,0,0,244,245,1,0,0,0,245,37,1,0,0,0,246,
  	247,5,32,0,0,247,248,3,64,32,0,248,250,5,33,0,0,249,251,3,22,11,0,250,
  	249,1,0,0,0,251,252,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,260,1,
  	0,0,0,254,256,5,34,0,0,255,257,3,22,11,0,256,255,1,0,0,0,257,258,1,0,
  	0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,261,1,0,0,0,260,254,1,0,0,0,260,
  	261,1,0,0,0,261,262,1,0,0,0,262,263,7,2,0,0,263,39,1,0,0,0,264,266,5,
  	36,0,0,265,267,3,80,40,0,266,265,1,0,0,0,267,268,1,0,0,0,268,266,1,0,
  	0,0,268,269,1,0,0,0,269,41,1,0,0,0,270,272,5,37,0,0,271,273,3,78,39,0,
  	272,271,1,0,0,0,273,274,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,276,
  	1,0,0,0,276,277,5,24,0,0,277,280,3,78,39,0,278,279,5,27,0,0,279,281,3,
  	80,40,0,280,278,1,0,0,0,280,281,1,0,0,0,281,43,1,0,0,0,282,283,5,38,0,
  	0,283,284,3,78,39,0,284,286,5,39,0,0,285,287,3,78,39,0,286,285,1,0,0,
  	0,287,288,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,292,1,0,0,0,290,
  	291,5,27,0,0,291,293,3,80,40,0,292,290,1,0,0,0,292,293,1,0,0,0,293,296,
  	1,0,0,0,294,295,5,51,0,0,295,297,3,80,40,0,296,294,1,0,0,0,296,297,1,
  	0,0,0,297,45,1,0,0,0,298,299,5,40,0,0,299,303,3,58,29,0,300,302,3,76,
  	38,0,301,300,1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,
  	304,306,1,0,0,0,305,303,1,0,0,0,306,307,5,35,0,0,307,47,1,0,0,0,308,309,
  	5,49,0,0,309,310,5,50,0,0,310,49,1,0,0,0,311,315,5,52,0,0,312,314,3,66,
  	33,0,313,312,1,0,0,0,314,317,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,
  	316,318,1,0,0,0,317,315,1,0,0,0,318,319,5,35,0,0,319,51,1,0,0,0,320,321,
  	5,62,0,0,321,322,5,24,0,0,322,323,3,4,2,0,323,53,1,0,0,0,324,327,5,66,
  	0,0,325,328,3,24,12,0,326,328,5,68,0,0,327,325,1,0,0,0,327,326,1,0,0,
  	0,328,329,1,0,0,0,329,330,5,67,0,0,330,55,1,0,0,0,331,332,5,69,0,0,332,
  	333,3,24,12,0,333,334,5,24,0,0,334,335,5,70,0,0,335,336,5,24,0,0,336,
  	337,3,24,12,0,337,57,1,0,0,0,338,342,3,60,30,0,339,342,3,62,31,0,340,
  	342,3,64,32,0,341,338,1,0,0,0,341,339,1,0,0,0,341,340,1,0,0,0,342,59,
  	1,0,0,0,343,344,6,30,-1,0,344,345,3,78,39,0,345,352,1,0,0,0,346,347,10,
  	1,0,0,347,348,3,74,37,0,348,349,3,60,30,2,349,351,1,0,0,0,350,346,1,0,
  	0,0,351,354,1,0,0,0,352,350,1,0,0,0,352,353,1,0,0,0,353,61,1,0,0,0,354,
  	352,1,0,0,0,355,356,6,31,-1,0,356,357,3,78,39,0,357,363,1,0,0,0,358,359,
  	10,1,0,0,359,360,5,3,0,0,360,362,3,62,31,2,361,358,1,0,0,0,362,365,1,
  	0,0,0,363,361,1,0,0,0,363,364,1,0,0,0,364,63,1,0,0,0,365,363,1,0,0,0,
  	366,367,6,32,-1,0,367,384,5,43,0,0,368,384,5,44,0,0,369,370,3,78,39,0,
  	370,371,3,70,35,0,371,373,3,60,30,0,372,374,3,68,34,0,373,372,1,0,0,0,
  	374,375,1,0,0,0,375,373,1,0,0,0,375,376,1,0,0,0,376,384,1,0,0,0,377,378,
  	3,60,30,0,378,379,3,70,35,0,379,380,3,60,30,0,380,384,1,0,0,0,381,382,
  	5,45,0,0,382,384,3,64,32,2,383,366,1,0,0,0,383,368,1,0,0,0,383,369,1,
  	0,0,0,383,377,1,0,0,0,383,381,1,0,0,0,384,391,1,0,0,0,385,386,10,1,0,
  	0,386,387,3,72,36,0,387,388,3,64,32,2,388,390,1,0,0,0,389,385,1,0,0,0,
  	390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,0,392,65,1,0,0,0,393,391,
  	1,0,0,0,394,396,5,53,0,0,395,397,3,80,40,0,396,395,1,0,0,0,396,397,1,
  	0,0,0,397,400,1,0,0,0,398,399,5,26,0,0,399,401,3,78,39,0,400,398,1,0,
  	0,0,400,401,1,0,0,0,401,404,1,0,0,0,402,403,5,24,0,0,403,405,3,78,39,
  	0,404,402,1,0,0,0,404,405,1,0,0,0,405,408,1,0,0,0,406,407,5,29,0,0,407,
  	409,3,78,39,0,408,406,1,0,0,0,408,409,1,0,0,0,409,416,1,0,0,0,410,411,
  	5,54,0,0,411,416,3,64,32,0,412,413,5,55,0,0,413,416,3,64,32,0,414,416,
  	3,22,11,0,415,394,1,0,0,0,415,410,1,0,0,0,415,412,1,0,0,0,415,414,1,0,
  	0,0,416,67,1,0,0,0,417,419,3,72,36,0,418,420,3,70,35,0,419,418,1,0,0,
  	0,419,420,1,0,0,0,420,421,1,0,0,0,421,422,3,60,30,0,422,69,1,0,0,0,423,
  	424,7,3,0,0,424,71,1,0,0,0,425,426,7,4,0,0,426,73,1,0,0,0,427,428,7,5,
  	0,0,428,75,1,0,0,0,429,431,5,41,0,0,430,432,3,58,29,0,431,430,1,0,0,0,
  	432,433,1,0,0,0,433,431,1,0,0,0,433,434,1,0,0,0,434,436,1,0,0,0,435,437,
  	3,22,11,0,436,435,1,0,0,0,437,438,1,0,0,0,438,436,1,0,0,0,438,439,1,0,
  	0,0,439,448,1,0,0,0,440,441,5,41,0,0,441,443,5,42,0,0,442,444,3,22,11,
  	0,443,442,1,0,0,0,444,445,1,0,0,0,445,443,1,0,0,0,445,446,1,0,0,0,446,
  	448,1,0,0,0,447,429,1,0,0,0,447,440,1,0,0,0,448,77,1,0,0,0,449,453,5,
  	75,0,0,450,453,5,76,0,0,451,453,3,80,40,0,452,449,1,0,0,0,452,450,1,0,
  	0,0,452,451,1,0,0,0,453,79,1,0,0,0,454,459,5,74,0,0,455,456,5,56,0,0,
  	456,458,5,74,0,0,457,455,1,0,0,0,458,461,1,0,0,0,459,457,1,0,0,0,459,
  	460,1,0,0,0,460,465,1,0,0,0,461,459,1,0,0,0,462,463,5,12,0,0,463,464,
  	5,75,0,0,464,466,5,13,0,0,465,462,1,0,0,0,465,466,1,0,0,0,466,81,1,0,
  	0,0,52,84,99,111,121,126,140,146,153,158,163,181,189,194,203,209,215,
  	221,229,233,239,244,252,258,260,268,274,280,288,292,296,303,315,327,341,
  	352,363,375,383,391,396,400,404,408,415,419,433,438,445,447,452,459,465
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  babycobolParserStaticData = staticData.release();
}

}

BabyCobolParser::BabyCobolParser(TokenStream *input) : BabyCobolParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BabyCobolParser::BabyCobolParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BabyCobolParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *babycobolParserStaticData->atn, babycobolParserStaticData->decisionToDFA, babycobolParserStaticData->sharedContextCache, options);
}

BabyCobolParser::~BabyCobolParser() {
  delete _interpreter;
}

const atn::ATN& BabyCobolParser::getATN() const {
  return *babycobolParserStaticData->atn;
}

std::string BabyCobolParser::getGrammarFileName() const {
  return "BabyCobol.g4";
}

const std::vector<std::string>& BabyCobolParser::getRuleNames() const {
  return babycobolParserStaticData->ruleNames;
}

const dfa::Vocabulary& BabyCobolParser::getVocabulary() const {
  return babycobolParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BabyCobolParser::getSerializedATN() const {
  return babycobolParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BabyCobolParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::IdentificationContext* BabyCobolParser::ProgramContext::identification() {
  return getRuleContext<BabyCobolParser::IdentificationContext>(0);
}

BabyCobolParser::ProcedureContext* BabyCobolParser::ProgramContext::procedure() {
  return getRuleContext<BabyCobolParser::ProcedureContext>(0);
}

tree::TerminalNode* BabyCobolParser::ProgramContext::EOF() {
  return getToken(BabyCobolParser::EOF, 0);
}

BabyCobolParser::DataContext* BabyCobolParser::ProgramContext::data() {
  return getRuleContext<BabyCobolParser::DataContext>(0);
}


size_t BabyCobolParser::ProgramContext::getRuleIndex() const {
  return BabyCobolParser::RuleProgram;
}


std::any BabyCobolParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ProgramContext* BabyCobolParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BabyCobolParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    identification();
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(83);
      data();
    }
    setState(86);
    procedure();
    setState(87);
    match(BabyCobolParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentificationContext ------------------------------------------------------------------

BabyCobolParser::IdentificationContext::IdentificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::IDENTIFICATION() {
  return getToken(BabyCobolParser::IDENTIFICATION, 0);
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentificationContext::DOT() {
  return getTokens(BabyCobolParser::DOT);
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::DOT(size_t i) {
  return getToken(BabyCobolParser::DOT, i);
}

std::vector<BabyCobolParser::NameContext *> BabyCobolParser::IdentificationContext::name() {
  return getRuleContexts<BabyCobolParser::NameContext>();
}

BabyCobolParser::NameContext* BabyCobolParser::IdentificationContext::name(size_t i) {
  return getRuleContext<BabyCobolParser::NameContext>(i);
}

std::vector<BabyCobolParser::ValueContext *> BabyCobolParser::IdentificationContext::value() {
  return getRuleContexts<BabyCobolParser::ValueContext>();
}

BabyCobolParser::ValueContext* BabyCobolParser::IdentificationContext::value(size_t i) {
  return getRuleContext<BabyCobolParser::ValueContext>(i);
}


size_t BabyCobolParser::IdentificationContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentification;
}


std::any BabyCobolParser::IdentificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentification(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IdentificationContext* BabyCobolParser::identification() {
  IdentificationContext *_localctx = _tracker.createInstance<IdentificationContext>(_ctx, getState());
  enterRule(_localctx, 2, BabyCobolParser::RuleIdentification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(BabyCobolParser::IDENTIFICATION);
    setState(90);
    match(BabyCobolParser::DIVISION);
    setState(91);
    match(BabyCobolParser::DOT);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(92);
      name();
      setState(93);
      match(BabyCobolParser::DOT);
      setState(94);
      value();
      setState(95);
      match(BabyCobolParser::DOT);
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

BabyCobolParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::NameContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}


size_t BabyCobolParser::NameContext::getRuleIndex() const {
  return BabyCobolParser::RuleName;
}


std::any BabyCobolParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::NameContext* BabyCobolParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 4, BabyCobolParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

BabyCobolParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::ValueContext::LITERAL() {
  return getToken(BabyCobolParser::LITERAL, 0);
}


size_t BabyCobolParser::ValueContext::getRuleIndex() const {
  return BabyCobolParser::RuleValue;
}


std::any BabyCobolParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ValueContext* BabyCobolParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 6, BabyCobolParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(BabyCobolParser::LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataContext ------------------------------------------------------------------

BabyCobolParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DataContext::DATA() {
  return getToken(BabyCobolParser::DATA, 0);
}

tree::TerminalNode* BabyCobolParser::DataContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

std::vector<BabyCobolParser::VariableContext *> BabyCobolParser::DataContext::variable() {
  return getRuleContexts<BabyCobolParser::VariableContext>();
}

BabyCobolParser::VariableContext* BabyCobolParser::DataContext::variable(size_t i) {
  return getRuleContext<BabyCobolParser::VariableContext>(i);
}


size_t BabyCobolParser::DataContext::getRuleIndex() const {
  return BabyCobolParser::RuleData;
}


std::any BabyCobolParser::DataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitData(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::DataContext* BabyCobolParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 8, BabyCobolParser::RuleData);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(BabyCobolParser::DATA);
    setState(107);
    match(BabyCobolParser::DIVISION);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::INT) {
      setState(108);
      variable();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

BabyCobolParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LevelContext* BabyCobolParser::VariableContext::level() {
  return getRuleContext<BabyCobolParser::LevelContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::PICTURE() {
  return getToken(BabyCobolParser::PICTURE, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::IS() {
  return getToken(BabyCobolParser::IS, 0);
}

BabyCobolParser::RepresentationContext* BabyCobolParser::VariableContext::representation() {
  return getRuleContext<BabyCobolParser::RepresentationContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::LIKE() {
  return getToken(BabyCobolParser::LIKE, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::VariableContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::OCCURS() {
  return getToken(BabyCobolParser::OCCURS, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::TIMES() {
  return getToken(BabyCobolParser::TIMES, 0);
}


size_t BabyCobolParser::VariableContext::getRuleIndex() const {
  return BabyCobolParser::RuleVariable;
}


std::any BabyCobolParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::VariableContext* BabyCobolParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 10, BabyCobolParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    level();
    setState(115);
    match(BabyCobolParser::IDENTIFIER);
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(116);
        match(BabyCobolParser::PICTURE);
        setState(117);
        match(BabyCobolParser::IS);
        setState(118);
        representation();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(119);
        match(BabyCobolParser::LIKE);
        setState(120);
        identifiers();
        break;
      }

      case BabyCobolParser::OCCURS:
      case BabyCobolParser::DOT: {
        break;
      }

    default:
      break;
    }
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(123);
      match(BabyCobolParser::OCCURS);
      setState(124);
      match(BabyCobolParser::INT);
      setState(125);
      match(BabyCobolParser::TIMES);
    }
    setState(128);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LevelContext ------------------------------------------------------------------

BabyCobolParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LevelContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::LevelContext::getRuleIndex() const {
  return BabyCobolParser::RuleLevel;
}


std::any BabyCobolParser::LevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitLevel(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::LevelContext* BabyCobolParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 12, BabyCobolParser::RuleLevel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(BabyCobolParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepresentationContext ------------------------------------------------------------------

BabyCobolParser::RepresentationContext::RepresentationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::NINE() {
  return getToken(BabyCobolParser::NINE, 0);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::X() {
  return getToken(BabyCobolParser::X, 0);
}


size_t BabyCobolParser::RepresentationContext::getRuleIndex() const {
  return BabyCobolParser::RuleRepresentation;
}


std::any BabyCobolParser::RepresentationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitRepresentation(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::RepresentationContext* BabyCobolParser::representation() {
  RepresentationContext *_localctx = _tracker.createInstance<RepresentationContext>(_ctx, getState());
  enterRule(_localctx, 14, BabyCobolParser::RuleRepresentation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::NINE

    || _la == BabyCobolParser::X)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

BabyCobolParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::PROCEDURE() {
  return getToken(BabyCobolParser::PROCEDURE, 0);
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::SentenceContext *> BabyCobolParser::ProcedureContext::sentence() {
  return getRuleContexts<BabyCobolParser::SentenceContext>();
}

BabyCobolParser::SentenceContext* BabyCobolParser::ProcedureContext::sentence(size_t i) {
  return getRuleContext<BabyCobolParser::SentenceContext>(i);
}

std::vector<BabyCobolParser::ParagraphContext *> BabyCobolParser::ProcedureContext::paragraph() {
  return getRuleContexts<BabyCobolParser::ParagraphContext>();
}

BabyCobolParser::ParagraphContext* BabyCobolParser::ProcedureContext::paragraph(size_t i) {
  return getRuleContext<BabyCobolParser::ParagraphContext>(i);
}


size_t BabyCobolParser::ProcedureContext::getRuleIndex() const {
  return BabyCobolParser::RuleProcedure;
}


std::any BabyCobolParser::ProcedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitProcedure(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ProcedureContext* BabyCobolParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 16, BabyCobolParser::RuleProcedure);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(BabyCobolParser::PROCEDURE);
    setState(135);
    match(BabyCobolParser::DIVISION);
    setState(136);
    match(BabyCobolParser::DOT);
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER) {
      setState(137);
      sentence();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(143);
      paragraph();
      setState(146); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParagraphContext ------------------------------------------------------------------

BabyCobolParser::ParagraphContext::ParagraphContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LabelContext* BabyCobolParser::ParagraphContext::label() {
  return getRuleContext<BabyCobolParser::LabelContext>(0);
}

tree::TerminalNode* BabyCobolParser::ParagraphContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::SentenceContext *> BabyCobolParser::ParagraphContext::sentence() {
  return getRuleContexts<BabyCobolParser::SentenceContext>();
}

BabyCobolParser::SentenceContext* BabyCobolParser::ParagraphContext::sentence(size_t i) {
  return getRuleContext<BabyCobolParser::SentenceContext>(i);
}


size_t BabyCobolParser::ParagraphContext::getRuleIndex() const {
  return BabyCobolParser::RuleParagraph;
}


std::any BabyCobolParser::ParagraphContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitParagraph(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ParagraphContext* BabyCobolParser::paragraph() {
  ParagraphContext *_localctx = _tracker.createInstance<ParagraphContext>(_ctx, getState());
  enterRule(_localctx, 18, BabyCobolParser::RuleParagraph);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    label();
    setState(149);
    match(BabyCobolParser::DOT);
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      sentence();
      setState(153); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SentenceContext ------------------------------------------------------------------

BabyCobolParser::SentenceContext::SentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SentenceContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::SentenceContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::SentenceContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}


size_t BabyCobolParser::SentenceContext::getRuleIndex() const {
  return BabyCobolParser::RuleSentence;
}


std::any BabyCobolParser::SentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitSentence(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::SentenceContext* BabyCobolParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 20, BabyCobolParser::RuleSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(155);
      statement();
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
    setState(160);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BabyCobolParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::DisplayContext* BabyCobolParser::StatementContext::display() {
  return getRuleContext<BabyCobolParser::DisplayContext>(0);
}

BabyCobolParser::StopContext* BabyCobolParser::StatementContext::stop() {
  return getRuleContext<BabyCobolParser::StopContext>(0);
}

BabyCobolParser::MoveContext* BabyCobolParser::StatementContext::move() {
  return getRuleContext<BabyCobolParser::MoveContext>(0);
}

BabyCobolParser::SubtractContext* BabyCobolParser::StatementContext::subtract() {
  return getRuleContext<BabyCobolParser::SubtractContext>(0);
}

BabyCobolParser::MultiplyContext* BabyCobolParser::StatementContext::multiply() {
  return getRuleContext<BabyCobolParser::MultiplyContext>(0);
}

BabyCobolParser::PerformContext* BabyCobolParser::StatementContext::perform() {
  return getRuleContext<BabyCobolParser::PerformContext>(0);
}

BabyCobolParser::IfStatementContext* BabyCobolParser::StatementContext::ifStatement() {
  return getRuleContext<BabyCobolParser::IfStatementContext>(0);
}

BabyCobolParser::AcceptContext* BabyCobolParser::StatementContext::accept() {
  return getRuleContext<BabyCobolParser::AcceptContext>(0);
}

BabyCobolParser::AddContext* BabyCobolParser::StatementContext::add() {
  return getRuleContext<BabyCobolParser::AddContext>(0);
}

BabyCobolParser::DivideContext* BabyCobolParser::StatementContext::divide() {
  return getRuleContext<BabyCobolParser::DivideContext>(0);
}

BabyCobolParser::EvaluateContext* BabyCobolParser::StatementContext::evaluate() {
  return getRuleContext<BabyCobolParser::EvaluateContext>(0);
}

BabyCobolParser::NextSentenceContext* BabyCobolParser::StatementContext::nextSentence() {
  return getRuleContext<BabyCobolParser::NextSentenceContext>(0);
}

BabyCobolParser::LoopContext* BabyCobolParser::StatementContext::loop() {
  return getRuleContext<BabyCobolParser::LoopContext>(0);
}

BabyCobolParser::GotoStatementContext* BabyCobolParser::StatementContext::gotoStatement() {
  return getRuleContext<BabyCobolParser::GotoStatementContext>(0);
}

BabyCobolParser::SignalContext* BabyCobolParser::StatementContext::signal() {
  return getRuleContext<BabyCobolParser::SignalContext>(0);
}

BabyCobolParser::AlterContext* BabyCobolParser::StatementContext::alter() {
  return getRuleContext<BabyCobolParser::AlterContext>(0);
}


size_t BabyCobolParser::StatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleStatement;
}


std::any BabyCobolParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::StatementContext* BabyCobolParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, BabyCobolParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__0

    || _la == BabyCobolParser::T__1) {
      setState(162);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::T__0

      || _la == BabyCobolParser::T__1)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(165);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(166);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(167);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(168);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(169);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(170);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(171);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(172);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(173);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(174);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(175);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(176);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(177);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(178);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(179);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(180);
        alter();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

BabyCobolParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LabelContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}


size_t BabyCobolParser::LabelContext::getRuleIndex() const {
  return BabyCobolParser::RuleLabel;
}


std::any BabyCobolParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::LabelContext* BabyCobolParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 24, BabyCobolParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisplayContext ------------------------------------------------------------------

BabyCobolParser::DisplayContext::DisplayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DisplayContext::DISPLAY() {
  return getToken(BabyCobolParser::DISPLAY, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::DisplayContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::DisplayContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::WITH() {
  return getToken(BabyCobolParser::WITH, 0);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::NO() {
  return getToken(BabyCobolParser::NO, 0);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::ADVANCING() {
  return getToken(BabyCobolParser::ADVANCING, 0);
}


size_t BabyCobolParser::DisplayContext::getRuleIndex() const {
  return BabyCobolParser::RuleDisplay;
}


std::any BabyCobolParser::DisplayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitDisplay(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::DisplayContext* BabyCobolParser::display() {
  DisplayContext *_localctx = _tracker.createInstance<DisplayContext>(_ctx, getState());
  enterRule(_localctx, 26, BabyCobolParser::RuleDisplay);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(BabyCobolParser::DISPLAY);
    setState(187); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(186);
      atomic();
      setState(189); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(191);
      match(BabyCobolParser::WITH);
      setState(192);
      match(BabyCobolParser::NO);
      setState(193);
      match(BabyCobolParser::ADVANCING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StopContext ------------------------------------------------------------------

BabyCobolParser::StopContext::StopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::StopContext::STOP() {
  return getToken(BabyCobolParser::STOP, 0);
}


size_t BabyCobolParser::StopContext::getRuleIndex() const {
  return BabyCobolParser::RuleStop;
}


std::any BabyCobolParser::StopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitStop(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::StopContext* BabyCobolParser::stop() {
  StopContext *_localctx = _tracker.createInstance<StopContext>(_ctx, getState());
  enterRule(_localctx, 28, BabyCobolParser::RuleStop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(BabyCobolParser::STOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveContext ------------------------------------------------------------------

BabyCobolParser::MoveContext::MoveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::MoveContext::MOVE() {
  return getToken(BabyCobolParser::MOVE, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::SPACES() {
  return getToken(BabyCobolParser::SPACES, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::HIGH() {
  return getToken(BabyCobolParser::HIGH, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::LOW() {
  return getToken(BabyCobolParser::LOW, 0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::MoveContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::MoveContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::MoveContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::MoveContext::getRuleIndex() const {
  return BabyCobolParser::RuleMove;
}


std::any BabyCobolParser::MoveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitMove(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::MoveContext* BabyCobolParser::move() {
  MoveContext *_localctx = _tracker.createInstance<MoveContext>(_ctx, getState());
  enterRule(_localctx, 30, BabyCobolParser::RuleMove);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(BabyCobolParser::MOVE);
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(199);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(200);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(201);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::IDENTIFIER:
      case BabyCobolParser::INT:
      case BabyCobolParser::LITERAL: {
        setState(202);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(205);
    match(BabyCobolParser::TO);
    setState(207); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(206);
      identifiers();
      setState(209); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractContext ------------------------------------------------------------------

BabyCobolParser::SubtractContext::SubtractContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SubtractContext::SUBTRACT() {
  return getToken(BabyCobolParser::SUBTRACT, 0);
}

tree::TerminalNode* BabyCobolParser::SubtractContext::FROM() {
  return getToken(BabyCobolParser::FROM, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::SubtractContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::SubtractContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::SubtractContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::SubtractContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::SubtractContext::getRuleIndex() const {
  return BabyCobolParser::RuleSubtract;
}


std::any BabyCobolParser::SubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitSubtract(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::SubtractContext* BabyCobolParser::subtract() {
  SubtractContext *_localctx = _tracker.createInstance<SubtractContext>(_ctx, getState());
  enterRule(_localctx, 32, BabyCobolParser::RuleSubtract);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(BabyCobolParser::SUBTRACT);
    setState(213); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(212);
      antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<SubtractContext *>(_localctx)->as.push_back(antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext);
      setState(215); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(217);
    match(BabyCobolParser::FROM);
    setState(218);
    antlrcpp::downCast<SubtractContext *>(_localctx)->from = atomic();
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(219);
      match(BabyCobolParser::GIVING);
      setState(220);
      antlrcpp::downCast<SubtractContext *>(_localctx)->giving = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplyContext ------------------------------------------------------------------

BabyCobolParser::MultiplyContext::MultiplyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::MULTIPLY() {
  return getToken(BabyCobolParser::MULTIPLY, 0);
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::BY() {
  return getToken(BabyCobolParser::BY, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::MultiplyContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::MultiplyContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::MultiplyContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::MultiplyContext::getRuleIndex() const {
  return BabyCobolParser::RuleMultiply;
}


std::any BabyCobolParser::MultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitMultiply(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::MultiplyContext* BabyCobolParser::multiply() {
  MultiplyContext *_localctx = _tracker.createInstance<MultiplyContext>(_ctx, getState());
  enterRule(_localctx, 34, BabyCobolParser::RuleMultiply);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(BabyCobolParser::MULTIPLY);
    setState(224);
    antlrcpp::downCast<MultiplyContext *>(_localctx)->a = atomic();
    setState(225);
    match(BabyCobolParser::BY);
    setState(227); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(226);
      antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<MultiplyContext *>(_localctx)->as.push_back(antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext);
      setState(229); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(231);
      match(BabyCobolParser::GIVING);
      setState(232);
      antlrcpp::downCast<MultiplyContext *>(_localctx)->giving = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PerformContext ------------------------------------------------------------------

BabyCobolParser::PerformContext::PerformContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::PerformContext::PERFORM() {
  return getToken(BabyCobolParser::PERFORM, 0);
}

std::vector<BabyCobolParser::LabelContext *> BabyCobolParser::PerformContext::label() {
  return getRuleContexts<BabyCobolParser::LabelContext>();
}

BabyCobolParser::LabelContext* BabyCobolParser::PerformContext::label(size_t i) {
  return getRuleContext<BabyCobolParser::LabelContext>(i);
}

tree::TerminalNode* BabyCobolParser::PerformContext::THROUGH() {
  return getToken(BabyCobolParser::THROUGH, 0);
}

tree::TerminalNode* BabyCobolParser::PerformContext::TIMES() {
  return getToken(BabyCobolParser::TIMES, 0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::PerformContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}


size_t BabyCobolParser::PerformContext::getRuleIndex() const {
  return BabyCobolParser::RulePerform;
}


std::any BabyCobolParser::PerformContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitPerform(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::PerformContext* BabyCobolParser::perform() {
  PerformContext *_localctx = _tracker.createInstance<PerformContext>(_ctx, getState());
  enterRule(_localctx, 36, BabyCobolParser::RulePerform);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(BabyCobolParser::PERFORM);
    setState(236);
    antlrcpp::downCast<PerformContext *>(_localctx)->procedureName = label();
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(237);
      match(BabyCobolParser::THROUGH);
      setState(238);
      antlrcpp::downCast<PerformContext *>(_localctx)->through = label();
    }
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0)) {
      setState(241);
      antlrcpp::downCast<PerformContext *>(_localctx)->times = atomic();
      setState(242);
      match(BabyCobolParser::TIMES);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BabyCobolParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::IF() {
  return getToken(BabyCobolParser::IF, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::IfStatementContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::THEN() {
  return getToken(BabyCobolParser::THEN, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::ELSE() {
  return getToken(BabyCobolParser::ELSE, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::IfStatementContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}


size_t BabyCobolParser::IfStatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleIfStatement;
}


std::any BabyCobolParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IfStatementContext* BabyCobolParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, BabyCobolParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(BabyCobolParser::IF);
    setState(247);
    booleanExpression(0);
    setState(248);
    match(BabyCobolParser::THEN);
    setState(250); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(249);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<IfStatementContext *>(_localctx)->t.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
      setState(252); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(254);
      match(BabyCobolParser::ELSE);
      setState(256); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(255);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->f.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
        setState(258); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
    }
    setState(262);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::END

    || _la == BabyCobolParser::DOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcceptContext ------------------------------------------------------------------

BabyCobolParser::AcceptContext::AcceptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AcceptContext::ACCEPT() {
  return getToken(BabyCobolParser::ACCEPT, 0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::AcceptContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::AcceptContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::AcceptContext::getRuleIndex() const {
  return BabyCobolParser::RuleAccept;
}


std::any BabyCobolParser::AcceptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAccept(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::AcceptContext* BabyCobolParser::accept() {
  AcceptContext *_localctx = _tracker.createInstance<AcceptContext>(_ctx, getState());
  enterRule(_localctx, 40, BabyCobolParser::RuleAccept);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(BabyCobolParser::ACCEPT);
    setState(266); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(265);
      antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      antlrcpp::downCast<AcceptContext *>(_localctx)->id.push_back(antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext);
      setState(268); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

BabyCobolParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AddContext::ADD() {
  return getToken(BabyCobolParser::ADD, 0);
}

tree::TerminalNode* BabyCobolParser::AddContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::AddContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::AddContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::AddContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::AddContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::AddContext::getRuleIndex() const {
  return BabyCobolParser::RuleAdd;
}


std::any BabyCobolParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::AddContext* BabyCobolParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 42, BabyCobolParser::RuleAdd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(BabyCobolParser::ADD);
    setState(272); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(271);
      atomic();
      setState(274); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(276);
    match(BabyCobolParser::TO);
    setState(277);
    antlrcpp::downCast<AddContext *>(_localctx)->to = atomic();
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(278);
      match(BabyCobolParser::GIVING);
      setState(279);
      antlrcpp::downCast<AddContext *>(_localctx)->id = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivideContext ------------------------------------------------------------------

BabyCobolParser::DivideContext::DivideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DivideContext::DIVIDE() {
  return getToken(BabyCobolParser::DIVIDE, 0);
}

tree::TerminalNode* BabyCobolParser::DivideContext::INTO() {
  return getToken(BabyCobolParser::INTO, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::DivideContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::DivideContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::DivideContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

tree::TerminalNode* BabyCobolParser::DivideContext::REMAINDER() {
  return getToken(BabyCobolParser::REMAINDER, 0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::DivideContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::DivideContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::DivideContext::getRuleIndex() const {
  return BabyCobolParser::RuleDivide;
}


std::any BabyCobolParser::DivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitDivide(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::DivideContext* BabyCobolParser::divide() {
  DivideContext *_localctx = _tracker.createInstance<DivideContext>(_ctx, getState());
  enterRule(_localctx, 44, BabyCobolParser::RuleDivide);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(BabyCobolParser::DIVIDE);
    setState(283);
    antlrcpp::downCast<DivideContext *>(_localctx)->a = atomic();
    setState(284);
    match(BabyCobolParser::INTO);
    setState(286); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(285);
      antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<DivideContext *>(_localctx)->as.push_back(antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext);
      setState(288); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(290);
      match(BabyCobolParser::GIVING);
      setState(291);
      antlrcpp::downCast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(294);
      match(BabyCobolParser::REMAINDER);
      setState(295);
      antlrcpp::downCast<DivideContext *>(_localctx)->rem = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvaluateContext ------------------------------------------------------------------

BabyCobolParser::EvaluateContext::EvaluateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::EvaluateContext::EVALUATE() {
  return getToken(BabyCobolParser::EVALUATE, 0);
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::EvaluateContext::anyExpression() {
  return getRuleContext<BabyCobolParser::AnyExpressionContext>(0);
}

tree::TerminalNode* BabyCobolParser::EvaluateContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

std::vector<BabyCobolParser::WhenBlockContext *> BabyCobolParser::EvaluateContext::whenBlock() {
  return getRuleContexts<BabyCobolParser::WhenBlockContext>();
}

BabyCobolParser::WhenBlockContext* BabyCobolParser::EvaluateContext::whenBlock(size_t i) {
  return getRuleContext<BabyCobolParser::WhenBlockContext>(i);
}


size_t BabyCobolParser::EvaluateContext::getRuleIndex() const {
  return BabyCobolParser::RuleEvaluate;
}


std::any BabyCobolParser::EvaluateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitEvaluate(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::EvaluateContext* BabyCobolParser::evaluate() {
  EvaluateContext *_localctx = _tracker.createInstance<EvaluateContext>(_ctx, getState());
  enterRule(_localctx, 46, BabyCobolParser::RuleEvaluate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(BabyCobolParser::EVALUATE);
    setState(299);
    anyExpression();
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(300);
      whenBlock();
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(306);
    match(BabyCobolParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NextSentenceContext ------------------------------------------------------------------

BabyCobolParser::NextSentenceContext::NextSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::NextSentenceContext::NEXT() {
  return getToken(BabyCobolParser::NEXT, 0);
}

tree::TerminalNode* BabyCobolParser::NextSentenceContext::SENTENCE() {
  return getToken(BabyCobolParser::SENTENCE, 0);
}


size_t BabyCobolParser::NextSentenceContext::getRuleIndex() const {
  return BabyCobolParser::RuleNextSentence;
}


std::any BabyCobolParser::NextSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitNextSentence(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::NextSentenceContext* BabyCobolParser::nextSentence() {
  NextSentenceContext *_localctx = _tracker.createInstance<NextSentenceContext>(_ctx, getState());
  enterRule(_localctx, 48, BabyCobolParser::RuleNextSentence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(BabyCobolParser::NEXT);
    setState(309);
    match(BabyCobolParser::SENTENCE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

BabyCobolParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LoopContext::LOOP() {
  return getToken(BabyCobolParser::LOOP, 0);
}

tree::TerminalNode* BabyCobolParser::LoopContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

std::vector<BabyCobolParser::LoopExpressionContext *> BabyCobolParser::LoopContext::loopExpression() {
  return getRuleContexts<BabyCobolParser::LoopExpressionContext>();
}

BabyCobolParser::LoopExpressionContext* BabyCobolParser::LoopContext::loopExpression(size_t i) {
  return getRuleContext<BabyCobolParser::LoopExpressionContext>(i);
}


size_t BabyCobolParser::LoopContext::getRuleIndex() const {
  return BabyCobolParser::RuleLoop;
}


std::any BabyCobolParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::LoopContext* BabyCobolParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 50, BabyCobolParser::RuleLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(BabyCobolParser::LOOP);
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::VARYING)
      | (1ULL << BabyCobolParser::WHILE)
      | (1ULL << BabyCobolParser::UNTIL)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER) {
      setState(312);
      loopExpression();
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(318);
    match(BabyCobolParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

BabyCobolParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::GotoStatementContext::GO() {
  return getToken(BabyCobolParser::GO, 0);
}

tree::TerminalNode* BabyCobolParser::GotoStatementContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

BabyCobolParser::NameContext* BabyCobolParser::GotoStatementContext::name() {
  return getRuleContext<BabyCobolParser::NameContext>(0);
}


size_t BabyCobolParser::GotoStatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleGotoStatement;
}


std::any BabyCobolParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::GotoStatementContext* BabyCobolParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, BabyCobolParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(BabyCobolParser::GO);
    setState(321);
    match(BabyCobolParser::TO);
    setState(322);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignalContext ------------------------------------------------------------------

BabyCobolParser::SignalContext::SignalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SignalContext::SIGNAL() {
  return getToken(BabyCobolParser::SIGNAL, 0);
}

tree::TerminalNode* BabyCobolParser::SignalContext::ONERROR() {
  return getToken(BabyCobolParser::ONERROR, 0);
}

BabyCobolParser::LabelContext* BabyCobolParser::SignalContext::label() {
  return getRuleContext<BabyCobolParser::LabelContext>(0);
}

tree::TerminalNode* BabyCobolParser::SignalContext::OFF() {
  return getToken(BabyCobolParser::OFF, 0);
}


size_t BabyCobolParser::SignalContext::getRuleIndex() const {
  return BabyCobolParser::RuleSignal;
}


std::any BabyCobolParser::SignalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitSignal(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::SignalContext* BabyCobolParser::signal() {
  SignalContext *_localctx = _tracker.createInstance<SignalContext>(_ctx, getState());
  enterRule(_localctx, 54, BabyCobolParser::RuleSignal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(BabyCobolParser::SIGNAL);
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::IDENTIFIER: {
        setState(325);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(326);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(329);
    match(BabyCobolParser::ONERROR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlterContext ------------------------------------------------------------------

BabyCobolParser::AlterContext::AlterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AlterContext::ALTER() {
  return getToken(BabyCobolParser::ALTER, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::AlterContext::TO() {
  return getTokens(BabyCobolParser::TO);
}

tree::TerminalNode* BabyCobolParser::AlterContext::TO(size_t i) {
  return getToken(BabyCobolParser::TO, i);
}

tree::TerminalNode* BabyCobolParser::AlterContext::PROCEED() {
  return getToken(BabyCobolParser::PROCEED, 0);
}

std::vector<BabyCobolParser::LabelContext *> BabyCobolParser::AlterContext::label() {
  return getRuleContexts<BabyCobolParser::LabelContext>();
}

BabyCobolParser::LabelContext* BabyCobolParser::AlterContext::label(size_t i) {
  return getRuleContext<BabyCobolParser::LabelContext>(i);
}


size_t BabyCobolParser::AlterContext::getRuleIndex() const {
  return BabyCobolParser::RuleAlter;
}


std::any BabyCobolParser::AlterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAlter(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::AlterContext* BabyCobolParser::alter() {
  AlterContext *_localctx = _tracker.createInstance<AlterContext>(_ctx, getState());
  enterRule(_localctx, 56, BabyCobolParser::RuleAlter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(BabyCobolParser::ALTER);
    setState(332);
    antlrcpp::downCast<AlterContext *>(_localctx)->l1 = label();
    setState(333);
    match(BabyCobolParser::TO);
    setState(334);
    match(BabyCobolParser::PROCEED);
    setState(335);
    match(BabyCobolParser::TO);
    setState(336);
    antlrcpp::downCast<AlterContext *>(_localctx)->l2 = label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyExpressionContext ------------------------------------------------------------------

BabyCobolParser::AnyExpressionContext::AnyExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::AnyExpressionContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::AnyExpressionContext::stringExpression() {
  return getRuleContext<BabyCobolParser::StringExpressionContext>(0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::AnyExpressionContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}


size_t BabyCobolParser::AnyExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleAnyExpression;
}


std::any BabyCobolParser::AnyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAnyExpression(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::anyExpression() {
  AnyExpressionContext *_localctx = _tracker.createInstance<AnyExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, BabyCobolParser::RuleAnyExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(338);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(339);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(340);
      booleanExpression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticExpressionContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticExpressionContext::ArithmeticExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ArithmeticExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleArithmeticExpression;
}

void BabyCobolParser::ArithmeticExpressionContext::copyFrom(ArithmeticExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicArithmeticExpContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext* BabyCobolParser::AtomicArithmeticExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::AtomicArithmeticExpContext::AtomicArithmeticExpContext(ArithmeticExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::AtomicArithmeticExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAtomicArithmeticExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithOpArithmeticExpContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticOpContext* BabyCobolParser::ArithOpArithmeticExpContext::arithmeticOp() {
  return getRuleContext<BabyCobolParser::ArithmeticOpContext>(0);
}

std::vector<BabyCobolParser::ArithmeticExpressionContext *> BabyCobolParser::ArithOpArithmeticExpContext::arithmeticExpression() {
  return getRuleContexts<BabyCobolParser::ArithmeticExpressionContext>();
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ArithOpArithmeticExpContext::arithmeticExpression(size_t i) {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(i);
}

BabyCobolParser::ArithOpArithmeticExpContext::ArithOpArithmeticExpContext(ArithmeticExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::ArithOpArithmeticExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitArithOpArithmeticExp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::arithmeticExpression() {
   return arithmeticExpression(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::arithmeticExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::ArithmeticExpressionContext *_localctx = _tracker.createInstance<ArithmeticExpressionContext>(_ctx, parentState);
  BabyCobolParser::ArithmeticExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, BabyCobolParser::RuleArithmeticExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AtomicArithmeticExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(344);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(352);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(346);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(347);
        arithmeticOp();
        setState(348);
        antlrcpp::downCast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(354);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StringExpressionContext ------------------------------------------------------------------

BabyCobolParser::StringExpressionContext::StringExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::StringExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleStringExpression;
}

void BabyCobolParser::StringExpressionContext::copyFrom(StringExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicStringExpContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext* BabyCobolParser::AtomicStringExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::AtomicStringExpContext::AtomicStringExpContext(StringExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::AtomicStringExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAtomicStringExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditionStringExpContext ------------------------------------------------------------------

std::vector<BabyCobolParser::StringExpressionContext *> BabyCobolParser::AdditionStringExpContext::stringExpression() {
  return getRuleContexts<BabyCobolParser::StringExpressionContext>();
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::AdditionStringExpContext::stringExpression(size_t i) {
  return getRuleContext<BabyCobolParser::StringExpressionContext>(i);
}

BabyCobolParser::AdditionStringExpContext::AdditionStringExpContext(StringExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::AdditionStringExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitAdditionStringExp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::stringExpression() {
   return stringExpression(0);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::stringExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::StringExpressionContext *_localctx = _tracker.createInstance<StringExpressionContext>(_ctx, parentState);
  BabyCobolParser::StringExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, BabyCobolParser::RuleStringExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AtomicStringExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(356);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(363);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(358);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(359);
        match(BabyCobolParser::T__2);
        setState(360);
        antlrcpp::downCast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(365);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BooleanExpressionContext ------------------------------------------------------------------

BabyCobolParser::BooleanExpressionContext::BooleanExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::BooleanExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleBooleanExpression;
}

void BabyCobolParser::BooleanExpressionContext::copyFrom(BooleanExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TrueBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::TrueBooleanExpContext::TRUE() {
  return getToken(BabyCobolParser::TRUE, 0);
}

BabyCobolParser::TrueBooleanExpContext::TrueBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::TrueBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitTrueBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolOpBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::BooleanOpContext* BabyCobolParser::BoolOpBooleanExpContext::booleanOp() {
  return getRuleContext<BabyCobolParser::BooleanOpContext>(0);
}

std::vector<BabyCobolParser::BooleanExpressionContext *> BabyCobolParser::BoolOpBooleanExpContext::booleanExpression() {
  return getRuleContexts<BabyCobolParser::BooleanExpressionContext>();
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::BoolOpBooleanExpContext::booleanExpression(size_t i) {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(i);
}

BabyCobolParser::BoolOpBooleanExpContext::BoolOpBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::BoolOpBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitBoolOpBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalseBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::FalseBooleanExpContext::FALSE() {
  return getToken(BabyCobolParser::FALSE, 0);
}

BabyCobolParser::FalseBooleanExpContext::FalseBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::FalseBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitFalseBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContractedBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext* BabyCobolParser::ContractedBooleanExpContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::ContractedBooleanExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ContractedBooleanExpContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

std::vector<BabyCobolParser::ContractedBooleanPartContext *> BabyCobolParser::ContractedBooleanExpContext::contractedBooleanPart() {
  return getRuleContexts<BabyCobolParser::ContractedBooleanPartContext>();
}

BabyCobolParser::ContractedBooleanPartContext* BabyCobolParser::ContractedBooleanExpContext::contractedBooleanPart(size_t i) {
  return getRuleContext<BabyCobolParser::ContractedBooleanPartContext>(i);
}

BabyCobolParser::ContractedBooleanExpContext::ContractedBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::ContractedBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitContractedBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::NotBooleanExpContext::NOT() {
  return getToken(BabyCobolParser::NOT, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::NotBooleanExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::NotBooleanExpContext::NotBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::NotBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitNotBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareOpBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext* BabyCobolParser::CompareOpBooleanExpContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}

std::vector<BabyCobolParser::ArithmeticExpressionContext *> BabyCobolParser::CompareOpBooleanExpContext::arithmeticExpression() {
  return getRuleContexts<BabyCobolParser::ArithmeticExpressionContext>();
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::CompareOpBooleanExpContext::arithmeticExpression(size_t i) {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(i);
}

BabyCobolParser::CompareOpBooleanExpContext::CompareOpBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::CompareOpBooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitCompareOpBooleanExp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::booleanExpression() {
   return booleanExpression(0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::booleanExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::BooleanExpressionContext *_localctx = _tracker.createInstance<BooleanExpressionContext>(_ctx, parentState);
  BabyCobolParser::BooleanExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, BabyCobolParser::RuleBooleanExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(367);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(368);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(369);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(370);
      comparisonOp();
      setState(371);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(373); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(372);
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(375); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(377);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(378);
      comparisonOp();
      setState(379);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(381);
      match(BabyCobolParser::NOT);
      setState(382);
      booleanExpression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(385);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(386);
        booleanOp();
        setState(387);
        antlrcpp::downCast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LoopExpressionContext ------------------------------------------------------------------

BabyCobolParser::LoopExpressionContext::LoopExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::LoopExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleLoopExpression;
}

void BabyCobolParser::LoopExpressionContext::copyFrom(LoopExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VaryingLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::VARYING() {
  return getToken(BabyCobolParser::VARYING, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::FROM() {
  return getToken(BabyCobolParser::FROM, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::BY() {
  return getToken(BabyCobolParser::BY, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::VaryingLoopExpContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::VaryingLoopExpContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::VaryingLoopExpContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

BabyCobolParser::VaryingLoopExpContext::VaryingLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::VaryingLoopExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitVaryingLoopExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopStatementContext ------------------------------------------------------------------

BabyCobolParser::StatementContext* BabyCobolParser::LoopStatementContext::statement() {
  return getRuleContext<BabyCobolParser::StatementContext>(0);
}

BabyCobolParser::LoopStatementContext::LoopStatementContext(LoopExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::LoopStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitLoopStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UntilLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::UntilLoopExpContext::UNTIL() {
  return getToken(BabyCobolParser::UNTIL, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::UntilLoopExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::UntilLoopExpContext::UntilLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::UntilLoopExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitUntilLoopExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhileLoopExpContext::WHILE() {
  return getToken(BabyCobolParser::WHILE, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::WhileLoopExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::WhileLoopExpContext::WhileLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::WhileLoopExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitWhileLoopExp(this);
  else
    return visitor->visitChildren(this);
}
BabyCobolParser::LoopExpressionContext* BabyCobolParser::loopExpression() {
  LoopExpressionContext *_localctx = _tracker.createInstance<LoopExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, BabyCobolParser::RuleLoopExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = _tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(394);
        match(BabyCobolParser::VARYING);
        setState(396);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::IDENTIFIER) {
          setState(395);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(400);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(398);
          match(BabyCobolParser::FROM);
          setState(399);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(404);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(402);
          match(BabyCobolParser::TO);
          setState(403);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(408);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(406);
          match(BabyCobolParser::BY);
          setState(407);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = _tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(410);
        match(BabyCobolParser::WHILE);
        setState(411);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = _tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(412);
        match(BabyCobolParser::UNTIL);
        setState(413);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::T__0:
      case BabyCobolParser::T__1:
      case BabyCobolParser::DISPLAY:
      case BabyCobolParser::STOP:
      case BabyCobolParser::MOVE:
      case BabyCobolParser::SUBTRACT:
      case BabyCobolParser::MULTIPLY:
      case BabyCobolParser::PERFORM:
      case BabyCobolParser::IF:
      case BabyCobolParser::ACCEPT:
      case BabyCobolParser::ADD:
      case BabyCobolParser::DIVIDE:
      case BabyCobolParser::EVALUATE:
      case BabyCobolParser::NEXT:
      case BabyCobolParser::LOOP:
      case BabyCobolParser::GO:
      case BabyCobolParser::SIGNAL:
      case BabyCobolParser::ALTER: {
        _localctx = _tracker.createInstance<BabyCobolParser::LoopStatementContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(414);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContractedBooleanPartContext ------------------------------------------------------------------

BabyCobolParser::ContractedBooleanPartContext::ContractedBooleanPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::BooleanOpContext* BabyCobolParser::ContractedBooleanPartContext::booleanOp() {
  return getRuleContext<BabyCobolParser::BooleanOpContext>(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ContractedBooleanPartContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

BabyCobolParser::ComparisonOpContext* BabyCobolParser::ContractedBooleanPartContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}


size_t BabyCobolParser::ContractedBooleanPartContext::getRuleIndex() const {
  return BabyCobolParser::RuleContractedBooleanPart;
}


std::any BabyCobolParser::ContractedBooleanPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitContractedBooleanPart(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ContractedBooleanPartContext* BabyCobolParser::contractedBooleanPart() {
  ContractedBooleanPartContext *_localctx = _tracker.createInstance<ContractedBooleanPartContext>(_ctx, getState());
  enterRule(_localctx, 68, BabyCobolParser::RuleContractedBooleanPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    booleanOp();
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0)) {
      setState(418);
      comparisonOp();
    }
    setState(421);
    arithmeticExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext::ComparisonOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ComparisonOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleComparisonOp;
}


std::any BabyCobolParser::ComparisonOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitComparisonOp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ComparisonOpContext* BabyCobolParser::comparisonOp() {
  ComparisonOpContext *_localctx = _tracker.createInstance<ComparisonOpContext>(_ctx, getState());
  enterRule(_localctx, 70, BabyCobolParser::RuleComparisonOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanOpContext ------------------------------------------------------------------

BabyCobolParser::BooleanOpContext::BooleanOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::OR() {
  return getToken(BabyCobolParser::OR, 0);
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::AND() {
  return getToken(BabyCobolParser::AND, 0);
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::XOR() {
  return getToken(BabyCobolParser::XOR, 0);
}


size_t BabyCobolParser::BooleanOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleBooleanOp;
}


std::any BabyCobolParser::BooleanOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitBooleanOp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::BooleanOpContext* BabyCobolParser::booleanOp() {
  BooleanOpContext *_localctx = _tracker.createInstance<BooleanOpContext>(_ctx, getState());
  enterRule(_localctx, 72, BabyCobolParser::RuleBooleanOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::OR)
      | (1ULL << BabyCobolParser::AND)
      | (1ULL << BabyCobolParser::XOR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticOpContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticOpContext::ArithmeticOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ArithmeticOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleArithmeticOp;
}


std::any BabyCobolParser::ArithmeticOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitArithmeticOp(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::ArithmeticOpContext* BabyCobolParser::arithmeticOp() {
  ArithmeticOpContext *_localctx = _tracker.createInstance<ArithmeticOpContext>(_ctx, getState());
  enterRule(_localctx, 74, BabyCobolParser::RuleArithmeticOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::T__2)
      | (1ULL << BabyCobolParser::T__9)
      | (1ULL << BabyCobolParser::T__10))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenBlockContext ------------------------------------------------------------------

BabyCobolParser::WhenBlockContext::WhenBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::WhenBlockContext::getRuleIndex() const {
  return BabyCobolParser::RuleWhenBlock;
}

void BabyCobolParser::WhenBlockContext::copyFrom(WhenBlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhenOtherContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhenOtherContext::WHEN() {
  return getToken(BabyCobolParser::WHEN, 0);
}

tree::TerminalNode* BabyCobolParser::WhenOtherContext::OTHER() {
  return getToken(BabyCobolParser::OTHER, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::WhenOtherContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::WhenOtherContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}

BabyCobolParser::WhenOtherContext::WhenOtherContext(WhenBlockContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::WhenOtherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitWhenOther(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhenAnyExpressionContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhenAnyExpressionContext::WHEN() {
  return getToken(BabyCobolParser::WHEN, 0);
}

std::vector<BabyCobolParser::AnyExpressionContext *> BabyCobolParser::WhenAnyExpressionContext::anyExpression() {
  return getRuleContexts<BabyCobolParser::AnyExpressionContext>();
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::WhenAnyExpressionContext::anyExpression(size_t i) {
  return getRuleContext<BabyCobolParser::AnyExpressionContext>(i);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::WhenAnyExpressionContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::WhenAnyExpressionContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}

BabyCobolParser::WhenAnyExpressionContext::WhenAnyExpressionContext(WhenBlockContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::WhenAnyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitWhenAnyExpression(this);
  else
    return visitor->visitChildren(this);
}
BabyCobolParser::WhenBlockContext* BabyCobolParser::whenBlock() {
  WhenBlockContext *_localctx = _tracker.createInstance<WhenBlockContext>(_ctx, getState());
  enterRule(_localctx, 76, BabyCobolParser::RuleWhenBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(429);
      match(BabyCobolParser::WHEN);
      setState(431); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(430);
        anyExpression();
        setState(433); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 43) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 43)) & ((1ULL << (BabyCobolParser::TRUE - 43))
        | (1ULL << (BabyCobolParser::FALSE - 43))
        | (1ULL << (BabyCobolParser::NOT - 43))
        | (1ULL << (BabyCobolParser::IDENTIFIER - 43))
        | (1ULL << (BabyCobolParser::INT - 43))
        | (1ULL << (BabyCobolParser::LITERAL - 43)))) != 0));
      setState(436); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(435);
        statement();
        setState(438); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenOtherContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(440);
      match(BabyCobolParser::WHEN);
      setState(441);
      match(BabyCobolParser::OTHER);
      setState(443); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(442);
        statement();
        setState(445); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomicContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext::AtomicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::AtomicContext::getRuleIndex() const {
  return BabyCobolParser::RuleAtomic;
}

void BabyCobolParser::AtomicContext::copyFrom(AtomicContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

BabyCobolParser::IdentifiersContext* BabyCobolParser::IdentifierContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

BabyCobolParser::IdentifierContext::IdentifierContext(AtomicContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::StringLiteralContext::LITERAL() {
  return getToken(BabyCobolParser::LITERAL, 0);
}

BabyCobolParser::StringLiteralContext::StringLiteralContext(AtomicContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::IntLiteralContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}

BabyCobolParser::IntLiteralContext::IntLiteralContext(AtomicContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
BabyCobolParser::AtomicContext* BabyCobolParser::atomic() {
  AtomicContext *_localctx = _tracker.createInstance<AtomicContext>(_ctx, getState());
  enterRule(_localctx, 78, BabyCobolParser::RuleAtomic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(452);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::INT: {
        _localctx = _tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(449);
        match(BabyCobolParser::INT);
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = _tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(450);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<BabyCobolParser::IdentifierContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(451);
        identifiers();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifiersContext ------------------------------------------------------------------

BabyCobolParser::IdentifiersContext::IdentifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentifiersContext::IDENTIFIER() {
  return getTokens(BabyCobolParser::IDENTIFIER);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::IDENTIFIER(size_t i) {
  return getToken(BabyCobolParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentifiersContext::OF() {
  return getTokens(BabyCobolParser::OF);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::OF(size_t i) {
  return getToken(BabyCobolParser::OF, i);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::IdentifiersContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentifiers;
}


std::any BabyCobolParser::IdentifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentifiers(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::identifiers() {
  IdentifiersContext *_localctx = _tracker.createInstance<IdentifiersContext>(_ctx, getState());
  enterRule(_localctx, 80, BabyCobolParser::RuleIdentifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(BabyCobolParser::IDENTIFIER);
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(455);
        match(BabyCobolParser::OF);
        setState(456);
        match(BabyCobolParser::IDENTIFIER); 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    setState(465);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(462);
      match(BabyCobolParser::T__11);
      setState(463);
      match(BabyCobolParser::INT);
      setState(464);
      match(BabyCobolParser::T__12);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BabyCobolParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 30: return arithmeticExpressionSempred(antlrcpp::downCast<ArithmeticExpressionContext *>(context), predicateIndex);
    case 31: return stringExpressionSempred(antlrcpp::downCast<StringExpressionContext *>(context), predicateIndex);
    case 32: return booleanExpressionSempred(antlrcpp::downCast<BooleanExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::arithmeticExpressionSempred(ArithmeticExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::stringExpressionSempred(StringExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void BabyCobolParser::initialize() {
  std::call_once(babycobolParserOnceFlag, babycobolParserInitialize);
}

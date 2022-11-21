
// Generated from /home/bruh/repos/Crossover/grammar/BabyCobol.g4 by ANTLR 4.10.1


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
      "program", "identification", "name", "value", "data", "line", "record", 
      "field", "level", "representation", "procedure", "paragraph", "sentence", 
      "statement", "label", "display", "stop", "move", "subtract", "multiply", 
      "perform", "ifStatement", "accept", "add", "divide", "evaluate", "nextSentence", 
      "loop", "gotoStatement", "signal", "alter", "anyExpression", "arithmeticExpression", 
      "stringExpression", "booleanExpression", "loopExpression", "contractedBooleanPart", 
      "comparisonOp", "booleanOp", "arithmeticOp", "whenBlock", "atomic", 
      "identifiers", "int"
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
  	4,1,79,486,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,3,0,91,8,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,5,1,104,8,1,10,1,12,1,107,9,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,5,4,116,
  	8,4,10,4,12,4,119,9,4,1,5,1,5,3,5,123,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,3,7,136,8,7,1,7,1,7,1,7,1,7,3,7,142,8,7,1,7,1,7,1,8,1,
  	8,1,9,1,9,1,10,1,10,1,10,1,10,5,10,154,8,10,10,10,12,10,157,9,10,1,10,
  	4,10,160,8,10,11,10,12,10,161,1,11,1,11,1,11,4,11,167,8,11,11,11,12,11,
  	168,1,12,4,12,172,8,12,11,12,12,12,173,1,12,1,12,1,13,3,13,179,8,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,3,13,197,8,13,1,14,1,14,1,15,1,15,4,15,203,8,15,11,15,12,15,204,
  	1,15,1,15,1,15,3,15,210,8,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,3,17,
  	219,8,17,1,17,1,17,4,17,223,8,17,11,17,12,17,224,1,18,1,18,4,18,229,8,
  	18,11,18,12,18,230,1,18,1,18,1,18,1,18,3,18,237,8,18,1,19,1,19,1,19,1,
  	19,4,19,243,8,19,11,19,12,19,244,1,19,1,19,3,19,249,8,19,1,20,1,20,1,
  	20,1,20,3,20,255,8,20,1,20,1,20,1,20,3,20,260,8,20,1,21,1,21,1,21,1,21,
  	4,21,266,8,21,11,21,12,21,267,1,21,1,21,4,21,272,8,21,11,21,12,21,273,
  	3,21,276,8,21,1,21,1,21,1,22,1,22,4,22,282,8,22,11,22,12,22,283,1,23,
  	1,23,4,23,288,8,23,11,23,12,23,289,1,23,1,23,1,23,1,23,3,23,296,8,23,
  	1,24,1,24,1,24,1,24,4,24,302,8,24,11,24,12,24,303,1,24,1,24,3,24,308,
  	8,24,1,24,1,24,3,24,312,8,24,1,25,1,25,1,25,5,25,317,8,25,10,25,12,25,
  	320,9,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,5,27,329,8,27,10,27,12,27,
  	332,9,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,3,29,343,8,29,1,
  	29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,3,31,357,8,
  	31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,5,32,366,8,32,10,32,12,32,369,9,
  	32,1,33,1,33,1,33,1,33,1,33,1,33,5,33,377,8,33,10,33,12,33,380,9,33,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,4,34,389,8,34,11,34,12,34,390,1,34,1,
  	34,1,34,1,34,1,34,1,34,3,34,399,8,34,1,34,1,34,1,34,1,34,5,34,405,8,34,
  	10,34,12,34,408,9,34,1,35,1,35,3,35,412,8,35,1,35,1,35,3,35,416,8,35,
  	1,35,1,35,3,35,420,8,35,1,35,1,35,3,35,424,8,35,1,35,1,35,1,35,1,35,1,
  	35,3,35,431,8,35,1,36,1,36,3,36,435,8,36,1,36,1,36,1,37,1,37,1,38,1,38,
  	1,39,1,39,1,40,1,40,4,40,447,8,40,11,40,12,40,448,1,40,4,40,452,8,40,
  	11,40,12,40,453,1,40,1,40,1,40,4,40,459,8,40,11,40,12,40,460,3,40,463,
  	8,40,1,41,1,41,1,41,3,41,468,8,41,1,42,1,42,1,42,5,42,473,8,42,10,42,
  	12,42,476,9,42,1,42,1,42,1,42,1,42,3,42,482,8,42,1,43,1,43,1,43,0,3,64,
  	66,68,44,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,0,7,
  	1,0,71,72,1,0,1,2,2,0,35,35,77,77,1,0,4,9,1,0,46,48,2,0,1,3,10,11,2,0,
  	71,71,75,75,517,0,88,1,0,0,0,2,95,1,0,0,0,4,108,1,0,0,0,6,110,1,0,0,0,
  	8,112,1,0,0,0,10,122,1,0,0,0,12,124,1,0,0,0,14,128,1,0,0,0,16,145,1,0,
  	0,0,18,147,1,0,0,0,20,149,1,0,0,0,22,163,1,0,0,0,24,171,1,0,0,0,26,178,
  	1,0,0,0,28,198,1,0,0,0,30,200,1,0,0,0,32,211,1,0,0,0,34,213,1,0,0,0,36,
  	226,1,0,0,0,38,238,1,0,0,0,40,250,1,0,0,0,42,261,1,0,0,0,44,279,1,0,0,
  	0,46,285,1,0,0,0,48,297,1,0,0,0,50,313,1,0,0,0,52,323,1,0,0,0,54,326,
  	1,0,0,0,56,335,1,0,0,0,58,339,1,0,0,0,60,346,1,0,0,0,62,356,1,0,0,0,64,
  	358,1,0,0,0,66,370,1,0,0,0,68,398,1,0,0,0,70,430,1,0,0,0,72,432,1,0,0,
  	0,74,438,1,0,0,0,76,440,1,0,0,0,78,442,1,0,0,0,80,462,1,0,0,0,82,467,
  	1,0,0,0,84,469,1,0,0,0,86,483,1,0,0,0,88,90,3,2,1,0,89,91,3,8,4,0,90,
  	89,1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,0,92,93,3,20,10,0,93,94,5,0,0,1,
  	94,1,1,0,0,0,95,96,5,14,0,0,96,97,5,15,0,0,97,105,5,77,0,0,98,99,3,4,
  	2,0,99,100,5,77,0,0,100,101,3,6,3,0,101,102,5,77,0,0,102,104,1,0,0,0,
  	103,98,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,3,
  	1,0,0,0,107,105,1,0,0,0,108,109,5,74,0,0,109,5,1,0,0,0,110,111,5,76,0,
  	0,111,7,1,0,0,0,112,113,5,17,0,0,113,117,5,15,0,0,114,116,3,10,5,0,115,
  	114,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,9,1,0,
  	0,0,119,117,1,0,0,0,120,123,3,12,6,0,121,123,3,14,7,0,122,120,1,0,0,0,
  	122,121,1,0,0,0,123,11,1,0,0,0,124,125,3,16,8,0,125,126,5,74,0,0,126,
  	127,5,77,0,0,127,13,1,0,0,0,128,129,3,16,8,0,129,135,5,74,0,0,130,131,
  	5,58,0,0,131,132,5,59,0,0,132,136,3,18,9,0,133,134,5,60,0,0,134,136,3,
  	84,42,0,135,130,1,0,0,0,135,133,1,0,0,0,136,141,1,0,0,0,137,138,5,61,
  	0,0,138,139,3,86,43,0,139,140,5,31,0,0,140,142,1,0,0,0,141,137,1,0,0,
  	0,141,142,1,0,0,0,142,143,1,0,0,0,143,144,5,77,0,0,144,15,1,0,0,0,145,
  	146,3,86,43,0,146,17,1,0,0,0,147,148,7,0,0,0,148,19,1,0,0,0,149,150,5,
  	16,0,0,150,151,5,15,0,0,151,155,5,77,0,0,152,154,3,24,12,0,153,152,1,
  	0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,159,1,0,0,0,
  	157,155,1,0,0,0,158,160,3,22,11,0,159,158,1,0,0,0,160,161,1,0,0,0,161,
  	159,1,0,0,0,161,162,1,0,0,0,162,21,1,0,0,0,163,164,3,28,14,0,164,166,
  	5,77,0,0,165,167,3,24,12,0,166,165,1,0,0,0,167,168,1,0,0,0,168,166,1,
  	0,0,0,168,169,1,0,0,0,169,23,1,0,0,0,170,172,3,26,13,0,171,170,1,0,0,
  	0,172,173,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,
  	176,5,77,0,0,176,25,1,0,0,0,177,179,7,1,0,0,178,177,1,0,0,0,178,179,1,
  	0,0,0,179,196,1,0,0,0,180,197,3,30,15,0,181,197,3,32,16,0,182,197,3,34,
  	17,0,183,197,3,36,18,0,184,197,3,38,19,0,185,197,3,40,20,0,186,197,3,
  	42,21,0,187,197,3,44,22,0,188,197,3,46,23,0,189,197,3,48,24,0,190,197,
  	3,50,25,0,191,197,3,52,26,0,192,197,3,54,27,0,193,197,3,56,28,0,194,197,
  	3,58,29,0,195,197,3,60,30,0,196,180,1,0,0,0,196,181,1,0,0,0,196,182,1,
  	0,0,0,196,183,1,0,0,0,196,184,1,0,0,0,196,185,1,0,0,0,196,186,1,0,0,0,
  	196,187,1,0,0,0,196,188,1,0,0,0,196,189,1,0,0,0,196,190,1,0,0,0,196,191,
  	1,0,0,0,196,192,1,0,0,0,196,193,1,0,0,0,196,194,1,0,0,0,196,195,1,0,0,
  	0,197,27,1,0,0,0,198,199,5,74,0,0,199,29,1,0,0,0,200,202,5,18,0,0,201,
  	203,3,82,41,0,202,201,1,0,0,0,203,204,1,0,0,0,204,202,1,0,0,0,204,205,
  	1,0,0,0,205,209,1,0,0,0,206,207,5,19,0,0,207,208,5,20,0,0,208,210,5,21,
  	0,0,209,206,1,0,0,0,209,210,1,0,0,0,210,31,1,0,0,0,211,212,5,22,0,0,212,
  	33,1,0,0,0,213,218,5,23,0,0,214,219,5,63,0,0,215,219,5,64,0,0,216,219,
  	5,65,0,0,217,219,3,82,41,0,218,214,1,0,0,0,218,215,1,0,0,0,218,216,1,
  	0,0,0,218,217,1,0,0,0,219,220,1,0,0,0,220,222,5,24,0,0,221,223,3,84,42,
  	0,222,221,1,0,0,0,223,224,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,
  	35,1,0,0,0,226,228,5,25,0,0,227,229,3,82,41,0,228,227,1,0,0,0,229,230,
  	1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,0,231,232,1,0,0,0,232,233,5,26,
  	0,0,233,236,3,82,41,0,234,235,5,27,0,0,235,237,3,84,42,0,236,234,1,0,
  	0,0,236,237,1,0,0,0,237,37,1,0,0,0,238,239,5,28,0,0,239,240,3,82,41,0,
  	240,242,5,29,0,0,241,243,3,82,41,0,242,241,1,0,0,0,243,244,1,0,0,0,244,
  	242,1,0,0,0,244,245,1,0,0,0,245,248,1,0,0,0,246,247,5,27,0,0,247,249,
  	3,84,42,0,248,246,1,0,0,0,248,249,1,0,0,0,249,39,1,0,0,0,250,251,5,30,
  	0,0,251,254,3,28,14,0,252,253,5,57,0,0,253,255,3,28,14,0,254,252,1,0,
  	0,0,254,255,1,0,0,0,255,259,1,0,0,0,256,257,3,82,41,0,257,258,5,31,0,
  	0,258,260,1,0,0,0,259,256,1,0,0,0,259,260,1,0,0,0,260,41,1,0,0,0,261,
  	262,5,32,0,0,262,263,3,68,34,0,263,265,5,33,0,0,264,266,3,26,13,0,265,
  	264,1,0,0,0,266,267,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,275,1,
  	0,0,0,269,271,5,34,0,0,270,272,3,26,13,0,271,270,1,0,0,0,272,273,1,0,
  	0,0,273,271,1,0,0,0,273,274,1,0,0,0,274,276,1,0,0,0,275,269,1,0,0,0,275,
  	276,1,0,0,0,276,277,1,0,0,0,277,278,7,2,0,0,278,43,1,0,0,0,279,281,5,
  	36,0,0,280,282,3,84,42,0,281,280,1,0,0,0,282,283,1,0,0,0,283,281,1,0,
  	0,0,283,284,1,0,0,0,284,45,1,0,0,0,285,287,5,37,0,0,286,288,3,82,41,0,
  	287,286,1,0,0,0,288,289,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,291,
  	1,0,0,0,291,292,5,24,0,0,292,295,3,82,41,0,293,294,5,27,0,0,294,296,3,
  	84,42,0,295,293,1,0,0,0,295,296,1,0,0,0,296,47,1,0,0,0,297,298,5,38,0,
  	0,298,299,3,82,41,0,299,301,5,39,0,0,300,302,3,82,41,0,301,300,1,0,0,
  	0,302,303,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,307,1,0,0,0,305,
  	306,5,27,0,0,306,308,3,84,42,0,307,305,1,0,0,0,307,308,1,0,0,0,308,311,
  	1,0,0,0,309,310,5,51,0,0,310,312,3,84,42,0,311,309,1,0,0,0,311,312,1,
  	0,0,0,312,49,1,0,0,0,313,314,5,40,0,0,314,318,3,62,31,0,315,317,3,80,
  	40,0,316,315,1,0,0,0,317,320,1,0,0,0,318,316,1,0,0,0,318,319,1,0,0,0,
  	319,321,1,0,0,0,320,318,1,0,0,0,321,322,5,35,0,0,322,51,1,0,0,0,323,324,
  	5,49,0,0,324,325,5,50,0,0,325,53,1,0,0,0,326,330,5,52,0,0,327,329,3,70,
  	35,0,328,327,1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,0,0,0,
  	331,333,1,0,0,0,332,330,1,0,0,0,333,334,5,35,0,0,334,55,1,0,0,0,335,336,
  	5,62,0,0,336,337,5,24,0,0,337,338,3,4,2,0,338,57,1,0,0,0,339,342,5,66,
  	0,0,340,343,3,28,14,0,341,343,5,68,0,0,342,340,1,0,0,0,342,341,1,0,0,
  	0,343,344,1,0,0,0,344,345,5,67,0,0,345,59,1,0,0,0,346,347,5,69,0,0,347,
  	348,3,28,14,0,348,349,5,24,0,0,349,350,5,70,0,0,350,351,5,24,0,0,351,
  	352,3,28,14,0,352,61,1,0,0,0,353,357,3,64,32,0,354,357,3,66,33,0,355,
  	357,3,68,34,0,356,353,1,0,0,0,356,354,1,0,0,0,356,355,1,0,0,0,357,63,
  	1,0,0,0,358,359,6,32,-1,0,359,360,3,82,41,0,360,367,1,0,0,0,361,362,10,
  	1,0,0,362,363,3,78,39,0,363,364,3,64,32,2,364,366,1,0,0,0,365,361,1,0,
  	0,0,366,369,1,0,0,0,367,365,1,0,0,0,367,368,1,0,0,0,368,65,1,0,0,0,369,
  	367,1,0,0,0,370,371,6,33,-1,0,371,372,3,82,41,0,372,378,1,0,0,0,373,374,
  	10,1,0,0,374,375,5,3,0,0,375,377,3,66,33,2,376,373,1,0,0,0,377,380,1,
  	0,0,0,378,376,1,0,0,0,378,379,1,0,0,0,379,67,1,0,0,0,380,378,1,0,0,0,
  	381,382,6,34,-1,0,382,399,5,43,0,0,383,399,5,44,0,0,384,385,3,82,41,0,
  	385,386,3,74,37,0,386,388,3,64,32,0,387,389,3,72,36,0,388,387,1,0,0,0,
  	389,390,1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,391,399,1,0,0,0,392,393,
  	3,64,32,0,393,394,3,74,37,0,394,395,3,64,32,0,395,399,1,0,0,0,396,397,
  	5,45,0,0,397,399,3,68,34,2,398,381,1,0,0,0,398,383,1,0,0,0,398,384,1,
  	0,0,0,398,392,1,0,0,0,398,396,1,0,0,0,399,406,1,0,0,0,400,401,10,1,0,
  	0,401,402,3,76,38,0,402,403,3,68,34,2,403,405,1,0,0,0,404,400,1,0,0,0,
  	405,408,1,0,0,0,406,404,1,0,0,0,406,407,1,0,0,0,407,69,1,0,0,0,408,406,
  	1,0,0,0,409,411,5,53,0,0,410,412,3,84,42,0,411,410,1,0,0,0,411,412,1,
  	0,0,0,412,415,1,0,0,0,413,414,5,26,0,0,414,416,3,82,41,0,415,413,1,0,
  	0,0,415,416,1,0,0,0,416,419,1,0,0,0,417,418,5,24,0,0,418,420,3,82,41,
  	0,419,417,1,0,0,0,419,420,1,0,0,0,420,423,1,0,0,0,421,422,5,29,0,0,422,
  	424,3,82,41,0,423,421,1,0,0,0,423,424,1,0,0,0,424,431,1,0,0,0,425,426,
  	5,54,0,0,426,431,3,68,34,0,427,428,5,55,0,0,428,431,3,68,34,0,429,431,
  	3,26,13,0,430,409,1,0,0,0,430,425,1,0,0,0,430,427,1,0,0,0,430,429,1,0,
  	0,0,431,71,1,0,0,0,432,434,3,76,38,0,433,435,3,74,37,0,434,433,1,0,0,
  	0,434,435,1,0,0,0,435,436,1,0,0,0,436,437,3,64,32,0,437,73,1,0,0,0,438,
  	439,7,3,0,0,439,75,1,0,0,0,440,441,7,4,0,0,441,77,1,0,0,0,442,443,7,5,
  	0,0,443,79,1,0,0,0,444,446,5,41,0,0,445,447,3,62,31,0,446,445,1,0,0,0,
  	447,448,1,0,0,0,448,446,1,0,0,0,448,449,1,0,0,0,449,451,1,0,0,0,450,452,
  	3,26,13,0,451,450,1,0,0,0,452,453,1,0,0,0,453,451,1,0,0,0,453,454,1,0,
  	0,0,454,463,1,0,0,0,455,456,5,41,0,0,456,458,5,42,0,0,457,459,3,26,13,
  	0,458,457,1,0,0,0,459,460,1,0,0,0,460,458,1,0,0,0,460,461,1,0,0,0,461,
  	463,1,0,0,0,462,444,1,0,0,0,462,455,1,0,0,0,463,81,1,0,0,0,464,468,3,
  	86,43,0,465,468,5,76,0,0,466,468,3,84,42,0,467,464,1,0,0,0,467,465,1,
  	0,0,0,467,466,1,0,0,0,468,83,1,0,0,0,469,474,5,74,0,0,470,471,5,56,0,
  	0,471,473,5,74,0,0,472,470,1,0,0,0,473,476,1,0,0,0,474,472,1,0,0,0,474,
  	475,1,0,0,0,475,481,1,0,0,0,476,474,1,0,0,0,477,478,5,12,0,0,478,479,
  	3,86,43,0,479,480,5,13,0,0,480,482,1,0,0,0,481,477,1,0,0,0,481,482,1,
  	0,0,0,482,85,1,0,0,0,483,484,7,6,0,0,484,87,1,0,0,0,53,90,105,117,122,
  	135,141,155,161,168,173,178,196,204,209,218,224,230,236,244,248,254,259,
  	267,273,275,283,289,295,303,307,311,318,330,342,356,367,378,390,398,406,
  	411,415,419,423,430,434,448,453,460,462,467,474,481
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
    setState(88);
    identification();
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(89);
      data();
    }
    setState(92);
    procedure();
    setState(93);
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
    setState(95);
    match(BabyCobolParser::IDENTIFICATION);
    setState(96);
    match(BabyCobolParser::DIVISION);
    setState(97);
    match(BabyCobolParser::DOT);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(98);
      name();
      setState(99);
      match(BabyCobolParser::DOT);
      setState(100);
      value();
      setState(101);
      match(BabyCobolParser::DOT);
      setState(107);
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
    setState(108);
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
    setState(110);
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

std::vector<BabyCobolParser::LineContext *> BabyCobolParser::DataContext::line() {
  return getRuleContexts<BabyCobolParser::LineContext>();
}

BabyCobolParser::LineContext* BabyCobolParser::DataContext::line(size_t i) {
  return getRuleContext<BabyCobolParser::LineContext>(i);
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
    setState(112);
    match(BabyCobolParser::DATA);
    setState(113);
    match(BabyCobolParser::DIVISION);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::NINE

    || _la == BabyCobolParser::INT) {
      setState(114);
      line();
      setState(119);
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

//----------------- LineContext ------------------------------------------------------------------

BabyCobolParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::RecordContext* BabyCobolParser::LineContext::record() {
  return getRuleContext<BabyCobolParser::RecordContext>(0);
}

BabyCobolParser::FieldContext* BabyCobolParser::LineContext::field() {
  return getRuleContext<BabyCobolParser::FieldContext>(0);
}


size_t BabyCobolParser::LineContext::getRuleIndex() const {
  return BabyCobolParser::RuleLine;
}


std::any BabyCobolParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::LineContext* BabyCobolParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 10, BabyCobolParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(120);
      record();
      break;
    }

    case 2: {
      setState(121);
      field();
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

//----------------- RecordContext ------------------------------------------------------------------

BabyCobolParser::RecordContext::RecordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LevelContext* BabyCobolParser::RecordContext::level() {
  return getRuleContext<BabyCobolParser::LevelContext>(0);
}

tree::TerminalNode* BabyCobolParser::RecordContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::RecordContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}


size_t BabyCobolParser::RecordContext::getRuleIndex() const {
  return BabyCobolParser::RuleRecord;
}


std::any BabyCobolParser::RecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitRecord(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::RecordContext* BabyCobolParser::record() {
  RecordContext *_localctx = _tracker.createInstance<RecordContext>(_ctx, getState());
  enterRule(_localctx, 12, BabyCobolParser::RuleRecord);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    level();
    setState(125);
    match(BabyCobolParser::IDENTIFIER);
    setState(126);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

BabyCobolParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LevelContext* BabyCobolParser::FieldContext::level() {
  return getRuleContext<BabyCobolParser::LevelContext>(0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::PICTURE() {
  return getToken(BabyCobolParser::PICTURE, 0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::IS() {
  return getToken(BabyCobolParser::IS, 0);
}

BabyCobolParser::RepresentationContext* BabyCobolParser::FieldContext::representation() {
  return getRuleContext<BabyCobolParser::RepresentationContext>(0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::LIKE() {
  return getToken(BabyCobolParser::LIKE, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::FieldContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::OCCURS() {
  return getToken(BabyCobolParser::OCCURS, 0);
}

BabyCobolParser::IntContext* BabyCobolParser::FieldContext::int_() {
  return getRuleContext<BabyCobolParser::IntContext>(0);
}

tree::TerminalNode* BabyCobolParser::FieldContext::TIMES() {
  return getToken(BabyCobolParser::TIMES, 0);
}


size_t BabyCobolParser::FieldContext::getRuleIndex() const {
  return BabyCobolParser::RuleField;
}


std::any BabyCobolParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::FieldContext* BabyCobolParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 14, BabyCobolParser::RuleField);
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
    setState(128);
    level();
    setState(129);
    match(BabyCobolParser::IDENTIFIER);
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(130);
        match(BabyCobolParser::PICTURE);
        setState(131);
        match(BabyCobolParser::IS);
        setState(132);
        representation();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(133);
        match(BabyCobolParser::LIKE);
        setState(134);
        identifiers();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(137);
      match(BabyCobolParser::OCCURS);
      setState(138);
      int_();
      setState(139);
      match(BabyCobolParser::TIMES);
    }
    setState(143);
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

BabyCobolParser::IntContext* BabyCobolParser::LevelContext::int_() {
  return getRuleContext<BabyCobolParser::IntContext>(0);
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
  enterRule(_localctx, 16, BabyCobolParser::RuleLevel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    int_();
   
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
  enterRule(_localctx, 18, BabyCobolParser::RuleRepresentation);
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
    setState(147);
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
  enterRule(_localctx, 20, BabyCobolParser::RuleProcedure);
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
    setState(149);
    match(BabyCobolParser::PROCEDURE);
    setState(150);
    match(BabyCobolParser::DIVISION);
    setState(151);
    match(BabyCobolParser::DOT);
    setState(155);
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
      setState(152);
      sentence();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(159); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(158);
      paragraph();
      setState(161); 
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
  enterRule(_localctx, 22, BabyCobolParser::RuleParagraph);
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
    label();
    setState(164);
    match(BabyCobolParser::DOT);
    setState(166); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(165);
      sentence();
      setState(168); 
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
  enterRule(_localctx, 24, BabyCobolParser::RuleSentence);
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
    setState(171); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(170);
      statement();
      setState(173); 
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
    setState(175);
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
  enterRule(_localctx, 26, BabyCobolParser::RuleStatement);
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
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__0

    || _la == BabyCobolParser::T__1) {
      setState(177);
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
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(180);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(181);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(182);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(183);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(184);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(185);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(186);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(187);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(188);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(189);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(190);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(191);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(192);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(193);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(194);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(195);
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
  enterRule(_localctx, 28, BabyCobolParser::RuleLabel);

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
  enterRule(_localctx, 30, BabyCobolParser::RuleDisplay);
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
    setState(200);
    match(BabyCobolParser::DISPLAY);
    setState(202); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(201);
      atomic();
      setState(204); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0));
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(206);
      match(BabyCobolParser::WITH);
      setState(207);
      match(BabyCobolParser::NO);
      setState(208);
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
  enterRule(_localctx, 32, BabyCobolParser::RuleStop);

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
  enterRule(_localctx, 34, BabyCobolParser::RuleMove);
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
    setState(213);
    match(BabyCobolParser::MOVE);
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(214);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(215);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(216);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::NINE:
      case BabyCobolParser::IDENTIFIER:
      case BabyCobolParser::INT:
      case BabyCobolParser::LITERAL: {
        setState(217);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(220);
    match(BabyCobolParser::TO);
    setState(222); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(221);
      identifiers();
      setState(224); 
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
  enterRule(_localctx, 36, BabyCobolParser::RuleSubtract);
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
    setState(226);
    match(BabyCobolParser::SUBTRACT);
    setState(228); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(227);
      antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<SubtractContext *>(_localctx)->as.push_back(antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext);
      setState(230); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0));
    setState(232);
    match(BabyCobolParser::FROM);
    setState(233);
    antlrcpp::downCast<SubtractContext *>(_localctx)->from = atomic();
    setState(236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(234);
      match(BabyCobolParser::GIVING);
      setState(235);
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
  enterRule(_localctx, 38, BabyCobolParser::RuleMultiply);
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
    setState(238);
    match(BabyCobolParser::MULTIPLY);
    setState(239);
    antlrcpp::downCast<MultiplyContext *>(_localctx)->a = atomic();
    setState(240);
    match(BabyCobolParser::BY);
    setState(242); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(241);
      antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<MultiplyContext *>(_localctx)->as.push_back(antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext);
      setState(244); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0));
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(246);
      match(BabyCobolParser::GIVING);
      setState(247);
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
  enterRule(_localctx, 40, BabyCobolParser::RulePerform);
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
    setState(250);
    match(BabyCobolParser::PERFORM);
    setState(251);
    antlrcpp::downCast<PerformContext *>(_localctx)->procedureName = label();
    setState(254);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(252);
      match(BabyCobolParser::THROUGH);
      setState(253);
      antlrcpp::downCast<PerformContext *>(_localctx)->through = label();
    }
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0)) {
      setState(256);
      antlrcpp::downCast<PerformContext *>(_localctx)->times = atomic();
      setState(257);
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
  enterRule(_localctx, 42, BabyCobolParser::RuleIfStatement);
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
    setState(261);
    match(BabyCobolParser::IF);
    setState(262);
    booleanExpression(0);
    setState(263);
    match(BabyCobolParser::THEN);
    setState(265); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(264);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<IfStatementContext *>(_localctx)->t.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
      setState(267); 
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
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(269);
      match(BabyCobolParser::ELSE);
      setState(271); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(270);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->f.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
        setState(273); 
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
    setState(277);
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
  enterRule(_localctx, 44, BabyCobolParser::RuleAccept);
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
    setState(279);
    match(BabyCobolParser::ACCEPT);
    setState(281); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(280);
      antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      antlrcpp::downCast<AcceptContext *>(_localctx)->id.push_back(antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext);
      setState(283); 
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
  enterRule(_localctx, 46, BabyCobolParser::RuleAdd);
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
    setState(285);
    match(BabyCobolParser::ADD);
    setState(287); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(286);
      atomic();
      setState(289); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0));
    setState(291);
    match(BabyCobolParser::TO);
    setState(292);
    antlrcpp::downCast<AddContext *>(_localctx)->to = atomic();
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(293);
      match(BabyCobolParser::GIVING);
      setState(294);
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
  enterRule(_localctx, 48, BabyCobolParser::RuleDivide);
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
    setState(297);
    match(BabyCobolParser::DIVIDE);
    setState(298);
    antlrcpp::downCast<DivideContext *>(_localctx)->a = atomic();
    setState(299);
    match(BabyCobolParser::INTO);
    setState(301); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(300);
      antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<DivideContext *>(_localctx)->as.push_back(antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext);
      setState(303); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::IDENTIFIER - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71)))) != 0));
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(305);
      match(BabyCobolParser::GIVING);
      setState(306);
      antlrcpp::downCast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(309);
      match(BabyCobolParser::REMAINDER);
      setState(310);
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
  enterRule(_localctx, 50, BabyCobolParser::RuleEvaluate);
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
    setState(313);
    match(BabyCobolParser::EVALUATE);
    setState(314);
    anyExpression();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(315);
      whenBlock();
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(321);
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
  enterRule(_localctx, 52, BabyCobolParser::RuleNextSentence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(BabyCobolParser::NEXT);
    setState(324);
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
  enterRule(_localctx, 54, BabyCobolParser::RuleLoop);
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
    setState(326);
    match(BabyCobolParser::LOOP);
    setState(330);
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
      setState(327);
      loopExpression();
      setState(332);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(333);
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
  enterRule(_localctx, 56, BabyCobolParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(BabyCobolParser::GO);
    setState(336);
    match(BabyCobolParser::TO);
    setState(337);
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
  enterRule(_localctx, 58, BabyCobolParser::RuleSignal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(BabyCobolParser::SIGNAL);
    setState(342);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::IDENTIFIER: {
        setState(340);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(341);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(344);
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
  enterRule(_localctx, 60, BabyCobolParser::RuleAlter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(BabyCobolParser::ALTER);
    setState(347);
    antlrcpp::downCast<AlterContext *>(_localctx)->l1 = label();
    setState(348);
    match(BabyCobolParser::TO);
    setState(349);
    match(BabyCobolParser::PROCEED);
    setState(350);
    match(BabyCobolParser::TO);
    setState(351);
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
  enterRule(_localctx, 62, BabyCobolParser::RuleAnyExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(353);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(354);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(355);
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
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, BabyCobolParser::RuleArithmeticExpression, precedence);

    

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

    setState(359);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(361);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(362);
        arithmeticOp();
        setState(363);
        antlrcpp::downCast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(369);
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
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, BabyCobolParser::RuleStringExpression, precedence);

    

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

    setState(371);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(378);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(373);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(374);
        match(BabyCobolParser::T__2);
        setState(375);
        antlrcpp::downCast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(380);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
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
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, BabyCobolParser::RuleBooleanExpression, precedence);

    

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
    setState(398);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(382);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(383);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(384);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(385);
      comparisonOp();
      setState(386);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(388); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(387);
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(390); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(392);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(393);
      comparisonOp();
      setState(394);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(396);
      match(BabyCobolParser::NOT);
      setState(397);
      booleanExpression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(406);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(400);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(401);
        booleanOp();
        setState(402);
        antlrcpp::downCast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(408);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
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
  enterRule(_localctx, 70, BabyCobolParser::RuleLoopExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(430);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = _tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(409);
        match(BabyCobolParser::VARYING);
        setState(411);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::IDENTIFIER) {
          setState(410);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(415);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(413);
          match(BabyCobolParser::FROM);
          setState(414);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(419);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(417);
          match(BabyCobolParser::TO);
          setState(418);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(423);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(421);
          match(BabyCobolParser::BY);
          setState(422);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = _tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(425);
        match(BabyCobolParser::WHILE);
        setState(426);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = _tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(427);
        match(BabyCobolParser::UNTIL);
        setState(428);
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
        setState(429);
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
  enterRule(_localctx, 72, BabyCobolParser::RuleContractedBooleanPart);
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
    setState(432);
    booleanOp();
    setState(434);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0)) {
      setState(433);
      comparisonOp();
    }
    setState(436);
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
  enterRule(_localctx, 74, BabyCobolParser::RuleComparisonOp);
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
    setState(438);
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
  enterRule(_localctx, 76, BabyCobolParser::RuleBooleanOp);
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
    setState(440);
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
  enterRule(_localctx, 78, BabyCobolParser::RuleArithmeticOp);
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
    setState(442);
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
  enterRule(_localctx, 80, BabyCobolParser::RuleWhenBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(462);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(444);
      match(BabyCobolParser::WHEN);
      setState(446); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(445);
        anyExpression();
        setState(448); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 43) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 43)) & ((1ULL << (BabyCobolParser::TRUE - 43))
        | (1ULL << (BabyCobolParser::FALSE - 43))
        | (1ULL << (BabyCobolParser::NOT - 43))
        | (1ULL << (BabyCobolParser::NINE - 43))
        | (1ULL << (BabyCobolParser::IDENTIFIER - 43))
        | (1ULL << (BabyCobolParser::INT - 43))
        | (1ULL << (BabyCobolParser::LITERAL - 43)))) != 0));
      setState(451); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(450);
        statement();
        setState(453); 
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
      setState(455);
      match(BabyCobolParser::WHEN);
      setState(456);
      match(BabyCobolParser::OTHER);
      setState(458); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(457);
        statement();
        setState(460); 
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

BabyCobolParser::IntContext* BabyCobolParser::IntLiteralContext::int_() {
  return getRuleContext<BabyCobolParser::IntContext>(0);
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
  enterRule(_localctx, 82, BabyCobolParser::RuleAtomic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::NINE:
      case BabyCobolParser::INT: {
        _localctx = _tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(464);
        int_();
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = _tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(465);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<BabyCobolParser::IdentifierContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(466);
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

BabyCobolParser::IntContext* BabyCobolParser::IdentifiersContext::int_() {
  return getRuleContext<BabyCobolParser::IntContext>(0);
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
  enterRule(_localctx, 84, BabyCobolParser::RuleIdentifiers);

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
    setState(469);
    match(BabyCobolParser::IDENTIFIER);
    setState(474);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(470);
        match(BabyCobolParser::OF);
        setState(471);
        match(BabyCobolParser::IDENTIFIER); 
      }
      setState(476);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
    setState(481);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      setState(477);
      match(BabyCobolParser::T__11);
      setState(478);
      int_();
      setState(479);
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

//----------------- IntContext ------------------------------------------------------------------

BabyCobolParser::IntContext::IntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IntContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}

tree::TerminalNode* BabyCobolParser::IntContext::NINE() {
  return getToken(BabyCobolParser::NINE, 0);
}


size_t BabyCobolParser::IntContext::getRuleIndex() const {
  return BabyCobolParser::RuleInt;
}


std::any BabyCobolParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IntContext* BabyCobolParser::int_() {
  IntContext *_localctx = _tracker.createInstance<IntContext>(_ctx, getState());
  enterRule(_localctx, 86, BabyCobolParser::RuleInt);
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
    setState(483);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::NINE

    || _la == BabyCobolParser::INT)) {
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

bool BabyCobolParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 32: return arithmeticExpressionSempred(antlrcpp::downCast<ArithmeticExpressionContext *>(context), predicateIndex);
    case 33: return stringExpressionSempred(antlrcpp::downCast<StringExpressionContext *>(context), predicateIndex);
    case 34: return booleanExpressionSempred(antlrcpp::downCast<BooleanExpressionContext *>(context), predicateIndex);

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

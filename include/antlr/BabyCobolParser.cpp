
// Generated from /home/manzi/repos/Crossover/grammar/BabyCobol.g4 by ANTLR 4.12.0


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

::antlr4::internal::OnceFlag babycobolParserOnceFlag;
BabyCobolParserStaticData *babycobolParserStaticData = nullptr;

void babycobolParserInitialize() {
  assert(babycobolParserStaticData == nullptr);
  auto staticData = std::make_unique<BabyCobolParserStaticData>(
    std::vector<std::string>{
      "program", "identificationDiv", "identificationEntry", "dataDivision", 
      "line", "record", "field", "level", "mask", "procedure", "paragraph", 
      "sentence", "statement", "label", "display", "stop", "move", "subtract", 
      "multiply", "perform", "ifStatement", "accept", "add", "divide", "evaluate", 
      "nextSentence", "loop", "gotoStatement", "signal", "alter", "callStatement", 
      "anyExpression", "arithmeticExpression", "stringExpression", "booleanExpression", 
      "loopExpression", "contractedBooleanPart", "comparisonOp", "booleanOp", 
      "arithmeticOp", "whenBlock", "atomic", "identifiers", "int"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'STRUCT'", "'PRIMITIVE'", "'IDENTIFICATION'", "'DIVISION'", 
      "'PROCEDURE'", "'DATA'", "'DISPLAY'", "'WITH'", "'NO'", "'ADVANCING'", 
      "'STOP'", "'MOVE'", "'TO'", "'SUBTRACT'", "'FROM'", "'GIVING'", "'MULTIPLY'", 
      "'BY'", "'PERFORM'", "'TIMES'", "'IF'", "'THEN'", "'ELSE'", "'END'", 
      "'ACCEPT'", "'ADD'", "'DIVIDE'", "'INTO'", "'EVALUATE'", "'WHEN'", 
      "'OTHER'", "'TRUE'", "'FALSE'", "'NOT'", "'OR'", "'AND'", "'XOR'", 
      "'NEXT'", "'SENTENCE'", "'REMAINDER'", "'LOOP'", "'VARYING'", "'WHILE'", 
      "'UNTIL'", "'OF'", "'THROUGH'", "'PICTURE'", "'IS'", "'LIKE'", "'OCCURS'", 
      "'GO'", "'SPACES'", "'HIGH-VALUES'", "'LOW-VALUES'", "'SIGNAL'", "'ON ERROR'", 
      "'OFF'", "'ALTER'", "'PROCEED'", "'CALL'", "'RETURNING'", "'BY VALUE'", 
      "'BY REFERENCE'", "", "'USING'", "'AS'", "'!='", "'<='", "'<'", "'='", 
      "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", "'**'", "", "", "", "", 
      "", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "STRUCT", "PRIMITIVE", "IDENTIFICATION", "DIVISION", "PROCEDURE", 
      "DATA", "DISPLAY", "WITH", "NO", "ADVANCING", "STOP", "MOVE", "TO", 
      "SUBTRACT", "FROM", "GIVING", "MULTIPLY", "BY", "PERFORM", "TIMES", 
      "IF", "THEN", "ELSE", "END", "ACCEPT", "ADD", "DIVIDE", "INTO", "EVALUATE", 
      "WHEN", "OTHER", "TRUE", "FALSE", "NOT", "OR", "AND", "XOR", "NEXT", 
      "SENTENCE", "REMAINDER", "LOOP", "VARYING", "WHILE", "UNTIL", "OF", 
      "THROUGH", "PICTURE", "IS", "LIKE", "OCCURS", "GO", "SPACES", "HIGH", 
      "LOW", "SIGNAL", "ONERROR", "OFF", "ALTER", "PROCEED", "CALL", "RETURNING", 
      "BYVALUE", "BYREFERENCE", "RETURNINGBYREFERENCE", "USING", "AS", "NEQ", 
      "LTE", "LT", "EQ", "GT", "GTE", "SYMBOL_PLUS", "SYMBOL_MINUS", "SYMBOL_MULT", 
      "SYMBOL_DIV", "SYMBOL_EXP", "WS", "FUNCTIONNAME", "INT", "DOUBLE", 
      "LITERAL", "DOT", "IDENTIFIER", "COMMENTLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,87,594,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,3,0,91,8,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,5,1,100,8,
  	1,10,1,12,1,103,9,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,5,3,114,8,3,10,
  	3,12,3,117,9,3,1,4,1,4,3,4,121,8,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,3,6,134,8,6,1,6,1,6,1,6,3,6,139,8,6,1,6,1,6,1,7,1,7,1,8,1,8,
  	1,9,1,9,1,9,1,9,5,9,151,8,9,10,9,12,9,154,9,9,1,10,1,10,1,10,4,10,159,
  	8,10,11,10,12,10,160,3,10,163,8,10,1,10,1,10,5,10,167,8,10,10,10,12,10,
  	170,9,10,1,10,1,10,1,10,1,11,4,11,176,8,11,11,11,12,11,177,1,11,1,11,
  	1,12,3,12,183,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,202,8,12,1,13,1,13,1,14,1,14,
  	4,14,208,8,14,11,14,12,14,209,1,14,1,14,1,14,3,14,215,8,14,1,15,1,15,
  	1,16,1,16,1,16,1,16,1,16,3,16,224,8,16,1,16,1,16,4,16,228,8,16,11,16,
  	12,16,229,1,17,1,17,4,17,234,8,17,11,17,12,17,235,1,17,1,17,1,17,1,17,
  	3,17,242,8,17,1,18,1,18,1,18,1,18,4,18,248,8,18,11,18,12,18,249,1,18,
  	1,18,3,18,254,8,18,1,19,1,19,1,19,1,19,3,19,260,8,19,1,19,1,19,1,19,3,
  	19,265,8,19,1,20,1,20,1,20,1,20,4,20,271,8,20,11,20,12,20,272,1,20,1,
  	20,4,20,277,8,20,11,20,12,20,278,3,20,281,8,20,1,20,1,20,1,21,1,21,4,
  	21,287,8,21,11,21,12,21,288,1,22,1,22,4,22,293,8,22,11,22,12,22,294,1,
  	22,1,22,1,22,1,22,3,22,301,8,22,1,23,1,23,1,23,1,23,4,23,307,8,23,11,
  	23,12,23,308,1,23,1,23,3,23,313,8,23,1,23,1,23,3,23,317,8,23,1,24,1,24,
  	1,24,5,24,322,8,24,10,24,12,24,325,9,24,1,24,1,24,1,25,1,25,1,25,1,26,
  	1,26,1,26,5,26,335,8,26,10,26,12,26,338,9,26,1,26,1,26,1,27,1,27,1,27,
  	1,27,1,28,1,28,1,28,3,28,349,8,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,30,1,30,1,30,1,30,3,30,364,8,30,1,30,1,30,1,30,4,30,369,8,
  	30,11,30,12,30,370,1,30,1,30,1,30,1,30,1,30,4,30,378,8,30,11,30,12,30,
  	379,1,30,1,30,1,30,1,30,4,30,386,8,30,11,30,12,30,387,1,30,1,30,1,30,
  	1,30,1,30,4,30,395,8,30,11,30,12,30,396,1,30,1,30,1,30,1,30,1,30,4,30,
  	404,8,30,11,30,12,30,405,1,30,1,30,1,30,1,30,4,30,412,8,30,11,30,12,30,
  	413,1,30,1,30,1,30,1,30,1,30,4,30,421,8,30,11,30,12,30,422,1,30,1,30,
  	4,30,427,8,30,11,30,12,30,428,1,30,4,30,432,8,30,11,30,12,30,433,3,30,
  	436,8,30,4,30,438,8,30,11,30,12,30,439,3,30,442,8,30,1,30,1,30,1,30,3,
  	30,447,8,30,1,30,1,30,1,30,1,30,3,30,453,8,30,3,30,455,8,30,3,30,457,
  	8,30,1,31,1,31,1,31,3,31,462,8,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	5,32,471,8,32,10,32,12,32,474,9,32,1,33,1,33,1,33,1,33,1,33,1,33,5,33,
  	482,8,33,10,33,12,33,485,9,33,1,34,1,34,1,34,1,34,1,34,1,34,1,34,4,34,
  	494,8,34,11,34,12,34,495,1,34,1,34,1,34,1,34,1,34,1,34,3,34,504,8,34,
  	1,34,1,34,1,34,1,34,5,34,510,8,34,10,34,12,34,513,9,34,1,35,1,35,3,35,
  	517,8,35,1,35,1,35,3,35,521,8,35,1,35,1,35,3,35,525,8,35,1,35,1,35,3,
  	35,529,8,35,1,35,1,35,1,35,1,35,3,35,535,8,35,1,36,1,36,3,36,539,8,36,
  	1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,4,40,551,8,40,11,40,
  	12,40,552,1,40,4,40,556,8,40,11,40,12,40,557,1,40,1,40,1,40,4,40,563,
  	8,40,11,40,12,40,564,3,40,567,8,40,1,41,1,41,1,41,1,41,3,41,573,8,41,
  	1,42,1,42,1,42,5,42,578,8,42,10,42,12,42,581,9,42,1,42,1,42,1,42,1,42,
  	3,42,587,8,42,1,43,3,43,590,8,43,1,43,1,43,1,43,0,3,64,66,68,44,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,
  	54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,0,7,2,0,82,82,86,86,
  	1,0,76,77,2,0,26,26,85,85,1,0,69,74,1,0,37,39,1,0,75,79,1,0,75,76,653,
  	0,88,1,0,0,0,2,95,1,0,0,0,4,104,1,0,0,0,6,109,1,0,0,0,8,120,1,0,0,0,10,
  	122,1,0,0,0,12,126,1,0,0,0,14,142,1,0,0,0,16,144,1,0,0,0,18,146,1,0,0,
  	0,20,155,1,0,0,0,22,175,1,0,0,0,24,182,1,0,0,0,26,203,1,0,0,0,28,205,
  	1,0,0,0,30,216,1,0,0,0,32,218,1,0,0,0,34,231,1,0,0,0,36,243,1,0,0,0,38,
  	255,1,0,0,0,40,266,1,0,0,0,42,284,1,0,0,0,44,290,1,0,0,0,46,302,1,0,0,
  	0,48,318,1,0,0,0,50,328,1,0,0,0,52,331,1,0,0,0,54,341,1,0,0,0,56,345,
  	1,0,0,0,58,352,1,0,0,0,60,359,1,0,0,0,62,461,1,0,0,0,64,463,1,0,0,0,66,
  	475,1,0,0,0,68,503,1,0,0,0,70,534,1,0,0,0,72,536,1,0,0,0,74,542,1,0,0,
  	0,76,544,1,0,0,0,78,546,1,0,0,0,80,566,1,0,0,0,82,572,1,0,0,0,84,574,
  	1,0,0,0,86,589,1,0,0,0,88,90,3,2,1,0,89,91,3,6,3,0,90,89,1,0,0,0,90,91,
  	1,0,0,0,91,92,1,0,0,0,92,93,3,18,9,0,93,94,5,0,0,1,94,1,1,0,0,0,95,96,
  	5,5,0,0,96,97,5,6,0,0,97,101,5,85,0,0,98,100,3,4,2,0,99,98,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,3,1,0,0,0,103,101,1,0,
  	0,0,104,105,5,86,0,0,105,106,5,85,0,0,106,107,5,84,0,0,107,108,5,85,0,
  	0,108,5,1,0,0,0,109,110,5,8,0,0,110,111,5,6,0,0,111,115,5,85,0,0,112,
  	114,3,8,4,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,
  	0,0,0,116,7,1,0,0,0,117,115,1,0,0,0,118,121,3,10,5,0,119,121,3,12,6,0,
  	120,118,1,0,0,0,120,119,1,0,0,0,121,9,1,0,0,0,122,123,3,14,7,0,123,124,
  	5,86,0,0,124,125,5,85,0,0,125,11,1,0,0,0,126,127,3,14,7,0,127,133,5,86,
  	0,0,128,129,5,49,0,0,129,130,5,50,0,0,130,134,3,16,8,0,131,132,5,51,0,
  	0,132,134,3,84,42,0,133,128,1,0,0,0,133,131,1,0,0,0,134,138,1,0,0,0,135,
  	136,5,52,0,0,136,137,5,82,0,0,137,139,5,22,0,0,138,135,1,0,0,0,138,139,
  	1,0,0,0,139,140,1,0,0,0,140,141,5,85,0,0,141,13,1,0,0,0,142,143,3,86,
  	43,0,143,15,1,0,0,0,144,145,7,0,0,0,145,17,1,0,0,0,146,147,5,7,0,0,147,
  	148,5,6,0,0,148,152,5,85,0,0,149,151,3,20,10,0,150,149,1,0,0,0,151,154,
  	1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,19,1,0,0,0,154,152,1,0,0,
  	0,155,162,3,26,13,0,156,158,5,67,0,0,157,159,3,82,41,0,158,157,1,0,0,
  	0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,163,1,0,0,0,162,
  	156,1,0,0,0,162,163,1,0,0,0,163,164,1,0,0,0,164,168,5,85,0,0,165,167,
  	3,22,11,0,166,165,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,169,1,0,
  	0,0,169,171,1,0,0,0,170,168,1,0,0,0,171,172,5,26,0,0,172,173,5,85,0,0,
  	173,21,1,0,0,0,174,176,3,24,12,0,175,174,1,0,0,0,176,177,1,0,0,0,177,
  	175,1,0,0,0,177,178,1,0,0,0,178,179,1,0,0,0,179,180,5,85,0,0,180,23,1,
  	0,0,0,181,183,7,1,0,0,182,181,1,0,0,0,182,183,1,0,0,0,183,201,1,0,0,0,
  	184,202,3,28,14,0,185,202,3,30,15,0,186,202,3,32,16,0,187,202,3,34,17,
  	0,188,202,3,36,18,0,189,202,3,38,19,0,190,202,3,40,20,0,191,202,3,42,
  	21,0,192,202,3,44,22,0,193,202,3,46,23,0,194,202,3,48,24,0,195,202,3,
  	50,25,0,196,202,3,52,26,0,197,202,3,54,27,0,198,202,3,56,28,0,199,202,
  	3,58,29,0,200,202,3,60,30,0,201,184,1,0,0,0,201,185,1,0,0,0,201,186,1,
  	0,0,0,201,187,1,0,0,0,201,188,1,0,0,0,201,189,1,0,0,0,201,190,1,0,0,0,
  	201,191,1,0,0,0,201,192,1,0,0,0,201,193,1,0,0,0,201,194,1,0,0,0,201,195,
  	1,0,0,0,201,196,1,0,0,0,201,197,1,0,0,0,201,198,1,0,0,0,201,199,1,0,0,
  	0,201,200,1,0,0,0,202,25,1,0,0,0,203,204,5,86,0,0,204,27,1,0,0,0,205,
  	207,5,9,0,0,206,208,3,82,41,0,207,206,1,0,0,0,208,209,1,0,0,0,209,207,
  	1,0,0,0,209,210,1,0,0,0,210,214,1,0,0,0,211,212,5,10,0,0,212,213,5,11,
  	0,0,213,215,5,12,0,0,214,211,1,0,0,0,214,215,1,0,0,0,215,29,1,0,0,0,216,
  	217,5,13,0,0,217,31,1,0,0,0,218,223,5,14,0,0,219,224,5,54,0,0,220,224,
  	5,55,0,0,221,224,5,56,0,0,222,224,3,82,41,0,223,219,1,0,0,0,223,220,1,
  	0,0,0,223,221,1,0,0,0,223,222,1,0,0,0,224,225,1,0,0,0,225,227,5,15,0,
  	0,226,228,3,84,42,0,227,226,1,0,0,0,228,229,1,0,0,0,229,227,1,0,0,0,229,
  	230,1,0,0,0,230,33,1,0,0,0,231,233,5,16,0,0,232,234,3,82,41,0,233,232,
  	1,0,0,0,234,235,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,237,1,0,0,
  	0,237,238,5,17,0,0,238,241,3,82,41,0,239,240,5,18,0,0,240,242,3,84,42,
  	0,241,239,1,0,0,0,241,242,1,0,0,0,242,35,1,0,0,0,243,244,5,19,0,0,244,
  	245,3,82,41,0,245,247,5,20,0,0,246,248,3,82,41,0,247,246,1,0,0,0,248,
  	249,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,250,253,1,0,0,0,251,252,5,
  	18,0,0,252,254,3,84,42,0,253,251,1,0,0,0,253,254,1,0,0,0,254,37,1,0,0,
  	0,255,256,5,21,0,0,256,259,3,26,13,0,257,258,5,48,0,0,258,260,3,26,13,
  	0,259,257,1,0,0,0,259,260,1,0,0,0,260,264,1,0,0,0,261,262,3,82,41,0,262,
  	263,5,22,0,0,263,265,1,0,0,0,264,261,1,0,0,0,264,265,1,0,0,0,265,39,1,
  	0,0,0,266,267,5,23,0,0,267,268,3,68,34,0,268,270,5,24,0,0,269,271,3,24,
  	12,0,270,269,1,0,0,0,271,272,1,0,0,0,272,270,1,0,0,0,272,273,1,0,0,0,
  	273,280,1,0,0,0,274,276,5,25,0,0,275,277,3,24,12,0,276,275,1,0,0,0,277,
  	278,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,281,1,0,0,0,280,274,1,
  	0,0,0,280,281,1,0,0,0,281,282,1,0,0,0,282,283,7,2,0,0,283,41,1,0,0,0,
  	284,286,5,27,0,0,285,287,3,84,42,0,286,285,1,0,0,0,287,288,1,0,0,0,288,
  	286,1,0,0,0,288,289,1,0,0,0,289,43,1,0,0,0,290,292,5,28,0,0,291,293,3,
  	82,41,0,292,291,1,0,0,0,293,294,1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,
  	0,295,296,1,0,0,0,296,297,5,15,0,0,297,300,3,82,41,0,298,299,5,18,0,0,
  	299,301,3,84,42,0,300,298,1,0,0,0,300,301,1,0,0,0,301,45,1,0,0,0,302,
  	303,5,29,0,0,303,304,3,82,41,0,304,306,5,30,0,0,305,307,3,82,41,0,306,
  	305,1,0,0,0,307,308,1,0,0,0,308,306,1,0,0,0,308,309,1,0,0,0,309,312,1,
  	0,0,0,310,311,5,18,0,0,311,313,3,84,42,0,312,310,1,0,0,0,312,313,1,0,
  	0,0,313,316,1,0,0,0,314,315,5,42,0,0,315,317,3,84,42,0,316,314,1,0,0,
  	0,316,317,1,0,0,0,317,47,1,0,0,0,318,319,5,31,0,0,319,323,3,62,31,0,320,
  	322,3,80,40,0,321,320,1,0,0,0,322,325,1,0,0,0,323,321,1,0,0,0,323,324,
  	1,0,0,0,324,326,1,0,0,0,325,323,1,0,0,0,326,327,5,26,0,0,327,49,1,0,0,
  	0,328,329,5,40,0,0,329,330,5,41,0,0,330,51,1,0,0,0,331,332,5,43,0,0,332,
  	336,3,70,35,0,333,335,3,24,12,0,334,333,1,0,0,0,335,338,1,0,0,0,336,334,
  	1,0,0,0,336,337,1,0,0,0,337,339,1,0,0,0,338,336,1,0,0,0,339,340,5,26,
  	0,0,340,53,1,0,0,0,341,342,5,53,0,0,342,343,5,15,0,0,343,344,5,86,0,0,
  	344,55,1,0,0,0,345,348,5,57,0,0,346,349,3,26,13,0,347,349,5,59,0,0,348,
  	346,1,0,0,0,348,347,1,0,0,0,349,350,1,0,0,0,350,351,5,58,0,0,351,57,1,
  	0,0,0,352,353,5,60,0,0,353,354,3,26,13,0,354,355,5,15,0,0,355,356,5,61,
  	0,0,356,357,5,15,0,0,357,358,3,26,13,0,358,59,1,0,0,0,359,360,5,62,0,
  	0,360,363,5,86,0,0,361,362,5,47,0,0,362,364,5,86,0,0,363,361,1,0,0,0,
  	363,364,1,0,0,0,364,441,1,0,0,0,365,437,5,67,0,0,366,368,5,64,0,0,367,
  	369,3,82,41,0,368,367,1,0,0,0,369,370,1,0,0,0,370,368,1,0,0,0,370,371,
  	1,0,0,0,371,372,1,0,0,0,372,373,5,68,0,0,373,374,5,4,0,0,374,436,1,0,
  	0,0,375,377,5,65,0,0,376,378,3,82,41,0,377,376,1,0,0,0,378,379,1,0,0,
  	0,379,377,1,0,0,0,379,380,1,0,0,0,380,381,1,0,0,0,381,382,5,68,0,0,382,
  	383,5,4,0,0,383,436,1,0,0,0,384,386,3,82,41,0,385,384,1,0,0,0,386,387,
  	1,0,0,0,387,385,1,0,0,0,387,388,1,0,0,0,388,389,1,0,0,0,389,390,5,68,
  	0,0,390,391,5,4,0,0,391,436,1,0,0,0,392,394,5,64,0,0,393,395,3,82,41,
  	0,394,393,1,0,0,0,395,396,1,0,0,0,396,394,1,0,0,0,396,397,1,0,0,0,397,
  	398,1,0,0,0,398,399,5,68,0,0,399,400,5,3,0,0,400,436,1,0,0,0,401,403,
  	5,65,0,0,402,404,3,82,41,0,403,402,1,0,0,0,404,405,1,0,0,0,405,403,1,
  	0,0,0,405,406,1,0,0,0,406,407,1,0,0,0,407,408,5,68,0,0,408,409,5,3,0,
  	0,409,436,1,0,0,0,410,412,3,82,41,0,411,410,1,0,0,0,412,413,1,0,0,0,413,
  	411,1,0,0,0,413,414,1,0,0,0,414,415,1,0,0,0,415,416,5,68,0,0,416,417,
  	5,3,0,0,417,436,1,0,0,0,418,420,5,64,0,0,419,421,3,82,41,0,420,419,1,
  	0,0,0,421,422,1,0,0,0,422,420,1,0,0,0,422,423,1,0,0,0,423,436,1,0,0,0,
  	424,426,5,65,0,0,425,427,3,82,41,0,426,425,1,0,0,0,427,428,1,0,0,0,428,
  	426,1,0,0,0,428,429,1,0,0,0,429,436,1,0,0,0,430,432,3,82,41,0,431,430,
  	1,0,0,0,432,433,1,0,0,0,433,431,1,0,0,0,433,434,1,0,0,0,434,436,1,0,0,
  	0,435,366,1,0,0,0,435,375,1,0,0,0,435,385,1,0,0,0,435,392,1,0,0,0,435,
  	401,1,0,0,0,435,411,1,0,0,0,435,418,1,0,0,0,435,424,1,0,0,0,435,431,1,
  	0,0,0,436,438,1,0,0,0,437,435,1,0,0,0,438,439,1,0,0,0,439,437,1,0,0,0,
  	439,440,1,0,0,0,440,442,1,0,0,0,441,365,1,0,0,0,441,442,1,0,0,0,442,456,
  	1,0,0,0,443,446,5,63,0,0,444,447,5,64,0,0,445,447,5,65,0,0,446,444,1,
  	0,0,0,446,445,1,0,0,0,446,447,1,0,0,0,447,448,1,0,0,0,448,454,3,84,42,
  	0,449,452,5,68,0,0,450,453,5,4,0,0,451,453,5,3,0,0,452,450,1,0,0,0,452,
  	451,1,0,0,0,453,455,1,0,0,0,454,449,1,0,0,0,454,455,1,0,0,0,455,457,1,
  	0,0,0,456,443,1,0,0,0,456,457,1,0,0,0,457,61,1,0,0,0,458,462,3,64,32,
  	0,459,462,3,66,33,0,460,462,3,68,34,0,461,458,1,0,0,0,461,459,1,0,0,0,
  	461,460,1,0,0,0,462,63,1,0,0,0,463,464,6,32,-1,0,464,465,3,82,41,0,465,
  	472,1,0,0,0,466,467,10,1,0,0,467,468,3,78,39,0,468,469,3,64,32,2,469,
  	471,1,0,0,0,470,466,1,0,0,0,471,474,1,0,0,0,472,470,1,0,0,0,472,473,1,
  	0,0,0,473,65,1,0,0,0,474,472,1,0,0,0,475,476,6,33,-1,0,476,477,3,82,41,
  	0,477,483,1,0,0,0,478,479,10,1,0,0,479,480,5,75,0,0,480,482,3,66,33,2,
  	481,478,1,0,0,0,482,485,1,0,0,0,483,481,1,0,0,0,483,484,1,0,0,0,484,67,
  	1,0,0,0,485,483,1,0,0,0,486,487,6,34,-1,0,487,504,5,34,0,0,488,504,5,
  	35,0,0,489,490,3,82,41,0,490,491,3,74,37,0,491,493,3,64,32,0,492,494,
  	3,72,36,0,493,492,1,0,0,0,494,495,1,0,0,0,495,493,1,0,0,0,495,496,1,0,
  	0,0,496,504,1,0,0,0,497,498,3,64,32,0,498,499,3,74,37,0,499,500,3,64,
  	32,0,500,504,1,0,0,0,501,502,5,36,0,0,502,504,3,68,34,2,503,486,1,0,0,
  	0,503,488,1,0,0,0,503,489,1,0,0,0,503,497,1,0,0,0,503,501,1,0,0,0,504,
  	511,1,0,0,0,505,506,10,1,0,0,506,507,3,76,38,0,507,508,3,68,34,2,508,
  	510,1,0,0,0,509,505,1,0,0,0,510,513,1,0,0,0,511,509,1,0,0,0,511,512,1,
  	0,0,0,512,69,1,0,0,0,513,511,1,0,0,0,514,516,5,44,0,0,515,517,3,84,42,
  	0,516,515,1,0,0,0,516,517,1,0,0,0,517,520,1,0,0,0,518,519,5,17,0,0,519,
  	521,3,82,41,0,520,518,1,0,0,0,520,521,1,0,0,0,521,524,1,0,0,0,522,523,
  	5,15,0,0,523,525,3,82,41,0,524,522,1,0,0,0,524,525,1,0,0,0,525,528,1,
  	0,0,0,526,527,5,20,0,0,527,529,3,82,41,0,528,526,1,0,0,0,528,529,1,0,
  	0,0,529,535,1,0,0,0,530,531,5,45,0,0,531,535,3,68,34,0,532,533,5,46,0,
  	0,533,535,3,68,34,0,534,514,1,0,0,0,534,530,1,0,0,0,534,532,1,0,0,0,535,
  	71,1,0,0,0,536,538,3,76,38,0,537,539,3,74,37,0,538,537,1,0,0,0,538,539,
  	1,0,0,0,539,540,1,0,0,0,540,541,3,64,32,0,541,73,1,0,0,0,542,543,7,3,
  	0,0,543,75,1,0,0,0,544,545,7,4,0,0,545,77,1,0,0,0,546,547,7,5,0,0,547,
  	79,1,0,0,0,548,550,5,32,0,0,549,551,3,62,31,0,550,549,1,0,0,0,551,552,
  	1,0,0,0,552,550,1,0,0,0,552,553,1,0,0,0,553,555,1,0,0,0,554,556,3,24,
  	12,0,555,554,1,0,0,0,556,557,1,0,0,0,557,555,1,0,0,0,557,558,1,0,0,0,
  	558,567,1,0,0,0,559,560,5,32,0,0,560,562,5,33,0,0,561,563,3,24,12,0,562,
  	561,1,0,0,0,563,564,1,0,0,0,564,562,1,0,0,0,564,565,1,0,0,0,565,567,1,
  	0,0,0,566,548,1,0,0,0,566,559,1,0,0,0,567,81,1,0,0,0,568,573,3,86,43,
  	0,569,573,5,83,0,0,570,573,5,84,0,0,571,573,3,84,42,0,572,568,1,0,0,0,
  	572,569,1,0,0,0,572,570,1,0,0,0,572,571,1,0,0,0,573,83,1,0,0,0,574,579,
  	5,86,0,0,575,576,5,47,0,0,576,578,5,86,0,0,577,575,1,0,0,0,578,581,1,
  	0,0,0,579,577,1,0,0,0,579,580,1,0,0,0,580,586,1,0,0,0,581,579,1,0,0,0,
  	582,583,5,1,0,0,583,584,3,86,43,0,584,585,5,2,0,0,585,587,1,0,0,0,586,
  	582,1,0,0,0,586,587,1,0,0,0,587,85,1,0,0,0,588,590,7,6,0,0,589,588,1,
  	0,0,0,589,590,1,0,0,0,590,591,1,0,0,0,591,592,5,82,0,0,592,87,1,0,0,0,
  	72,90,101,115,120,133,138,152,160,162,168,177,182,201,209,214,223,229,
  	235,241,249,253,259,264,272,278,280,288,294,300,308,312,316,323,336,348,
  	363,370,379,387,396,405,413,422,428,433,435,439,441,446,452,454,456,461,
  	472,483,495,503,511,516,520,524,528,534,538,552,557,564,566,572,579,586,
  	589
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

BabyCobolParser::IdentificationDivContext* BabyCobolParser::ProgramContext::identificationDiv() {
  return getRuleContext<BabyCobolParser::IdentificationDivContext>(0);
}

BabyCobolParser::ProcedureContext* BabyCobolParser::ProgramContext::procedure() {
  return getRuleContext<BabyCobolParser::ProcedureContext>(0);
}

tree::TerminalNode* BabyCobolParser::ProgramContext::EOF() {
  return getToken(BabyCobolParser::EOF, 0);
}

BabyCobolParser::DataDivisionContext* BabyCobolParser::ProgramContext::dataDivision() {
  return getRuleContext<BabyCobolParser::DataDivisionContext>(0);
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
    identificationDiv();
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(89);
      dataDivision();
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

//----------------- IdentificationDivContext ------------------------------------------------------------------

BabyCobolParser::IdentificationDivContext::IdentificationDivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IdentificationDivContext::IDENTIFICATION() {
  return getToken(BabyCobolParser::IDENTIFICATION, 0);
}

tree::TerminalNode* BabyCobolParser::IdentificationDivContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

tree::TerminalNode* BabyCobolParser::IdentificationDivContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::IdentificationEntryContext *> BabyCobolParser::IdentificationDivContext::identificationEntry() {
  return getRuleContexts<BabyCobolParser::IdentificationEntryContext>();
}

BabyCobolParser::IdentificationEntryContext* BabyCobolParser::IdentificationDivContext::identificationEntry(size_t i) {
  return getRuleContext<BabyCobolParser::IdentificationEntryContext>(i);
}


size_t BabyCobolParser::IdentificationDivContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentificationDiv;
}


std::any BabyCobolParser::IdentificationDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentificationDiv(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IdentificationDivContext* BabyCobolParser::identificationDiv() {
  IdentificationDivContext *_localctx = _tracker.createInstance<IdentificationDivContext>(_ctx, getState());
  enterRule(_localctx, 2, BabyCobolParser::RuleIdentificationDiv);
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
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(98);
      identificationEntry();
      setState(103);
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

//----------------- IdentificationEntryContext ------------------------------------------------------------------

BabyCobolParser::IdentificationEntryContext::IdentificationEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IdentificationEntryContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentificationEntryContext::DOT() {
  return getTokens(BabyCobolParser::DOT);
}

tree::TerminalNode* BabyCobolParser::IdentificationEntryContext::DOT(size_t i) {
  return getToken(BabyCobolParser::DOT, i);
}

tree::TerminalNode* BabyCobolParser::IdentificationEntryContext::LITERAL() {
  return getToken(BabyCobolParser::LITERAL, 0);
}


size_t BabyCobolParser::IdentificationEntryContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentificationEntry;
}


std::any BabyCobolParser::IdentificationEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentificationEntry(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IdentificationEntryContext* BabyCobolParser::identificationEntry() {
  IdentificationEntryContext *_localctx = _tracker.createInstance<IdentificationEntryContext>(_ctx, getState());
  enterRule(_localctx, 4, BabyCobolParser::RuleIdentificationEntry);

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
    match(BabyCobolParser::IDENTIFIER);
    setState(105);
    match(BabyCobolParser::DOT);
    setState(106);
    match(BabyCobolParser::LITERAL);
    setState(107);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataDivisionContext ------------------------------------------------------------------

BabyCobolParser::DataDivisionContext::DataDivisionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DataDivisionContext::DATA() {
  return getToken(BabyCobolParser::DATA, 0);
}

tree::TerminalNode* BabyCobolParser::DataDivisionContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

tree::TerminalNode* BabyCobolParser::DataDivisionContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::LineContext *> BabyCobolParser::DataDivisionContext::line() {
  return getRuleContexts<BabyCobolParser::LineContext>();
}

BabyCobolParser::LineContext* BabyCobolParser::DataDivisionContext::line(size_t i) {
  return getRuleContext<BabyCobolParser::LineContext>(i);
}


size_t BabyCobolParser::DataDivisionContext::getRuleIndex() const {
  return BabyCobolParser::RuleDataDivision;
}


std::any BabyCobolParser::DataDivisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitDataDivision(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::DataDivisionContext* BabyCobolParser::dataDivision() {
  DataDivisionContext *_localctx = _tracker.createInstance<DataDivisionContext>(_ctx, getState());
  enterRule(_localctx, 6, BabyCobolParser::RuleDataDivision);
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
    setState(109);
    match(BabyCobolParser::DATA);
    setState(110);
    match(BabyCobolParser::DIVISION);
    setState(111);
    match(BabyCobolParser::DOT);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 131) != 0)) {
      setState(112);
      antlrcpp::downCast<DataDivisionContext *>(_localctx)->lineContext = line();
      antlrcpp::downCast<DataDivisionContext *>(_localctx)->lines.push_back(antlrcpp::downCast<DataDivisionContext *>(_localctx)->lineContext);
      setState(117);
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
  enterRule(_localctx, 8, BabyCobolParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      record();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
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
  enterRule(_localctx, 10, BabyCobolParser::RuleRecord);

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
    level();
    setState(123);
    match(BabyCobolParser::IDENTIFIER);
    setState(124);
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

BabyCobolParser::MaskContext* BabyCobolParser::FieldContext::mask() {
  return getRuleContext<BabyCobolParser::MaskContext>(0);
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

tree::TerminalNode* BabyCobolParser::FieldContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
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
  enterRule(_localctx, 12, BabyCobolParser::RuleField);
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
    setState(126);
    level();
    setState(127);
    match(BabyCobolParser::IDENTIFIER);
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(128);
        match(BabyCobolParser::PICTURE);
        setState(129);
        match(BabyCobolParser::IS);
        setState(130);
        mask();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(131);
        match(BabyCobolParser::LIKE);
        setState(132);
        identifiers();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(135);
      match(BabyCobolParser::OCCURS);
      setState(136);
      match(BabyCobolParser::INT);
      setState(137);
      match(BabyCobolParser::TIMES);
    }
    setState(140);
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
  enterRule(_localctx, 14, BabyCobolParser::RuleLevel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    int_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaskContext ------------------------------------------------------------------

BabyCobolParser::MaskContext::MaskContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::MaskContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::MaskContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::MaskContext::getRuleIndex() const {
  return BabyCobolParser::RuleMask;
}


std::any BabyCobolParser::MaskContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitMask(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::MaskContext* BabyCobolParser::mask() {
  MaskContext *_localctx = _tracker.createInstance<MaskContext>(_ctx, getState());
  enterRule(_localctx, 16, BabyCobolParser::RuleMask);
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
    setState(144);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::INT

    || _la == BabyCobolParser::IDENTIFIER)) {
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
  enterRule(_localctx, 18, BabyCobolParser::RuleProcedure);
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
    setState(146);
    match(BabyCobolParser::PROCEDURE);
    setState(147);
    match(BabyCobolParser::DIVISION);
    setState(148);
    match(BabyCobolParser::DOT);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(149);
      paragraph();
      setState(154);
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

//----------------- ParagraphContext ------------------------------------------------------------------

BabyCobolParser::ParagraphContext::ParagraphContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LabelContext* BabyCobolParser::ParagraphContext::label() {
  return getRuleContext<BabyCobolParser::LabelContext>(0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::ParagraphContext::DOT() {
  return getTokens(BabyCobolParser::DOT);
}

tree::TerminalNode* BabyCobolParser::ParagraphContext::DOT(size_t i) {
  return getToken(BabyCobolParser::DOT, i);
}

tree::TerminalNode* BabyCobolParser::ParagraphContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

tree::TerminalNode* BabyCobolParser::ParagraphContext::USING() {
  return getToken(BabyCobolParser::USING, 0);
}

std::vector<BabyCobolParser::SentenceContext *> BabyCobolParser::ParagraphContext::sentence() {
  return getRuleContexts<BabyCobolParser::SentenceContext>();
}

BabyCobolParser::SentenceContext* BabyCobolParser::ParagraphContext::sentence(size_t i) {
  return getRuleContext<BabyCobolParser::SentenceContext>(i);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::ParagraphContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::ParagraphContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
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
  enterRule(_localctx, 20, BabyCobolParser::RuleParagraph);
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
    setState(155);
    label();
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::USING) {
      setState(156);
      match(BabyCobolParser::USING);
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(157);
        atomic();
        setState(160); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 2947) != 0));
    }
    setState(164);
    match(BabyCobolParser::DOT);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

    || _la == BabyCobolParser::SYMBOL_MULT) {
      setState(165);
      sentence();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

    setState(171);
    match(BabyCobolParser::END);
    setState(172);
    match(BabyCobolParser::DOT);
   
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
  enterRule(_localctx, 22, BabyCobolParser::RuleSentence);
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
    setState(175); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(174);
      statement();
      setState(177); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

    || _la == BabyCobolParser::SYMBOL_MULT);
    setState(179);
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

BabyCobolParser::CallStatementContext* BabyCobolParser::StatementContext::callStatement() {
  return getRuleContext<BabyCobolParser::CallStatementContext>(0);
}

tree::TerminalNode* BabyCobolParser::StatementContext::SYMBOL_MULT() {
  return getToken(BabyCobolParser::SYMBOL_MULT, 0);
}

tree::TerminalNode* BabyCobolParser::StatementContext::SYMBOL_MINUS() {
  return getToken(BabyCobolParser::SYMBOL_MINUS, 0);
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
  enterRule(_localctx, 24, BabyCobolParser::RuleStatement);
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
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::SYMBOL_MINUS

    || _la == BabyCobolParser::SYMBOL_MULT) {
      setState(181);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::SYMBOL_MINUS

      || _la == BabyCobolParser::SYMBOL_MULT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(201);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(184);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(185);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(186);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(187);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(188);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(189);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(190);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(191);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(192);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(193);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(194);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(195);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(196);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(197);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(198);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(199);
        alter();
        break;
      }

      case BabyCobolParser::CALL: {
        setState(200);
        callStatement();
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
  enterRule(_localctx, 26, BabyCobolParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
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
  enterRule(_localctx, 28, BabyCobolParser::RuleDisplay);
  size_t _la = 0;

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
    setState(205);
    match(BabyCobolParser::DISPLAY);
    setState(207); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(206);
              atomic();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(209); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(211);
      match(BabyCobolParser::WITH);
      setState(212);
      match(BabyCobolParser::NO);
      setState(213);
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
  enterRule(_localctx, 30, BabyCobolParser::RuleStop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
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
  enterRule(_localctx, 32, BabyCobolParser::RuleMove);
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
    setState(218);
    match(BabyCobolParser::MOVE);
    setState(223);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(219);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(220);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(221);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::SYMBOL_PLUS:
      case BabyCobolParser::SYMBOL_MINUS:
      case BabyCobolParser::INT:
      case BabyCobolParser::DOUBLE:
      case BabyCobolParser::LITERAL:
      case BabyCobolParser::IDENTIFIER: {
        setState(222);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(225);
    match(BabyCobolParser::TO);
    setState(227); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(226);
      identifiers();
      setState(229); 
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
  enterRule(_localctx, 34, BabyCobolParser::RuleSubtract);
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
    setState(231);
    match(BabyCobolParser::SUBTRACT);
    setState(233); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(232);
      antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<SubtractContext *>(_localctx)->as.push_back(antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext);
      setState(235); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 2947) != 0));
    setState(237);
    match(BabyCobolParser::FROM);
    setState(238);
    antlrcpp::downCast<SubtractContext *>(_localctx)->from = atomic();
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(239);
      match(BabyCobolParser::GIVING);
      setState(240);
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
  enterRule(_localctx, 36, BabyCobolParser::RuleMultiply);
  size_t _la = 0;

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
    setState(243);
    match(BabyCobolParser::MULTIPLY);
    setState(244);
    antlrcpp::downCast<MultiplyContext *>(_localctx)->at = atomic();
    setState(245);
    match(BabyCobolParser::BY);
    setState(247); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(246);
              antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext = atomic();
              antlrcpp::downCast<MultiplyContext *>(_localctx)->as.push_back(antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(249); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(251);
      match(BabyCobolParser::GIVING);
      setState(252);
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
  enterRule(_localctx, 38, BabyCobolParser::RulePerform);
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
    setState(255);
    match(BabyCobolParser::PERFORM);
    setState(256);
    antlrcpp::downCast<PerformContext *>(_localctx)->procedureName = label();
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(257);
      match(BabyCobolParser::THROUGH);
      setState(258);
      antlrcpp::downCast<PerformContext *>(_localctx)->through = label();
    }
    setState(264);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(261);
      antlrcpp::downCast<PerformContext *>(_localctx)->times = atomic();
      setState(262);
      match(BabyCobolParser::TIMES);
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
  enterRule(_localctx, 40, BabyCobolParser::RuleIfStatement);
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
    setState(266);
    match(BabyCobolParser::IF);
    setState(267);
    booleanExpression(0);
    setState(268);
    match(BabyCobolParser::THEN);
    setState(270); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(269);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<IfStatementContext *>(_localctx)->t.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
      setState(272); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

    || _la == BabyCobolParser::SYMBOL_MULT);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(274);
      match(BabyCobolParser::ELSE);
      setState(276); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(275);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->f.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
        setState(278); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

      || _la == BabyCobolParser::SYMBOL_MULT);
    }
    setState(282);
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
  enterRule(_localctx, 42, BabyCobolParser::RuleAccept);
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
    setState(284);
    match(BabyCobolParser::ACCEPT);
    setState(286); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(285);
      antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      antlrcpp::downCast<AcceptContext *>(_localctx)->id.push_back(antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext);
      setState(288); 
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
  enterRule(_localctx, 44, BabyCobolParser::RuleAdd);
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
    setState(290);
    match(BabyCobolParser::ADD);
    setState(292); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(291);
      atomic();
      setState(294); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 2947) != 0));
    setState(296);
    match(BabyCobolParser::TO);
    setState(297);
    antlrcpp::downCast<AddContext *>(_localctx)->to = atomic();
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(298);
      match(BabyCobolParser::GIVING);
      setState(299);
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
  enterRule(_localctx, 46, BabyCobolParser::RuleDivide);
  size_t _la = 0;

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
    setState(302);
    match(BabyCobolParser::DIVIDE);
    setState(303);
    antlrcpp::downCast<DivideContext *>(_localctx)->at = atomic();
    setState(304);
    match(BabyCobolParser::INTO);
    setState(306); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(305);
              antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext = atomic();
              antlrcpp::downCast<DivideContext *>(_localctx)->as.push_back(antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(308); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(310);
      match(BabyCobolParser::GIVING);
      setState(311);
      antlrcpp::downCast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(314);
      match(BabyCobolParser::REMAINDER);
      setState(315);
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
  enterRule(_localctx, 48, BabyCobolParser::RuleEvaluate);
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
    setState(318);
    match(BabyCobolParser::EVALUATE);
    setState(319);
    anyExpression();
    setState(323);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(320);
      whenBlock();
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(326);
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
  enterRule(_localctx, 50, BabyCobolParser::RuleNextSentence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(BabyCobolParser::NEXT);
    setState(329);
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

BabyCobolParser::LoopExpressionContext* BabyCobolParser::LoopContext::loopExpression() {
  return getRuleContext<BabyCobolParser::LoopExpressionContext>(0);
}

tree::TerminalNode* BabyCobolParser::LoopContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::LoopContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::LoopContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
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
  enterRule(_localctx, 52, BabyCobolParser::RuleLoop);
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
    setState(331);
    match(BabyCobolParser::LOOP);
    setState(332);
    loopExpression();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

    || _la == BabyCobolParser::SYMBOL_MULT) {
      setState(333);
      statement();
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(339);
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

tree::TerminalNode* BabyCobolParser::GotoStatementContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 54, BabyCobolParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(BabyCobolParser::GO);
    setState(342);
    match(BabyCobolParser::TO);
    setState(343);
    match(BabyCobolParser::IDENTIFIER);
   
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
  enterRule(_localctx, 56, BabyCobolParser::RuleSignal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(BabyCobolParser::SIGNAL);
    setState(348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::IDENTIFIER: {
        setState(346);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(347);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(350);
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
  enterRule(_localctx, 58, BabyCobolParser::RuleAlter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(BabyCobolParser::ALTER);
    setState(353);
    antlrcpp::downCast<AlterContext *>(_localctx)->l1 = label();
    setState(354);
    match(BabyCobolParser::TO);
    setState(355);
    match(BabyCobolParser::PROCEED);
    setState(356);
    match(BabyCobolParser::TO);
    setState(357);
    antlrcpp::downCast<AlterContext *>(_localctx)->l2 = label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallStatementContext ------------------------------------------------------------------

BabyCobolParser::CallStatementContext::CallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::CALL() {
  return getToken(BabyCobolParser::CALL, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::IDENTIFIER() {
  return getTokens(BabyCobolParser::IDENTIFIER);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::IDENTIFIER(size_t i) {
  return getToken(BabyCobolParser::IDENTIFIER, i);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::OF() {
  return getToken(BabyCobolParser::OF, 0);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::USING() {
  return getToken(BabyCobolParser::USING, 0);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::RETURNING() {
  return getToken(BabyCobolParser::RETURNING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::CallStatementContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::BYVALUE() {
  return getTokens(BabyCobolParser::BYVALUE);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::BYVALUE(size_t i) {
  return getToken(BabyCobolParser::BYVALUE, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::AS() {
  return getTokens(BabyCobolParser::AS);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::AS(size_t i) {
  return getToken(BabyCobolParser::AS, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::BYREFERENCE() {
  return getTokens(BabyCobolParser::BYREFERENCE);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::BYREFERENCE(size_t i) {
  return getToken(BabyCobolParser::BYREFERENCE, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::STRUCT() {
  return getTokens(BabyCobolParser::STRUCT);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::STRUCT(size_t i) {
  return getToken(BabyCobolParser::STRUCT, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::PRIMITIVE() {
  return getTokens(BabyCobolParser::PRIMITIVE);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::PRIMITIVE(size_t i) {
  return getToken(BabyCobolParser::PRIMITIVE, i);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::CallStatementContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::CallStatementContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}


size_t BabyCobolParser::CallStatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleCallStatement;
}


std::any BabyCobolParser::CallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitCallStatement(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::CallStatementContext* BabyCobolParser::callStatement() {
  CallStatementContext *_localctx = _tracker.createInstance<CallStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, BabyCobolParser::RuleCallStatement);
  size_t _la = 0;

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
    setState(359);
    match(BabyCobolParser::CALL);
    setState(360);
    antlrcpp::downCast<CallStatementContext *>(_localctx)->function_name = match(BabyCobolParser::IDENTIFIER);
    setState(363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OF) {
      setState(361);
      match(BabyCobolParser::OF);
      setState(362);
      antlrcpp::downCast<CallStatementContext *>(_localctx)->program_name = match(BabyCobolParser::IDENTIFIER);
    }
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::USING) {
      setState(365);
      match(BabyCobolParser::USING);
      setState(437); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(435);
                _errHandler->sync(this);
                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
                case 1: {
                  setState(366);
                  match(BabyCobolParser::BYVALUE);
                  setState(368); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(367);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(370); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(372);
                  match(BabyCobolParser::AS);
                  setState(373);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 2: {
                  setState(375);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(377); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(376);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(379); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(381);
                  match(BabyCobolParser::AS);
                  setState(382);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 3: {
                  setState(385); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(384);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(387); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(389);
                  match(BabyCobolParser::AS);
                  setState(390);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 4: {
                  setState(392);
                  match(BabyCobolParser::BYVALUE);
                  setState(394); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(393);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(396); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(398);
                  match(BabyCobolParser::AS);
                  setState(399);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 5: {
                  setState(401);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(403); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(402);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(405); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(407);
                  match(BabyCobolParser::AS);
                  setState(408);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 6: {
                  setState(411); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(410);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(413); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 75)) & 2947) != 0));
                  setState(415);
                  match(BabyCobolParser::AS);
                  setState(416);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 7: {
                  setState(418);
                  match(BabyCobolParser::BYVALUE);
                  setState(420); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(419);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(422); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
                  } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                  break;
                }

                case 8: {
                  setState(424);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(426); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(425);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(428); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
                  } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                  break;
                }

                case 9: {
                  setState(431); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(430);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(433); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
                  } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                  break;
                }

                default:
                  break;
                }
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(439); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    setState(456);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::RETURNING) {
      setState(443);
      match(BabyCobolParser::RETURNING);
      setState(446);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BabyCobolParser::BYVALUE: {
          setState(444);
          match(BabyCobolParser::BYVALUE);
          break;
        }

        case BabyCobolParser::BYREFERENCE: {
          setState(445);
          antlrcpp::downCast<CallStatementContext *>(_localctx)->reference_return = match(BabyCobolParser::BYREFERENCE);
          break;
        }

        case BabyCobolParser::IDENTIFIER: {
          break;
        }

      default:
        break;
      }
      setState(448);
      antlrcpp::downCast<CallStatementContext *>(_localctx)->returning = identifiers();
      setState(454);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BabyCobolParser::AS) {
        setState(449);
        match(BabyCobolParser::AS);
        setState(452);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BabyCobolParser::PRIMITIVE: {
            setState(450);
            antlrcpp::downCast<CallStatementContext *>(_localctx)->primitive_return = match(BabyCobolParser::PRIMITIVE);
            break;
          }

          case BabyCobolParser::STRUCT: {
            setState(451);
            match(BabyCobolParser::STRUCT);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
      }
    }
   
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
    setState(461);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(458);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(459);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(460);
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

    setState(464);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(472);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(466);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(467);
        arithmeticOp();
        setState(468);
        antlrcpp::downCast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(474);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
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

tree::TerminalNode* BabyCobolParser::AdditionStringExpContext::SYMBOL_PLUS() {
  return getToken(BabyCobolParser::SYMBOL_PLUS, 0);
}

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

    setState(476);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(483);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(478);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(479);
        match(BabyCobolParser::SYMBOL_PLUS);
        setState(480);
        antlrcpp::downCast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(485);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
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
    setState(503);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(487);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(488);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(489);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(490);
      comparisonOp();
      setState(491);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(493); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(492);
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(495); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(497);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(498);
      comparisonOp();
      setState(499);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(501);
      match(BabyCobolParser::NOT);
      setState(502);
      booleanExpression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(511);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(505);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(506);
        booleanOp();
        setState(507);
        antlrcpp::downCast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(513);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
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
    setState(534);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = _tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(514);
        match(BabyCobolParser::VARYING);
        setState(516);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::IDENTIFIER) {
          setState(515);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(520);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(518);
          match(BabyCobolParser::FROM);
          setState(519);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(524);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(522);
          match(BabyCobolParser::TO);
          setState(523);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(528);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(526);
          match(BabyCobolParser::BY);
          setState(527);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = _tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(530);
        match(BabyCobolParser::WHILE);
        setState(531);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = _tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(532);
        match(BabyCobolParser::UNTIL);
        setState(533);
        booleanExpression(0);
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
    setState(536);
    booleanOp();
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 63) != 0)) {
      setState(537);
      comparisonOp();
    }
    setState(540);
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

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::NEQ() {
  return getToken(BabyCobolParser::NEQ, 0);
}

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::LT() {
  return getToken(BabyCobolParser::LT, 0);
}

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::LTE() {
  return getToken(BabyCobolParser::LTE, 0);
}

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::EQ() {
  return getToken(BabyCobolParser::EQ, 0);
}

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::GT() {
  return getToken(BabyCobolParser::GT, 0);
}

tree::TerminalNode* BabyCobolParser::ComparisonOpContext::GTE() {
  return getToken(BabyCobolParser::GTE, 0);
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
    setState(542);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 63) != 0))) {
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
    setState(544);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 962072674304) != 0))) {
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

tree::TerminalNode* BabyCobolParser::ArithmeticOpContext::SYMBOL_PLUS() {
  return getToken(BabyCobolParser::SYMBOL_PLUS, 0);
}

tree::TerminalNode* BabyCobolParser::ArithmeticOpContext::SYMBOL_MINUS() {
  return getToken(BabyCobolParser::SYMBOL_MINUS, 0);
}

tree::TerminalNode* BabyCobolParser::ArithmeticOpContext::SYMBOL_MULT() {
  return getToken(BabyCobolParser::SYMBOL_MULT, 0);
}

tree::TerminalNode* BabyCobolParser::ArithmeticOpContext::SYMBOL_DIV() {
  return getToken(BabyCobolParser::SYMBOL_DIV, 0);
}

tree::TerminalNode* BabyCobolParser::ArithmeticOpContext::SYMBOL_EXP() {
  return getToken(BabyCobolParser::SYMBOL_EXP, 0);
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
    setState(546);
    _la = _input->LA(1);
    if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 31) != 0))) {
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
    size_t alt;
    setState(566);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(548);
      match(BabyCobolParser::WHEN);
      setState(550); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(549);
                anyExpression();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(552); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(555); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(554);
        statement();
        setState(557); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

      || _la == BabyCobolParser::SYMBOL_MULT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenOtherContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(559);
      match(BabyCobolParser::WHEN);
      setState(560);
      match(BabyCobolParser::OTHER);
      setState(562); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(561);
        statement();
        setState(564); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 5917739809067590144) != 0) || _la == BabyCobolParser::SYMBOL_MINUS

      || _la == BabyCobolParser::SYMBOL_MULT);
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
//----------------- DoubleLiteralContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::DoubleLiteralContext::DOUBLE() {
  return getToken(BabyCobolParser::DOUBLE, 0);
}

BabyCobolParser::DoubleLiteralContext::DoubleLiteralContext(AtomicContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::DoubleLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitDoubleLiteral(this);
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
    setState(572);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SYMBOL_PLUS:
      case BabyCobolParser::SYMBOL_MINUS:
      case BabyCobolParser::INT: {
        _localctx = _tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(568);
        int_();
        break;
      }

      case BabyCobolParser::DOUBLE: {
        _localctx = _tracker.createInstance<BabyCobolParser::DoubleLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(569);
        match(BabyCobolParser::DOUBLE);
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = _tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(570);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<BabyCobolParser::IdentifierContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(571);
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
    setState(574);
    match(BabyCobolParser::IDENTIFIER);
    setState(579);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(575);
        match(BabyCobolParser::OF);
        setState(576);
        match(BabyCobolParser::IDENTIFIER); 
      }
      setState(581);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
    setState(586);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(582);
      match(BabyCobolParser::T__0);
      setState(583);
      int_();
      setState(584);
      match(BabyCobolParser::T__1);
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

tree::TerminalNode* BabyCobolParser::IntContext::SYMBOL_MINUS() {
  return getToken(BabyCobolParser::SYMBOL_MINUS, 0);
}

tree::TerminalNode* BabyCobolParser::IntContext::SYMBOL_PLUS() {
  return getToken(BabyCobolParser::SYMBOL_PLUS, 0);
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
    setState(589);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::SYMBOL_PLUS

    || _la == BabyCobolParser::SYMBOL_MINUS) {
      setState(588);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::SYMBOL_PLUS

      || _la == BabyCobolParser::SYMBOL_MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(591);
    match(BabyCobolParser::INT);
   
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
  ::antlr4::internal::call_once(babycobolParserOnceFlag, babycobolParserInitialize);
}

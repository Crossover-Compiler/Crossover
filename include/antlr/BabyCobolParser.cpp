
// Generated from /home/bruh/CLionProjects/Crossover/grammar/BabyCobol.g4 by ANTLR 4.11.1


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
      "program", "identification", "name", "value", "data", "line", "record", 
      "field", "level", "representation", "procedure", "paragraph", "sentence", 
      "statement", "label", "display", "stop", "move", "subtract", "multiply", 
      "perform", "ifStatement", "accept", "add", "divide", "evaluate", "nextSentence", 
      "loop", "gotoStatement", "signal", "alter", "callStatement", "anyExpression", 
      "arithmeticExpression", "stringExpression", "booleanExpression", "loopExpression", 
      "contractedBooleanPart", "comparisonOp", "booleanOp", "arithmeticOp", 
      "whenBlock", "atomic", "identifiers", "int"
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
  	4,1,87,576,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,1,0,1,0,3,0,93,8,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,5,1,106,8,1,10,1,12,1,109,9,1,1,2,1,2,1,3,1,3,1,4,1,4,
  	1,4,5,4,118,8,4,10,4,12,4,121,9,4,1,5,1,5,3,5,125,8,5,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,138,8,7,1,7,1,7,1,7,3,7,143,8,7,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,5,10,155,8,10,10,10,12,10,158,9,
  	10,1,10,4,10,161,8,10,11,10,12,10,162,1,11,1,11,1,11,4,11,168,8,11,11,
  	11,12,11,169,1,12,4,12,173,8,12,11,12,12,12,174,1,12,1,12,1,13,3,13,180,
  	8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,199,8,13,1,14,1,14,1,15,1,15,4,15,205,8,15,11,
  	15,12,15,206,1,15,1,15,1,15,3,15,212,8,15,1,16,1,16,1,17,1,17,1,17,1,
  	17,1,17,3,17,221,8,17,1,17,1,17,4,17,225,8,17,11,17,12,17,226,1,18,1,
  	18,4,18,231,8,18,11,18,12,18,232,1,18,1,18,1,18,1,18,3,18,239,8,18,1,
  	19,1,19,1,19,1,19,4,19,245,8,19,11,19,12,19,246,1,19,1,19,3,19,251,8,
  	19,1,20,1,20,1,20,1,20,3,20,257,8,20,1,20,1,20,1,20,3,20,262,8,20,1,21,
  	1,21,1,21,1,21,4,21,268,8,21,11,21,12,21,269,1,21,1,21,4,21,274,8,21,
  	11,21,12,21,275,3,21,278,8,21,1,21,1,21,1,22,1,22,4,22,284,8,22,11,22,
  	12,22,285,1,23,1,23,1,23,1,23,1,23,1,23,3,23,294,8,23,1,24,1,24,1,24,
  	1,24,4,24,300,8,24,11,24,12,24,301,1,24,1,24,3,24,306,8,24,1,24,1,24,
  	3,24,310,8,24,1,25,1,25,1,25,5,25,315,8,25,10,25,12,25,318,9,25,1,25,
  	1,25,1,26,1,26,1,26,1,27,1,27,5,27,327,8,27,10,27,12,27,330,9,27,1,27,
  	1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,3,29,341,8,29,1,29,1,29,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,3,31,355,8,31,1,31,1,31,
  	1,31,1,31,4,31,361,8,31,11,31,12,31,362,1,31,1,31,1,31,1,31,1,31,4,31,
  	370,8,31,11,31,12,31,371,1,31,1,31,1,31,1,31,4,31,378,8,31,11,31,12,31,
  	379,1,31,1,31,1,31,1,31,1,31,4,31,387,8,31,11,31,12,31,388,1,31,1,31,
  	1,31,1,31,1,31,4,31,396,8,31,11,31,12,31,397,1,31,1,31,1,31,1,31,4,31,
  	404,8,31,11,31,12,31,405,1,31,1,31,1,31,1,31,1,31,4,31,413,8,31,11,31,
  	12,31,414,1,31,1,31,4,31,419,8,31,11,31,12,31,420,1,31,4,31,424,8,31,
  	11,31,12,31,425,3,31,428,8,31,4,31,430,8,31,11,31,12,31,431,3,31,434,
  	8,31,1,31,1,31,3,31,438,8,31,1,32,1,32,1,32,3,32,443,8,32,1,33,1,33,1,
  	33,1,33,1,33,1,33,1,33,5,33,452,8,33,10,33,12,33,455,9,33,1,34,1,34,1,
  	34,1,34,1,34,1,34,5,34,463,8,34,10,34,12,34,466,9,34,1,35,1,35,1,35,1,
  	35,1,35,1,35,1,35,4,35,475,8,35,11,35,12,35,476,1,35,1,35,1,35,1,35,1,
  	35,1,35,3,35,485,8,35,1,35,1,35,1,35,1,35,5,35,491,8,35,10,35,12,35,494,
  	9,35,1,36,1,36,3,36,498,8,36,1,36,1,36,3,36,502,8,36,1,36,1,36,3,36,506,
  	8,36,1,36,1,36,3,36,510,8,36,1,36,1,36,1,36,1,36,1,36,3,36,517,8,36,1,
  	37,1,37,3,37,521,8,37,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,
  	41,4,41,533,8,41,11,41,12,41,534,1,41,4,41,538,8,41,11,41,12,41,539,1,
  	41,1,41,1,41,4,41,545,8,41,11,41,12,41,546,3,41,549,8,41,1,42,1,42,1,
  	42,1,42,3,42,555,8,42,1,43,1,43,1,43,5,43,560,8,43,10,43,12,43,563,9,
  	43,1,43,1,43,1,43,1,43,3,43,569,8,43,1,44,3,44,572,8,44,1,44,1,44,1,44,
  	0,3,66,68,70,45,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	86,88,0,8,2,0,82,82,86,86,1,0,1,2,2,0,37,37,85,85,2,0,74,74,77,77,1,0,
  	4,9,1,0,48,50,2,0,1,3,10,11,1,0,2,3,629,0,90,1,0,0,0,2,97,1,0,0,0,4,110,
  	1,0,0,0,6,112,1,0,0,0,8,114,1,0,0,0,10,124,1,0,0,0,12,126,1,0,0,0,14,
  	130,1,0,0,0,16,146,1,0,0,0,18,148,1,0,0,0,20,150,1,0,0,0,22,164,1,0,0,
  	0,24,172,1,0,0,0,26,179,1,0,0,0,28,200,1,0,0,0,30,202,1,0,0,0,32,213,
  	1,0,0,0,34,215,1,0,0,0,36,228,1,0,0,0,38,240,1,0,0,0,40,252,1,0,0,0,42,
  	263,1,0,0,0,44,281,1,0,0,0,46,287,1,0,0,0,48,295,1,0,0,0,50,311,1,0,0,
  	0,52,321,1,0,0,0,54,324,1,0,0,0,56,333,1,0,0,0,58,337,1,0,0,0,60,344,
  	1,0,0,0,62,351,1,0,0,0,64,442,1,0,0,0,66,444,1,0,0,0,68,456,1,0,0,0,70,
  	484,1,0,0,0,72,516,1,0,0,0,74,518,1,0,0,0,76,524,1,0,0,0,78,526,1,0,0,
  	0,80,528,1,0,0,0,82,548,1,0,0,0,84,554,1,0,0,0,86,556,1,0,0,0,88,571,
  	1,0,0,0,90,92,3,2,1,0,91,93,3,8,4,0,92,91,1,0,0,0,92,93,1,0,0,0,93,94,
  	1,0,0,0,94,95,3,20,10,0,95,96,5,0,0,1,96,1,1,0,0,0,97,98,5,16,0,0,98,
  	99,5,17,0,0,99,107,5,85,0,0,100,101,3,4,2,0,101,102,5,85,0,0,102,103,
  	3,6,3,0,103,104,5,85,0,0,104,106,1,0,0,0,105,100,1,0,0,0,106,109,1,0,
  	0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,3,1,0,0,0,109,107,1,0,0,0,110,
  	111,5,86,0,0,111,5,1,0,0,0,112,113,5,84,0,0,113,7,1,0,0,0,114,115,5,19,
  	0,0,115,119,5,17,0,0,116,118,3,10,5,0,117,116,1,0,0,0,118,121,1,0,0,0,
  	119,117,1,0,0,0,119,120,1,0,0,0,120,9,1,0,0,0,121,119,1,0,0,0,122,125,
  	3,12,6,0,123,125,3,14,7,0,124,122,1,0,0,0,124,123,1,0,0,0,125,11,1,0,
  	0,0,126,127,3,16,8,0,127,128,5,86,0,0,128,129,5,85,0,0,129,13,1,0,0,0,
  	130,131,3,16,8,0,131,137,5,86,0,0,132,133,5,60,0,0,133,134,5,61,0,0,134,
  	138,3,18,9,0,135,136,5,62,0,0,136,138,3,86,43,0,137,132,1,0,0,0,137,135,
  	1,0,0,0,138,142,1,0,0,0,139,140,5,63,0,0,140,141,5,82,0,0,141,143,5,33,
  	0,0,142,139,1,0,0,0,142,143,1,0,0,0,143,144,1,0,0,0,144,145,5,85,0,0,
  	145,15,1,0,0,0,146,147,3,88,44,0,147,17,1,0,0,0,148,149,7,0,0,0,149,19,
  	1,0,0,0,150,151,5,18,0,0,151,152,5,17,0,0,152,156,5,85,0,0,153,155,3,
  	24,12,0,154,153,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,
  	0,157,160,1,0,0,0,158,156,1,0,0,0,159,161,3,22,11,0,160,159,1,0,0,0,161,
  	162,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,21,1,0,0,0,164,165,3,
  	28,14,0,165,167,5,85,0,0,166,168,3,24,12,0,167,166,1,0,0,0,168,169,1,
  	0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,23,1,0,0,0,171,173,3,26,13,
  	0,172,171,1,0,0,0,173,174,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,
  	176,1,0,0,0,176,177,5,85,0,0,177,25,1,0,0,0,178,180,7,1,0,0,179,178,1,
  	0,0,0,179,180,1,0,0,0,180,198,1,0,0,0,181,199,3,30,15,0,182,199,3,32,
  	16,0,183,199,3,34,17,0,184,199,3,36,18,0,185,199,3,38,19,0,186,199,3,
  	40,20,0,187,199,3,42,21,0,188,199,3,44,22,0,189,199,3,46,23,0,190,199,
  	3,48,24,0,191,199,3,50,25,0,192,199,3,52,26,0,193,199,3,54,27,0,194,199,
  	3,56,28,0,195,199,3,58,29,0,196,199,3,60,30,0,197,199,3,62,31,0,198,181,
  	1,0,0,0,198,182,1,0,0,0,198,183,1,0,0,0,198,184,1,0,0,0,198,185,1,0,0,
  	0,198,186,1,0,0,0,198,187,1,0,0,0,198,188,1,0,0,0,198,189,1,0,0,0,198,
  	190,1,0,0,0,198,191,1,0,0,0,198,192,1,0,0,0,198,193,1,0,0,0,198,194,1,
  	0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,198,197,1,0,0,0,199,27,1,0,0,0,
  	200,201,5,86,0,0,201,29,1,0,0,0,202,204,5,20,0,0,203,205,3,84,42,0,204,
  	203,1,0,0,0,205,206,1,0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,211,1,
  	0,0,0,208,209,5,21,0,0,209,210,5,22,0,0,210,212,5,23,0,0,211,208,1,0,
  	0,0,211,212,1,0,0,0,212,31,1,0,0,0,213,214,5,24,0,0,214,33,1,0,0,0,215,
  	220,5,25,0,0,216,221,5,65,0,0,217,221,5,66,0,0,218,221,5,67,0,0,219,221,
  	3,84,42,0,220,216,1,0,0,0,220,217,1,0,0,0,220,218,1,0,0,0,220,219,1,0,
  	0,0,221,222,1,0,0,0,222,224,5,26,0,0,223,225,3,86,43,0,224,223,1,0,0,
  	0,225,226,1,0,0,0,226,224,1,0,0,0,226,227,1,0,0,0,227,35,1,0,0,0,228,
  	230,5,27,0,0,229,231,3,84,42,0,230,229,1,0,0,0,231,232,1,0,0,0,232,230,
  	1,0,0,0,232,233,1,0,0,0,233,234,1,0,0,0,234,235,5,28,0,0,235,238,3,84,
  	42,0,236,237,5,29,0,0,237,239,3,86,43,0,238,236,1,0,0,0,238,239,1,0,0,
  	0,239,37,1,0,0,0,240,241,5,30,0,0,241,242,3,84,42,0,242,244,5,31,0,0,
  	243,245,3,84,42,0,244,243,1,0,0,0,245,246,1,0,0,0,246,244,1,0,0,0,246,
  	247,1,0,0,0,247,250,1,0,0,0,248,249,5,29,0,0,249,251,3,86,43,0,250,248,
  	1,0,0,0,250,251,1,0,0,0,251,39,1,0,0,0,252,253,5,32,0,0,253,256,3,28,
  	14,0,254,255,5,59,0,0,255,257,3,28,14,0,256,254,1,0,0,0,256,257,1,0,0,
  	0,257,261,1,0,0,0,258,259,3,84,42,0,259,260,5,33,0,0,260,262,1,0,0,0,
  	261,258,1,0,0,0,261,262,1,0,0,0,262,41,1,0,0,0,263,264,5,34,0,0,264,265,
  	3,70,35,0,265,267,5,35,0,0,266,268,3,26,13,0,267,266,1,0,0,0,268,269,
  	1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,277,1,0,0,0,271,273,5,36,
  	0,0,272,274,3,26,13,0,273,272,1,0,0,0,274,275,1,0,0,0,275,273,1,0,0,0,
  	275,276,1,0,0,0,276,278,1,0,0,0,277,271,1,0,0,0,277,278,1,0,0,0,278,279,
  	1,0,0,0,279,280,7,2,0,0,280,43,1,0,0,0,281,283,5,38,0,0,282,284,3,86,
  	43,0,283,282,1,0,0,0,284,285,1,0,0,0,285,283,1,0,0,0,285,286,1,0,0,0,
  	286,45,1,0,0,0,287,288,5,39,0,0,288,289,3,84,42,0,289,290,5,26,0,0,290,
  	293,3,84,42,0,291,292,5,29,0,0,292,294,3,86,43,0,293,291,1,0,0,0,293,
  	294,1,0,0,0,294,47,1,0,0,0,295,296,5,40,0,0,296,297,3,84,42,0,297,299,
  	5,41,0,0,298,300,3,84,42,0,299,298,1,0,0,0,300,301,1,0,0,0,301,299,1,
  	0,0,0,301,302,1,0,0,0,302,305,1,0,0,0,303,304,5,29,0,0,304,306,3,86,43,
  	0,305,303,1,0,0,0,305,306,1,0,0,0,306,309,1,0,0,0,307,308,5,53,0,0,308,
  	310,3,86,43,0,309,307,1,0,0,0,309,310,1,0,0,0,310,49,1,0,0,0,311,312,
  	5,42,0,0,312,316,3,64,32,0,313,315,3,82,41,0,314,313,1,0,0,0,315,318,
  	1,0,0,0,316,314,1,0,0,0,316,317,1,0,0,0,317,319,1,0,0,0,318,316,1,0,0,
  	0,319,320,5,37,0,0,320,51,1,0,0,0,321,322,5,51,0,0,322,323,5,52,0,0,323,
  	53,1,0,0,0,324,328,5,54,0,0,325,327,3,72,36,0,326,325,1,0,0,0,327,330,
  	1,0,0,0,328,326,1,0,0,0,328,329,1,0,0,0,329,331,1,0,0,0,330,328,1,0,0,
  	0,331,332,5,37,0,0,332,55,1,0,0,0,333,334,5,64,0,0,334,335,5,26,0,0,335,
  	336,3,4,2,0,336,57,1,0,0,0,337,340,5,68,0,0,338,341,3,28,14,0,339,341,
  	5,70,0,0,340,338,1,0,0,0,340,339,1,0,0,0,341,342,1,0,0,0,342,343,5,69,
  	0,0,343,59,1,0,0,0,344,345,5,71,0,0,345,346,3,28,14,0,346,347,5,26,0,
  	0,347,348,5,72,0,0,348,349,5,26,0,0,349,350,3,28,14,0,350,61,1,0,0,0,
  	351,354,5,73,0,0,352,353,5,86,0,0,353,355,5,58,0,0,354,352,1,0,0,0,354,
  	355,1,0,0,0,355,356,1,0,0,0,356,433,5,86,0,0,357,429,5,78,0,0,358,360,
  	5,75,0,0,359,361,3,84,42,0,360,359,1,0,0,0,361,362,1,0,0,0,362,360,1,
  	0,0,0,362,363,1,0,0,0,363,364,1,0,0,0,364,365,5,79,0,0,365,366,5,15,0,
  	0,366,428,1,0,0,0,367,369,5,76,0,0,368,370,3,84,42,0,369,368,1,0,0,0,
  	370,371,1,0,0,0,371,369,1,0,0,0,371,372,1,0,0,0,372,373,1,0,0,0,373,374,
  	5,79,0,0,374,375,5,15,0,0,375,428,1,0,0,0,376,378,3,84,42,0,377,376,1,
  	0,0,0,378,379,1,0,0,0,379,377,1,0,0,0,379,380,1,0,0,0,380,381,1,0,0,0,
  	381,382,5,79,0,0,382,383,5,15,0,0,383,428,1,0,0,0,384,386,5,75,0,0,385,
  	387,3,84,42,0,386,385,1,0,0,0,387,388,1,0,0,0,388,386,1,0,0,0,388,389,
  	1,0,0,0,389,390,1,0,0,0,390,391,5,79,0,0,391,392,5,14,0,0,392,428,1,0,
  	0,0,393,395,5,76,0,0,394,396,3,84,42,0,395,394,1,0,0,0,396,397,1,0,0,
  	0,397,395,1,0,0,0,397,398,1,0,0,0,398,399,1,0,0,0,399,400,5,79,0,0,400,
  	401,5,14,0,0,401,428,1,0,0,0,402,404,3,84,42,0,403,402,1,0,0,0,404,405,
  	1,0,0,0,405,403,1,0,0,0,405,406,1,0,0,0,406,407,1,0,0,0,407,408,5,79,
  	0,0,408,409,5,14,0,0,409,428,1,0,0,0,410,412,5,75,0,0,411,413,3,84,42,
  	0,412,411,1,0,0,0,413,414,1,0,0,0,414,412,1,0,0,0,414,415,1,0,0,0,415,
  	428,1,0,0,0,416,418,5,76,0,0,417,419,3,84,42,0,418,417,1,0,0,0,419,420,
  	1,0,0,0,420,418,1,0,0,0,420,421,1,0,0,0,421,428,1,0,0,0,422,424,3,84,
  	42,0,423,422,1,0,0,0,424,425,1,0,0,0,425,423,1,0,0,0,425,426,1,0,0,0,
  	426,428,1,0,0,0,427,358,1,0,0,0,427,367,1,0,0,0,427,377,1,0,0,0,427,384,
  	1,0,0,0,427,393,1,0,0,0,427,403,1,0,0,0,427,410,1,0,0,0,427,416,1,0,0,
  	0,427,423,1,0,0,0,428,430,1,0,0,0,429,427,1,0,0,0,430,431,1,0,0,0,431,
  	429,1,0,0,0,431,432,1,0,0,0,432,434,1,0,0,0,433,357,1,0,0,0,433,434,1,
  	0,0,0,434,437,1,0,0,0,435,436,7,3,0,0,436,438,5,86,0,0,437,435,1,0,0,
  	0,437,438,1,0,0,0,438,63,1,0,0,0,439,443,3,66,33,0,440,443,3,68,34,0,
  	441,443,3,70,35,0,442,439,1,0,0,0,442,440,1,0,0,0,442,441,1,0,0,0,443,
  	65,1,0,0,0,444,445,6,33,-1,0,445,446,3,84,42,0,446,453,1,0,0,0,447,448,
  	10,1,0,0,448,449,3,80,40,0,449,450,3,66,33,2,450,452,1,0,0,0,451,447,
  	1,0,0,0,452,455,1,0,0,0,453,451,1,0,0,0,453,454,1,0,0,0,454,67,1,0,0,
  	0,455,453,1,0,0,0,456,457,6,34,-1,0,457,458,3,84,42,0,458,464,1,0,0,0,
  	459,460,10,1,0,0,460,461,5,3,0,0,461,463,3,68,34,2,462,459,1,0,0,0,463,
  	466,1,0,0,0,464,462,1,0,0,0,464,465,1,0,0,0,465,69,1,0,0,0,466,464,1,
  	0,0,0,467,468,6,35,-1,0,468,485,5,45,0,0,469,485,5,46,0,0,470,471,3,84,
  	42,0,471,472,3,76,38,0,472,474,3,66,33,0,473,475,3,74,37,0,474,473,1,
  	0,0,0,475,476,1,0,0,0,476,474,1,0,0,0,476,477,1,0,0,0,477,485,1,0,0,0,
  	478,479,3,66,33,0,479,480,3,76,38,0,480,481,3,66,33,0,481,485,1,0,0,0,
  	482,483,5,47,0,0,483,485,3,70,35,2,484,467,1,0,0,0,484,469,1,0,0,0,484,
  	470,1,0,0,0,484,478,1,0,0,0,484,482,1,0,0,0,485,492,1,0,0,0,486,487,10,
  	1,0,0,487,488,3,78,39,0,488,489,3,70,35,2,489,491,1,0,0,0,490,486,1,0,
  	0,0,491,494,1,0,0,0,492,490,1,0,0,0,492,493,1,0,0,0,493,71,1,0,0,0,494,
  	492,1,0,0,0,495,497,5,55,0,0,496,498,3,86,43,0,497,496,1,0,0,0,497,498,
  	1,0,0,0,498,501,1,0,0,0,499,500,5,28,0,0,500,502,3,84,42,0,501,499,1,
  	0,0,0,501,502,1,0,0,0,502,505,1,0,0,0,503,504,5,26,0,0,504,506,3,84,42,
  	0,505,503,1,0,0,0,505,506,1,0,0,0,506,509,1,0,0,0,507,508,5,31,0,0,508,
  	510,3,84,42,0,509,507,1,0,0,0,509,510,1,0,0,0,510,517,1,0,0,0,511,512,
  	5,56,0,0,512,517,3,70,35,0,513,514,5,57,0,0,514,517,3,70,35,0,515,517,
  	3,26,13,0,516,495,1,0,0,0,516,511,1,0,0,0,516,513,1,0,0,0,516,515,1,0,
  	0,0,517,73,1,0,0,0,518,520,3,78,39,0,519,521,3,76,38,0,520,519,1,0,0,
  	0,520,521,1,0,0,0,521,522,1,0,0,0,522,523,3,66,33,0,523,75,1,0,0,0,524,
  	525,7,4,0,0,525,77,1,0,0,0,526,527,7,5,0,0,527,79,1,0,0,0,528,529,7,6,
  	0,0,529,81,1,0,0,0,530,532,5,43,0,0,531,533,3,64,32,0,532,531,1,0,0,0,
  	533,534,1,0,0,0,534,532,1,0,0,0,534,535,1,0,0,0,535,537,1,0,0,0,536,538,
  	3,26,13,0,537,536,1,0,0,0,538,539,1,0,0,0,539,537,1,0,0,0,539,540,1,0,
  	0,0,540,549,1,0,0,0,541,542,5,43,0,0,542,544,5,44,0,0,543,545,3,26,13,
  	0,544,543,1,0,0,0,545,546,1,0,0,0,546,544,1,0,0,0,546,547,1,0,0,0,547,
  	549,1,0,0,0,548,530,1,0,0,0,548,541,1,0,0,0,549,83,1,0,0,0,550,555,3,
  	88,44,0,551,555,5,83,0,0,552,555,5,84,0,0,553,555,3,86,43,0,554,550,1,
  	0,0,0,554,551,1,0,0,0,554,552,1,0,0,0,554,553,1,0,0,0,555,85,1,0,0,0,
  	556,561,5,86,0,0,557,558,5,58,0,0,558,560,5,86,0,0,559,557,1,0,0,0,560,
  	563,1,0,0,0,561,559,1,0,0,0,561,562,1,0,0,0,562,568,1,0,0,0,563,561,1,
  	0,0,0,564,565,5,12,0,0,565,566,3,88,44,0,566,567,5,13,0,0,567,569,1,0,
  	0,0,568,564,1,0,0,0,568,569,1,0,0,0,569,87,1,0,0,0,570,572,7,7,0,0,571,
  	570,1,0,0,0,571,572,1,0,0,0,572,573,1,0,0,0,573,574,5,82,0,0,574,89,1,
  	0,0,0,67,92,107,119,124,137,142,156,162,169,174,179,198,206,211,220,226,
  	232,238,246,250,256,261,269,275,277,285,293,301,305,309,316,328,340,354,
  	362,371,379,388,397,405,414,420,425,427,431,433,437,442,453,464,476,484,
  	492,497,501,505,509,516,520,534,539,546,548,554,561,568,571
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
    setState(90);
    identification();
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(91);
      data();
    }
    setState(94);
    procedure();
    setState(95);
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
    setState(97);
    match(BabyCobolParser::IDENTIFICATION);
    setState(98);
    match(BabyCobolParser::DIVISION);
    setState(99);
    match(BabyCobolParser::DOT);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(100);
      name();
      setState(101);
      match(BabyCobolParser::DOT);
      setState(102);
      value();
      setState(103);
      match(BabyCobolParser::DOT);
      setState(109);
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
    setState(110);
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
    setState(112);
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
    setState(114);
    match(BabyCobolParser::DATA);
    setState(115);
    match(BabyCobolParser::DIVISION);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::T__1

    || _la == BabyCobolParser::T__2 || _la == BabyCobolParser::INT) {
      setState(116);
      antlrcpp::downCast<DataContext *>(_localctx)->lineContext = line();
      antlrcpp::downCast<DataContext *>(_localctx)->lines.push_back(antlrcpp::downCast<DataContext *>(_localctx)->lineContext);
      setState(121);
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
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      record();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
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
    setState(126);
    level();
    setState(127);
    match(BabyCobolParser::IDENTIFIER);
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
    setState(130);
    level();
    setState(131);
    match(BabyCobolParser::IDENTIFIER);
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(132);
        match(BabyCobolParser::PICTURE);
        setState(133);
        match(BabyCobolParser::IS);
        setState(134);
        representation();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(135);
        match(BabyCobolParser::LIKE);
        setState(136);
        identifiers();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(139);
      match(BabyCobolParser::OCCURS);
      setState(140);
      match(BabyCobolParser::INT);
      setState(141);
      match(BabyCobolParser::TIMES);
    }
    setState(144);
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
    setState(146);
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

tree::TerminalNode* BabyCobolParser::RepresentationContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
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
    setState(148);
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
    setState(150);
    match(BabyCobolParser::PROCEDURE);
    setState(151);
    match(BabyCobolParser::DIVISION);
    setState(152);
    match(BabyCobolParser::DOT);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 657) != 0) {
      setState(153);
      sentence();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      paragraph();
      setState(162); 
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
    setState(164);
    label();
    setState(165);
    match(BabyCobolParser::DOT);
    setState(167); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(166);
      sentence();
      setState(169); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 657) != 0);
   
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
    setState(172); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(171);
      statement();
      setState(174); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 657) != 0);
    setState(176);
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
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__0

    || _la == BabyCobolParser::T__1) {
      setState(178);
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
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(181);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(182);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(183);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(184);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(185);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(186);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(187);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(188);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(189);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(190);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(191);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(192);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(193);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(194);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(195);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(196);
        alter();
        break;
      }

      case BabyCobolParser::CALL: {
        setState(197);
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
    setState(200);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(BabyCobolParser::DISPLAY);
    setState(204); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(203);
              atomic();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(206); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(208);
      match(BabyCobolParser::WITH);
      setState(209);
      match(BabyCobolParser::NO);
      setState(210);
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
    setState(213);
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
    setState(215);
    match(BabyCobolParser::MOVE);
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(216);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(217);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(218);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::T__1:
      case BabyCobolParser::T__2:
      case BabyCobolParser::INT:
      case BabyCobolParser::DOUBLE:
      case BabyCobolParser::LITERAL:
      case BabyCobolParser::IDENTIFIER: {
        setState(219);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(222);
    match(BabyCobolParser::TO);
    setState(224); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(223);
      identifiers();
      setState(226); 
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
    setState(228);
    match(BabyCobolParser::SUBTRACT);
    setState(230); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(229);
      antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<SubtractContext *>(_localctx)->as.push_back(antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext);
      setState(232); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::T__1

    || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & 23) != 0);
    setState(234);
    match(BabyCobolParser::FROM);
    setState(235);
    antlrcpp::downCast<SubtractContext *>(_localctx)->from = atomic();
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(236);
      match(BabyCobolParser::GIVING);
      setState(237);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(BabyCobolParser::MULTIPLY);
    setState(241);
    antlrcpp::downCast<MultiplyContext *>(_localctx)->at = atomic();
    setState(242);
    match(BabyCobolParser::BY);
    setState(244); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(243);
              antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext = atomic();
              antlrcpp::downCast<MultiplyContext *>(_localctx)->as.push_back(antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(246); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(248);
      match(BabyCobolParser::GIVING);
      setState(249);
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
    setState(252);
    match(BabyCobolParser::PERFORM);
    setState(253);
    antlrcpp::downCast<PerformContext *>(_localctx)->procedureName = label();
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(254);
      match(BabyCobolParser::THROUGH);
      setState(255);
      antlrcpp::downCast<PerformContext *>(_localctx)->through = label();
    }
    setState(261);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(258);
      antlrcpp::downCast<PerformContext *>(_localctx)->times = atomic();
      setState(259);
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
    setState(263);
    match(BabyCobolParser::IF);
    setState(264);
    booleanExpression(0);
    setState(265);
    match(BabyCobolParser::THEN);
    setState(267); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(266);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<IfStatementContext *>(_localctx)->t.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
      setState(269); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 657) != 0);
    setState(277);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(271);
      match(BabyCobolParser::ELSE);
      setState(273); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(272);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->f.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
        setState(275); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 657) != 0);
    }
    setState(279);
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
    setState(281);
    match(BabyCobolParser::ACCEPT);
    setState(283); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(282);
      antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      antlrcpp::downCast<AcceptContext *>(_localctx)->id.push_back(antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext);
      setState(285); 
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
    setState(287);
    match(BabyCobolParser::ADD);
    setState(288);
    antlrcpp::downCast<AddContext *>(_localctx)->lhs = atomic();
    setState(289);
    match(BabyCobolParser::TO);
    setState(290);
    antlrcpp::downCast<AddContext *>(_localctx)->rhs = atomic();
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(291);
      match(BabyCobolParser::GIVING);
      setState(292);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(BabyCobolParser::DIVIDE);
    setState(296);
    antlrcpp::downCast<DivideContext *>(_localctx)->at = atomic();
    setState(297);
    match(BabyCobolParser::INTO);
    setState(299); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(298);
              antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext = atomic();
              antlrcpp::downCast<DivideContext *>(_localctx)->as.push_back(antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(301); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(303);
      match(BabyCobolParser::GIVING);
      setState(304);
      antlrcpp::downCast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(307);
      match(BabyCobolParser::REMAINDER);
      setState(308);
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
    setState(311);
    match(BabyCobolParser::EVALUATE);
    setState(312);
    anyExpression();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(313);
      whenBlock();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(319);
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
    setState(321);
    match(BabyCobolParser::NEXT);
    setState(322);
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
    setState(324);
    match(BabyCobolParser::LOOP);
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272474122381950982) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 657) != 0) {
      setState(325);
      loopExpression();
      setState(330);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(331);
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
    setState(333);
    match(BabyCobolParser::GO);
    setState(334);
    match(BabyCobolParser::TO);
    setState(335);
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
    setState(337);
    match(BabyCobolParser::SIGNAL);
    setState(340);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::IDENTIFIER: {
        setState(338);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(339);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(342);
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
    setState(344);
    match(BabyCobolParser::ALTER);
    setState(345);
    antlrcpp::downCast<AlterContext *>(_localctx)->l1 = label();
    setState(346);
    match(BabyCobolParser::TO);
    setState(347);
    match(BabyCobolParser::PROCEED);
    setState(348);
    match(BabyCobolParser::TO);
    setState(349);
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

tree::TerminalNode* BabyCobolParser::CallStatementContext::RETURNINGBYREFERENCE() {
  return getToken(BabyCobolParser::RETURNINGBYREFERENCE, 0);
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

std::vector<tree::TerminalNode *> BabyCobolParser::CallStatementContext::PRIMITIVE() {
  return getTokens(BabyCobolParser::PRIMITIVE);
}

tree::TerminalNode* BabyCobolParser::CallStatementContext::PRIMITIVE(size_t i) {
  return getToken(BabyCobolParser::PRIMITIVE, i);
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
  enterRule(_localctx, 62, BabyCobolParser::RuleCallStatement);
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
    setState(351);
    match(BabyCobolParser::CALL);
    setState(354);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(352);
      antlrcpp::downCast<CallStatementContext *>(_localctx)->function_name = match(BabyCobolParser::IDENTIFIER);
      setState(353);
      match(BabyCobolParser::OF);
      break;
    }

    default:
      break;
    }
    setState(356);
    antlrcpp::downCast<CallStatementContext *>(_localctx)->program_name = match(BabyCobolParser::IDENTIFIER);
    setState(433);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::USING) {
      setState(357);
      match(BabyCobolParser::USING);
      setState(429); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(427);
                _errHandler->sync(this);
                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
                case 1: {
                  setState(358);
                  match(BabyCobolParser::BYVALUE);
                  setState(360); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(359);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(362); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(364);
                  match(BabyCobolParser::AS);
                  setState(365);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 2: {
                  setState(367);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(369); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(368);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(371); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(373);
                  match(BabyCobolParser::AS);
                  setState(374);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 3: {
                  setState(377); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(376);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(379); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(381);
                  match(BabyCobolParser::AS);
                  setState(382);
                  match(BabyCobolParser::PRIMITIVE);
                  break;
                }

                case 4: {
                  setState(384);
                  match(BabyCobolParser::BYVALUE);
                  setState(386); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(385);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(388); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(390);
                  match(BabyCobolParser::AS);
                  setState(391);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 5: {
                  setState(393);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(395); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(394);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(397); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(399);
                  match(BabyCobolParser::AS);
                  setState(400);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 6: {
                  setState(403); 
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                  do {
                    setState(402);
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                    antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsstruct.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                    setState(405); 
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                  } while (_la == BabyCobolParser::T__1

                  || _la == BabyCobolParser::T__2 || (((_la - 82) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 82)) & 23) != 0);
                  setState(407);
                  match(BabyCobolParser::AS);
                  setState(408);
                  match(BabyCobolParser::STRUCT);
                  break;
                }

                case 7: {
                  setState(410);
                  match(BabyCobolParser::BYVALUE);
                  setState(412); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(411);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(414); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
                  } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                  break;
                }

                case 8: {
                  setState(416);
                  match(BabyCobolParser::BYREFERENCE);
                  setState(418); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(417);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byreferenceatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(420); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
                  } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                  break;
                }

                case 9: {
                  setState(423); 
                  _errHandler->sync(this);
                  alt = 1;
                  do {
                    switch (alt) {
                      case 1: {
                            setState(422);
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext = atomic();
                            antlrcpp::downCast<CallStatementContext *>(_localctx)->byvalueatomicsprim.push_back(antlrcpp::downCast<CallStatementContext *>(_localctx)->atomicContext);
                            break;
                          }

                    default:
                      throw NoViableAltException(this);
                    }
                    setState(425); 
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
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
        setState(431); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    setState(437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::RETURNING

    || _la == BabyCobolParser::RETURNINGBYREFERENCE) {
      setState(435);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::RETURNING

      || _la == BabyCobolParser::RETURNINGBYREFERENCE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(436);
      antlrcpp::downCast<CallStatementContext *>(_localctx)->returning = match(BabyCobolParser::IDENTIFIER);
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
  enterRule(_localctx, 64, BabyCobolParser::RuleAnyExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(442);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(439);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(440);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(441);
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
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, BabyCobolParser::RuleArithmeticExpression, precedence);

    

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

    setState(445);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(453);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(447);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(448);
        arithmeticOp();
        setState(449);
        antlrcpp::downCast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(455);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
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
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, BabyCobolParser::RuleStringExpression, precedence);

    

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

    setState(457);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(464);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(459);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(460);
        match(BabyCobolParser::T__2);
        setState(461);
        antlrcpp::downCast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(466);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
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
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, BabyCobolParser::RuleBooleanExpression, precedence);

    

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
    setState(484);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(468);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(469);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(470);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(471);
      comparisonOp();
      setState(472);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(474); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(473);
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(476); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(478);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(479);
      comparisonOp();
      setState(480);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(482);
      match(BabyCobolParser::NOT);
      setState(483);
      booleanExpression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(492);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(486);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(487);
        booleanOp();
        setState(488);
        antlrcpp::downCast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(494);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
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
  enterRule(_localctx, 72, BabyCobolParser::RuleLoopExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(516);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = _tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(495);
        match(BabyCobolParser::VARYING);
        setState(497);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::IDENTIFIER) {
          setState(496);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(501);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(499);
          match(BabyCobolParser::FROM);
          setState(500);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(505);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(503);
          match(BabyCobolParser::TO);
          setState(504);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(509);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(507);
          match(BabyCobolParser::BY);
          setState(508);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = _tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(511);
        match(BabyCobolParser::WHILE);
        setState(512);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = _tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(513);
        match(BabyCobolParser::UNTIL);
        setState(514);
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
      case BabyCobolParser::ALTER:
      case BabyCobolParser::CALL: {
        _localctx = _tracker.createInstance<BabyCobolParser::LoopStatementContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(515);
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
  enterRule(_localctx, 74, BabyCobolParser::RuleContractedBooleanPart);
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
    setState(518);
    booleanOp();
    setState(520);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008) != 0) {
      setState(519);
      comparisonOp();
    }
    setState(522);
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
  enterRule(_localctx, 76, BabyCobolParser::RuleComparisonOp);
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
    setState(524);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008) != 0)) {
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
  enterRule(_localctx, 78, BabyCobolParser::RuleBooleanOp);
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
    setState(526);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1970324836974592) != 0)) {
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
  enterRule(_localctx, 80, BabyCobolParser::RuleArithmeticOp);
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
    setState(528);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3086) != 0)) {
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
  enterRule(_localctx, 82, BabyCobolParser::RuleWhenBlock);
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
    setState(548);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(530);
      match(BabyCobolParser::WHEN);
      setState(532); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(531);
                anyExpression();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(534); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(537); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(536);
        statement();
        setState(539); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 657) != 0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenOtherContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(541);
      match(BabyCobolParser::WHEN);
      setState(542);
      match(BabyCobolParser::OTHER);
      setState(544); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(543);
        statement();
        setState(546); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 20272543249203206) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 657) != 0);
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
  enterRule(_localctx, 84, BabyCobolParser::RuleAtomic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(554);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::T__1:
      case BabyCobolParser::T__2:
      case BabyCobolParser::INT: {
        _localctx = _tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(550);
        int_();
        break;
      }

      case BabyCobolParser::DOUBLE: {
        _localctx = _tracker.createInstance<BabyCobolParser::DoubleLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(551);
        match(BabyCobolParser::DOUBLE);
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = _tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(552);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<BabyCobolParser::IdentifierContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(553);
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
  enterRule(_localctx, 86, BabyCobolParser::RuleIdentifiers);

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
    setState(556);
    match(BabyCobolParser::IDENTIFIER);
    setState(561);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(557);
        match(BabyCobolParser::OF);
        setState(558);
        match(BabyCobolParser::IDENTIFIER); 
      }
      setState(563);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
    setState(568);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(564);
      match(BabyCobolParser::T__11);
      setState(565);
      int_();
      setState(566);
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
  enterRule(_localctx, 88, BabyCobolParser::RuleInt);
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
    setState(571);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__1

    || _la == BabyCobolParser::T__2) {
      setState(570);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::T__1

      || _la == BabyCobolParser::T__2)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(573);
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
    case 33: return arithmeticExpressionSempred(antlrcpp::downCast<ArithmeticExpressionContext *>(context), predicateIndex);
    case 34: return stringExpressionSempred(antlrcpp::downCast<StringExpressionContext *>(context), predicateIndex);
    case 35: return booleanExpressionSempred(antlrcpp::downCast<BooleanExpressionContext *>(context), predicateIndex);

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

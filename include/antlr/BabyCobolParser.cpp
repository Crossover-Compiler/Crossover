
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
      "program", "identification", "name", "value", "data", "line", "record", 
      "field", "level", "representation", "procedure", "paragraph", "sentence", 
      "statement", "label", "display", "stop", "move", "subtract", "multiply", 
      "perform", "ifStatement", "accept", "add", "divide", "evaluate", "nextSentence", 
      "loop", "gotoStatement", "signal", "alter", "anyExpression", "arithmeticExpression", 
      "stringExpression", "booleanExpression", "loopExpression", "contractedBooleanPart", 
      "comparisonOp", "booleanOp", "arithmeticOp", "whenBlock", "atomic", 
      "identifiers", "int", "var", "identifier"
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
      "'OFF'", "'ALTER'", "'PROCEED'", "", "", "", "", "'S'", "'V'", "", 
      "", "", "", "'.'"
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
      "PROCEED", "NINE", "A", "X", "Z", "S", "V", "COMMENTLINE", "WS", "INT", 
      "LITERAL", "DOT", "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,82,540,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,1,0,3,0,95,8,0,1,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,108,8,1,10,1,12,1,111,9,1,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,4,5,4,120,8,4,10,4,12,4,123,9,4,1,5,1,5,3,5,127,8,5,1,6,1,
  	6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,140,8,7,1,7,1,7,1,7,3,7,145,
  	8,7,1,7,1,7,1,8,1,8,1,9,1,9,5,9,153,8,9,10,9,12,9,156,9,9,1,9,4,9,159,
  	8,9,11,9,12,9,160,1,9,5,9,164,8,9,10,9,12,9,167,9,9,1,9,4,9,170,8,9,11,
  	9,12,9,171,1,9,1,9,5,9,176,8,9,10,9,12,9,179,9,9,1,9,4,9,182,8,9,11,9,
  	12,9,183,3,9,186,8,9,1,10,1,10,1,10,1,10,5,10,192,8,10,10,10,12,10,195,
  	9,10,1,10,4,10,198,8,10,11,10,12,10,199,1,11,1,11,1,11,4,11,205,8,11,
  	11,11,12,11,206,1,12,4,12,210,8,12,11,12,12,12,211,1,12,1,12,1,13,3,13,
  	217,8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,235,8,13,1,14,1,14,1,15,1,15,4,15,241,8,15,11,
  	15,12,15,242,1,15,1,15,1,15,3,15,248,8,15,1,16,1,16,1,17,1,17,1,17,1,
  	17,1,17,3,17,257,8,17,1,17,1,17,4,17,261,8,17,11,17,12,17,262,1,18,1,
  	18,4,18,267,8,18,11,18,12,18,268,1,18,1,18,1,18,1,18,3,18,275,8,18,1,
  	19,1,19,1,19,1,19,4,19,281,8,19,11,19,12,19,282,1,19,1,19,3,19,287,8,
  	19,1,20,1,20,1,20,1,20,3,20,293,8,20,1,20,1,20,1,20,3,20,298,8,20,1,21,
  	1,21,1,21,1,21,4,21,304,8,21,11,21,12,21,305,1,21,1,21,4,21,310,8,21,
  	11,21,12,21,311,3,21,314,8,21,1,21,1,21,1,22,1,22,4,22,320,8,22,11,22,
  	12,22,321,1,23,1,23,4,23,326,8,23,11,23,12,23,327,1,23,1,23,1,23,1,23,
  	3,23,334,8,23,1,24,1,24,1,24,1,24,4,24,340,8,24,11,24,12,24,341,1,24,
  	1,24,3,24,346,8,24,1,24,1,24,3,24,350,8,24,1,25,1,25,1,25,5,25,355,8,
  	25,10,25,12,25,358,9,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,5,27,367,8,
  	27,10,27,12,27,370,9,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,
  	3,29,381,8,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,
  	1,31,3,31,395,8,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,5,32,404,8,32,10,
  	32,12,32,407,9,32,1,33,1,33,1,33,1,33,1,33,1,33,5,33,415,8,33,10,33,12,
  	33,418,9,33,1,34,1,34,1,34,1,34,1,34,1,34,1,34,4,34,427,8,34,11,34,12,
  	34,428,1,34,1,34,1,34,1,34,1,34,1,34,3,34,437,8,34,1,34,1,34,1,34,1,34,
  	5,34,443,8,34,10,34,12,34,446,9,34,1,35,1,35,3,35,450,8,35,1,35,1,35,
  	3,35,454,8,35,1,35,1,35,3,35,458,8,35,1,35,1,35,3,35,462,8,35,1,35,1,
  	35,1,35,1,35,1,35,3,35,469,8,35,1,36,1,36,3,36,473,8,36,1,36,1,36,1,37,
  	1,37,1,38,1,38,1,39,1,39,1,40,1,40,4,40,485,8,40,11,40,12,40,486,1,40,
  	4,40,490,8,40,11,40,12,40,491,1,40,1,40,1,40,4,40,497,8,40,11,40,12,40,
  	498,3,40,501,8,40,1,41,1,41,1,41,3,41,506,8,41,1,42,1,42,1,42,5,42,511,
  	8,42,10,42,12,42,514,9,42,1,42,1,42,1,42,1,42,3,42,520,8,42,1,43,1,43,
  	1,44,4,44,525,8,44,11,44,12,44,526,1,45,1,45,1,45,5,45,532,8,45,10,45,
  	12,45,535,9,45,1,45,3,45,538,8,45,1,45,0,3,64,66,68,46,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,
  	60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,0,8,2,0,71,73,76,76,1,
  	0,1,2,2,0,35,35,81,81,1,0,4,9,1,0,46,48,2,0,1,3,10,11,2,0,71,71,79,79,
  	2,0,72,76,82,82,580,0,92,1,0,0,0,2,99,1,0,0,0,4,112,1,0,0,0,6,114,1,0,
  	0,0,8,116,1,0,0,0,10,126,1,0,0,0,12,128,1,0,0,0,14,132,1,0,0,0,16,148,
  	1,0,0,0,18,185,1,0,0,0,20,187,1,0,0,0,22,201,1,0,0,0,24,209,1,0,0,0,26,
  	216,1,0,0,0,28,236,1,0,0,0,30,238,1,0,0,0,32,249,1,0,0,0,34,251,1,0,0,
  	0,36,264,1,0,0,0,38,276,1,0,0,0,40,288,1,0,0,0,42,299,1,0,0,0,44,317,
  	1,0,0,0,46,323,1,0,0,0,48,335,1,0,0,0,50,351,1,0,0,0,52,361,1,0,0,0,54,
  	364,1,0,0,0,56,373,1,0,0,0,58,377,1,0,0,0,60,384,1,0,0,0,62,394,1,0,0,
  	0,64,396,1,0,0,0,66,408,1,0,0,0,68,436,1,0,0,0,70,468,1,0,0,0,72,470,
  	1,0,0,0,74,476,1,0,0,0,76,478,1,0,0,0,78,480,1,0,0,0,80,500,1,0,0,0,82,
  	505,1,0,0,0,84,507,1,0,0,0,86,521,1,0,0,0,88,524,1,0,0,0,90,528,1,0,0,
  	0,92,94,3,2,1,0,93,95,3,8,4,0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,0,0,
  	0,96,97,3,20,10,0,97,98,5,0,0,1,98,1,1,0,0,0,99,100,5,14,0,0,100,101,
  	5,15,0,0,101,109,5,81,0,0,102,103,3,4,2,0,103,104,5,81,0,0,104,105,3,
  	6,3,0,105,106,5,81,0,0,106,108,1,0,0,0,107,102,1,0,0,0,108,111,1,0,0,
  	0,109,107,1,0,0,0,109,110,1,0,0,0,110,3,1,0,0,0,111,109,1,0,0,0,112,113,
  	3,90,45,0,113,5,1,0,0,0,114,115,5,80,0,0,115,7,1,0,0,0,116,117,5,17,0,
  	0,117,121,5,15,0,0,118,120,3,10,5,0,119,118,1,0,0,0,120,123,1,0,0,0,121,
  	119,1,0,0,0,121,122,1,0,0,0,122,9,1,0,0,0,123,121,1,0,0,0,124,127,3,12,
  	6,0,125,127,3,14,7,0,126,124,1,0,0,0,126,125,1,0,0,0,127,11,1,0,0,0,128,
  	129,3,16,8,0,129,130,3,90,45,0,130,131,5,81,0,0,131,13,1,0,0,0,132,133,
  	3,16,8,0,133,139,3,90,45,0,134,135,5,58,0,0,135,136,5,59,0,0,136,140,
  	3,18,9,0,137,138,5,60,0,0,138,140,3,84,42,0,139,134,1,0,0,0,139,137,1,
  	0,0,0,140,144,1,0,0,0,141,142,5,61,0,0,142,143,5,79,0,0,143,145,5,31,
  	0,0,144,141,1,0,0,0,144,145,1,0,0,0,145,146,1,0,0,0,146,147,5,81,0,0,
  	147,15,1,0,0,0,148,149,3,86,43,0,149,17,1,0,0,0,150,154,5,75,0,0,151,
  	153,5,74,0,0,152,151,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,
  	1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,157,159,7,0,0,0,158,157,1,0,0,
  	0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,186,1,0,0,0,162,
  	164,5,74,0,0,163,162,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,
  	1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,168,170,7,0,0,0,169,168,1,0,0,
  	0,170,171,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,173,1,0,0,0,173,
  	186,5,75,0,0,174,176,5,74,0,0,175,174,1,0,0,0,176,179,1,0,0,0,177,175,
  	1,0,0,0,177,178,1,0,0,0,178,181,1,0,0,0,179,177,1,0,0,0,180,182,7,0,0,
  	0,181,180,1,0,0,0,182,183,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,
  	186,1,0,0,0,185,150,1,0,0,0,185,165,1,0,0,0,185,177,1,0,0,0,186,19,1,
  	0,0,0,187,188,5,16,0,0,188,189,5,15,0,0,189,193,5,81,0,0,190,192,3,24,
  	12,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,
  	194,197,1,0,0,0,195,193,1,0,0,0,196,198,3,22,11,0,197,196,1,0,0,0,198,
  	199,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,21,1,0,0,0,201,202,3,
  	28,14,0,202,204,5,81,0,0,203,205,3,24,12,0,204,203,1,0,0,0,205,206,1,
  	0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,23,1,0,0,0,208,210,3,26,13,
  	0,209,208,1,0,0,0,210,211,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,
  	213,1,0,0,0,213,214,5,81,0,0,214,25,1,0,0,0,215,217,7,1,0,0,216,215,1,
  	0,0,0,216,217,1,0,0,0,217,234,1,0,0,0,218,235,3,30,15,0,219,235,3,32,
  	16,0,220,235,3,34,17,0,221,235,3,36,18,0,222,235,3,38,19,0,223,235,3,
  	40,20,0,224,235,3,42,21,0,225,235,3,44,22,0,226,235,3,46,23,0,227,235,
  	3,48,24,0,228,235,3,50,25,0,229,235,3,52,26,0,230,235,3,54,27,0,231,235,
  	3,56,28,0,232,235,3,58,29,0,233,235,3,60,30,0,234,218,1,0,0,0,234,219,
  	1,0,0,0,234,220,1,0,0,0,234,221,1,0,0,0,234,222,1,0,0,0,234,223,1,0,0,
  	0,234,224,1,0,0,0,234,225,1,0,0,0,234,226,1,0,0,0,234,227,1,0,0,0,234,
  	228,1,0,0,0,234,229,1,0,0,0,234,230,1,0,0,0,234,231,1,0,0,0,234,232,1,
  	0,0,0,234,233,1,0,0,0,235,27,1,0,0,0,236,237,3,90,45,0,237,29,1,0,0,0,
  	238,240,5,18,0,0,239,241,3,82,41,0,240,239,1,0,0,0,241,242,1,0,0,0,242,
  	240,1,0,0,0,242,243,1,0,0,0,243,247,1,0,0,0,244,245,5,19,0,0,245,246,
  	5,20,0,0,246,248,5,21,0,0,247,244,1,0,0,0,247,248,1,0,0,0,248,31,1,0,
  	0,0,249,250,5,22,0,0,250,33,1,0,0,0,251,256,5,23,0,0,252,257,5,63,0,0,
  	253,257,5,64,0,0,254,257,5,65,0,0,255,257,3,82,41,0,256,252,1,0,0,0,256,
  	253,1,0,0,0,256,254,1,0,0,0,256,255,1,0,0,0,257,258,1,0,0,0,258,260,5,
  	24,0,0,259,261,3,84,42,0,260,259,1,0,0,0,261,262,1,0,0,0,262,260,1,0,
  	0,0,262,263,1,0,0,0,263,35,1,0,0,0,264,266,5,25,0,0,265,267,3,82,41,0,
  	266,265,1,0,0,0,267,268,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,270,
  	1,0,0,0,270,271,5,26,0,0,271,274,3,82,41,0,272,273,5,27,0,0,273,275,3,
  	84,42,0,274,272,1,0,0,0,274,275,1,0,0,0,275,37,1,0,0,0,276,277,5,28,0,
  	0,277,278,3,82,41,0,278,280,5,29,0,0,279,281,3,82,41,0,280,279,1,0,0,
  	0,281,282,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,286,1,0,0,0,284,
  	285,5,27,0,0,285,287,3,84,42,0,286,284,1,0,0,0,286,287,1,0,0,0,287,39,
  	1,0,0,0,288,289,5,30,0,0,289,292,3,28,14,0,290,291,5,57,0,0,291,293,3,
  	28,14,0,292,290,1,0,0,0,292,293,1,0,0,0,293,297,1,0,0,0,294,295,3,82,
  	41,0,295,296,5,31,0,0,296,298,1,0,0,0,297,294,1,0,0,0,297,298,1,0,0,0,
  	298,41,1,0,0,0,299,300,5,32,0,0,300,301,3,68,34,0,301,303,5,33,0,0,302,
  	304,3,26,13,0,303,302,1,0,0,0,304,305,1,0,0,0,305,303,1,0,0,0,305,306,
  	1,0,0,0,306,313,1,0,0,0,307,309,5,34,0,0,308,310,3,26,13,0,309,308,1,
  	0,0,0,310,311,1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,
  	313,307,1,0,0,0,313,314,1,0,0,0,314,315,1,0,0,0,315,316,7,2,0,0,316,43,
  	1,0,0,0,317,319,5,36,0,0,318,320,3,84,42,0,319,318,1,0,0,0,320,321,1,
  	0,0,0,321,319,1,0,0,0,321,322,1,0,0,0,322,45,1,0,0,0,323,325,5,37,0,0,
  	324,326,3,82,41,0,325,324,1,0,0,0,326,327,1,0,0,0,327,325,1,0,0,0,327,
  	328,1,0,0,0,328,329,1,0,0,0,329,330,5,24,0,0,330,333,3,82,41,0,331,332,
  	5,27,0,0,332,334,3,84,42,0,333,331,1,0,0,0,333,334,1,0,0,0,334,47,1,0,
  	0,0,335,336,5,38,0,0,336,337,3,82,41,0,337,339,5,39,0,0,338,340,3,82,
  	41,0,339,338,1,0,0,0,340,341,1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,
  	342,345,1,0,0,0,343,344,5,27,0,0,344,346,3,84,42,0,345,343,1,0,0,0,345,
  	346,1,0,0,0,346,349,1,0,0,0,347,348,5,51,0,0,348,350,3,84,42,0,349,347,
  	1,0,0,0,349,350,1,0,0,0,350,49,1,0,0,0,351,352,5,40,0,0,352,356,3,62,
  	31,0,353,355,3,80,40,0,354,353,1,0,0,0,355,358,1,0,0,0,356,354,1,0,0,
  	0,356,357,1,0,0,0,357,359,1,0,0,0,358,356,1,0,0,0,359,360,5,35,0,0,360,
  	51,1,0,0,0,361,362,5,49,0,0,362,363,5,50,0,0,363,53,1,0,0,0,364,368,5,
  	52,0,0,365,367,3,70,35,0,366,365,1,0,0,0,367,370,1,0,0,0,368,366,1,0,
  	0,0,368,369,1,0,0,0,369,371,1,0,0,0,370,368,1,0,0,0,371,372,5,35,0,0,
  	372,55,1,0,0,0,373,374,5,62,0,0,374,375,5,24,0,0,375,376,3,4,2,0,376,
  	57,1,0,0,0,377,380,5,66,0,0,378,381,3,28,14,0,379,381,5,68,0,0,380,378,
  	1,0,0,0,380,379,1,0,0,0,381,382,1,0,0,0,382,383,5,67,0,0,383,59,1,0,0,
  	0,384,385,5,69,0,0,385,386,3,28,14,0,386,387,5,24,0,0,387,388,5,70,0,
  	0,388,389,5,24,0,0,389,390,3,28,14,0,390,61,1,0,0,0,391,395,3,64,32,0,
  	392,395,3,66,33,0,393,395,3,68,34,0,394,391,1,0,0,0,394,392,1,0,0,0,394,
  	393,1,0,0,0,395,63,1,0,0,0,396,397,6,32,-1,0,397,398,3,82,41,0,398,405,
  	1,0,0,0,399,400,10,1,0,0,400,401,3,78,39,0,401,402,3,64,32,2,402,404,
  	1,0,0,0,403,399,1,0,0,0,404,407,1,0,0,0,405,403,1,0,0,0,405,406,1,0,0,
  	0,406,65,1,0,0,0,407,405,1,0,0,0,408,409,6,33,-1,0,409,410,3,82,41,0,
  	410,416,1,0,0,0,411,412,10,1,0,0,412,413,5,3,0,0,413,415,3,66,33,2,414,
  	411,1,0,0,0,415,418,1,0,0,0,416,414,1,0,0,0,416,417,1,0,0,0,417,67,1,
  	0,0,0,418,416,1,0,0,0,419,420,6,34,-1,0,420,437,5,43,0,0,421,437,5,44,
  	0,0,422,423,3,82,41,0,423,424,3,74,37,0,424,426,3,64,32,0,425,427,3,72,
  	36,0,426,425,1,0,0,0,427,428,1,0,0,0,428,426,1,0,0,0,428,429,1,0,0,0,
  	429,437,1,0,0,0,430,431,3,64,32,0,431,432,3,74,37,0,432,433,3,64,32,0,
  	433,437,1,0,0,0,434,435,5,45,0,0,435,437,3,68,34,2,436,419,1,0,0,0,436,
  	421,1,0,0,0,436,422,1,0,0,0,436,430,1,0,0,0,436,434,1,0,0,0,437,444,1,
  	0,0,0,438,439,10,1,0,0,439,440,3,76,38,0,440,441,3,68,34,2,441,443,1,
  	0,0,0,442,438,1,0,0,0,443,446,1,0,0,0,444,442,1,0,0,0,444,445,1,0,0,0,
  	445,69,1,0,0,0,446,444,1,0,0,0,447,449,5,53,0,0,448,450,3,84,42,0,449,
  	448,1,0,0,0,449,450,1,0,0,0,450,453,1,0,0,0,451,452,5,26,0,0,452,454,
  	3,82,41,0,453,451,1,0,0,0,453,454,1,0,0,0,454,457,1,0,0,0,455,456,5,24,
  	0,0,456,458,3,82,41,0,457,455,1,0,0,0,457,458,1,0,0,0,458,461,1,0,0,0,
  	459,460,5,29,0,0,460,462,3,82,41,0,461,459,1,0,0,0,461,462,1,0,0,0,462,
  	469,1,0,0,0,463,464,5,54,0,0,464,469,3,68,34,0,465,466,5,55,0,0,466,469,
  	3,68,34,0,467,469,3,26,13,0,468,447,1,0,0,0,468,463,1,0,0,0,468,465,1,
  	0,0,0,468,467,1,0,0,0,469,71,1,0,0,0,470,472,3,76,38,0,471,473,3,74,37,
  	0,472,471,1,0,0,0,472,473,1,0,0,0,473,474,1,0,0,0,474,475,3,64,32,0,475,
  	73,1,0,0,0,476,477,7,3,0,0,477,75,1,0,0,0,478,479,7,4,0,0,479,77,1,0,
  	0,0,480,481,7,5,0,0,481,79,1,0,0,0,482,484,5,41,0,0,483,485,3,62,31,0,
  	484,483,1,0,0,0,485,486,1,0,0,0,486,484,1,0,0,0,486,487,1,0,0,0,487,489,
  	1,0,0,0,488,490,3,26,13,0,489,488,1,0,0,0,490,491,1,0,0,0,491,489,1,0,
  	0,0,491,492,1,0,0,0,492,501,1,0,0,0,493,494,5,41,0,0,494,496,5,42,0,0,
  	495,497,3,26,13,0,496,495,1,0,0,0,497,498,1,0,0,0,498,496,1,0,0,0,498,
  	499,1,0,0,0,499,501,1,0,0,0,500,482,1,0,0,0,500,493,1,0,0,0,501,81,1,
  	0,0,0,502,506,3,86,43,0,503,506,5,80,0,0,504,506,3,84,42,0,505,502,1,
  	0,0,0,505,503,1,0,0,0,505,504,1,0,0,0,506,83,1,0,0,0,507,512,3,90,45,
  	0,508,509,5,56,0,0,509,511,3,90,45,0,510,508,1,0,0,0,511,514,1,0,0,0,
  	512,510,1,0,0,0,512,513,1,0,0,0,513,519,1,0,0,0,514,512,1,0,0,0,515,516,
  	5,12,0,0,516,517,3,86,43,0,517,518,5,13,0,0,518,520,1,0,0,0,519,515,1,
  	0,0,0,519,520,1,0,0,0,520,85,1,0,0,0,521,522,7,6,0,0,522,87,1,0,0,0,523,
  	525,7,7,0,0,524,523,1,0,0,0,525,526,1,0,0,0,526,524,1,0,0,0,526,527,1,
  	0,0,0,527,89,1,0,0,0,528,533,3,88,44,0,529,530,5,2,0,0,530,532,3,88,44,
  	0,531,529,1,0,0,0,532,535,1,0,0,0,533,531,1,0,0,0,533,534,1,0,0,0,534,
  	537,1,0,0,0,535,533,1,0,0,0,536,538,5,79,0,0,537,536,1,0,0,0,537,538,
  	1,0,0,0,538,91,1,0,0,0,63,94,109,121,126,139,144,154,160,165,171,177,
  	183,185,193,199,206,211,216,234,242,247,256,262,268,274,282,286,292,297,
  	305,311,313,321,327,333,341,345,349,356,368,380,394,405,416,428,436,444,
  	449,453,457,461,468,472,486,491,498,500,505,512,519,526,533,537
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
    setState(92);
    identification();
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(93);
      data();
    }
    setState(96);
    procedure();
    setState(97);
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
    setState(99);
    match(BabyCobolParser::IDENTIFICATION);
    setState(100);
    match(BabyCobolParser::DIVISION);
    setState(101);
    match(BabyCobolParser::DOT);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
      | (1ULL << (BabyCobolParser::X - 72))
      | (1ULL << (BabyCobolParser::Z - 72))
      | (1ULL << (BabyCobolParser::S - 72))
      | (1ULL << (BabyCobolParser::V - 72))
      | (1ULL << (BabyCobolParser::VAR - 72)))) != 0)) {
      setState(102);
      name();
      setState(103);
      match(BabyCobolParser::DOT);
      setState(104);
      value();
      setState(105);
      match(BabyCobolParser::DOT);
      setState(111);
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

BabyCobolParser::IdentifierContext* BabyCobolParser::NameContext::identifier() {
  return getRuleContext<BabyCobolParser::IdentifierContext>(0);
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
    setState(112);
    identifier();
   
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
    setState(114);
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
    setState(116);
    match(BabyCobolParser::DATA);
    setState(117);
    match(BabyCobolParser::DIVISION);
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::NINE

    || _la == BabyCobolParser::INT) {
      setState(118);
      antlrcpp::downCast<DataContext *>(_localctx)->lineContext = line();
      antlrcpp::downCast<DataContext *>(_localctx)->lines.push_back(antlrcpp::downCast<DataContext *>(_localctx)->lineContext);
      setState(123);
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
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      record();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
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

BabyCobolParser::IdentifierContext* BabyCobolParser::RecordContext::identifier() {
  return getRuleContext<BabyCobolParser::IdentifierContext>(0);
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
    setState(128);
    level();
    setState(129);
    identifier();
    setState(130);
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

BabyCobolParser::IdentifierContext* BabyCobolParser::FieldContext::identifier() {
  return getRuleContext<BabyCobolParser::IdentifierContext>(0);
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
    setState(132);
    level();
    setState(133);
    identifier();
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(134);
        match(BabyCobolParser::PICTURE);
        setState(135);
        match(BabyCobolParser::IS);
        setState(136);
        representation();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(137);
        match(BabyCobolParser::LIKE);
        setState(138);
        identifiers();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(141);
      match(BabyCobolParser::OCCURS);
      setState(142);
      match(BabyCobolParser::INT);
      setState(143);
      match(BabyCobolParser::TIMES);
    }
    setState(146);
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
    setState(148);
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

tree::TerminalNode* BabyCobolParser::RepresentationContext::S() {
  return getToken(BabyCobolParser::S, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::RepresentationContext::Z() {
  return getTokens(BabyCobolParser::Z);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::Z(size_t i) {
  return getToken(BabyCobolParser::Z, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::RepresentationContext::NINE() {
  return getTokens(BabyCobolParser::NINE);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::NINE(size_t i) {
  return getToken(BabyCobolParser::NINE, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::RepresentationContext::A() {
  return getTokens(BabyCobolParser::A);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::A(size_t i) {
  return getToken(BabyCobolParser::A, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::RepresentationContext::X() {
  return getTokens(BabyCobolParser::X);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::X(size_t i) {
  return getToken(BabyCobolParser::X, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::RepresentationContext::V() {
  return getTokens(BabyCobolParser::V);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::V(size_t i) {
  return getToken(BabyCobolParser::V, i);
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
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      antlrcpp::downCast<RepresentationContext *>(_localctx)->leadingS = match(BabyCobolParser::S);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BabyCobolParser::Z) {
        setState(151);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken = match(BabyCobolParser::Z);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->leadingZ.push_back(antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken);
        setState(156);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(157);
        _la = _input->LA(1);
        if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
          | (1ULL << (BabyCobolParser::A - 71))
          | (1ULL << (BabyCobolParser::X - 71))
          | (1ULL << (BabyCobolParser::V - 71)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(160); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
        | (1ULL << (BabyCobolParser::A - 71))
        | (1ULL << (BabyCobolParser::X - 71))
        | (1ULL << (BabyCobolParser::V - 71)))) != 0));
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BabyCobolParser::Z) {
        setState(162);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken = match(BabyCobolParser::Z);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->leadingZ.push_back(antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken);
        setState(167);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(169); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(168);
        _la = _input->LA(1);
        if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
          | (1ULL << (BabyCobolParser::A - 71))
          | (1ULL << (BabyCobolParser::X - 71))
          | (1ULL << (BabyCobolParser::V - 71)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(171); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
        | (1ULL << (BabyCobolParser::A - 71))
        | (1ULL << (BabyCobolParser::X - 71))
        | (1ULL << (BabyCobolParser::V - 71)))) != 0));
      setState(173);
      antlrcpp::downCast<RepresentationContext *>(_localctx)->trailingS = match(BabyCobolParser::S);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BabyCobolParser::Z) {
        setState(174);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken = match(BabyCobolParser::Z);
        antlrcpp::downCast<RepresentationContext *>(_localctx)->leadingZ.push_back(antlrcpp::downCast<RepresentationContext *>(_localctx)->zToken);
        setState(179);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(181); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(180);
        _la = _input->LA(1);
        if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
          | (1ULL << (BabyCobolParser::A - 71))
          | (1ULL << (BabyCobolParser::X - 71))
          | (1ULL << (BabyCobolParser::V - 71)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(183); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
        | (1ULL << (BabyCobolParser::A - 71))
        | (1ULL << (BabyCobolParser::X - 71))
        | (1ULL << (BabyCobolParser::V - 71)))) != 0));
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
    setState(187);
    match(BabyCobolParser::PROCEDURE);
    setState(188);
    match(BabyCobolParser::DIVISION);
    setState(189);
    match(BabyCobolParser::DOT);
    setState(193);
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
      setState(190);
      sentence();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(196);
      paragraph();
      setState(199); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
      | (1ULL << (BabyCobolParser::X - 72))
      | (1ULL << (BabyCobolParser::Z - 72))
      | (1ULL << (BabyCobolParser::S - 72))
      | (1ULL << (BabyCobolParser::V - 72))
      | (1ULL << (BabyCobolParser::VAR - 72)))) != 0));
   
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
    setState(201);
    label();
    setState(202);
    match(BabyCobolParser::DOT);
    setState(204); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(203);
      sentence();
      setState(206); 
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
    setState(209); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(208);
      statement();
      setState(211); 
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
    setState(213);
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
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__0

    || _la == BabyCobolParser::T__1) {
      setState(215);
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
    setState(234);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(218);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(219);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(220);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(221);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(222);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(223);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(224);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(225);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(226);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(227);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(228);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(229);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(230);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(231);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(232);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(233);
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

BabyCobolParser::IdentifierContext* BabyCobolParser::LabelContext::identifier() {
  return getRuleContext<BabyCobolParser::IdentifierContext>(0);
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
    setState(236);
    identifier();
   
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
    setState(238);
    match(BabyCobolParser::DISPLAY);
    setState(240); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(239);
      atomic();
      setState(242); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0));
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(244);
      match(BabyCobolParser::WITH);
      setState(245);
      match(BabyCobolParser::NO);
      setState(246);
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
    setState(249);
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
    setState(251);
    match(BabyCobolParser::MOVE);
    setState(256);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(252);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(253);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(254);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::NINE:
      case BabyCobolParser::A:
      case BabyCobolParser::X:
      case BabyCobolParser::Z:
      case BabyCobolParser::S:
      case BabyCobolParser::V:
      case BabyCobolParser::INT:
      case BabyCobolParser::LITERAL:
      case BabyCobolParser::VAR: {
        setState(255);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(258);
    match(BabyCobolParser::TO);
    setState(260); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(259);
      identifiers();
      setState(262); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
      | (1ULL << (BabyCobolParser::X - 72))
      | (1ULL << (BabyCobolParser::Z - 72))
      | (1ULL << (BabyCobolParser::S - 72))
      | (1ULL << (BabyCobolParser::V - 72))
      | (1ULL << (BabyCobolParser::VAR - 72)))) != 0));
   
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
    setState(264);
    match(BabyCobolParser::SUBTRACT);
    setState(266); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(265);
      antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<SubtractContext *>(_localctx)->as.push_back(antlrcpp::downCast<SubtractContext *>(_localctx)->atomicContext);
      setState(268); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0));
    setState(270);
    match(BabyCobolParser::FROM);
    setState(271);
    antlrcpp::downCast<SubtractContext *>(_localctx)->from = atomic();
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(272);
      match(BabyCobolParser::GIVING);
      setState(273);
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
    setState(276);
    match(BabyCobolParser::MULTIPLY);
    setState(277);
    antlrcpp::downCast<MultiplyContext *>(_localctx)->at = atomic();
    setState(278);
    match(BabyCobolParser::BY);
    setState(280); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(279);
      antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<MultiplyContext *>(_localctx)->as.push_back(antlrcpp::downCast<MultiplyContext *>(_localctx)->atomicContext);
      setState(282); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0));
    setState(286);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(284);
      match(BabyCobolParser::GIVING);
      setState(285);
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
    setState(288);
    match(BabyCobolParser::PERFORM);
    setState(289);
    antlrcpp::downCast<PerformContext *>(_localctx)->procedureName = label();
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(290);
      match(BabyCobolParser::THROUGH);
      setState(291);
      antlrcpp::downCast<PerformContext *>(_localctx)->through = label();
    }
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0)) {
      setState(294);
      antlrcpp::downCast<PerformContext *>(_localctx)->times = atomic();
      setState(295);
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
    setState(299);
    match(BabyCobolParser::IF);
    setState(300);
    booleanExpression(0);
    setState(301);
    match(BabyCobolParser::THEN);
    setState(303); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(302);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<IfStatementContext *>(_localctx)->t.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
      setState(305); 
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
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(307);
      match(BabyCobolParser::ELSE);
      setState(309); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(308);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext = statement();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->f.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->statementContext);
        setState(311); 
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
    setState(315);
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
    setState(317);
    match(BabyCobolParser::ACCEPT);
    setState(319); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(318);
      antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      antlrcpp::downCast<AcceptContext *>(_localctx)->id.push_back(antlrcpp::downCast<AcceptContext *>(_localctx)->identifiersContext);
      setState(321); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
      | (1ULL << (BabyCobolParser::X - 72))
      | (1ULL << (BabyCobolParser::Z - 72))
      | (1ULL << (BabyCobolParser::S - 72))
      | (1ULL << (BabyCobolParser::V - 72))
      | (1ULL << (BabyCobolParser::VAR - 72)))) != 0));
   
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
    setState(323);
    match(BabyCobolParser::ADD);
    setState(325); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(324);
      atomic();
      setState(327); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0));
    setState(329);
    match(BabyCobolParser::TO);
    setState(330);
    antlrcpp::downCast<AddContext *>(_localctx)->to = atomic();
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(331);
      match(BabyCobolParser::GIVING);
      setState(332);
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
    setState(335);
    match(BabyCobolParser::DIVIDE);
    setState(336);
    antlrcpp::downCast<DivideContext *>(_localctx)->at = atomic();
    setState(337);
    match(BabyCobolParser::INTO);
    setState(339); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(338);
      antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext = atomic();
      antlrcpp::downCast<DivideContext *>(_localctx)->as.push_back(antlrcpp::downCast<DivideContext *>(_localctx)->atomicContext);
      setState(341); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (BabyCobolParser::NINE - 71))
      | (1ULL << (BabyCobolParser::A - 71))
      | (1ULL << (BabyCobolParser::X - 71))
      | (1ULL << (BabyCobolParser::Z - 71))
      | (1ULL << (BabyCobolParser::S - 71))
      | (1ULL << (BabyCobolParser::V - 71))
      | (1ULL << (BabyCobolParser::INT - 71))
      | (1ULL << (BabyCobolParser::LITERAL - 71))
      | (1ULL << (BabyCobolParser::VAR - 71)))) != 0));
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(343);
      match(BabyCobolParser::GIVING);
      setState(344);
      antlrcpp::downCast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(347);
      match(BabyCobolParser::REMAINDER);
      setState(348);
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
    setState(351);
    match(BabyCobolParser::EVALUATE);
    setState(352);
    anyExpression();
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(353);
      whenBlock();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(359);
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
    setState(361);
    match(BabyCobolParser::NEXT);
    setState(362);
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
    setState(364);
    match(BabyCobolParser::LOOP);
    setState(368);
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
      setState(365);
      loopExpression();
      setState(370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(371);
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
    setState(373);
    match(BabyCobolParser::GO);
    setState(374);
    match(BabyCobolParser::TO);
    setState(375);
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
    setState(377);
    match(BabyCobolParser::SIGNAL);
    setState(380);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::A:
      case BabyCobolParser::X:
      case BabyCobolParser::Z:
      case BabyCobolParser::S:
      case BabyCobolParser::V:
      case BabyCobolParser::VAR: {
        setState(378);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(379);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(382);
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
    setState(384);
    match(BabyCobolParser::ALTER);
    setState(385);
    antlrcpp::downCast<AlterContext *>(_localctx)->l1 = label();
    setState(386);
    match(BabyCobolParser::TO);
    setState(387);
    match(BabyCobolParser::PROCEED);
    setState(388);
    match(BabyCobolParser::TO);
    setState(389);
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
    setState(394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(391);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(392);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(393);
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

    setState(397);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(405);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(399);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(400);
        arithmeticOp();
        setState(401);
        antlrcpp::downCast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(407);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
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

    setState(409);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(416);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(411);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(412);
        match(BabyCobolParser::T__2);
        setState(413);
        antlrcpp::downCast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(418);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
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
    setState(436);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(420);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(421);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(422);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(423);
      comparisonOp();
      setState(424);
      antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(426); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(425);
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(antlrcpp::downCast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(428); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(430);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(431);
      comparisonOp();
      setState(432);
      antlrcpp::downCast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(434);
      match(BabyCobolParser::NOT);
      setState(435);
      booleanExpression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(444);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(438);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(439);
        booleanOp();
        setState(440);
        antlrcpp::downCast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(446);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
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
    setState(468);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = _tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(447);
        match(BabyCobolParser::VARYING);
        setState(449);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 72) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
          | (1ULL << (BabyCobolParser::X - 72))
          | (1ULL << (BabyCobolParser::Z - 72))
          | (1ULL << (BabyCobolParser::S - 72))
          | (1ULL << (BabyCobolParser::V - 72))
          | (1ULL << (BabyCobolParser::VAR - 72)))) != 0)) {
          setState(448);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(453);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(451);
          match(BabyCobolParser::FROM);
          setState(452);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(457);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(455);
          match(BabyCobolParser::TO);
          setState(456);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(461);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(459);
          match(BabyCobolParser::BY);
          setState(460);
          antlrcpp::downCast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = _tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(463);
        match(BabyCobolParser::WHILE);
        setState(464);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = _tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(465);
        match(BabyCobolParser::UNTIL);
        setState(466);
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
        setState(467);
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
    setState(470);
    booleanOp();
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0)) {
      setState(471);
      comparisonOp();
    }
    setState(474);
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
    setState(476);
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
    setState(478);
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
    setState(480);
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
    setState(500);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(482);
      match(BabyCobolParser::WHEN);
      setState(484); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(483);
        anyExpression();
        setState(486); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 43) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 43)) & ((1ULL << (BabyCobolParser::TRUE - 43))
        | (1ULL << (BabyCobolParser::FALSE - 43))
        | (1ULL << (BabyCobolParser::NOT - 43))
        | (1ULL << (BabyCobolParser::NINE - 43))
        | (1ULL << (BabyCobolParser::A - 43))
        | (1ULL << (BabyCobolParser::X - 43))
        | (1ULL << (BabyCobolParser::Z - 43))
        | (1ULL << (BabyCobolParser::S - 43))
        | (1ULL << (BabyCobolParser::V - 43))
        | (1ULL << (BabyCobolParser::INT - 43))
        | (1ULL << (BabyCobolParser::LITERAL - 43))
        | (1ULL << (BabyCobolParser::VAR - 43)))) != 0));
      setState(489); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(488);
        statement();
        setState(491); 
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
      setState(493);
      match(BabyCobolParser::WHEN);
      setState(494);
      match(BabyCobolParser::OTHER);
      setState(496); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(495);
        statement();
        setState(498); 
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

//----------------- IdentifierAtomicContext ------------------------------------------------------------------

BabyCobolParser::IdentifiersContext* BabyCobolParser::IdentifierAtomicContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

BabyCobolParser::IdentifierAtomicContext::IdentifierAtomicContext(AtomicContext *ctx) { copyFrom(ctx); }


std::any BabyCobolParser::IdentifierAtomicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentifierAtomic(this);
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
    setState(505);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::NINE:
      case BabyCobolParser::INT: {
        _localctx = _tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(502);
        int_();
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = _tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(503);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::A:
      case BabyCobolParser::X:
      case BabyCobolParser::Z:
      case BabyCobolParser::S:
      case BabyCobolParser::V:
      case BabyCobolParser::VAR: {
        _localctx = _tracker.createInstance<BabyCobolParser::IdentifierAtomicContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(504);
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

std::vector<BabyCobolParser::IdentifierContext *> BabyCobolParser::IdentifiersContext::identifier() {
  return getRuleContexts<BabyCobolParser::IdentifierContext>();
}

BabyCobolParser::IdentifierContext* BabyCobolParser::IdentifiersContext::identifier(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifierContext>(i);
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
    setState(507);
    identifier();
    setState(512);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(508);
        match(BabyCobolParser::OF);
        setState(509);
        identifier(); 
      }
      setState(514);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
    setState(519);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(515);
      match(BabyCobolParser::T__11);
      setState(516);
      int_();
      setState(517);
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
    setState(521);
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

//----------------- VarContext ------------------------------------------------------------------

BabyCobolParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::VAR() {
  return getTokens(BabyCobolParser::VAR);
}

tree::TerminalNode* BabyCobolParser::VarContext::VAR(size_t i) {
  return getToken(BabyCobolParser::VAR, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::A() {
  return getTokens(BabyCobolParser::A);
}

tree::TerminalNode* BabyCobolParser::VarContext::A(size_t i) {
  return getToken(BabyCobolParser::A, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::X() {
  return getTokens(BabyCobolParser::X);
}

tree::TerminalNode* BabyCobolParser::VarContext::X(size_t i) {
  return getToken(BabyCobolParser::X, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::Z() {
  return getTokens(BabyCobolParser::Z);
}

tree::TerminalNode* BabyCobolParser::VarContext::Z(size_t i) {
  return getToken(BabyCobolParser::Z, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::S() {
  return getTokens(BabyCobolParser::S);
}

tree::TerminalNode* BabyCobolParser::VarContext::S(size_t i) {
  return getToken(BabyCobolParser::S, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::VarContext::V() {
  return getTokens(BabyCobolParser::V);
}

tree::TerminalNode* BabyCobolParser::VarContext::V(size_t i) {
  return getToken(BabyCobolParser::V, i);
}


size_t BabyCobolParser::VarContext::getRuleIndex() const {
  return BabyCobolParser::RuleVar;
}


std::any BabyCobolParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::VarContext* BabyCobolParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 88, BabyCobolParser::RuleVar);
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
    setState(524); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(523);
              _la = _input->LA(1);
              if (!(((((_la - 72) & ~ 0x3fULL) == 0) &&
                ((1ULL << (_la - 72)) & ((1ULL << (BabyCobolParser::A - 72))
                | (1ULL << (BabyCobolParser::X - 72))
                | (1ULL << (BabyCobolParser::Z - 72))
                | (1ULL << (BabyCobolParser::S - 72))
                | (1ULL << (BabyCobolParser::V - 72))
                | (1ULL << (BabyCobolParser::VAR - 72)))) != 0))) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(526); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

BabyCobolParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BabyCobolParser::VarContext *> BabyCobolParser::IdentifierContext::var() {
  return getRuleContexts<BabyCobolParser::VarContext>();
}

BabyCobolParser::VarContext* BabyCobolParser::IdentifierContext::var(size_t i) {
  return getRuleContext<BabyCobolParser::VarContext>(i);
}

tree::TerminalNode* BabyCobolParser::IdentifierContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::IdentifierContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentifier;
}


std::any BabyCobolParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyCobolVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BabyCobolParser::IdentifierContext* BabyCobolParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 90, BabyCobolParser::RuleIdentifier);

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
    setState(528);
    var();
    setState(533);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(529);
        match(BabyCobolParser::T__1);
        setState(530);
        var(); 
      }
      setState(535);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
    setState(537);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(536);
      match(BabyCobolParser::INT);
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

#include <iostream>
#include <csignal>
#include "src/visitor/Visitor.h"
#include "include/antlr/BabyCobolParser.h"
#include "include/antlr/BabyCobolLexer.h"
#include "antlr4-runtime.h"


using namespace std;
using namespace antlr4;

int main() {
    cout << "Starting Compiler..." << endl;

    ifstream stream;
    stream.open("testProgram.txt");
    ANTLRInputStream input(stream);
    BabyCobolLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BabyCobolParser parser(&tokens);

    BabyCobolParser::ProgramContext* tree = parser.program();

    Visitor visitor;
    vector<string> babyCobolCompiled = any_cast<vector<string>>(visitor.visitProgram(tree));

    cout << endl << "----------------------------------------------" << endl;
    cout << "BabyCobol compiled:" << endl;
    cout << "----------------------------------------------" << endl << endl;

    for (string &line: babyCobolCompiled) {
        cout << line << endl;
    }

    cout << endl << "----------------------------------------------" << endl << endl;

    cout << "Finished Compiling!" << endl;
    return 0;
}


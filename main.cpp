//#include <iostream>
//
//#include "antlr4-runtime/antlr4-runtime.h"
//#include "antlr4-runtime/SceneLexer.h"
//#include "antlr4-runtime/SceneParser.h"
//#include "ImageVisitor.h"
//
//using namespace std;
//using namespace antlr4;
//
//int main(int argc, const char* argv[]) {
//    std::ifstream stream;
//    stream.open("input.scene");
//
//    ANTLRInputStream input(stream);
//    SceneLexer lexer(&input);
//    CommonTokenStream tokens(&lexer);
//    SceneParser parser(&tokens);
//
//    SceneParser::FileContext* tree = parser.sfile();
//
//    ImageVisitor visitor;
//    Scene scene = visitor.visitFile(tree).as<Scene>();
//    scene.draw();
//
//    return 0;
//}

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

//    char *cwd = get_current_dir_name();
//    cout << "Current working directory: " << cwd << endl;
//    free(cwd);
//
//    ofstream myfile;
//    myfile.open ("example.txt");
//    myfile << "Writing this to a file.\n";
//    myfile.close();

    ifstream stream;
    stream.open("testProgram.txt");
    ANTLRInputStream input(stream);
    BabyCobolLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BabyCobolParser parser(&tokens);

    BabyCobolParser::ProgramContext* tree = parser.program();

//    cout << tree->procedure()->depth() << endl;
    Visitor visitor;
    vector<string> babyCobol = any_cast<vector<string>>(visitor.visitProgram(tree));
    return 0;
}


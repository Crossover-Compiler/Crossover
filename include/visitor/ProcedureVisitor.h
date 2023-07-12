//
// Created by bruh on 21-9-22.
//

#ifndef CROSSOVER_PROCEDUREVISITOR_H
#define CROSSOVER_PROCEDUREVISITOR_H

#include "../antlr/BabyCobolBaseVisitor.h"
#include "../ir/BCModule.h"
#include "../ir/BCBuilder.h"
#include "../model/DataEntry.h"
#include <llvm/IR/IRBuilder.h>

using namespace llvm;
using namespace std;

class ProcedureVisitor : public BabyCobolBaseVisitor {

private:

    map<string, Value*> values;
    map<string,vector<string>>* extTable;

    string current_id;
    BCModule* bcModule;
    BCBuilder* builder;

    /**
     * Re-entry handler factories take care of generating IR which handle exposed values upon re-entry.
     * An example of a re-entry handler is a function which converts and assigns the integer representation of a bstd_number back to that original bstd_number.
     */
    typedef void (*re_entry_handler_generator_t)(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* value);

public:

    ProcedureVisitor(BCModule* bcModule, BCBuilder* builder, map<string,vector<string>>* extTable) :
        bcModule(bcModule),
        builder(builder),
        extTable(extTable) {}

    std::any visitParagraph(BabyCobolParser::ParagraphContext *ctx) override;

    std::any visitDisplay(BabyCobolParser::DisplayContext *ctx) override;

    std::any visitMove(BabyCobolParser::MoveContext *ctx) override;

    std::any visitAdd(BabyCobolParser::AddContext *ctx) override;

    std::any visitLoop(BabyCobolParser::LoopContext *ctx) override;

    std::any visitCompareOpBooleanExp(BabyCobolParser::CompareOpBooleanExpContext *ctx) override;

    std::any visitWhileLoopExp(BabyCobolParser::WhileLoopExpContext *ctx) override;

    std::any visitIntLiteral(BabyCobolParser::IntLiteralContext *ctx) override;

    std::any visitStringLiteral(BabyCobolParser::StringLiteralContext *ctx) override;

    std::any visitIdentifiers(BabyCobolParser::IdentifiersContext *ctx) override;

    std::any visitInt(BabyCobolParser::IntContext *ctx) override;

    std::any visitDoubleLiteral(BabyCobolParser::DoubleLiteralContext *ctx) override;

    std::any visitCallStatement(BabyCobolParser::CallStatementContext *ctx) override;

    void pushIntOnParameterList(std::vector<llvm::Value*> *parameters, int value);
    void pushDoubleOnParameterList(std::vector<llvm::Value*> *parameters, double value);
    void pushStringOnParameterList(std::vector<llvm::Value*> *parameters, string value);
    void populatePassTypeVector(std::vector<tuple<bool, bool>> *passType, BabyCobolParser::CallStatementContext *ctx);
    void callAssignNumber(Value *assignee, Value *value);
    void callAssignPicture(Value *assignee, Value *value);
    void printDisplayItem(const string &value, bool nextLine);

    // re-entry handler generators
    static void int_ptr_re_entry_handler_generator(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* intPtr);
    static void double_ptr_re_entry_handler_generator(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* doublePtr);
    static void cstr_re_entry_handler_generator(BCBuilder* builder, BCModule* module, llvm::Value* original, llvm::Value* cstr);
};

#endif //CROSSOVER_PROCEDUREVISITOR_H

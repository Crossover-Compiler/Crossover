//
// Created by manzi on 6/19/23.
//

#ifndef CROSSOVER_DATADIVISIONVISITOR_H
#define CROSSOVER_DATADIVISIONVISITOR_H

#include "../../include/antlr/BabyCobolBaseVisitor.h"
#include "../datastructures/Record.h"

class DataDivisionVisitor : public BabyCobolBaseVisitor {

private:
    bool generate_structs; // todo: this should be its own visitor
    BCModule* module;
    BCBuilder* builder;
    Record* current_record;

public:
    DataDivisionVisitor(bool generate_structs, BCModule* module, BCBuilder* builder) :
            generate_structs(generate_structs),
            module(module),
            builder(builder),
            current_record(nullptr) {}

    std::any visitLine(BabyCobolParser::LineContext *ctx) override;

    std::any visitField(BabyCobolParser::FieldContext *ctx) override;

    std::any visitRecord(BabyCobolParser::RecordContext *ctx) override;

    std::any visitMask(BabyCobolParser::MaskContext *ctx) override;

};

#endif //CROSSOVER_DATADIVISIONVISITOR_H

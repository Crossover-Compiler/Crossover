//
// Created by manzi on 6/19/23.
//

#ifndef CROSSOVER_DATADIVISIONVISITOR_H
#define CROSSOVER_DATADIVISIONVISITOR_H

#include "../../include/antlr/BabyCobolBaseVisitor.h"
#include "../datastructures/Record.h"

class DataDivisionVisitor : public BabyCobolBaseVisitor {

private:
    BCModule* module;
    BCBuilder* builder;
    Record* current_record;

public:
    DataDivisionVisitor(BCModule* module, BCBuilder* builder) :
            module(module),
            builder(builder),
            current_record(nullptr) {}

    std::any visitLine(BabyCobolParser::LineContext *ctx) override;

    std::any visitField(BabyCobolParser::FieldContext *ctx) override;

    std::any visitRecord(BabyCobolParser::RecordContext *ctx) override;

    std::any visitMask(BabyCobolParser::MaskContext *ctx) override;

};

#endif //CROSSOVER_DATADIVISIONVISITOR_H

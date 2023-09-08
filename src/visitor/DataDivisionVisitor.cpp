//
// Created by manzi on 6/19/23.
//

#include "../../include/visitor/DataDivisionVisitor.h"
#include <regex>
#include "../../include/exception/CompileException.h"
#include "../../include/model/Field.h"
#include "../../include/utils/Utils.h"
#include "../../include/ir/BCModule.h"
#include "../../include/model/PictureField.h"
#include "../../include/model/NumberField.h"

static void codegen(BCBuilder* builder, BCModule* module, DataEntry* dataEntry) {

    if (dataEntry->isRecord()) {
        for (auto child : dynamic_cast<Record*>(dataEntry)->getChildren()) {
            codegen(builder, module, child);
        }
    }

    dataEntry->codegen(builder, module, true);
}

std::any DataDivisionVisitor::visitProgram(BabyCobolParser::ProgramContext *ctx) {

    // collect our data entries
    visit(ctx->dataDivision());

    // codegen the resulting symbol table
    for (const pair<basic_string<char>, DataEntry*> tableEntry : this->module->data_entry_shadow_symbol_table) {

        DataEntry* dataEntry = tableEntry.second;

        // depth-first traverse the data entries
        codegen(this->builder, this->module, dataEntry);
    }

    return nullptr;
}

std::any DataDivisionVisitor::visitLine(BabyCobolParser::LineContext *ctx) {

    if (auto f = ctx->field()) {
        return visitField(f);
    } else {
        return visitRecord(ctx->record());
    }
}

std::any DataDivisionVisitor::visitField(BabyCobolParser::FieldContext *ctx) {

    const int level = stoi(ctx->level()->getText());
    std::string name = ctx->IDENTIFIER()->getText();
    auto mask = any_cast<std::string>(visit(ctx->mask()));

    Field *field;

    std::regex r("S?Z*(A|X|V|9)*S?");
    bool match = std::regex_match(mask, r);

    if (!match) {
        throw CompileException("Invalid PICTURE: " + mask);
    }

    std::regex r_number("S?Z*9*V?9*S?");
    bool match_number = std::regex_match(mask, r_number);

    if (match_number) {

        auto number_field = new NumberField(name, level);

        auto split = utils::split(mask, "V");

        int scale = split.size() > 1 ? split.at(1).length() : 0;

        number_field->setScale(scale);

        number_field->setIsSigned(mask.find('S') != std::string::npos);
        number_field->setIsPositive(true);

        field = number_field;

    } else {

        field = new PictureField(name, level);
    }

    field->setMask(mask);
    field->setCardinality(mask.size());

    // walk back until the find the record (or root) we should place this field at
    while (current_record && level <= current_record->getLevel()) {
        current_record = current_record->getParent();
    }

    if (current_record) {

        // this field is in a record
        current_record->addChild(field);

    } else {

        // this field is at the root level, add it to the symbol table
        module->data_entry_shadow_symbol_table.insert({ field->getName(), field });
    }

    return nullptr;
}

std::any DataDivisionVisitor::visitRecord(BabyCobolParser::RecordContext *ctx) {

    const int level = stoi(ctx->level()->getText());
    string name = ctx->IDENTIFIER()->getText();

    auto record = new Record(name, level);

    // walk back until the find the record (or root) we should place this field at
    while (current_record && level <= current_record->getLevel()) {
        current_record = current_record->getParent();
    }

    if (current_record) {

        // we are a child of another record
        current_record->addChild(record);

    } else {

        // this field is at the root level, add it to the symbol table
        module->data_entry_shadow_symbol_table.insert({ record->getName(), record });

    }

    current_record = record;

    return nullptr;
}

std::any DataDivisionVisitor::visitMask(BabyCobolParser::MaskContext *ctx) {

    if (ctx->INT() != nullptr) {
        return ctx->INT()->getText();
    }

    return ctx->IDENTIFIER()->getText();
}

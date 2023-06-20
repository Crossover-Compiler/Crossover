//
// Created by manzi on 6/20/23.
//

#include "IdentificationVisitor.h"

std::any IdentificationVisitor::visitIdentificationEntry(BabyCobolParser::IdentificationEntryContext *ctx) {

    std::string name = ctx->IDENTIFIER()->getText();
    std::string value = ctx->LITERAL()->getText();

    // trim the leading and trailing double quotes
    std::string trimmed_value = value.substr(1, value.size() - 2);

    entries.insert({ name, trimmed_value });

    return name;
}

std::string IdentificationVisitor::getProgramId() {

    if (entries.count(CROSSOVER_IDENTIFICATION_PROGRAM_ID)) {
        return entries.at(CROSSOVER_IDENTIFICATION_PROGRAM_ID);
    }

    return "babycobol_nameless";
}

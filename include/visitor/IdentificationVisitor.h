//
// Created by manzi on 6/20/23.
//

#ifndef CROSSOVER_IDENTIFICATIONVISITOR_H
#define CROSSOVER_IDENTIFICATIONVISITOR_H

#include "../antlr/BabyCobolBaseVisitor.h"
#include <map>
#include <string>

#ifndef CROSSOVER_IDENTIFICATION_KEYS
#define CROSSOVER_IDENTIFICATION_KEYS

#define CROSSOVER_IDENTIFICATION_PROGRAM_ID "PROGRAM-ID"

#endif

class IdentificationVisitor : public BabyCobolBaseVisitor {

    std::map<std::string, std::string> entries;

public:
    IdentificationVisitor() :
        entries(),
        BabyCobolBaseVisitor() {}

    std::any visitIdentificationEntry(BabyCobolParser::IdentificationEntryContext *ctx) override;

    std::string getProgramId();

};


#endif //CROSSOVER_IDENTIFICATIONVISITOR_H

//
// Created by User on 5/28/2022.
//

#ifndef HW3_OUTPUT_CPP_SYMBOLTABLEENTRY_H
#define HW3_OUTPUT_CPP_SYMBOLTABLEENTRY_H

#include <string>
#include <vector>

enum Type_{TYPE_STRING, TYPE_INT, TYPE_VOID};

struct SymbolTableEntry{
    std::string name;
    Type_ type;
    int offset;

    SymbolTableEntry(const std::string& name, const Type_ type, int offset);
};

#endif //HW3_OUTPUT_CPP_SYMBOLTABLEENTRY_H

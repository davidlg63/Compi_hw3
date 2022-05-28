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
    std::vector<Type_> params;

    SymbolTableEntry(const std::string& name, const Type_ type, int offset, const std::vector<Type_>& params);
};

#endif //HW3_OUTPUT_CPP_SYMBOLTABLEENTRY_H

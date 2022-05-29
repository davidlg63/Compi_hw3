//
// Created by User on 5/29/2022.
//

#ifndef SYMBOLTABLEMANAGER_CPP_FUNCTIOSYMBOLTABLEENTRY_H
#define SYMBOLTABLEMANAGER_CPP_FUNCTIOSYMBOLTABLEENTRY_H

#include "SymbolTableEntry.h"

struct FunctioSymbolTableEntry : SymbolTableEntry {
    std::vector<Type_> params;

    FunctioSymbolTableEntry(const std::string& name, const Type_ type, int offset, const std::vector<Type_>& params);
};


#endif //SYMBOLTABLEMANAGER_CPP_FUNCTIOSYMBOLTABLEENTRY_H

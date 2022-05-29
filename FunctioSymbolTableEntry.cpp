//
// Created by User on 5/29/2022.
//

#include "FunctioSymbolTableEntry.h"

FunctioSymbolTableEntry::FunctioSymbolTableEntry(const std::string &name, const Type_ type, int offset, const std::vector<Type_>& _params)
        : SymbolTableEntry(name, type, offset), params(_params) {}

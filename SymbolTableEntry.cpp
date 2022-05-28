//
// Created by User on 5/28/2022.
//

#include "SymbolTableEntry.h"

SymbolTableEntry::SymbolTableEntry(const std::string &_name, const Type_ _type, const int _offset, const std::vector<Type_>& _params) :
        name(_name), type(_type), offset(_offset), params(_params)
{}


//
// Created by User on 5/28/2022.
//

#include "SymbolTableEntry.h"

SymbolTableEntry::SymbolTableEntry(const std::string &_name, const Type_ _type, const int _offset) :
        name(_name), type(_type), offset(_offset), isFunction(false)
{}

SymbolTableEntry::SymbolTableEntry(const std::string &name, const Type_ type, int offset, const std::vector<Type_>& params) :
                                   name(name), type(type), offset(offset), params(params), isFunction(true)
{}


//
// Created by User on 5/28/2022.
//

#include <iostream>
#include "SymbolTable.h"
#include "SymbolTableManager.h"

SymbolTable::SymbolTable(std::shared_ptr<SymbolTable> parent, const ScopeType scopeType) : parent(parent), scopeType(scopeType)
{}

void SymbolTable::InsertFunction(const std::string &name, const Type_ type, const int offset, const std::vector<Type_> &params,
                                 const std::vector<std::string>& paramsIdentifiers)
{
    int paramsOffset = -1;
    auto itParamsIds = paramsIdentifiers.begin();
    for(Type_ param : params)
    {
        SymbolTableEntry paramSymbol = SymbolTableEntry(*itParamsIds, param, paramsOffset);
        table.push_back(paramSymbol);
        paramsOffset--;
        itParamsIds++;
    }
    SymbolTableEntry newEntry = SymbolTableEntry(name, type, offset, params);
    table.push_front(newEntry);
}

void SymbolTable::Insert(const std::string &name, const Type_ type, const int offset) {
    SymbolTableEntry newEntry = SymbolTableEntry(name, type, offset);
    table.push_front(newEntry);
}

void SymbolTable::getArgsTypesAsStrings(std::vector<std::string> &arg_types) {
    for(const auto& entry : table)
    {
        arg_types.push_back(SymbolTableManager::ConvertTypeToString(entry.type));
    }
}


//
// Created by User on 5/28/2022.
//

#include "SymbolTable.h"

SymbolTable::SymbolTable(std::shared_ptr<SymbolTable> parent) : parent(parent){}

void SymbolTable::Insert(const std::string &name, const Type_ type, const int offset, const std::vector<Type_>& params) {
    SymbolTableEntry newEntry = SymbolTableEntry(name, type, offset, params);
    table.push_front(newEntry);
}


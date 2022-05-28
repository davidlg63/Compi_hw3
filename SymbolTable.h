//
// Created by User on 5/25/2022.
//

#ifndef HW3_SYMBOLTABLENODE_H
#define HW3_SYMBOLTABLENODE_H

#include <string>
#include <memory>
#include <list>
#include "NonTerminalBase.h"
#include "SymbolTableEntry.h"

class SymbolTable
{
public:
    std::list<SymbolTableEntry> table;
    std::shared_ptr<SymbolTable> parent;

    explicit SymbolTable(std::shared_ptr<SymbolTable> parent);
    void Insert(const std::string& name, const Type_ type, const int offset, const std::vector<Type_>& params = std::vector<Type_>());
};

#endif //HW3_SYMBOLTABLENODE_H

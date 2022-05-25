//
// Created by User on 5/25/2022.
//

#ifndef HW3_SYMBOLTABLESTACK_H
#define HW3_SYMBOLTABLESTACK_H

#include <memory>
#include <stack>
#include "SymbolTableNode.h"

class SymbolTableStack
{
    std::stack<SymbolTableNode> _symbolTableStack;

public:
    void MakeTable(SymbolTableNode& parent);
    void Insert(SymbolTableNode& table, const std::string& name, const std::shared_ptr<TypeBase>& type, int offset);
};

#endif //HW3_SYMBOLTABLESTACK_H

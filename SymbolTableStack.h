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
    std::stack<std::shared_ptr<SymbolTableNode>> _symbolTableStack;

    static void updateTable(const std::shared_ptr<SymbolTableNode> &table, const std::string &name,
                     const std::shared_ptr<TypeBase> &type, const int offset);

public:
    static std::shared_ptr<SymbolTableNode> MakeTable(std::shared_ptr<SymbolTableNode> parent);
    void Insert(const std::shared_ptr<SymbolTableNode>& table, const std::string& name, const std::shared_ptr<TypeBase>& type,
                const int offset);

};

#endif //HW3_SYMBOLTABLESTACK_H

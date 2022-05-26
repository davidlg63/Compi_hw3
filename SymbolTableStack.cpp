//
// Created by User on 5/25/2022.
//

#include "SymbolTableStack.h"


using std::shared_ptr;
using std::make_shared;

shared_ptr<SymbolTableNode> SymbolTableStack::MakeTable(std::shared_ptr<SymbolTableNode> parent)
{
    shared_ptr<SymbolTableNode> newTable = make_shared<SymbolTableNode>(SymbolTableNode());
    newTable->parent = parent;
    return newTable;
}

void SymbolTableStack::Insert(const shared_ptr<SymbolTableNode>& table, const std::string& name, const std::shared_ptr<TypeBase>& type,
                              const int offset)
{
    updateTable(table, name, type, offset);
    _symbolTableStack.push(table);
}

#pragma region Private Methods

void SymbolTableStack::updateTable(const std::shared_ptr<SymbolTableNode>& table, const std::string& name, const std::shared_ptr<TypeBase>& type,
                                   const int offset)
{
    table->name = name;
    table->type = type;
    table->offset = offset;
}

#pragma endregion



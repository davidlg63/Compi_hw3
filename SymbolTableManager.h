//
// Created by User on 5/25/2022.
//

#ifndef HW3_SYMBOLTABLESTACK_H
#define HW3_SYMBOLTABLESTACK_H

#include <memory>
#include <stack>
#include "SymbolTable.h"

class SymbolTableManager
{
    std::stack<std::shared_ptr<SymbolTable>> _symbolTableStack;
    std::stack<int> _offsetStack;

public:
    SymbolTableManager();
    void pushOnSameScope(std::shared_ptr<SymbolTable> table);
    void pushOnNewScope(std::shared_ptr<SymbolTable> table);
    void pop();
    std::shared_ptr<SymbolTable> top();
    void openScope();
    void closeScope();
    int getOffset();
};

#endif //HW3_SYMBOLTABLESTACK_H
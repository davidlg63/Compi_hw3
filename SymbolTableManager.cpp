//
// Created by User on 5/25/2022.
//

#include "SymbolTableManager.h"

SymbolTableManager::SymbolTableManager() {
    _offsetStack.push(0); //Zero should always be the first offset
}

void SymbolTableManager::pushOnSameScope(std::shared_ptr<SymbolTable> table) {
    _symbolTableStack.push(table);
    int current_offset = _offsetStack.top();
    _offsetStack.pop();
    _offsetStack.push(current_offset + 1);
}

void SymbolTableManager::pushOnNewScope(std::shared_ptr<SymbolTable> table) {
    _symbolTableStack.push(table);
    int current_offset = _offsetStack.top();
    _offsetStack.push(current_offset);
}

void SymbolTableManager::pop() {
    _symbolTableStack.pop();
    _offsetStack.pop();
}

std::shared_ptr<SymbolTable> SymbolTableManager::top() {
    return _symbolTableStack.top();
}

void SymbolTableManager::openScope() {
    std::shared_ptr<SymbolTable> newTable = std::make_shared<SymbolTable>(SymbolTable(this->top()));
    pushOnNewScope(newTable);
}

void SymbolTableManager::closeScope() {
    this->pop();
}

int SymbolTableManager::getOffset() {
    int offset = _offsetStack.top();
    _offsetStack.pop();
    _offsetStack.push(offset + 1);
    return offset;
}






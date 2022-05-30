//
// Created by User on 5/30/2022.
//
#include "Symbols.h"

void expressionList::insert(const std::vector<Type_>& list) {
    for(const auto& type : list)
    {
        exprList.push_back(type);
    }
}
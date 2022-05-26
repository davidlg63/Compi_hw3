//
// Created by User on 5/25/2022.
//

#ifndef HW3_SYMBOLTABLENODE_H
#define HW3_SYMBOLTABLENODE_H

#include <string>
#include <memory>
#include "TypeBase.h"

struct SymbolTableNode
{
    std::string name;
    std::shared_ptr<TypeBase> type;
    int offset;
    std::shared_ptr<SymbolTableNode> parent;
}

#endif //HW3_SYMBOLTABLENODE_H

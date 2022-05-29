//
// Created by User on 5/28/2022.
//

#ifndef HW3_OUTPUT_CPP_NONTERMINALS_H
#define HW3_OUTPUT_CPP_NONTERMINALS_H

#include <string>
#include <vector>
#include "SymbolBase.h"
#include "Type_.h"

struct RetType : public SymbolBase
{
    Type_ type;
};

struct TerminalID : public SymbolBase
{
    std::string name;
    explicit TerminalID(const char* _name) : name(_name){};
};

struct NonTerminalVar : public SymbolBase
{
    Type_ type;
    std::string name;
    NonTerminalVar(Type_ _type, std::string _name) : type(_type), name(_name){};
};

struct ParamList : public SymbolBase
{
    std::string name;
    Type_ type_of_list;
};

struct Call2Fun : public SymbolBase
{
    std::string name;
    std::vector<Type_> expList;
};

struct expressionList : public SymbolBase
{
    std::vector<Type_> expressionList;
};

#endif //HW3_OUTPUT_CPP_NONTERMINALS_H

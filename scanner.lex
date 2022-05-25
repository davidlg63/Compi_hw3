%{

/* Declarations section */
#include <stdio.h>
#include "parser.tab.hpp"
#include "output.hpp"

void lexicalError();
%}

%option yylineno
%option noyywrap

%%

void								return VOID;
int									return INT;
byte								return BYTE;
b 									return B;
bool								return BOOL;
auto 								return AUTO;
and									return AND;
or									return OR;
not									return NOT;
true 								return TRUE;
false 								return FALSE;
return 								return RETURN;
if									return IF;
else 								return ELSE;
while 								return WHILE;
break 								return BREAK;
continue							return CONTINUE;
,									return COMMA;
\(									return LPAREN;
\)									return RPAREN;
\{									return LBRACE;
\}									return RBRACE;
=									return ASSIGN;
\<|>|<=|>=							return RELOP_RELATIONAL;
==|!=								return RELOP_EQUALITY;
\+|\-								return BINOP_PLUS_MINUS;
\*|\/								return BINOP_MUL_DIV;
[a-zA-Z][a-zA-Z0-9]*				return ID;
;									return SC;
0|[1-9]([0-9])*						return NUM;
\"([^\n\r\"\\]|\\[rnt"\\])+\"		return STRING;
\/\/[^\r\n]*[\r|\n|\r\n]?			;
[\r\n\t ]+							;
.									lexicalError();

%%

void lexicalError()
{
	output::errorLex(yylineno);
	exit(1);
}
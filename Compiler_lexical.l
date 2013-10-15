

%{
#include <stdio.h>
#include <math.h>
#include "Compiler_sintaxis.tab.h"





%}

LETTERS[a-z|A-Z]
LETTERS_MIN[a-z]
DIGITS[0-9]
%option noyywrap
ID 	[a-z]({LETTERS}|{DIGITS})*
NAME_CM [A-Z][a-z]+
CHAR "\'"([a-z]|A-Z|{DIGITS})"\'"

%%



"public" {printf("Token: scope public \n");  yylval.s = yytext; return PUBLIC;}
"method" {printf("Token: defining method \n");  yylval.s = yytext; return METHOD_ID;}
"private" {printf("Token: scope private %s\n", yytext); return PRIVATE;}
"class" {printf("Token: reserved word class %s\n", yytext); return CLASS;}
"if" {printf("Token: reserved word if %s\n", yytext); return IF;}
"else" {printf("Token: reserved word else %s\n", yytext); return ELSE;}
"while" {printf("Token: reserved word while %s\n", yytext); return WHILE;}
"print" {printf("Token: reserved word print %s\n", yytext); return PRINT;}
"scan" {printf("Token: reserved word scan %s\n", yytext); return SCAN;}
"import" {printf("Token: import a program %s\n", yytext); return IMPORT;}
"extends" {printf("Token: reserved word import %s\n", yytext);  return EXTENDS;}
"int" {printf("Token: identifier integer value %s\n", yytext); yylval.s = strdup(yytext); return INT;}
"void" {printf("Token: identifier void return type %s\n", yytext); yylval.s = strdup(yytext); return VOID;}
"main" {printf("Token: main class %s\n", yytext); return MAIN;}
"float" {printf("Token: identifier float value  %s\n", yytext); yylval.s = strdup(yytext); return FLOAT;}
"char" {printf("Token: identifier character value  %s\n", yytext); yylval.s = strdup(yytext); return CHAR;}
"new" {printf("Token: reserved word new  %s\n", yytext); return NEW;}
"obj" {printf("Token: reserved obj for assignation  %s\n", yytext); return OBJ;}
{NAME_CM}	{printf("Token: Name of a class \n"); yylval.s = strdup(yytext); return NAME_CM;} 
{DIGITS}+"."{DIGITS}+	{printf("Token: Constant float value %g\n", atof(yytext)); return CONS_FLOAT;}
{DIGITS}+	{printf("Token: Constant integer value %g\n", atof(yytext)); return CONS_INT;}
{CHAR} {printf("Token: Constant character value %s\n", yytext); return CONS_CHAR;}
{ID}	{printf("Token: identifier %s\n", yytext); yylval.s = strdup(yytext); return IDENTIFIER;}



"{" {printf("Token: Open curly bracket  %s\n", yytext); return OPEN_CURLY;}
"}" {printf("Token:	Close curly bracket %s\n", yytext); return CLOSE_CURLY;}
"[" {printf("Token: Open  bracket  %s\n", yytext); return OPEN_BRA;}
"]" {printf("Token:	Close  bracket %s\n", yytext); return CLOSE_BRA;}
";" {printf("Token semicolon: %s\n", yytext); return SEMICOLON;}
"=" {printf("Token: equals sign %s\n", yytext); return EQUALS;}
"(" {printf("Token:	Open parenthesis %s\n", yytext); return OPEN_PAREN;}	
")" {printf("Token: Close parenthesis %s\n", yytext); return CLOSE_PAREN;}	
"," {printf("Token: coma %s\n", yytext); return COMA;}
"." {printf("Token: dot %s\n", yytext); return DOT;}
"&&" {printf("Token: AND Operator %s\n", yytext); return AND;}
"||" {printf("Token: OR Operator %s\n", yytext); return OR;}
">" {printf("Token: Operator greater than %s\n", yytext); return GT;}
"<" {printf("Token: Operator less than %s\n", yytext); return LT;}
">=" {printf("Token: Operator greater than or equals %s\n", yytext); return GTE;}
"<=" {printf("Token: Operator less than or equals %s\n", yytext); return LTE;}
"!=" {printf("Token: Operator different than %s\n", yytext); return DT;}
"==" {printf("Token: Operator equals than %s\n", yytext); return ET;}
"+" {printf("Token: Operator addition %s\n", yytext); return PLUS;}
"-" {printf("Token: Operator  substracting %s\n", yytext); return MINUS;}
"*" {printf("Token: Operator multiplication: %s\n", yytext); return MULT;}
"/" {printf("Token: Operator division %s\n", yytext); return DIV;}
"!" {printf("Token: Operator NOT %s\n", yytext); return NOT;}
"&" {printf("Token: Ampersan value assignation during scanning %s\n", yytext); return AMPER;}
"%" {printf("Token: Module type specification while scanning %s\n", yytext); return MODULE;}
"'"  {printf("Token: quote %s\n", yytext); return QUOTE;}



%% 

main(){ 
	int result = yyparse();
	if (result==0)
		printf("Correct input \n");

	else
		printf("Wrong input...\n");
}

yyerror(s)
	char *s;
	{
	   fprintf(stderr, "%s\n",s);
	}
	
%{
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>



int yystopparser=0;
int isFunction = 0;
int addParams = 0;
char *idFunction;

// Data structures definition

struct nodeVar { /* node table structure */
    struct nodeVar *next; /* next entry in chain */
    char *id; /* defined name */
    char *type; /* replacement text */
	int memory;
};

struct nodeFunction { /* node table structure */
    struct nodeFunction *next; /* next entry in chain */
	struct nodeVar *vars;
    char *id; /* defined name */
    char *type; /* replacement text */
    struct nodeVar *secParam; // Parametric sequence in function
	int memory;
};


static struct nodeVar *globalVars = NULL; /* pointer table */
static struct nodeVar *tailParam = NULL;
static struct nodeFunction *functions = NULL; /* pointer table */
static struct nodeFunction *taleFunction = NULL; /* pointer table */


// Global memory count
// Global vars
int contGlobalInt = 0; // var int (0 - 5000)
int contGlobalFloat = 5001; // var float (5001 - 10000)
int contGlobalChar = 10001; // var char (10001 - 15000)
int contGlobalObj = 40001; // Object global (40001 - 45000)

// Functions and local vars
int contFunction    = 15001; // cont functions (15001 - 20000)
int contLocalInt    = 20001; // cont local var Int (20001 - 25000)
int contLocalFloat  = 25001; // cont local var float (25001 - 30000)
int contLocalChar   = 30001; // cont local var char (30001 - 35000)
int contLocalObj    = 35001; // cont local Objecy (35001 - 40000)

struct nodeVar *addVarGlobal(char *id, char *type){
	struct nodeVar *aux = (struct nodeVar *) malloc(sizeof(struct nodeVar));
	aux->next = NULL;
	aux->id = id;
	aux->type = type;
	int tipo;
	if(strcmp(type, "int") == 0){
		aux->memory = contGlobalInt;
		tipo = 0;
	}
	else
		if(strcmp(type, "float") == 0){
			aux->memory = contGlobalFloat;
			tipo = 1;
		}
	else
		if(strcmp(type, "char") == 0){
			aux->memory = contGlobalChar;
			tipo = 2;
		}
	else{
		aux->memory = contGlobalObj;
		tipo = 3;
	}




	if (globalVars == NULL){ // empty list
		globalVars = aux;
		return aux;
	}
	else{
		struct nodeVar *head = globalVars;
		while(head->next != NULL){
			if (strcmp(head->id, id) == 0)
				return NULL;
			head = head->next;
		}
		if (strcmp(head->id, id) == 0)
			return NULL;
		head->next = aux;
		switch(tipo){
			case 0: 
				contGlobalInt++;
			break;
			case 1:
				contGlobalFloat++;
			break;
			case 2: 
				contGlobalChar++;
			break;
			case 3:
				contGlobalObj++;
			break;
		}
		return aux;
	}
}

struct nodeVar *addVarLocal(char *id, char *type){
	struct nodeVar *aux = (struct nodeVar *) malloc(sizeof(struct nodeVar));
	aux->next = NULL;
	aux->id = id;
	aux->type = type;
	int tipo;
	if(strcmp(type, "int") == 0){
		aux->memory = contLocalInt;
		tipo = 0;
	}
	else
		if(strcmp(type, "float") == 0){
			aux->memory = contLocalFloat;
			tipo = 1;
		}
	else
		if(strcmp(type, "char") == 0){
			aux->memory = contLocalChar;
			tipo = 2;
		}
	else{
		aux->memory = contLocalObj;
		tipo = 3;
	}



	if (taleFunction->vars == NULL){ // empty list
		taleFunction->vars = aux;
		return aux;
	}
	else{
		struct nodeVar *head = taleFunction->vars;
		while(head->next != NULL){
			if (strcmp(head->id, id) == 0)
				return NULL;
			head = head->next;
		}
		if (strcmp(head->id, id) == 0)
			return NULL;
		head->next = aux;
		switch(tipo){
			case 0: 
				contLocalInt++;
			break;
			case 1:
				contLocalFloat++;
			break;
			case 2: 
				contLocalChar++;
			break;
			case 3: 
				contLocalObj++;
			break;
		}
		return aux;
	}
}


struct nodeVar *addParamSec(char *id, char *type){
	struct nodeVar *aux = (struct nodeVar *) malloc(sizeof(struct nodeVar));
	aux->next = NULL;
	aux->id = id;
	aux->type = type;
	aux->memory = 0;



	if (taleFunction->secParam == NULL){ // empty list
		taleFunction->secParam = aux;
		tailParam = aux;
		return aux;
	}
	else{
		tailParam->next = aux;
		tailParam = aux;
		return aux;
	}


}



struct nodeFunction *addFunction(char *id, char *type){
	struct nodeFunction *aux = (struct nodeFunction *) malloc(sizeof(struct nodeFunction));
	aux->next = NULL;
	aux->vars = NULL;
	aux->id = id;
	aux->type = type;
	aux->memory = contFunction;
	aux->secParam = NULL;

	if (functions == NULL){ // empty list
		functions = aux;
		taleFunction = aux;
		return aux;
	}
	else{
		struct nodeFunction *head = functions;
		while(head->next != NULL){
			if (strcmp(head->id, id) == 0)
				return NULL;
			head = head->next;
		}
		if (strcmp(head->id, id) == 0)
			return NULL;
		head->next = aux;
		taleFunction = aux;
		contFunction++;
		return aux;
	}
}


/*

	storeVars(type,id): store variables in the table of vars

*/


void storeVars(char *type, char *id){
	// Check if is global variable
	// Create the table

	//printf("*** Llega var %s... function %d and fid %s ", id, isFunction, idFunction);
	if(isFunction == 0){ 
		// is a global variable
		if(addVarGlobal(id,type) != NULL){
	        printf("=== instalada var");
		}
	    else{
	        printf("\nError variable %s is already defined in the global scope\n");
	        yyerror("Semantic Error: Variable already defined\n");
	    }

	}
	else{ 
		// variable inside function
		

		if( addVarLocal(id, type) != NULL){
			printf("Added var in function\n");
			if(addParams == 1){
				printf("Try to install in secuence\n");
				if(addParamSec(id, type) != NULL){
					printf("Added to sequence of params\n");
				}
			}
		}
		else{
		    printf("\nError variable is already defined in the local scope\n");
	        yyerror("Semantic Error: Variable already defined\n");
		}
	}
}

void closeParams(){
	addParams = 0;
	printf("End of params in current method\n");
}

/*

	storeFunctions(type,id) : store functions in the fucntions table

*/

void storeFunctions(char *type, char *id){
	// update function status
	isFunction = 1;
	addParams = 1;
	//idFunction = id;

	if(addFunction(id, type) != NULL){
	    printf("installing funtion\n");
	}
	else{
	   	printf("\nError function %s is already defined in the global scope\n,id");
	    yyerror("Semantic Error: Function already defined\n");
	}
}

struct nodeVar *searchVarFunction(char *id){
	struct nodeVar *head = taleFunction->vars;
	while(head != NULL){
		if(strcmp(head->id,id) == 0)
			return head;
		else
			head = head->next;
	}
	return NULL;
}

struct nodeVar *searchGlobalVar(char *id){
	struct nodeVar *head = globalVars;
	while(head != NULL){
		if(strcmp(head->id,id) == 0)
			return head;
		else
			head = head->next;
	}
	return NULL;
}

void assignVar(char *id){
	// Looking up for assigned vars in funcion
	if (taleFunction != NULL){
		if (searchVarFunction(id) == NULL){
			printf("not found in function\n");
			if( searchGlobalVar(id) == NULL){
		 		printf("\nError in function.Cannot find variable %s in function or global scope\n,idFunction, id");
		    	yyerror("Semantic Error: Undeclared variable\n");
		 	}
		 	else
		 		printf("Found in global vars\n");
		}
		else
			printf("Found in local vars\n");
	}
	else{
		if(globalVars!=NULL){
			if( searchGlobalVar(id) == NULL){
		 		printf("\nError in function.Cannot find variable %s  global scope\n, id");
		    	yyerror("Semantic Error: Undeclared variable\n");
		 	}
		 	else
		 		printf("Found in global vars\n");
		}

	}

}

void closingFunction(){
	isFunction = 0;
}



// right syntax:
// public class Jesus{ public int millo; method public int Ali(){ 

%}

%union {
  char *s;
  double d;
  int i;
} 

%token <s> PUBLIC

%token <s> IDENTIFIER
%token <s> NAME_CM 
%token <s> VAR_ID
%token PRIVATE CLASS IF ELSE WHILE PRINT SCAN OBJ
%token IMPORT EXTENDS  MAIN NEW CONS_FLOAT
%token CONS_INT CONS_CHAR OPEN_CURLY METHOD_ID
%token CLOSE_CURLY OPEN_BRA CLOSE_BRA SEMICOLON EQUALS OPEN_PAREN
%token CLOSE_PAREN COMA DOT AND OR GT LT GTE LTE DT ET PLUS MINUS
%token MULT DIV NOT AMPER MODULE QUOTE CLOSE PAREN  SCAN_INPUT VOID INT CHAR FLOAT
%type <s> TYPE 
%type <s> RETURN_TYPE



%start PROGRAM 
%%

PROGRAM : IMPORTS PUBLIC CLASS NAME_CM HERITAGE OPEN_CURLY ATTRIBUTES CONSTRUCTOR METHODS MAIN_M CLOSE_CURLY;

IMPORTS	: IMPORT NAME_CM SEMICOLON IMPORTS;
IMPORTS : /* VACIO */;

HERITAGE : EXTENDS NAME_CM;
HERITAGE : /* VACIO */; 

ATTRIBUTES : SCOPE TYPE_ATTRIBUTE;
ATTRIBUTES : /* VACIO */; 

SCOPE : PRIVATE;
SCOPE : PUBLIC;

TYPE_ATTRIBUTE : TYPE IDENTIFIER {storeVars($1,$2)} TYPE_VAR SEMICOLON ATTRIBUTES;
TYPE_ATTRIBUTE : NAME_CM IDENTIFIER {storeVars($1,$2)} ASSIGN_OBJECTS SEMICOLON ATTRIBUTES;

TYPE : INT;
TYPE : FLOAT;
TYPE : CHAR;

TYPE_VAR : LIST_VARS;
TYPE_VAR : VAR_ARRAY;

LIST_VARS : EQUALS CONS_VAR SAME_TYPE_VARS;

CONS_VAR : CONS_FLOAT;
CONS_VAR : CONS_INT;
CONS_VAR : CONS_CHAR;
CONS_VAR : IDENTIFIER {assignVar($1)};

SAME_TYPE_VARS : COMA IDENTIFIER {assignVar($2)} LIST_VARS;
SAME_TYPE_VARS : /* VACIO */

VAR_ARRAY : OPEN_BRA CLOSE_BRA EQUALS NEW TYPE OPEN_BRA CONS_INT CLOSE_BRA;
VAR_ARRAY : /* VACIO */

ASSIGN_OBJECTS : EQUALS NEW NAME_CM OPEN_PAREN PARAM_OBJECTS CLOSE_PAREN;

PARAM_OBJECTS : IDENTIFIER LIST_OBJ_PARAMS;
PARAM_OBJECTS : /* VACIO */;

LIST_OBJ_PARAMS: COMA PARAM_OBJECTS;

CONSTRUCTOR : PUBLIC NAME_CM OPEN_PAREN TYPE_PARAMS CLOSE_PAREN OPEN_CURLY INIT_ATTRIBUTES CLOSE_CURLY CONSTRUCTOR;
CONSTRUCTOR : /* VACIO */;

TYPE_PARAMS : PARAMS;
TYPE_PARAMS : /* VACIO */

PARAMS : TYPE IDENTIFIER {storeVars($1,$2)} LIST_PARAMS;

LIST_PARAMS : COMA PARAMS; 
LIST_PARAMS : /* VACIO */;

INIT_ATTRIBUTES : IDENTIFIER ASSIGNATIONS SEMICOLON INIT_ATTRIBUTES;
INIT_ATTRIBUTES : /* VACIO */;

ASSIGNATIONS : EQUALS CONS_VAR;
ASSIGNATIONS : ASSIGN_OBJECTS;

METHODS : METHOD_ID SCOPE RETURN_TYPE NAME_CM OPEN_PAREN {storeFunctions($3,$4)} TYPE_PARAMS CLOSE_PAREN {closeParams()} BLOC {closingFunction()} METHODS ;
METHODS : /* VACIO */;

RETURN_TYPE : VOID;
RETURN_TYPE : TYPE;

BLOC : OPEN_CURLY VARS OBJECTS LIST_STATUTE CLOSE_CURLY;

VARS : TYPE IDENTIFIER {storeVars($1,$2)} TYPE_VAR SEMICOLON VARS;
VARS : /* VACIO */;

OBJECTS : NAME_CM IDENTIFIER {storeVars($1,$2)} LIST_OBJECTS SEMICOLON OBJECTS;
OBJECTS : /* VACIO */;

LIST_OBJECTS : ASSIGN_OBJECTS SAME_TYPE_OBJECTS;
LIST_OBJECTS : SAME_TYPE_OBJECTS;

SAME_TYPE_OBJECTS : COMA IDENTIFIER LIST_OBJECTS;
SAME_TYPE_OBJECTS : /* VACIO */;

LIST_STATUTE : STATUTE LIST_STATUTE;
LIST_STATUTE : /* VACIO */;

STATUTE : ASSIGNATION;
STATUTE : OBJECT_ASSIGNATION;
STATUTE : CONDITION;
STATUTE : CYCLE;
STATUTE : WRITING;
STATUTE : READING;
STATUTE : METHOD_CALL;

ASSIGNATION : IDENTIFIER {assignVar($1)} TYPE_ASSIGNATION EQUALS {printf("***Entering ASSIGNATION\n");}EXPRESSION SEMICOLON;

TYPE_ASSIGNATION : DOT IDENTIFIER;
TYPE_ASSIGNATION : OPEN_BRA EXP CLOSE_BRA;
TYPE_ASSIGNATION : /* VACIO */;

SUPER_EXPRESSION : EXPRESSION LOGIC_OP;

LOGIC_OP : AND SUPER_EXPRESSION;
LOGIC_OP : OR SUPER_EXPRESSION;
LOGIC_OP : /* VACIO */;

EXPRESSION : EXP OPS_LOGIC;

OPS_LOGIC : GT EXP;
OPS_LOGIC : LT EXP;
OPS_LOGIC : DT EXP;
OPS_LOGIC : GTE EXP;
OPS_LOGIC : LTE EXP;
OPS_LOGIC : ET EXP;
OPS_LOGIC : /* VACIO */;

EXP : TERM OP_TERM;

OP_TERM : PLUS EXP;
OP_TERM : MINUS EXP;
OP_TERM : /* VACIO */;

TERM : FACTOR OP_FACT;

OP_FACT : MULT TERM;
OP_FACT : DIV TERM;
OP_FACT : /* VACIO */;

FACTOR : CONS_VAR;
FACTOR : NOT CONS_VAR;
FACTOR : PLUS CONS_VAR;
FACTOR : MINUS CONS_VAR;
FACTOR : IDENTIFIER TYPE_FACTOR;
FACTOR : OPEN_PAREN SUPER_EXPRESSION CLOSE_PAREN;

TYPE_FACTOR : OPEN_BRA EXP CLOSE_BRA;
TYPE_FACTOR : DOT NAME_CM OPEN_PAREN PARAM_OBJECTS CLOSE_PAREN;

OBJECT_ASSIGNATION : OBJ IDENTIFIER {assignVar($2)} ASSIGN_OBJECTS SEMICOLON;

CONDITION : IF OPEN_PAREN SUPER_EXPRESSION CLOSE_PAREN COND_CYCLE_BLOC END_CONDITION;

COND_CYCLE_BLOC : OPEN_CURLY LIST_STATUTE CLOSE_CURLY;

END_CONDITION : ELSE COND_CYCLE_BLOC;
END_CONDITION : /* VACIO */;

CYCLE : WHILE OPEN_PAREN SUPER_EXPRESSION CLOSE_PAREN COND_CYCLE_BLOC;

WRITING : PRINT OPEN_PAREN WRITING_LIST CLOSE_PAREN SEMICOLON;

WRITING_LIST : FACTOR MORE_WRITING;

MORE_WRITING : COMA WRITING_LIST;
MORE_WRITING : /* VACIO */;

READING : SCAN OPEN_PAREN READING_LIST CLOSE_PAREN SEMICOLON;

READING_LIST : SCAN_INPUT COMA AMPER IDENTIFIER TYPE_READING; 

TYPE_READING : TYPE_FACTOR;
TYPE_READING : DOT IDENTIFIER;
TYPE_READING : /* VACIO */;

METHOD_CALL : IDENTIFIER DOT NAME_CM OPEN_PAREN PARAM_OBJECTS CLOSE_PAREN SEMICOLON;

MAIN_M : VOID MAIN OPEN_PAREN CLOSE_PAREN BLOC








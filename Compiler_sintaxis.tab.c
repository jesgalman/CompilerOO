/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PUBLIC = 258,
     IDENTIFIER = 259,
     NAME_CM = 260,
     VAR_ID = 261,
     PRIVATE = 262,
     CLASS = 263,
     IF = 264,
     ELSE = 265,
     WHILE = 266,
     PRINT = 267,
     SCAN = 268,
     OBJ = 269,
     IMPORT = 270,
     EXTENDS = 271,
     MAIN = 272,
     NEW = 273,
     CONS_FLOAT = 274,
     CONS_INT = 275,
     CONS_CHAR = 276,
     OPEN_CURLY = 277,
     METHOD_ID = 278,
     CLOSE_CURLY = 279,
     OPEN_BRA = 280,
     CLOSE_BRA = 281,
     SEMICOLON = 282,
     EQUALS = 283,
     OPEN_PAREN = 284,
     CLOSE_PAREN = 285,
     COMA = 286,
     DOT = 287,
     AND = 288,
     OR = 289,
     GT = 290,
     LT = 291,
     GTE = 292,
     LTE = 293,
     DT = 294,
     ET = 295,
     PLUS = 296,
     MINUS = 297,
     MULT = 298,
     DIV = 299,
     NOT = 300,
     AMPER = 301,
     MODULE = 302,
     QUOTE = 303,
     CLOSE = 304,
     PAREN = 305,
     SCAN_INPUT = 306,
     VOID = 307,
     INT = 308,
     CHAR = 309,
     FLOAT = 310
   };
#endif
/* Tokens.  */
#define PUBLIC 258
#define IDENTIFIER 259
#define NAME_CM 260
#define VAR_ID 261
#define PRIVATE 262
#define CLASS 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define PRINT 267
#define SCAN 268
#define OBJ 269
#define IMPORT 270
#define EXTENDS 271
#define MAIN 272
#define NEW 273
#define CONS_FLOAT 274
#define CONS_INT 275
#define CONS_CHAR 276
#define OPEN_CURLY 277
#define METHOD_ID 278
#define CLOSE_CURLY 279
#define OPEN_BRA 280
#define CLOSE_BRA 281
#define SEMICOLON 282
#define EQUALS 283
#define OPEN_PAREN 284
#define CLOSE_PAREN 285
#define COMA 286
#define DOT 287
#define AND 288
#define OR 289
#define GT 290
#define LT 291
#define GTE 292
#define LTE 293
#define DT 294
#define ET 295
#define PLUS 296
#define MINUS 297
#define MULT 298
#define DIV 299
#define NOT 300
#define AMPER 301
#define MODULE 302
#define QUOTE 303
#define CLOSE 304
#define PAREN 305
#define SCAN_INPUT 306
#define VOID 307
#define INT 308
#define CHAR 309
#define FLOAT 310




/* Copy the first part of user declarations.  */
#line 1 "Compiler_sintaxis.y"

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 360 "Compiler_sintaxis.y"
{
  char *s;
  double d;
  int i;
}
/* Line 193 of yacc.c.  */
#line 571 "Compiler_sintaxis.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 584 "Compiler_sintaxis.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    20,    21,    24,    25,    28,    29,
      31,    33,    34,    41,    42,    49,    51,    53,    55,    57,
      59,    63,    65,    67,    69,    71,    72,    77,    78,    87,
      88,    95,    98,    99,   102,   112,   113,   115,   116,   117,
     122,   125,   126,   131,   132,   135,   137,   138,   139,   140,
     153,   154,   156,   158,   164,   165,   172,   173,   174,   181,
     182,   185,   187,   191,   192,   195,   196,   198,   200,   202,
     204,   206,   208,   210,   211,   212,   220,   223,   227,   228,
     231,   234,   237,   238,   241,   244,   247,   250,   253,   256,
     259,   260,   263,   266,   269,   270,   273,   276,   279,   280,
     282,   285,   288,   291,   294,   298,   302,   308,   309,   315,
     322,   326,   329,   330,   336,   342,   345,   348,   349,   355,
     361,   363,   366,   367,   375
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,     3,     8,     5,    59,    22,    60,
      75,    82,   123,    24,    -1,    15,     5,    27,    58,    -1,
      -1,    16,     5,    -1,    -1,    61,    62,    -1,    -1,     7,
      -1,     3,    -1,    -1,    65,     4,    63,    66,    27,    60,
      -1,    -1,     5,     4,    64,    72,    27,    60,    -1,    53,
      -1,    55,    -1,    54,    -1,    67,    -1,    71,    -1,    28,
      68,    69,    -1,    19,    -1,    20,    -1,    21,    -1,     4,
      -1,    -1,    31,     4,    70,    67,    -1,    -1,    25,    26,
      28,    18,    65,    25,    20,    26,    -1,    -1,    28,    18,
       5,    29,    73,    30,    -1,     4,    74,    -1,    -1,    31,
      73,    -1,     3,     5,    29,    76,    30,    22,    80,    24,
      75,    -1,    -1,    77,    -1,    -1,    -1,    65,     4,    78,
      79,    -1,    31,    77,    -1,    -1,     4,    81,    27,    80,
      -1,    -1,    28,    68,    -1,    72,    -1,    -1,    -1,    -1,
      23,    61,    86,     5,    29,    83,    76,    30,    84,    87,
      85,    82,    -1,    -1,    52,    -1,    65,    -1,    22,    88,
      90,    94,    24,    -1,    -1,    65,     4,    89,    66,    27,
      88,    -1,    -1,    -1,     5,     4,    91,    92,    27,    90,
      -1,    -1,    72,    93,    -1,    93,    -1,    31,     4,    92,
      -1,    -1,    95,    94,    -1,    -1,    96,    -1,   110,    -1,
     112,    -1,   115,    -1,   116,    -1,   119,    -1,   122,    -1,
      -1,    -1,     4,    97,    99,    28,    98,   102,    27,    -1,
      32,     4,    -1,    25,   104,    26,    -1,    -1,   102,   101,
      -1,    33,   100,    -1,    34,   100,    -1,    -1,   104,   103,
      -1,    35,   104,    -1,    36,   104,    -1,    39,   104,    -1,
      37,   104,    -1,    38,   104,    -1,    40,   104,    -1,    -1,
     106,   105,    -1,    41,   104,    -1,    42,   104,    -1,    -1,
     108,   107,    -1,    43,   106,    -1,    44,   106,    -1,    -1,
      68,    -1,    45,    68,    -1,    41,    68,    -1,    42,    68,
      -1,     4,   109,    -1,    29,   100,    30,    -1,    25,   104,
      26,    -1,    32,     5,    29,    73,    30,    -1,    -1,    14,
       4,   111,    72,    27,    -1,     9,    29,   100,    30,   113,
     114,    -1,    22,    94,    24,    -1,    10,   113,    -1,    -1,
      11,    29,   100,    30,   113,    -1,    12,    29,   117,    30,
      27,    -1,   108,   118,    -1,    31,   117,    -1,    -1,    13,
      29,   120,    30,    27,    -1,    51,    31,    46,     4,   121,
      -1,   109,    -1,    32,     4,    -1,    -1,     4,    32,     5,
      29,    73,    30,    27,    -1,    52,    17,    29,    30,    87,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   385,   385,   387,   388,   390,   391,   393,   394,   396,
     397,   399,   399,   400,   400,   402,   403,   404,   406,   407,
     409,   411,   412,   413,   414,   416,   416,   417,   419,   420,
     422,   424,   425,   427,   429,   430,   432,   433,   435,   435,
     437,   438,   440,   441,   443,   444,   446,   446,   446,   446,
     447,   449,   450,   452,   454,   454,   455,   457,   457,   458,
     460,   461,   463,   464,   466,   467,   469,   470,   471,   472,
     473,   474,   475,   477,   477,   477,   479,   480,   481,   483,
     485,   486,   487,   489,   491,   492,   493,   494,   495,   496,
     497,   499,   501,   502,   503,   505,   507,   508,   509,   511,
     512,   513,   514,   515,   516,   518,   519,   521,   521,   523,
     525,   527,   528,   530,   532,   534,   536,   537,   539,   541,
     543,   544,   545,   547,   549
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PUBLIC", "IDENTIFIER", "NAME_CM",
  "VAR_ID", "PRIVATE", "CLASS", "IF", "ELSE", "WHILE", "PRINT", "SCAN",
  "OBJ", "IMPORT", "EXTENDS", "MAIN", "NEW", "CONS_FLOAT", "CONS_INT",
  "CONS_CHAR", "OPEN_CURLY", "METHOD_ID", "CLOSE_CURLY", "OPEN_BRA",
  "CLOSE_BRA", "SEMICOLON", "EQUALS", "OPEN_PAREN", "CLOSE_PAREN", "COMA",
  "DOT", "AND", "OR", "GT", "LT", "GTE", "LTE", "DT", "ET", "PLUS",
  "MINUS", "MULT", "DIV", "NOT", "AMPER", "MODULE", "QUOTE", "CLOSE",
  "PAREN", "SCAN_INPUT", "VOID", "INT", "CHAR", "FLOAT", "$accept",
  "PROGRAM", "IMPORTS", "HERITAGE", "ATTRIBUTES", "SCOPE",
  "TYPE_ATTRIBUTE", "@1", "@2", "TYPE", "TYPE_VAR", "LIST_VARS",
  "CONS_VAR", "SAME_TYPE_VARS", "@3", "VAR_ARRAY", "ASSIGN_OBJECTS",
  "PARAM_OBJECTS", "LIST_OBJ_PARAMS", "CONSTRUCTOR", "TYPE_PARAMS",
  "PARAMS", "@4", "LIST_PARAMS", "INIT_ATTRIBUTES", "ASSIGNATIONS",
  "METHODS", "@5", "@6", "@7", "RETURN_TYPE", "BLOC", "VARS", "@8",
  "OBJECTS", "@9", "LIST_OBJECTS", "SAME_TYPE_OBJECTS", "LIST_STATUTE",
  "STATUTE", "ASSIGNATION", "@10", "@11", "TYPE_ASSIGNATION",
  "SUPER_EXPRESSION", "LOGIC_OP", "EXPRESSION", "OPS_LOGIC", "EXP",
  "OP_TERM", "TERM", "OP_FACT", "FACTOR", "TYPE_FACTOR",
  "OBJECT_ASSIGNATION", "@12", "CONDITION", "COND_CYCLE_BLOC",
  "END_CONDITION", "CYCLE", "WRITING", "WRITING_LIST", "MORE_WRITING",
  "READING", "READING_LIST", "TYPE_READING", "METHOD_CALL", "MAIN_M", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    63,    62,    64,    62,    65,    65,    65,    66,    66,
      67,    68,    68,    68,    68,    70,    69,    69,    71,    71,
      72,    73,    73,    74,    75,    75,    76,    76,    78,    77,
      79,    79,    80,    80,    81,    81,    83,    84,    85,    82,
      82,    86,    86,    87,    89,    88,    88,    91,    90,    90,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    97,    98,    96,    99,    99,    99,   100,
     101,   101,   101,   102,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   105,   106,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   109,   109,   111,   110,   112,
     113,   114,   114,   115,   116,   117,   118,   118,   119,   120,
     121,   121,   121,   122,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     4,     0,     2,     0,     2,     0,     1,
       1,     0,     6,     0,     6,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     0,     4,     0,     8,     0,
       6,     2,     0,     2,     9,     0,     1,     0,     0,     4,
       2,     0,     4,     0,     2,     1,     0,     0,     0,    12,
       0,     1,     1,     5,     0,     6,     0,     0,     6,     0,
       2,     1,     3,     0,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     2,     3,     0,     2,
       2,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     2,     2,     0,     2,     2,     2,     0,     1,
       2,     2,     2,     2,     3,     3,     5,     0,     5,     6,
       3,     2,     0,     5,     5,     2,     2,     0,     5,     5,
       1,     2,     0,     7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     1,     0,     4,     0,     3,
       6,     0,     0,     5,     8,    10,     9,    35,     0,     0,
      50,     0,    15,    17,    16,     7,     0,     0,     0,     0,
      13,    11,    37,     0,     0,     0,     0,    29,     0,     0,
      36,    51,    52,     0,     0,     2,     0,     0,     0,     0,
       0,    18,    19,    38,     0,     0,     0,     0,     8,     0,
      24,    21,    22,    23,    27,     8,    41,    43,    46,     0,
       0,    14,     0,     0,    20,    12,     0,    39,     0,     0,
      37,    56,   124,    32,     0,    25,    40,     0,    45,     0,
      35,     0,     0,    59,     0,     0,     0,     0,    44,    43,
      34,    47,    54,     0,    65,    32,    31,    30,     0,    26,
      42,     0,    29,    57,    73,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    33,
       0,    48,     0,    63,     0,    78,     0,     0,     0,     0,
     107,    53,    64,    28,    50,    56,     0,    63,     0,    61,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    99,
       0,    82,    90,    94,    98,     0,   117,     0,     0,     0,
       0,    49,    55,    63,    60,    59,    32,     0,    76,    74,
       0,     0,   103,     0,   101,   102,   100,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,    83,     0,     0,
      91,     0,     0,    95,     0,     0,   115,     0,     0,     0,
       0,    62,    58,     0,    77,     0,     0,     0,   104,    65,
     112,    80,    81,    84,    85,    87,    88,    86,    89,    92,
      93,    96,    97,   113,   116,   114,     0,   118,   108,     0,
       0,   105,    32,     0,     0,   109,   122,   123,    75,     0,
     110,   111,     0,   120,   119,   106,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    12,    17,    18,    25,    37,    36,    38,
      50,    51,   159,    74,    97,    52,   147,    95,   106,    20,
      39,    40,    66,    77,    79,    89,    29,    80,   111,   144,
      43,    82,    93,   112,   104,   133,   148,   149,   120,   121,
     122,   135,   215,   153,   160,   190,   161,   197,   162,   200,
     163,   203,   164,   182,   123,   170,   124,   220,   245,   125,
     126,   167,   206,   127,   169,   254,   128,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -192
static const yytype_int16 yypact[] =
{
       5,    32,    35,    36,    17,  -192,    38,     5,    51,  -192,
      60,    76,    64,  -192,    31,  -192,  -192,    95,     6,    96,
      83,   103,  -192,  -192,  -192,  -192,   104,    80,    31,    61,
    -192,  -192,   -45,    42,    97,    91,    88,    -6,   113,    89,
    -192,  -192,  -192,   115,    92,  -192,   100,    98,   101,    11,
      99,  -192,  -192,  -192,   102,    93,   106,   118,    31,   105,
    -192,  -192,  -192,  -192,   107,    31,   108,   124,  -192,   109,
     111,  -192,   112,   128,  -192,  -192,   -45,  -192,   114,   110,
     -45,   -45,  -192,   137,   -45,  -192,  -192,     8,  -192,   116,
      95,   117,   140,   141,   119,   121,   120,   125,  -192,   124,
    -192,  -192,  -192,   144,    71,   137,  -192,  -192,   129,  -192,
    -192,   109,    -6,  -192,   122,   123,   126,   127,   130,   153,
     134,    71,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
     135,  -192,   133,    14,   157,   -11,    58,    58,    58,   131,
    -192,  -192,  -192,  -192,    83,   -45,   159,   136,   138,  -192,
     139,    58,   160,   142,    -9,    58,    11,    11,    11,  -192,
     143,    30,    53,    25,    26,   145,   146,   148,   149,   151,
      88,  -192,  -192,    14,  -192,   141,   137,   150,  -192,  -192,
      58,   161,  -192,   154,  -192,  -192,  -192,   147,    58,    58,
    -192,    58,    58,    58,    58,    58,    58,  -192,    58,    58,
    -192,    58,    58,  -192,   147,    58,  -192,   152,   155,   156,
     158,  -192,  -192,   162,  -192,    58,   163,   164,  -192,    71,
     176,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,   167,  -192,  -192,   168,
     169,  -192,   137,   166,   147,  -192,    -7,  -192,  -192,   170,
    -192,  -192,    69,  -192,  -192,  -192,  -192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,   165,  -192,   -25,   171,  -192,  -192,  -192,   -16,
      62,    90,   -46,  -192,  -192,  -192,   -35,  -105,  -192,   132,
     172,   173,  -192,  -192,   174,  -192,    44,  -192,  -192,  -192,
    -192,    86,    46,  -192,    19,  -192,    29,    56,  -117,  -192,
    -192,  -192,  -192,  -192,  -131,  -192,   -17,  -192,  -144,  -192,
     -97,  -192,  -133,   -42,  -192,  -192,  -192,  -191,  -192,  -192,
    -192,     0,  -192,  -192,  -192,  -192,  -192,  -192
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     129,    47,    26,    64,   142,   166,   165,   177,    22,    23,
      24,    21,    60,   233,   151,    60,   180,    42,   180,    48,
       1,   152,    49,   181,   183,   252,    57,    61,    62,    63,
      61,    62,    63,    71,    15,     5,   216,     4,    16,     6,
      75,    98,    46,    88,     7,   146,     8,   223,   224,   225,
     226,   227,   228,   251,   229,   230,    10,   221,   222,    22,
      23,    24,   154,   188,   189,    92,   198,   199,    96,   201,
     202,   213,   166,   256,   217,   114,    11,    61,    62,    63,
     115,    13,   116,   117,   118,   119,    14,   155,   191,   192,
     193,   194,   195,   196,    41,    22,    23,    24,    19,   156,
     157,    27,   243,   158,   231,   232,    28,    30,    31,    32,
     184,   185,   186,    34,    44,    45,    46,    53,    57,    54,
      55,    56,    68,    70,    67,    58,    65,    59,    78,    92,
      84,    81,    85,    72,    90,   210,    69,   249,    73,    76,
      83,    94,    87,    99,   102,   108,   103,   101,   113,   130,
     105,   107,   136,    49,   134,   137,   138,   140,   141,   139,
     145,   143,   150,   173,   178,   175,   217,   146,   176,   219,
     179,   246,     9,   187,   132,   204,   214,   205,   207,   235,
     208,   209,   168,   237,   218,   238,   244,   109,   171,   241,
     250,   172,   239,   242,   212,   247,   248,   131,   240,    33,
     255,   236,   211,   174,   253,   234,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110
};

static const yytype_int16 yycheck[] =
{
     105,    36,    18,    49,   121,   138,   137,   151,    53,    54,
      55,     5,     4,   204,    25,     4,    25,    33,    25,    25,
      15,    32,    28,    32,   155,    32,    18,    19,    20,    21,
      19,    20,    21,    58,     3,     0,   180,     5,     7,     3,
      65,    87,    28,    78,    27,    31,     8,   191,   192,   193,
     194,   195,   196,   244,   198,   199,     5,   188,   189,    53,
      54,    55,     4,    33,    34,    81,    41,    42,    84,    43,
      44,   176,   205,     4,     5,     4,    16,    19,    20,    21,
       9,     5,    11,    12,    13,    14,    22,    29,    35,    36,
      37,    38,    39,    40,    52,    53,    54,    55,     3,    41,
      42,     5,   219,    45,   201,   202,    23,     4,     4,    29,
     156,   157,   158,    52,    17,    24,    28,     4,    18,    30,
       5,    29,    29,     5,    22,    27,    27,    26,     4,   145,
      18,    22,     4,    28,    24,   170,    30,   242,    31,    31,
      29,     4,    28,    27,     4,    25,     5,    30,     4,    20,
      31,    30,    29,    28,    32,    29,    29,     4,    24,    29,
      27,    26,     5,     4,     4,    27,     5,    31,    29,    22,
      28,     4,     7,    30,   112,    30,    26,    31,    30,    27,
      31,    30,    51,    27,    30,    27,    10,    97,   144,    26,
      24,   145,    30,    29,   175,    27,    27,   111,   215,    28,
      30,    46,   173,   147,   246,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    57,    58,     5,     0,     3,    27,     8,    58,
       5,    16,    59,     5,    22,     3,     7,    60,    61,     3,
      75,     5,    53,    54,    55,    62,    65,     5,    23,    82,
       4,     4,    29,    61,    52,   123,    64,    63,    65,    76,
      77,    52,    65,    86,    17,    24,    28,    72,    25,    28,
      66,    67,    71,     4,    30,     5,    29,    18,    27,    26,
       4,    19,    20,    21,    68,    27,    78,    22,    29,    30,
       5,    60,    28,    31,    69,    60,    31,    79,     4,    80,
      83,    22,    87,    29,    18,     4,    77,    28,    72,    81,
      24,    76,    65,    88,     4,    73,    65,    70,    68,    27,
      75,    30,     4,     5,    90,    31,    74,    30,    25,    67,
      80,    84,    89,     4,     4,     9,    11,    12,    13,    14,
      94,    95,    96,   110,   112,   115,   116,   119,   122,    73,
      20,    87,    66,    91,    32,    97,    29,    29,    29,    29,
       4,    24,    94,    26,    85,    27,    31,    72,    92,    93,
       5,    25,    32,    99,     4,    29,    41,    42,    45,    68,
     100,   102,   104,   106,   108,   100,   108,   117,    51,   120,
     111,    82,    88,     4,    93,    27,    29,   104,     4,    28,
      25,    32,   109,   100,    68,    68,    68,    30,    33,    34,
     101,    35,    36,    37,    38,    39,    40,   103,    41,    42,
     105,    43,    44,   107,    30,    31,   118,    30,    31,    30,
      72,    92,    90,    73,    26,    98,   104,     5,    30,    22,
     113,   100,   100,   104,   104,   104,   104,   104,   104,   104,
     104,   106,   106,   113,   117,    27,    46,    27,    27,    30,
     102,    26,    29,    94,    10,   114,     4,    27,    27,    73,
      24,   113,    32,   109,   121,    30,     4
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 11:
#line 399 "Compiler_sintaxis.y"
    {storeVars((yyvsp[(1) - (2)].s),(yyvsp[(2) - (2)].s));}
    break;

  case 13:
#line 400 "Compiler_sintaxis.y"
    {storeVars((yyvsp[(1) - (2)].s),(yyvsp[(2) - (2)].s));}
    break;

  case 24:
#line 414 "Compiler_sintaxis.y"
    {assignVar((yyvsp[(1) - (1)].s));}
    break;

  case 25:
#line 416 "Compiler_sintaxis.y"
    {assignVar((yyvsp[(2) - (2)].s));}
    break;

  case 38:
#line 435 "Compiler_sintaxis.y"
    {storeVars((yyvsp[(1) - (2)].s),(yyvsp[(2) - (2)].s));}
    break;

  case 46:
#line 446 "Compiler_sintaxis.y"
    {storeFunctions((yyvsp[(3) - (5)].s),(yyvsp[(4) - (5)].s));}
    break;

  case 47:
#line 446 "Compiler_sintaxis.y"
    {closeParams();}
    break;

  case 48:
#line 446 "Compiler_sintaxis.y"
    {closingFunction();}
    break;

  case 54:
#line 454 "Compiler_sintaxis.y"
    {storeVars((yyvsp[(1) - (2)].s),(yyvsp[(2) - (2)].s));}
    break;

  case 57:
#line 457 "Compiler_sintaxis.y"
    {storeVars((yyvsp[(1) - (2)].s),(yyvsp[(2) - (2)].s));}
    break;

  case 73:
#line 477 "Compiler_sintaxis.y"
    {assignVar((yyvsp[(1) - (1)].s));}
    break;

  case 74:
#line 477 "Compiler_sintaxis.y"
    {printf("***Entering ASSIGNATION\n");;}
    break;

  case 107:
#line 521 "Compiler_sintaxis.y"
    {assignVar((yyvsp[(2) - (2)].s));}
    break;


/* Line 1267 of yacc.c.  */
#line 2085 "Compiler_sintaxis.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}




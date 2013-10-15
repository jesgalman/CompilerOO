
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Compiler_sintaxis.y"

#include <stdio.h>


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PUBLIC = 258,
     PRIVATE = 259,
     CLASS = 260,
     IF = 261,
     ELSE = 262,
     WHILE = 263,
     PRINT = 264,
     SCAN = 265,
     IMPORT = 266,
     EXTENDS = 267,
     INT = 268,
     VOID = 269,
     MAIN = 270,
     FLOAT = 271,
     CHAR = 272,
     NEW = 273,
     CONS_FLOAT = 274,
     CONS_INT = 275,
     CONS_CHAR = 276,
     NAME_CM = 277,
     IDENTIFIER = 278,
     OPEN_CURLY = 279,
     CLOSE_CURLY = 280,
     OPEN_BRA = 281,
     CLOSE_BRA = 282,
     SEMICOLON = 283,
     EQUALS = 284,
     OPEN_PAREN = 285,
     CLOSE_PAREN = 286,
     COMA = 287,
     DOT = 288,
     AND = 289,
     OR = 290,
     GT = 291,
     LT = 292,
     GTE = 293,
     LTE = 294,
     DT = 295,
     ET = 296,
     PLUS = 297,
     MINUS = 298,
     MULT = 299,
     DIV = 300,
     NOT = 301,
     AMPER = 302,
     MODULE = 303,
     QUOTE = 304,
     CLOSE = 305,
     PAREN = 306,
     SCAN_INPUT = 307
   };
#endif
/* Tokens.  */
#define PUBLIC 258
#define PRIVATE 259
#define CLASS 260
#define IF 261
#define ELSE 262
#define WHILE 263
#define PRINT 264
#define SCAN 265
#define IMPORT 266
#define EXTENDS 267
#define INT 268
#define VOID 269
#define MAIN 270
#define FLOAT 271
#define CHAR 272
#define NEW 273
#define CONS_FLOAT 274
#define CONS_INT 275
#define CONS_CHAR 276
#define NAME_CM 277
#define IDENTIFIER 278
#define OPEN_CURLY 279
#define CLOSE_CURLY 280
#define OPEN_BRA 281
#define CLOSE_BRA 282
#define SEMICOLON 283
#define EQUALS 284
#define OPEN_PAREN 285
#define CLOSE_PAREN 286
#define COMA 287
#define DOT 288
#define AND 289
#define OR 290
#define GT 291
#define LT 292
#define GTE 293
#define LTE 294
#define DT 295
#define ET 296
#define PLUS 297
#define MINUS 298
#define MULT 299
#define DIV 300
#define NOT 301
#define AMPER 302
#define MODULE 303
#define QUOTE 304
#define CLOSE 305
#define PAREN 306
#define SCAN_INPUT 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    19,    20,    23,    24,    27,    28,
      30,    32,    38,    44,    46,    48,    50,    54,    63,    65,
      67,    69,    71,    75,    76,    84,    87,    88,    91,   101,
     102,   104,   105,   109,   112,   113,   118,   119,   122,   124,
     133,   134,   136,   138,   144,   150,   151,   157,   158,   161,
     163,   167,   168,   171,   172,   174,   176,   178,   180,   182,
     184,   186,   192,   195,   199,   202,   205,   208,   209,   212,
     215,   218,   221,   224,   227,   230,   231,   234,   237,   240,
     241,   244,   247,   250,   251,   253,   256,   259,   262,   265,
     269,   273,   279,   283,   290,   294,   297,   298,   304,   310,
     313,   316,   319,   320,   326,   332,   334,   337,   338,   346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,     3,     5,    22,    56,    24,    57,
      67,    73,   106,    25,    -1,    11,    22,    28,    -1,    -1,
      12,    22,    -1,    -1,    58,    59,    -1,    -1,     4,    -1,
       3,    -1,    60,    23,    61,    28,    57,    -1,    22,    23,
      64,    28,    57,    -1,    13,    -1,    16,    -1,    17,    -1,
      29,    62,    63,    -1,    26,    27,    29,    18,    60,    26,
      20,    27,    -1,    19,    -1,    20,    -1,    21,    -1,    23,
      -1,    32,    23,    61,    -1,    -1,    29,    18,    22,    30,
      65,    50,    51,    -1,    23,    66,    -1,    -1,    32,    65,
      -1,     3,    22,    30,    68,    31,    24,    71,    25,    67,
      -1,    -1,    69,    -1,    -1,    60,    23,    70,    -1,    32,
      69,    -1,    -1,    23,    72,    28,    71,    -1,    -1,    29,
      62,    -1,    64,    -1,    58,    74,    22,    30,    69,    31,
      75,    73,    -1,    -1,    14,    -1,    60,    -1,    24,    76,
      77,    80,    25,    -1,    60,    23,    61,    28,    76,    -1,
      -1,    22,    23,    78,    28,    77,    -1,    -1,    64,    79,
      -1,    79,    -1,    32,    23,    78,    -1,    -1,    81,    80,
      -1,    -1,    82,    -1,    94,    -1,    95,    -1,    98,    -1,
      99,    -1,   102,    -1,   105,    -1,    23,    83,    29,    86,
      28,    -1,    33,    23,    -1,    26,    88,    27,    -1,    86,
      85,    -1,    34,    84,    -1,    35,    84,    -1,    -1,    88,
      87,    -1,    36,    88,    -1,    37,    88,    -1,    40,    88,
      -1,    38,    88,    -1,    39,    88,    -1,    41,    88,    -1,
      -1,    90,    89,    -1,    42,    88,    -1,    43,    88,    -1,
      -1,    92,    91,    -1,    44,    90,    -1,    45,    90,    -1,
      -1,    62,    -1,    46,    62,    -1,    42,    62,    -1,    43,
      62,    -1,    23,    93,    -1,    30,    84,    31,    -1,    26,
      88,    27,    -1,    33,    22,    30,    65,    31,    -1,    23,
      64,    28,    -1,     6,    30,    84,    31,    96,    97,    -1,
      24,    80,    25,    -1,     7,    96,    -1,    -1,     8,    30,
      84,    31,    96,    -1,     9,    30,   100,    31,    28,    -1,
      21,   101,    -1,    84,   101,    -1,    32,   100,    -1,    -1,
      10,    30,   103,    31,    28,    -1,    52,    32,    47,    23,
     104,    -1,    93,    -1,    33,    23,    -1,    -1,    23,    33,
      22,    30,    65,    31,    28,    -1,    14,    15,    30,    31,
      75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    14,    14,    16,    17,    19,    20,    22,    23,    25,
      26,    28,    29,    31,    32,    33,    35,    36,    38,    39,
      40,    41,    43,    44,    46,    48,    49,    51,    53,    54,
      56,    57,    59,    61,    62,    64,    65,    67,    68,    70,
      71,    73,    74,    76,    78,    79,    81,    82,    84,    85,
      87,    88,    90,    91,    93,    94,    95,    96,    97,    98,
      99,   101,   103,   104,   106,   108,   109,   110,   112,   114,
     115,   116,   117,   118,   119,   120,   122,   124,   125,   126,
     128,   130,   131,   132,   134,   135,   136,   137,   138,   139,
     141,   142,   144,   146,   148,   150,   151,   153,   155,   157,
     158,   160,   161,   163,   165,   167,   168,   169,   171,   173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PUBLIC", "PRIVATE", "CLASS", "IF",
  "ELSE", "WHILE", "PRINT", "SCAN", "IMPORT", "EXTENDS", "INT", "VOID",
  "MAIN", "FLOAT", "CHAR", "NEW", "CONS_FLOAT", "CONS_INT", "CONS_CHAR",
  "NAME_CM", "IDENTIFIER", "OPEN_CURLY", "CLOSE_CURLY", "OPEN_BRA",
  "CLOSE_BRA", "SEMICOLON", "EQUALS", "OPEN_PAREN", "CLOSE_PAREN", "COMA",
  "DOT", "AND", "OR", "GT", "LT", "GTE", "LTE", "DT", "ET", "PLUS",
  "MINUS", "MULT", "DIV", "NOT", "AMPER", "MODULE", "QUOTE", "CLOSE",
  "PAREN", "SCAN_INPUT", "$accept", "PROGRAM", "IMPORTS", "HERITAGE",
  "ATTRIBUTES", "SCOPE", "TYPE_ATTRIBUTE", "TYPE", "TYPE_VAR", "CONS_VAR",
  "SAME_TYPE_VARS", "ASSIGN_OBJECTS", "PARAM_OBJECTS", "LIST_OBJ_PARAMS",
  "CONSTRUCTOR", "TYPE_PARAMS", "PARAMS", "LIST_PARAMS", "INIT_ATTRIBUTES",
  "ASSIGNATIONS", "METHODS", "RETURN_TYPE", "BLOC", "VARS", "OBJECTS",
  "LIST_OBJECTS", "SAME_TYPE_OBJECTS", "LIST_STATUTE", "STATUTE",
  "ASSIGNATION", "TYPE_ASSIGNATION", "SUPER_EXPRESSION", "LOGIC_OP",
  "EXPRESSION", "OPS_LOGIC", "EXP", "OP_TERM", "TERM", "OP_FACT", "FACTOR",
  "TYPE_FACTOR", "OBJECT_ASSIGNATION", "CONDITION", "COND_CYCLE_BLOC",
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    61,    61,    62,    62,
      62,    62,    63,    63,    64,    65,    65,    66,    67,    67,
      68,    68,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    83,    83,    84,    85,    85,    85,    86,    87,
      87,    87,    87,    87,    87,    87,    88,    89,    89,    89,
      90,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      93,    93,    94,    95,    96,    97,    97,    98,    99,   100,
     100,   101,   101,   102,   103,   104,   104,   104,   105,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     3,     0,     2,     0,     2,     0,     1,
       1,     5,     5,     1,     1,     1,     3,     8,     1,     1,
       1,     1,     3,     0,     7,     2,     0,     2,     9,     0,
       1,     0,     3,     2,     0,     4,     0,     2,     1,     8,
       0,     1,     1,     5,     5,     0,     5,     0,     2,     1,
       3,     0,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     5,     2,     3,     2,     2,     2,     0,     2,     2,
       2,     2,     2,     2,     2,     0,     2,     2,     2,     0,
       2,     2,     2,     0,     1,     2,     2,     2,     2,     3,
       3,     5,     3,     6,     3,     2,     0,     5,     5,     2,
       2,     2,     0,     5,     5,     1,     2,     0,     7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     1,     0,     3,     0,     6,
       0,     0,     5,     8,    10,     9,    29,     0,     0,    40,
      13,    14,    15,     0,     7,     0,     0,     0,     0,     0,
       0,    31,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     2,     0,     8,
       0,    18,    19,    20,    21,    23,     8,    34,     0,     0,
       0,     0,    12,     0,     0,    16,    11,     0,    32,    36,
       0,     0,    26,     0,     0,    33,     0,     0,     0,    45,
     109,     0,     0,     0,    22,     0,    38,     0,    29,    40,
       0,    47,    26,    25,     0,     0,    37,    36,    28,    39,
       0,     0,    53,    27,    24,     0,    35,     0,    51,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    17,    45,     0,    51,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    52,    44,
      51,    48,    47,    21,     0,     0,     0,     0,    84,     0,
      67,    75,    79,    83,     0,    20,   102,     0,     0,     0,
       0,     0,    62,    92,     0,    50,    46,     0,     0,    88,
       0,    86,    87,    85,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,    68,     0,     0,    76,     0,     0,
      80,     0,     0,    99,   100,     0,     0,     0,    63,    26,
       0,     0,     0,    89,    53,    96,    65,    66,    69,    70,
      72,    73,    71,    74,    77,    78,    81,    82,    97,   101,
      98,     0,   103,     0,    61,    90,    26,     0,     0,    93,
     107,     0,     0,    94,    95,     0,   105,   104,   108,    91,
     106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,    16,    17,    24,    42,    41,   148,
      65,   126,    82,    93,    19,    43,    44,    68,    77,    87,
      28,    34,    80,    91,   102,   127,   128,   114,   115,   116,
     136,   156,   177,   150,   184,   151,   187,   152,   190,   153,
     169,   117,   118,   205,   229,   119,   120,   157,   193,   121,
     159,   237,   122,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
       5,    -4,    62,    43,    36,  -185,    63,  -185,    50,    78,
     102,    73,  -185,    81,  -185,  -185,   101,    25,   103,    81,
    -185,  -185,  -185,   104,  -185,   105,    96,    57,   115,   106,
      19,    89,  -185,  -185,   108,   116,   107,   118,   109,   111,
      80,   112,   110,   113,  -185,   117,   119,  -185,   120,    81,
     114,  -185,  -185,  -185,  -185,   121,    81,   122,   124,    89,
     125,   127,  -185,   123,   128,  -185,  -185,    89,  -185,   129,
     130,   126,   132,    89,    19,  -185,   131,   133,   126,    89,
    -185,   134,    95,   136,  -185,    75,  -185,   135,   101,    81,
     141,   137,   132,  -185,    88,   145,  -185,   129,  -185,  -185,
      19,   144,    14,  -185,  -185,   142,  -185,   140,    54,   143,
     146,   147,   148,     1,   149,    14,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,    89,   152,   138,   151,  -185,   -11,
     -11,    46,    94,   -11,    90,   153,   154,  -185,  -185,  -185,
      54,  -185,   137,    -5,   -11,    80,    80,    80,  -185,   155,
      82,    41,    72,    74,   156,   139,   139,   157,   150,   158,
     163,   161,  -185,  -185,   -11,  -185,  -185,   -11,   162,  -185,
     164,  -185,  -185,  -185,   168,   -11,   -11,  -185,   -11,   -11,
     -11,   -11,   -11,   -11,  -185,   -11,   -11,  -185,   -11,   -11,
    -185,   168,    46,  -185,  -185,   165,   159,   166,  -185,   132,
     169,   171,   170,  -185,    14,   173,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,   176,  -185,   172,  -185,  -185,   132,   160,   168,  -185,
       0,   174,   177,  -185,  -185,    98,  -185,  -185,  -185,  -185,
    -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,   -13,   -14,  -185,   -16,   -61,   -36,
    -185,   -26,   -92,  -185,    84,  -185,   -42,  -185,    99,  -185,
     167,  -185,   175,    77,    65,    64,    79,  -113,  -185,  -185,
    -185,  -115,  -185,    45,  -185,  -127,  -185,   -66,  -185,  -185,
     -20,  -185,  -185,  -184,  -185,  -185,  -185,    20,    55,  -185,
    -185,  -185,  -185,  -185
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     103,    25,   138,    38,    55,    27,   160,   218,    51,    52,
      53,    33,   143,    84,   149,   154,     1,    70,     4,   144,
     109,   167,   110,   111,   112,    75,   167,   133,   168,   170,
      37,   145,   146,   235,   134,   147,    62,   113,    20,   107,
     201,    21,    22,    66,   234,    39,     6,    23,    40,    96,
      86,   208,   209,   210,   211,   212,   213,    83,   214,   215,
     206,   207,     5,    90,     7,    51,    52,   155,     8,   143,
      20,    32,     9,    21,    22,    27,   144,   178,   179,   180,
     181,   182,   183,    37,    14,    15,   125,   135,   145,   146,
      10,   227,   147,    48,    51,    52,    53,    13,    54,    51,
      52,    53,    20,    54,    18,    21,    22,   223,    90,   171,
     172,   173,   161,   162,   185,   186,   175,   176,   188,   189,
     202,   240,   216,   217,    12,    26,    31,    29,    30,    35,
      45,    46,    47,    57,   232,    37,    48,    49,    50,   104,
      56,    73,    61,    63,    58,    94,   158,    59,    69,    60,
      79,    74,    76,    64,    67,    81,    71,    72,    88,   101,
      85,    78,    95,    97,   100,   105,    92,   108,   124,   123,
     125,   192,    98,   129,   137,   140,   130,   131,   132,   142,
     228,   163,   196,   164,   202,   233,   174,   191,   195,   197,
     198,   199,   204,   220,   222,   203,   106,   224,   225,   230,
     226,   139,   238,   231,   165,   141,   221,   166,   239,   200,
     236,   194,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,    99
};

static const yytype_int16 yycheck[] =
{
      92,    17,   115,    29,    40,    19,   133,   191,    19,    20,
      21,    27,    23,    74,   129,   130,    11,    59,    22,    30,
       6,    26,     8,     9,    10,    67,    26,    26,    33,   144,
      29,    42,    43,    33,    33,    46,    49,    23,    13,   100,
     167,    16,    17,    56,   228,    26,     3,    22,    29,    85,
      76,   178,   179,   180,   181,   182,   183,    73,   185,   186,
     175,   176,     0,    79,    28,    19,    20,    21,     5,    23,
      13,    14,    22,    16,    17,    89,    30,    36,    37,    38,
      39,    40,    41,    29,     3,     4,    32,   113,    42,    43,
      12,   204,    46,    18,    19,    20,    21,    24,    23,    19,
      20,    21,    13,    23,     3,    16,    17,   199,   124,   145,
     146,   147,    22,    23,    42,    43,    34,    35,    44,    45,
      22,    23,   188,   189,    22,    22,    30,    23,    23,    14,
      22,    15,    25,    23,   226,    29,    18,    28,    27,    51,
      28,    18,    22,    29,    31,    50,    52,    30,    24,    30,
      24,    23,    23,    32,    32,    23,    31,    30,    25,    22,
      29,    31,    26,    28,    23,    20,    32,    23,    28,    27,
      32,    32,    88,    30,    25,    23,    30,    30,    30,    28,
       7,    28,    32,    29,    22,    25,    31,    31,    31,    31,
      27,    30,    24,    28,    28,    31,    97,    28,    27,    23,
      30,   124,    28,    31,   140,   126,    47,   142,    31,   164,
     230,   156,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    54,    55,    22,     0,     3,    28,     5,    22,
      12,    56,    22,    24,     3,     4,    57,    58,     3,    67,
      13,    16,    17,    22,    59,    60,    22,    58,    73,    23,
      23,    30,    14,    60,    74,    14,   106,    29,    64,    26,
      29,    61,    60,    68,    69,    22,    15,    25,    18,    28,
      27,    19,    20,    21,    23,    62,    28,    23,    31,    30,
      30,    22,    57,    29,    32,    63,    57,    32,    70,    24,
      69,    31,    30,    18,    23,    69,    23,    71,    31,    24,
      75,    23,    65,    60,    61,    29,    64,    72,    25,    75,
      60,    76,    32,    66,    50,    26,    62,    28,    67,    73,
      23,    22,    77,    65,    51,    20,    71,    61,    23,     6,
       8,     9,    10,    23,    80,    81,    82,    94,    95,    98,
      99,   102,   105,    27,    28,    32,    64,    78,    79,    30,
      30,    30,    30,    26,    33,    64,    83,    25,    80,    76,
      23,    79,    28,    23,    30,    42,    43,    46,    62,    84,
      86,    88,    90,    92,    84,    21,    84,   100,    52,   103,
      88,    22,    23,    28,    29,    78,    77,    26,    33,    93,
      84,    62,    62,    62,    31,    34,    35,    85,    36,    37,
      38,    39,    40,    41,    87,    42,    43,    89,    44,    45,
      91,    31,    32,   101,   101,    31,    32,    31,    27,    30,
      86,    88,    22,    31,    24,    96,    84,    84,    88,    88,
      88,    88,    88,    88,    88,    88,    90,    90,    96,   100,
      28,    47,    28,    65,    28,    27,    30,    80,     7,    97,
      23,    31,    65,    25,    96,    33,    93,   104,    28,    31,
      23
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
      

/* Line 1455 of yacc.c  */
#line 1634 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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




/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 360 "Compiler_sintaxis.y"
{
  char *s;
  double d;
  int i;
}
/* Line 1529 of yacc.c.  */
#line 165 "Compiler_sintaxis.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


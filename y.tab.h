
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;



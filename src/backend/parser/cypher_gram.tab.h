/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CYPHER_YY_CYPHER_GRAM_TAB_H_INCLUDED
# define YY_CYPHER_YY_CYPHER_GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cypher_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    DECIMAL = 259,                 /* DECIMAL  */
    STRING = 260,                  /* STRING  */
    IDENTIFIER = 261,              /* IDENTIFIER  */
    PARAMETER = 262,               /* PARAMETER  */
    BQIDENT = 263,                 /* BQIDENT  */
    OP = 264,                      /* OP  */
    CHAR = 265,                    /* CHAR  */
    NOT_EQ = 266,                  /* NOT_EQ  */
    LT_EQ = 267,                   /* LT_EQ  */
    GT_EQ = 268,                   /* GT_EQ  */
    DOT_DOT = 269,                 /* DOT_DOT  */
    TYPECAST = 270,                /* TYPECAST  */
    PLUS_EQ = 271,                 /* PLUS_EQ  */
    ALL = 272,                     /* ALL  */
    ANALYZE = 273,                 /* ANALYZE  */
    AND = 274,                     /* AND  */
    AS = 275,                      /* AS  */
    ASC = 276,                     /* ASC  */
    ASCENDING = 277,               /* ASCENDING  */
    BY = 278,                      /* BY  */
    CALL = 279,                    /* CALL  */
    CASE = 280,                    /* CASE  */
    COALESCE = 281,                /* COALESCE  */
    CONTAINS = 282,                /* CONTAINS  */
    COUNT = 283,                   /* COUNT  */
    CREATE = 284,                  /* CREATE  */
    DELETE = 285,                  /* DELETE  */
    DESC = 286,                    /* DESC  */
    DESCENDING = 287,              /* DESCENDING  */
    DETACH = 288,                  /* DETACH  */
    DISTINCT = 289,                /* DISTINCT  */
    ELSE = 290,                    /* ELSE  */
    END_P = 291,                   /* END_P  */
    ENDS = 292,                    /* ENDS  */
    EXISTS = 293,                  /* EXISTS  */
    EXPLAIN = 294,                 /* EXPLAIN  */
    FALSE_P = 295,                 /* FALSE_P  */
    IN = 296,                      /* IN  */
    IS = 297,                      /* IS  */
    KSHORTESTPATHS = 298,          /* KSHORTESTPATHS  */
    LIMIT = 299,                   /* LIMIT  */
    MATCH = 300,                   /* MATCH  */
    MERGE = 301,                   /* MERGE  */
    NOT = 302,                     /* NOT  */
    NULL_P = 303,                  /* NULL_P  */
    OPERATOR = 304,                /* OPERATOR  */
    OPTIONAL = 305,                /* OPTIONAL  */
    OR = 306,                      /* OR  */
    ORDER = 307,                   /* ORDER  */
    REMOVE = 308,                  /* REMOVE  */
    RETURN = 309,                  /* RETURN  */
    SET = 310,                     /* SET  */
    SHORTESTPATH = 311,            /* SHORTESTPATH  */
    SKIP = 312,                    /* SKIP  */
    STARTS = 313,                  /* STARTS  */
    THEN = 314,                    /* THEN  */
    TRUE_P = 315,                  /* TRUE_P  */
    UNION = 316,                   /* UNION  */
    UNWIND = 317,                  /* UNWIND  */
    VERBOSE = 318,                 /* VERBOSE  */
    WEIGHTEDSHORTESTPATH = 319,    /* WEIGHTEDSHORTESTPATH  */
    WHEN = 320,                    /* WHEN  */
    WHERE = 321,                   /* WHERE  */
    WITH = 322,                    /* WITH  */
    XOR = 323,                     /* XOR  */
    YIELD = 324,                   /* YIELD  */
    UNARY_MINUS = 325,             /* UNARY_MINUS  */
    EQ_TILDE = 326,                /* EQ_TILDE  */
    ACCESS_PATH = 327              /* ACCESS_PATH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "cypher_gram.y"

    /* types in cypher_yylex() */
    int integer;
    char *string;
    const char *keyword;

    /* extra types */
    bool boolean;
    Node *node;
    List *list;

#line 148 "cypher_gram.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int cypher_yyparse (ag_scanner_t scanner, cypher_yy_extra *extra);


#endif /* !YY_CYPHER_YY_CYPHER_GRAM_TAB_H_INCLUDED  */

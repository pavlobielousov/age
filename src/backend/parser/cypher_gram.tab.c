/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cypher_yyparse
#define yylex           cypher_yylex
#define yyerror         cypher_yyerror
#define yydebug         cypher_yydebug
#define yynerrs         cypher_yynerrs

/* First part of user prologue.  */
#line 1 "cypher_gram.y"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "postgres.h"

#include "nodes/makefuncs.h"
#include "nodes/nodeFuncs.h"
#include "parser/parser.h"

#include "parser/cypher_gram.h"
#include "parser/cypher_parse_node.h"
#include "parser/scansup.h"
#include "utils/agtype.h"

/* override the default action for locations */
#define YYLLOC_DEFAULT(current, rhs, n) \
    do \
    { \
        if ((n) > 0) \
            current = (rhs)[1]; \
        else \
            current = -1; \
    } while (0)

#define YYMALLOC palloc
#define YYFREE pfree

#line 121 "cypher_gram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cypher_gram.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 4,                    /* DECIMAL  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_PARAMETER = 7,                  /* PARAMETER  */
  YYSYMBOL_BQIDENT = 8,                    /* BQIDENT  */
  YYSYMBOL_OP = 9,                         /* OP  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_NOT_EQ = 11,                    /* NOT_EQ  */
  YYSYMBOL_LT_EQ = 12,                     /* LT_EQ  */
  YYSYMBOL_GT_EQ = 13,                     /* GT_EQ  */
  YYSYMBOL_DOT_DOT = 14,                   /* DOT_DOT  */
  YYSYMBOL_TYPECAST = 15,                  /* TYPECAST  */
  YYSYMBOL_PLUS_EQ = 16,                   /* PLUS_EQ  */
  YYSYMBOL_ALL = 17,                       /* ALL  */
  YYSYMBOL_ANALYZE = 18,                   /* ANALYZE  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_AS = 20,                        /* AS  */
  YYSYMBOL_ASC = 21,                       /* ASC  */
  YYSYMBOL_ASCENDING = 22,                 /* ASCENDING  */
  YYSYMBOL_BY = 23,                        /* BY  */
  YYSYMBOL_CALL = 24,                      /* CALL  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_COALESCE = 26,                  /* COALESCE  */
  YYSYMBOL_CONTAINS = 27,                  /* CONTAINS  */
  YYSYMBOL_COUNT = 28,                     /* COUNT  */
  YYSYMBOL_CREATE = 29,                    /* CREATE  */
  YYSYMBOL_DELETE = 30,                    /* DELETE  */
  YYSYMBOL_DESC = 31,                      /* DESC  */
  YYSYMBOL_DESCENDING = 32,                /* DESCENDING  */
  YYSYMBOL_DETACH = 33,                    /* DETACH  */
  YYSYMBOL_DISTINCT = 34,                  /* DISTINCT  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_END_P = 36,                     /* END_P  */
  YYSYMBOL_ENDS = 37,                      /* ENDS  */
  YYSYMBOL_EXISTS = 38,                    /* EXISTS  */
  YYSYMBOL_EXPLAIN = 39,                   /* EXPLAIN  */
  YYSYMBOL_FALSE_P = 40,                   /* FALSE_P  */
  YYSYMBOL_IN = 41,                        /* IN  */
  YYSYMBOL_IS = 42,                        /* IS  */
  YYSYMBOL_KSHORTESTPATHS = 43,            /* KSHORTESTPATHS  */
  YYSYMBOL_LIMIT = 44,                     /* LIMIT  */
  YYSYMBOL_MATCH = 45,                     /* MATCH  */
  YYSYMBOL_MERGE = 46,                     /* MERGE  */
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_NULL_P = 48,                    /* NULL_P  */
  YYSYMBOL_OPERATOR = 49,                  /* OPERATOR  */
  YYSYMBOL_OPTIONAL = 50,                  /* OPTIONAL  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_ORDER = 52,                     /* ORDER  */
  YYSYMBOL_REMOVE = 53,                    /* REMOVE  */
  YYSYMBOL_RETURN = 54,                    /* RETURN  */
  YYSYMBOL_SET = 55,                       /* SET  */
  YYSYMBOL_SHORTESTPATH = 56,              /* SHORTESTPATH  */
  YYSYMBOL_SKIP = 57,                      /* SKIP  */
  YYSYMBOL_STARTS = 58,                    /* STARTS  */
  YYSYMBOL_THEN = 59,                      /* THEN  */
  YYSYMBOL_TRUE_P = 60,                    /* TRUE_P  */
  YYSYMBOL_UNION = 61,                     /* UNION  */
  YYSYMBOL_UNWIND = 62,                    /* UNWIND  */
  YYSYMBOL_VERBOSE = 63,                   /* VERBOSE  */
  YYSYMBOL_WEIGHTEDSHORTESTPATH = 64,      /* WEIGHTEDSHORTESTPATH  */
  YYSYMBOL_WHEN = 65,                      /* WHEN  */
  YYSYMBOL_WHERE = 66,                     /* WHERE  */
  YYSYMBOL_WITH = 67,                      /* WITH  */
  YYSYMBOL_XOR = 68,                       /* XOR  */
  YYSYMBOL_YIELD = 69,                     /* YIELD  */
  YYSYMBOL_70_ = 70,                       /* '='  */
  YYSYMBOL_71_ = 71,                       /* '<'  */
  YYSYMBOL_72_ = 72,                       /* '>'  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '*'  */
  YYSYMBOL_76_ = 76,                       /* '/'  */
  YYSYMBOL_77_ = 77,                       /* '%'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_UNARY_MINUS = 79,               /* UNARY_MINUS  */
  YYSYMBOL_EQ_TILDE = 80,                  /* EQ_TILDE  */
  YYSYMBOL_81_ = 81,                       /* '['  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '('  */
  YYSYMBOL_84_ = 84,                       /* ')'  */
  YYSYMBOL_85_ = 85,                       /* '.'  */
  YYSYMBOL_ACCESS_PATH = 86,               /* ACCESS_PATH  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_92_ = 92,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_stmt = 94,                      /* stmt  */
  YYSYMBOL_cypher_stmt = 95,               /* cypher_stmt  */
  YYSYMBOL_call_stmt = 96,                 /* call_stmt  */
  YYSYMBOL_yield_item_list = 97,           /* yield_item_list  */
  YYSYMBOL_yield_item = 98,                /* yield_item  */
  YYSYMBOL_semicolon_opt = 99,             /* semicolon_opt  */
  YYSYMBOL_all_or_distinct = 100,          /* all_or_distinct  */
  YYSYMBOL_single_query = 101,             /* single_query  */
  YYSYMBOL_query_part_init = 102,          /* query_part_init  */
  YYSYMBOL_query_part_last = 103,          /* query_part_last  */
  YYSYMBOL_reading_clause_list = 104,      /* reading_clause_list  */
  YYSYMBOL_reading_clause = 105,           /* reading_clause  */
  YYSYMBOL_updating_clause_list_0 = 106,   /* updating_clause_list_0  */
  YYSYMBOL_updating_clause_list_1 = 107,   /* updating_clause_list_1  */
  YYSYMBOL_updating_clause = 108,          /* updating_clause  */
  YYSYMBOL_subquery_stmt = 109,            /* subquery_stmt  */
  YYSYMBOL_subquery_stmt_with_return = 110, /* subquery_stmt_with_return  */
  YYSYMBOL_subquery_stmt_no_return = 111,  /* subquery_stmt_no_return  */
  YYSYMBOL_single_subquery = 112,          /* single_subquery  */
  YYSYMBOL_single_subquery_no_return = 113, /* single_subquery_no_return  */
  YYSYMBOL_subquery_part_init = 114,       /* subquery_part_init  */
  YYSYMBOL_cypher_varlen_opt = 115,        /* cypher_varlen_opt  */
  YYSYMBOL_cypher_range_opt = 116,         /* cypher_range_opt  */
  YYSYMBOL_cypher_range_idx = 117,         /* cypher_range_idx  */
  YYSYMBOL_cypher_range_idx_opt = 118,     /* cypher_range_idx_opt  */
  YYSYMBOL_Iconst = 119,                   /* Iconst  */
  YYSYMBOL_return = 120,                   /* return  */
  YYSYMBOL_return_item_list = 121,         /* return_item_list  */
  YYSYMBOL_return_item = 122,              /* return_item  */
  YYSYMBOL_order_by_opt = 123,             /* order_by_opt  */
  YYSYMBOL_sort_item_list = 124,           /* sort_item_list  */
  YYSYMBOL_sort_item = 125,                /* sort_item  */
  YYSYMBOL_order_opt = 126,                /* order_opt  */
  YYSYMBOL_skip_opt = 127,                 /* skip_opt  */
  YYSYMBOL_limit_opt = 128,                /* limit_opt  */
  YYSYMBOL_with = 129,                     /* with  */
  YYSYMBOL_match = 130,                    /* match  */
  YYSYMBOL_optional_opt = 131,             /* optional_opt  */
  YYSYMBOL_unwind = 132,                   /* unwind  */
  YYSYMBOL_create = 133,                   /* create  */
  YYSYMBOL_set = 134,                      /* set  */
  YYSYMBOL_set_item_list = 135,            /* set_item_list  */
  YYSYMBOL_set_item = 136,                 /* set_item  */
  YYSYMBOL_remove = 137,                   /* remove  */
  YYSYMBOL_remove_item_list = 138,         /* remove_item_list  */
  YYSYMBOL_remove_item = 139,              /* remove_item  */
  YYSYMBOL_delete = 140,                   /* delete  */
  YYSYMBOL_detach_opt = 141,               /* detach_opt  */
  YYSYMBOL_merge = 142,                    /* merge  */
  YYSYMBOL_where_opt = 143,                /* where_opt  */
  YYSYMBOL_utility_option_list = 144,      /* utility_option_list  */
  YYSYMBOL_utility_option_elem = 145,      /* utility_option_elem  */
  YYSYMBOL_utility_option_name = 146,      /* utility_option_name  */
  YYSYMBOL_utility_option_arg = 147,       /* utility_option_arg  */
  YYSYMBOL_pattern = 148,                  /* pattern  */
  YYSYMBOL_path = 149,                     /* path  */
  YYSYMBOL_anonymous_path = 150,           /* anonymous_path  */
  YYSYMBOL_simple_path_opt_parens = 151,   /* simple_path_opt_parens  */
  YYSYMBOL_simple_path = 152,              /* simple_path  */
  YYSYMBOL_path_node = 153,                /* path_node  */
  YYSYMBOL_path_relationship = 154,        /* path_relationship  */
  YYSYMBOL_path_relationship_body = 155,   /* path_relationship_body  */
  YYSYMBOL_label_opt = 156,                /* label_opt  */
  YYSYMBOL_properties_opt = 157,           /* properties_opt  */
  YYSYMBOL_expr = 158,                     /* expr  */
  YYSYMBOL_expr_opt = 159,                 /* expr_opt  */
  YYSYMBOL_expr_list = 160,                /* expr_list  */
  YYSYMBOL_expr_list_opt = 161,            /* expr_list_opt  */
  YYSYMBOL_expr_func = 162,                /* expr_func  */
  YYSYMBOL_expr_func_norm = 163,           /* expr_func_norm  */
  YYSYMBOL_expr_func_subexpr = 164,        /* expr_func_subexpr  */
  YYSYMBOL_expr_subquery = 165,            /* expr_subquery  */
  YYSYMBOL_subquery_pattern = 166,         /* subquery_pattern  */
  YYSYMBOL_property_value = 167,           /* property_value  */
  YYSYMBOL_expr_atom = 168,                /* expr_atom  */
  YYSYMBOL_expr_literal = 169,             /* expr_literal  */
  YYSYMBOL_map = 170,                      /* map  */
  YYSYMBOL_map_keyval_list_opt = 171,      /* map_keyval_list_opt  */
  YYSYMBOL_map_keyval_list = 172,          /* map_keyval_list  */
  YYSYMBOL_map_projection = 173,           /* map_projection  */
  YYSYMBOL_map_projection_elem_list = 174, /* map_projection_elem_list  */
  YYSYMBOL_map_projection_elem = 175,      /* map_projection_elem  */
  YYSYMBOL_list = 176,                     /* list  */
  YYSYMBOL_list_comprehension = 177,       /* list_comprehension  */
  YYSYMBOL_expr_case = 178,                /* expr_case  */
  YYSYMBOL_expr_case_when_list = 179,      /* expr_case_when_list  */
  YYSYMBOL_expr_case_when = 180,           /* expr_case_when  */
  YYSYMBOL_expr_case_default = 181,        /* expr_case_default  */
  YYSYMBOL_expr_var = 182,                 /* expr_var  */
  YYSYMBOL_func_name = 183,                /* func_name  */
  YYSYMBOL_property_key_name = 184,        /* property_key_name  */
  YYSYMBOL_var_name = 185,                 /* var_name  */
  YYSYMBOL_var_name_opt = 186,             /* var_name_opt  */
  YYSYMBOL_label_name = 187,               /* label_name  */
  YYSYMBOL_type_name = 188,                /* type_name  */
  YYSYMBOL_symbolic_name = 189,            /* symbolic_name  */
  YYSYMBOL_schema_name = 190,              /* schema_name  */
  YYSYMBOL_reserved_keyword = 191,         /* reserved_keyword  */
  YYSYMBOL_generic_type = 192,             /* generic_type  */
  YYSYMBOL_opt_type_modifiers = 193,       /* opt_type_modifiers  */
  YYSYMBOL_any_operator = 194,             /* any_operator  */
  YYSYMBOL_all_op = 195,                   /* all_op  */
  YYSYMBOL_math_op = 196,                  /* math_op  */
  YYSYMBOL_qual_op = 197,                  /* qual_op  */
  YYSYMBOL_safe_keywords = 198,            /* safe_keywords  */
  YYSYMBOL_conflicted_keywords = 199       /* conflicted_keywords  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 211 "cypher_gram.y"


/* internal alias check */
static bool has_internal_default_prefix(char *str);

/* unique name generation */
#define UNIQUE_NAME_NULL_PREFIX AGE_DEFAULT_PREFIX"unique_null_prefix"
static char *create_unique_name(char *prefix_name);
static unsigned long get_a_unique_number(void);

/* logical operators */
static Node *make_or_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_and_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_xor_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_not_expr(Node *expr, int location);
static Node *make_comparison_and_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_cypher_comparison_aexpr(A_Expr_Kind kind, char *name,
                                          Node *lexpr, Node *rexpr,
                                          int location);
static Node *make_cypher_comparison_boolexpr(BoolExprType boolop, List *args,
                                               int location);

/* arithmetic operators */
static Node *do_negate(Node *n, int location);
static void do_negate_float(Float *v);

/* indirection */
static Node *append_indirection(Node *expr, Node *selector);

/* literals */
static Node *make_int_const(int i, int location);
static Node *make_float_const(char *s, int location);
static Node *make_string_const(char *s, int location);
static Node *make_bool_const(bool b, int location);
static Node *make_null_const(int location);

/* typecast */
static Node *make_typecast_expr(Node *expr, Node *typname, int location);

/* functions */
static Node *make_function_expr(List *func_name, List *exprs, int location);
static Node *make_star_function_expr(List *func_name, List *exprs, int location);
static Node *make_distinct_function_expr(List *func_name, List *exprs, int location);
static FuncCall *node_to_agtype(Node* fnode, char *type, int location);

/* setops */
static Node *make_set_op(SetOperation op, bool all_or_distinct, List *larg,
                         List *rarg);
static Node *make_subquery_returnless_set_op(SetOperation op,
                                             bool all_or_distinct,
                                             List *larg,
                                             List *rarg);

/* VLE */
static cypher_relationship *build_VLE_relation(List *left_arg,
                                               cypher_relationship *cr,
                                               Node *right_arg,
                                               int left_arg_location,
                                               int cr_location);
/* comparison */
static bool is_A_Expr_a_comparison_operation(cypher_comparison_aexpr *a);
static Node *build_comparison_expression(Node *left_grammar_node,
                                         Node *right_grammar_node,
                                         char *opr_name, int location);

/* list_comprehension */
static Node *build_list_comprehension_node(Node *var, Node *expr,
                                           Node *where, Node *mapping_expr,
                                           int location);


#line 426 "cypher_gram.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    77,     2,     2,
      83,    84,    75,    73,    87,    74,    85,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    88,
      71,    70,    72,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    92,    91,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    79,    80,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   289,   289,   310,   324,   338,   352,   367,   384,   388,
     395,   402,   432,   440,   475,   479,   486,   498,   512,   514,
     518,   522,   527,   538,   546,   549,   556,   560,   564,   572,
     575,   582,   583,   584,   589,   592,   596,   600,   607,   608,
     609,   610,   611,   615,   619,   626,   630,   637,   641,   648,
     655,   685,   714,   717,   724,   744,   750,   759,   769,   775,
     782,   783,   786,   793,   806,   823,   827,   834,   846,   858,
     879,   882,   889,   893,   900,   917,   920,   924,   928,   932,
     940,   943,   951,   954,   961,   992,  1031,  1045,  1050,  1057,
    1077,  1093,  1107,  1111,  1118,  1130,  1145,  1159,  1163,  1170,
    1188,  1202,  1207,  1216,  1233,  1236,  1243,  1247,  1254,  1261,
    1267,  1278,  1284,  1288,  1292,  1297,  1308,  1312,  1320,  1321,
    1336,  1348,  1366,  1381,  1399,  1400,  1407,  1411,  1436,  1451,
    1469,  1478,  1487,  1499,  1514,  1531,  1549,  1552,  1560,  1563,
    1564,  1582,  1586,  1590,  1594,  1598,  1602,  1606,  1610,  1614,
    1618,  1622,  1626,  1630,  1634,  1638,  1642,  1646,  1650,  1654,
    1658,  1669,  1680,  1684,  1696,  1708,  1720,  1731,  1749,  1854,
    1858,  1862,  1867,  1870,  1874,  1878,  1886,  1889,  1893,  1894,
    1898,  1902,  1907,  1922,  1930,  1939,  1957,  1966,  1970,  1974,
    1980,  1989,  2008,  2044,  2057,  2064,  2065,  2075,  2086,  2087,
    2088,  2089,  2093,  2097,  2101,  2105,  2109,  2113,  2117,  2118,
    2119,  2120,  2124,  2137,  2140,  2144,  2148,  2155,  2169,  2173,
    2180,  2192,  2204,  2216,  2231,  2248,  2261,  2265,  2269,  2276,
    2288,  2302,  2306,  2313,  2326,  2331,  2337,  2353,  2363,  2370,
    2374,  2388,  2391,  2395,  2399,  2403,  2407,  2408,  2416,  2417,
    2424,  2437,  2442,  2451,  2455,  2459,  2466,  2467,  2471,  2472,
    2473,  2474,  2475,  2476,  2477,  2478,  2479,  2480,  2481,  2482,
    2486,  2490,  2502,  2503,  2504,  2505,  2506,  2507,  2508,  2509,
    2510,  2511,  2512,  2513,  2514,  2515,  2516,  2517,  2518,  2519,
    2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,  2529,
    2530,  2531,  2532,  2533,  2534,  2535,  2536,  2537,  2538,  2539,
    2540,  2541,  2542,  2543,  2544,  2545,  2546,  2550,  2551,  2552,
    2553
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "DECIMAL",
  "STRING", "IDENTIFIER", "PARAMETER", "BQIDENT", "OP", "CHAR", "NOT_EQ",
  "LT_EQ", "GT_EQ", "DOT_DOT", "TYPECAST", "PLUS_EQ", "ALL", "ANALYZE",
  "AND", "AS", "ASC", "ASCENDING", "BY", "CALL", "CASE", "COALESCE",
  "CONTAINS", "COUNT", "CREATE", "DELETE", "DESC", "DESCENDING", "DETACH",
  "DISTINCT", "ELSE", "END_P", "ENDS", "EXISTS", "EXPLAIN", "FALSE_P",
  "IN", "IS", "KSHORTESTPATHS", "LIMIT", "MATCH", "MERGE", "NOT", "NULL_P",
  "OPERATOR", "OPTIONAL", "OR", "ORDER", "REMOVE", "RETURN", "SET",
  "SHORTESTPATH", "SKIP", "STARTS", "THEN", "TRUE_P", "UNION", "UNWIND",
  "VERBOSE", "WEIGHTEDSHORTESTPATH", "WHEN", "WHERE", "WITH", "XOR",
  "YIELD", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UNARY_MINUS", "EQ_TILDE", "'['", "']'", "'('", "')'", "'.'",
  "ACCESS_PATH", "','", "';'", "':'", "'{'", "'}'", "'|'", "$accept",
  "stmt", "cypher_stmt", "call_stmt", "yield_item_list", "yield_item",
  "semicolon_opt", "all_or_distinct", "single_query", "query_part_init",
  "query_part_last", "reading_clause_list", "reading_clause",
  "updating_clause_list_0", "updating_clause_list_1", "updating_clause",
  "subquery_stmt", "subquery_stmt_with_return", "subquery_stmt_no_return",
  "single_subquery", "single_subquery_no_return", "subquery_part_init",
  "cypher_varlen_opt", "cypher_range_opt", "cypher_range_idx",
  "cypher_range_idx_opt", "Iconst", "return", "return_item_list",
  "return_item", "order_by_opt", "sort_item_list", "sort_item",
  "order_opt", "skip_opt", "limit_opt", "with", "match", "optional_opt",
  "unwind", "create", "set", "set_item_list", "set_item", "remove",
  "remove_item_list", "remove_item", "delete", "detach_opt", "merge",
  "where_opt", "utility_option_list", "utility_option_elem",
  "utility_option_name", "utility_option_arg", "pattern", "path",
  "anonymous_path", "simple_path_opt_parens", "simple_path", "path_node",
  "path_relationship", "path_relationship_body", "label_opt",
  "properties_opt", "expr", "expr_opt", "expr_list", "expr_list_opt",
  "expr_func", "expr_func_norm", "expr_func_subexpr", "expr_subquery",
  "subquery_pattern", "property_value", "expr_atom", "expr_literal", "map",
  "map_keyval_list_opt", "map_keyval_list", "map_projection",
  "map_projection_elem_list", "map_projection_elem", "list",
  "list_comprehension", "expr_case", "expr_case_when_list",
  "expr_case_when", "expr_case_default", "expr_var", "func_name",
  "property_key_name", "var_name", "var_name_opt", "label_name",
  "type_name", "symbolic_name", "schema_name", "reserved_keyword",
  "generic_type", "opt_type_modifiers", "any_operator", "all_op",
  "math_op", "qual_op", "safe_keywords", "conflicted_keywords", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-404)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-255)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    17,    60,   -14,  -404,  -404,    21,  -404,  2953,   -14,
    -404,    49,  -404,  -404,  -404,   475,  -404,   -14,   -14,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,    40,  -404,   194,  -404,  -404,
    -404,  -404,  -404,  3007,    26,  -404,    26,  -404,  1146,  1146,
    1146,    31,  -404,    -6,   586,  -404,  -404,    20,  -404,  -404,
    -404,  -404,  -404,    72,  -404,   -14,  -404,  -404,  -404,  2953,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,     4,    30,    51,
    -404,    53,    67,    55,    84,    90,    38,    -8,  -404,  -404,
    -404,    54,  -404,   111,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  1228,   103,   -33,    43,  -404,  1146,  -404,   120,  -404,
    1146,  1146,  1146,  2897,   124,  -404,  2457,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,   133,  1146,
     137,  -404,  1504,  1575,   818,   900,  -404,  -404,  -404,    26,
    1146,  -404,   -14,  -404,  1146,  3007,   654,   220,    11,    11,
      11,   220,    14,  -404,   139,    26,   155,   149,   152,    11,
    1146,  1646,     7,  -404,  1146,   736,    11,    26,    11,  2683,
    2760,   164,  2528,   151,   154,  1717,  -404,  -404,  -404,  -404,
     148,   156,   159,  -404,  -404,  -404,  -404,  -404,  1146,  1146,
    1146,  1146,  2897,  1146,  1146,   177,  1146,   146,   120,  1146,
     184,  1146,  1146,  1146,  1146,  1146,   982,  1146,  1146,  1146,
    1146,  1146,  1146,  1146,  1372,   257,  1146,  1146,  1146,   220,
    1064,  -404,   -11,  -404,  1794,  1064,   -11,   -10,  2457,   151,
    -404,     2,  -404,  1865,   188,  -404,  1146,   181,  -404,    63,
    -404,   172,   185,   174,  -404,  2897,    23,  -404,   149,   220,
     196,  -404,  -404,  1936,  1146,     7,  1146,  -404,   232,    87,
    1146,   191,  -404,    91,   186,   215,   217,  -404,  -404,  -404,
     222,  -404,   199,   202,   204,   205,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,   206,
     208,   207,  -404,  -404,  1146,  1146,  -404,  -404,  -404,  2897,
    1146,  -404,   474,   474,   474,   214,  -404,  -404,  2641,   312,
    1146,   542,   253,  -404,  2599,  1146,  2683,   474,   474,   474,
     367,  1146,   367,   175,   175,   175,   566,  2007,   289,   291,
     257,  2833,    12,  -404,  -404,   218,   224,  -404,  2457,  2082,
    -404,   -11,   281,  1064,   263,   220,   -11,   263,  1146,  -404,
    1146,  -404,   220,  1146,    96,  -404,  -404,  1146,  -404,  1146,
    -404,  -404,  -404,    16,   239,  -404,   250,   139,   254,  1146,
     292,  2457,  -404,  -404,   101,  -404,  -404,  -404,    49,    49,
     305,  -404,  -404,  -404,  2897,  -404,  2760,  -404,   200,  2457,
     241,  2457,  1146,  -404,   312,  -404,   312,   291,  -404,  1146,
    -404,  -404,  1372,  -404,  1146,   263,  1146,  -404,  1146,   287,
    -404,   263,   287,  2457,  -404,  -404,     2,  -404,  2153,  2230,
     252,  -404,  -404,   262,  -404,  2457,  -404,  -404,  -404,    11,
    -404,  -404,  -404,  -404,  -404,  1146,  -404,  1146,  1146,   126,
    2457,   258,  -404,  2457,   287,   256,  -404,  1433,  2457,  1146,
    -404,   287,   222,  -404,  -404,  -404,  -404,    56,    27,  -404,
    -404,  -404,  -404,  1295,  2307,  2457,  -404,  -404,  -404,  1146,
    -404,  -404,  -404,  -404,  -404,  2457,   222,  -404,  -404,  -404,
     327,   330,  -404,    16,   264,   324,   142,  -404,  1146,  -404,
    -404,  -404,   342,   265,  -404,  2382,  -404,  -404,  -404,  -404
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      24,    24,     0,    18,     8,    29,    24,    24,     0,    18,
       1,    22,    19,     2,    23,    34,    24,    18,    18,   109,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   312,
     311,   313,   314,   315,   316,     0,   106,   115,   110,     3,
      20,    21,    24,     0,     0,   101,     0,    87,     0,     0,
       0,    33,    30,     0,    26,    36,    31,     0,    32,    38,
      39,    40,    41,     0,    42,    18,     5,     4,    24,     0,
     112,   111,   114,   113,   108,     9,   245,    10,     0,     0,
     236,   240,     0,     0,     0,     0,   241,    90,   116,   118,
     120,   124,   126,     0,   240,   103,   202,   203,   204,   196,
     270,   280,   281,   283,   292,   206,   299,   207,   300,   205,
       0,   176,     0,   213,    96,    97,    99,   200,   178,   179,
     201,   171,   195,   208,   209,   210,   211,   198,   199,     0,
      91,    92,     0,     0,     0,     0,    27,    25,    37,     0,
       0,     6,    18,   107,     0,     0,     0,     0,     0,     0,
       0,   241,     0,   242,   136,     0,     0,   135,     0,     0,
     311,     0,   235,   231,     0,     0,    52,     0,    52,   144,
       0,   162,   174,   177,     0,     0,   317,   318,   319,   320,
       0,   214,     0,   246,   239,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,   152,     0,     0,     0,     0,
     289,    69,    70,    65,    68,   289,    70,   104,   174,   100,
       7,   104,    14,    17,    11,   237,   289,     0,   180,     0,
     238,     0,     0,     0,   125,     0,   138,   117,   135,   241,
       0,   127,   119,     0,     0,   235,     0,   232,     0,     0,
     289,     0,   187,     0,     0,    43,    44,    45,    47,    29,
     104,    51,     0,     0,     0,     0,   256,   269,   267,   268,
     266,   264,   265,   258,   259,   260,   261,   262,   263,   246,
       0,     0,   253,   257,     0,     0,   224,   197,   212,     0,
       0,    98,   146,   148,   150,   252,   244,   170,   142,   165,
       0,   159,     0,   160,   141,     0,   143,   145,   147,   149,
     153,     0,   154,   155,   156,   157,   158,   173,     0,   168,
     151,     0,     0,   218,   221,     0,   240,    93,    95,    94,
      89,    70,     0,     0,    80,     0,    70,    80,     0,    86,
       0,    12,     0,     0,     0,   182,   181,     0,   121,     0,
     137,   243,   140,   138,     0,   139,     0,   136,   130,     0,
       0,   234,   230,   184,     0,   190,   188,   192,    22,    22,
      50,   193,   185,   186,     0,   191,     0,   271,   159,   175,
       0,   215,     0,   250,   164,   161,   163,   169,   166,   172,
     223,   220,     0,   217,     0,    80,     0,    66,     0,    82,
      67,    80,    82,   105,    15,    16,   104,   183,     0,     0,
       0,   128,   132,    55,   131,   233,   229,   189,    52,    52,
      33,    49,    53,   194,   255,     0,   225,     0,     0,     0,
     173,     0,   219,   222,    82,    71,    72,    75,    81,     0,
      64,    82,   104,    13,   122,   123,   129,    58,   138,    46,
      29,    48,    29,     0,     0,   216,   251,   167,    63,     0,
      76,    77,    78,    79,    74,    83,   104,    85,    62,    54,
      56,     0,    59,   138,     0,    88,    50,   226,     0,   227,
      73,    84,    61,     0,   133,     0,    60,    57,   134,   228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -404,  -404,    39,   337,   -30,   -19,    10,  -210,  -404,  -404,
    -404,  -285,  -404,  -404,  -404,   279,   167,   -92,   -91,  -404,
    -404,  -239,  -404,  -404,  -153,  -149,  -404,   294,  -132,     6,
    -227,  -404,  -116,  -404,  -334,  -403,   301,  -404,  -404,  -404,
    -404,  -404,  -404,   150,  -404,  -404,   170,  -404,  -404,  -404,
    -251,  -404,   286,  -404,  -404,   223,   -54,  -172,  -404,   282,
     211,  -404,   125,    -2,  -378,   -78,   -27,  -158,  -404,  -404,
     -53,  -404,  -404,  -404,  -404,  -404,  -404,  -263,  -404,  -404,
    -404,  -404,   -26,  -404,  -404,  -404,   226,  -171,   129,   -68,
    -404,  -140,   -65,   132,  -404,  -404,   238,  -184,  -404,  -404,
    -404,     8,  -404,  -404,   117,    -4,  -404
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,   460,   261,   262,    13,    72,     4,     5,
      14,    15,    82,    83,    84,    85,   294,   295,   296,   297,
     298,   299,   488,   509,   510,   511,   512,   461,   252,   253,
     374,   475,   476,   504,   439,   480,   462,    86,    87,    88,
      89,    90,   160,   161,    91,   144,   145,    92,    93,    94,
     379,    65,    66,    67,   104,   117,   118,   119,   120,   121,
     122,   188,   280,   276,   394,   258,   358,   203,   204,   147,
     148,   149,   150,   301,   303,   151,   152,   153,   210,   211,
     154,   362,   363,   155,   156,   157,   192,   193,   288,   158,
     109,   365,   110,   184,   390,   335,   111,   214,   215,   337,
     423,   321,   322,   323,   159,   112,   217
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   162,   163,   212,    68,   108,   271,   272,   273,   123,
     381,   123,   259,   395,   410,   450,   320,   282,   269,    69,
     107,   287,   125,   392,   300,   302,   300,    96,    97,   377,
     392,   -28,   106,   256,   392,     6,   289,   293,   336,   482,
       9,   372,   286,   442,   106,    17,    18,    11,   164,   411,
     195,   183,     1,   191,   113,    95,   378,   196,   199,   508,
      10,   165,   201,   202,   205,   169,    70,   114,   378,   113,
     -61,   498,   284,   174,    12,   115,   373,   185,   506,   185,
       7,   245,   114,    71,    16,   186,   254,   254,   187,   380,
     115,   391,   -28,   393,   116,    68,   263,   513,   274,   432,
       8,   474,   170,   433,   123,   171,   143,   481,   384,   116,
     514,   105,   283,   143,   287,   175,   183,   143,   371,   -28,
     123,   181,   264,   376,    98,   186,   197,    99,   187,   304,
     395,   277,   404,   198,   176,   523,  -237,   172,   178,   216,
     146,   332,   333,   334,   435,   338,   339,   386,   341,   441,
     325,   344,   177,   346,   347,   348,   349,   350,   352,   353,
     354,   355,   356,   357,   359,   360,    73,   179,   162,   368,
     369,   403,   254,   180,   325,   406,   364,   254,   325,   222,
     447,   189,   260,   325,   370,   457,   194,   -88,   325,   420,
     222,   224,    77,   342,   343,   483,   216,   100,   458,   459,
     101,   225,   224,   200,    80,   515,   283,   516,   401,   165,
     496,   218,   225,   325,   183,   222,   226,   227,   216,   490,
     492,   431,   230,   244,   246,   395,   106,   224,   275,   278,
     279,   507,   320,   230,   102,   181,   326,   225,   325,   328,
     216,  -255,  -255,   329,   340,   241,   418,   419,   330,   242,
     395,   345,   421,   240,   103,   521,   241,   383,   230,   387,
     242,   389,   424,   243,   469,   385,   465,   426,   402,   388,
     398,   216,   222,   427,   463,   405,   408,   407,   409,   243,
     243,   241,   466,   412,   224,   242,   413,   300,   378,   414,
    -254,   417,   467,   416,   225,   254,   415,   422,   226,   227,
     443,   425,   263,   429,   436,   263,   222,   434,   243,   448,
     440,   449,   124,  -246,   124,   230,   243,   445,   243,   243,
     438,   455,   243,   451,   452,   216,   454,   222,   456,    73,
     468,   479,   237,   238,   239,   240,   486,   487,   241,  -255,
     497,   -60,   242,   499,   522,   508,   524,   528,    73,  -255,
     -88,   470,    81,   446,   124,    77,   473,   216,   477,   164,
     478,   444,   243,   168,   364,   305,   489,    80,   491,   526,
    -255,   243,   165,   527,    77,   243,   130,   166,   164,   437,
     243,   213,   222,   520,   167,   173,    80,   493,   331,   494,
     495,   165,   257,   241,   224,   453,   367,   242,   182,   281,
     243,   505,   471,   396,   225,     0,   472,   124,   226,   227,
     216,   397,   216,   265,   400,   270,   228,   285,     0,   124,
       0,   477,     0,   124,   464,   230,     0,     0,   216,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   319,     0,
     525,     0,   237,   238,   239,   240,     0,     0,   241,   243,
     243,   243,   242,     0,     0,   243,   243,     0,   243,     0,
     213,   243,     0,   243,   243,   243,   243,   243,     0,   243,
     243,   243,   243,   243,   243,     0,   243,   243,     0,     0,
       0,     0,   366,   130,     0,   243,   243,   124,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,   224,     0,     0,    74,  -102,     0,     0,    75,     0,
       0,   225,     0,   213,     0,   226,   227,   124,   243,     0,
     -88,    76,     0,   228,     0,    77,     0,     0,    78,     0,
      79,     0,   230,     0,     0,   243,   243,    80,   243,     0,
       0,   243,     0,   243,   243,     0,     0,   235,   236,   237,
     238,   239,   240,     0,     0,   241,     0,   222,     0,   242,
     243,     0,     0,     0,     0,   243,   243,   213,     0,   224,
       0,     0,   243,     0,     0,     0,     0,     0,     0,   225,
       0,   222,     0,  -255,  -255,     0,     0,   243,     0,     0,
     243,     0,     0,   224,   243,   243,     0,     0,     0,   213,
     230,     0,     0,   225,     0,     0,     0,   226,   227,     0,
     243,   243,   243,   124,     0,    74,  -102,     0,     0,    75,
     124,     0,   243,   241,   230,     0,     0,   242,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,    78,
     -35,    79,   243,     0,     0,     0,     0,   241,     0,     0,
       0,   242,   213,   -35,   319,     0,     0,   126,   127,   128,
     106,   129,     0,   130,     0,     0,     0,     0,     0,     0,
     366,    20,    21,    22,    23,    24,    25,    26,    27,   131,
     132,    30,   133,    32,    33,    34,    35,    36,   266,    38,
       0,    39,   134,    41,   135,    42,    43,     0,    44,    45,
      46,   136,   137,   138,    49,    50,    51,    52,    53,    54,
       0,    55,    56,    57,   139,    58,     0,    59,     0,    60,
      61,    62,    63,    64,     0,     0,     0,     0,   140,   267,
       0,     0,     0,     0,     0,   141,     0,   142,   268,   126,
     127,   128,   106,   129,   143,   130,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,   131,   132,    30,   133,    32,    33,    34,    35,    36,
     290,    38,     0,    39,   134,    41,   135,    42,    43,     0,
      44,    45,    46,   136,   137,   138,    49,    50,    51,    52,
      53,    54,     0,    55,    56,    57,   139,    58,     0,    59,
       0,    60,    61,    62,    63,    64,     0,     0,     0,     0,
     140,   291,     0,     0,     0,     0,     0,   141,     0,   142,
     292,   126,   127,   128,   106,   129,   143,   130,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,   131,   132,    30,   133,    32,    33,    34,
      35,    36,   250,    38,     0,    39,   134,    41,   135,    42,
      43,     0,    44,    45,    46,   136,   137,   138,    49,    50,
      51,    52,    53,    54,     0,    55,    56,    57,   139,    58,
       0,    59,     0,    60,    61,    62,    63,    64,     0,     0,
       0,     0,   140,   251,     0,     0,     0,     0,     0,   141,
       0,   142,     0,   126,   127,   128,   106,   129,   143,   130,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,   131,   132,    30,   133,    32,
      33,    34,    35,    36,   255,    38,     0,    39,   134,    41,
     135,    42,    43,     0,    44,    45,    46,   136,   137,   138,
      49,    50,    51,    52,    53,    54,     0,    55,    56,    57,
     139,    58,     0,    59,     0,    60,    61,    62,    63,    64,
       0,     0,     0,     0,   140,   251,     0,     0,     0,     0,
       0,   141,     0,   142,     0,   126,   127,   128,   106,   129,
     143,   130,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,   131,   132,    30,
     133,    32,    33,    34,    35,    36,    37,    38,     0,    39,
     134,    41,   135,    42,    43,     0,    44,    45,    46,   136,
     137,   138,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    57,   139,    58,     0,    59,     0,    60,    61,    62,
      63,    64,     0,     0,   351,     0,   140,     0,     0,     0,
       0,     0,     0,   141,     0,   142,     0,   126,   127,   128,
     106,   129,   143,   130,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,   131,
     132,    30,   133,    32,    33,    34,    35,    36,    37,    38,
       0,    39,   134,    41,   135,    42,    43,     0,    44,    45,
      46,   136,   137,   138,    49,    50,    51,    52,    53,    54,
       0,    55,    56,    57,   139,    58,     0,    59,     0,    60,
      61,    62,    63,    64,     0,     0,     0,     0,   140,   251,
       0,     0,     0,     0,     0,   141,     0,   142,     0,   126,
     127,   128,   106,   129,   143,   130,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,   131,   132,    30,   133,    32,    33,    34,    35,    36,
      37,    38,     0,    39,   134,    41,   135,    42,    43,     0,
      44,    45,    46,   136,   137,   138,    49,    50,    51,    52,
      53,    54,     0,    55,    56,    57,   139,    58,     0,    59,
       0,    60,    61,    62,    63,    64,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,   141,     0,   142,
       0,   126,   127,   128,   106,   129,   143,   130,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,   131,   132,    30,   133,    32,    33,    34,
      35,    36,    37,    38,     0,    39,   134,    41,   135,    42,
      43,     0,    44,    45,    46,   136,   137,   138,    49,    50,
      51,    52,    53,    54,     0,    55,    56,    57,   139,    58,
       0,    59,     0,   190,    61,    62,    63,    64,     0,     0,
       0,     0,   140,     0,   130,     0,   219,   220,   221,   141,
     222,   142,     0,     0,   223,     0,     0,     0,   143,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   226,   227,     0,     0,
       0,     0,     0,     0,   228,     0,   229,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,   241,   517,   106,     0,
     242,     0,     0,     0,     0,     0,     0,   518,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   206,    39,
      40,    41,   207,    42,    43,     0,    44,    45,    46,    47,
     208,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    57,   209,    58,     0,    59,     0,    60,    61,    62,
      63,    64,   130,     0,   219,   220,   221,     0,   222,     0,
       0,     0,   223,     0,   500,   501,     0,   361,     0,     0,
     224,     0,     0,     0,   502,   503,     0,     0,     0,     0,
     225,     0,     0,     0,   226,   227,     0,     0,     0,     0,
       0,     0,   228,     0,   229,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   130,   241,   219,   220,   221,   242,   222,
     247,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,   226,   227,     0,     0,     0,
       0,     0,     0,   228,     0,   229,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,   248,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   130,   241,   219,   220,   221,   242,
     222,     0,     0,     0,   223,   249,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   226,   227,     0,     0,
       0,     0,     0,     0,   228,     0,   229,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   130,   241,   219,   220,   221,
     242,   222,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   226,   227,     0,
       0,     0,     0,     0,     0,   228,     0,   229,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,     0,
       0,   284,     0,     0,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   130,   241,   219,   220,
     221,   242,   222,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
       0,     0,     0,     0,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,     0,   241,     0,
       0,   327,   242,   130,     0,   219,   220,   221,     0,   222,
       0,     0,     0,   223,   375,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,   226,   227,     0,     0,     0,
       0,     0,     0,   228,     0,   229,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   130,   241,   219,   220,   221,   242,
     222,     0,     0,     0,   223,   382,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   226,   227,     0,     0,
       0,     0,     0,     0,   228,     0,   229,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   130,   241,   219,   220,   221,
     242,   222,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   226,   227,     0,
       0,     0,     0,     0,     0,   228,     0,   229,     0,     0,
       0,     0,     0,     0,   230,   399,     0,     0,     0,     0,
       0,     0,     0,     0,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   130,   241,   219,   220,
     221,   242,   222,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
       0,     0,     0,     0,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,     0,   241,   428,
       0,   130,   242,  -145,  -145,  -145,     0,   222,  -145,     0,
       0,  -145,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,     0,     0,     0,     0,     0,
       0,   228,     0,  -145,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -145,     0,  -145,  -145,  -145,   235,   236,   237,   238,   239,
     240,     0,   130,   241,   219,   220,   221,   242,   222,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,   226,   227,     0,     0,     0,     0,
       0,     0,   228,     0,   229,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,     0,   241,     0,     0,   484,   242,   130,
       0,   219,   220,   221,     0,   222,     0,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,     0,
       0,   226,   227,     0,     0,     0,     0,     0,     0,   228,
       0,   229,     0,     0,     0,     0,     0,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,   241,     0,     0,   485,   242,   130,     0,   219,   220,
     221,     0,   222,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
       0,     0,     0,     0,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,     0,   241,   519,
       0,   130,   242,   219,   220,   221,     0,   222,     0,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,     0,     0,     0,     0,     0,
       0,   228,     0,   229,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,   241,   529,     0,   130,   242,   219,   220,
     221,     0,   222,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
       0,     0,     0,     0,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   130,   241,   219,
     220,   221,   242,   222,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,   324,
     227,     0,     0,     0,     0,     0,     0,   228,     0,   229,
       0,     0,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   130,   241,
     219,   220,   221,   242,   222,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
     226,   227,     0,     0,     0,     0,     0,     0,   228,     0,
     130,     0,   219,   220,   221,     0,   222,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   224,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   225,     0,
     241,     0,   226,   227,   242,     0,     0,     0,     0,     0,
     228,     0,   130,     0,   219,   220,   221,     0,   222,   230,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
     224,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     225,     0,   241,     0,   226,   227,   242,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,     0,   241,     0,   106,     0,   242,   306,
       0,   307,   308,   309,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   206,    39,    40,    41,
     207,    42,    43,     0,    44,    45,    46,    47,   208,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,    57,
     209,    58,     0,    59,     0,    60,    61,    62,    63,    64,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   206,
      39,    40,    41,   207,    42,    43,     0,    44,    45,    46,
      47,   208,    48,    49,    50,    51,    52,    53,    54,     0,
      55,    56,    57,   209,    58,     0,    59,     0,    60,    61,
      62,    63,    64,   106,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   206,    39,    40,    41,   207,    42,    43,
       0,    44,    45,    46,    47,   208,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,    57,   209,    58,    19,
      59,     0,    60,    61,    62,    63,    64,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
      39,    40,    41,     0,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,    53,    54,     0,
      55,    56,    57,   106,    58,     0,    59,     0,    60,    61,
      62,    63,    64,     0,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     0,    39,    40,    41,     0,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,    57,     0,    58,     0,
      59,     0,    60,    61,    62,    63,    64
};

static const yytype_int16 yycheck[] =
{
      78,    79,    80,   143,     8,    73,   178,   179,   180,    74,
     261,    76,   170,   276,   299,   393,   200,   189,   176,     9,
      73,   192,    76,     7,   196,   197,   198,    17,    18,   256,
       7,     0,     6,   165,     7,    18,   194,   195,   222,   442,
       1,    52,    35,   377,     6,     6,     7,    61,    54,   300,
      83,   116,    39,   131,    43,    16,    66,    90,   136,     3,
       0,    67,   140,   141,   142,    45,    17,    56,    66,    43,
      14,   474,    65,    69,    88,    64,    87,    87,   481,    87,
      63,   159,    56,    34,    63,    71,   164,   165,    74,    87,
      64,   275,    61,    70,    83,    99,   174,    70,    84,    87,
      83,   435,    30,    91,   169,    95,    90,   441,   266,    83,
     488,    72,   190,    90,   285,    85,   181,    90,   250,    88,
     185,    83,   175,   255,    84,    71,    83,    87,    74,   197,
     393,   185,   290,    90,    83,   513,    83,    98,    83,   143,
     218,   219,   220,   221,   371,   223,   224,    84,   226,   376,
      87,   229,    85,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,    24,    83,   246,   247,
     248,    84,   250,    83,    87,    84,   244,   255,    87,    15,
      84,    70,   172,    87,   249,    84,    83,    45,    87,   329,
      15,    27,    50,    47,    48,   446,   200,     3,   408,   409,
       6,    37,    27,    83,    62,   490,   284,   492,   286,    67,
      84,    87,    37,    87,   279,    15,    41,    42,   222,   458,
     459,   361,    58,    90,    87,   488,     6,    27,    89,    74,
      81,   482,   416,    58,    40,    83,    82,    37,    87,    91,
     244,    41,    42,    87,    67,    81,   324,   325,    89,    85,
     513,    67,   330,    78,    60,   506,    81,    69,    58,    87,
      85,    87,   340,   146,   422,    84,    66,   345,    36,    84,
      74,   275,    15,   351,   414,    84,    61,    91,    61,   162,
     163,    81,    82,    84,    27,    85,    84,   459,    66,    85,
      84,    84,    92,    85,    37,   373,    91,    83,    41,    42,
     378,    48,   380,    14,    23,   383,    15,    89,   191,   387,
     375,   389,    74,    89,    76,    58,   199,   382,   201,   202,
      57,   399,   205,    84,    74,   329,    72,    15,    36,    24,
      89,    44,    75,    76,    77,    78,    84,    75,    81,    27,
      82,    14,    85,    87,    14,     3,    82,    82,    24,    37,
      45,   429,    15,   383,   116,    50,   434,   361,   436,    54,
     438,   380,   245,    84,   432,   198,   458,    62,   459,   522,
      58,   254,    67,   522,    50,   258,     9,    83,    54,   373,
     263,   143,    15,   499,    83,    99,    62,   465,   218,   467,
     468,    67,   169,    81,    27,   397,   246,    85,   116,   188,
     283,   479,   429,   278,    37,    -1,   432,   169,    41,    42,
     414,   279,   416,   175,   285,   177,    49,   191,    -1,   181,
      -1,   499,    -1,   185,   416,    58,    -1,    -1,   432,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,   200,    -1,
     518,    -1,    75,    76,    77,    78,    -1,    -1,    81,   332,
     333,   334,    85,    -1,    -1,   338,   339,    -1,   341,    -1,
     222,   344,    -1,   346,   347,   348,   349,   350,    -1,   352,
     353,   354,   355,   356,   357,    -1,   359,   360,    -1,    -1,
      -1,    -1,   244,     9,    -1,   368,   369,   249,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    27,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,
      -1,    37,    -1,   275,    -1,    41,    42,   279,   401,    -1,
      45,    46,    -1,    49,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    58,    -1,    -1,   418,   419,    62,   421,    -1,
      -1,   424,    -1,   426,   427,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    15,    -1,    85,
     443,    -1,    -1,    -1,    -1,   448,   449,   329,    -1,    27,
      -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    15,    -1,    41,    42,    -1,    -1,   470,    -1,    -1,
     473,    -1,    -1,    27,   477,   478,    -1,    -1,    -1,   361,
      58,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
     493,   494,   495,   375,    -1,    29,    30,    -1,    -1,    33,
     382,    -1,   505,    81,    58,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,   525,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,   414,    67,   416,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     432,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    -1,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,     3,
       4,     5,     6,     7,    90,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,     3,     4,     5,     6,     7,    90,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    -1,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    -1,     3,     4,     5,     6,     7,    90,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    -1,    63,    -1,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    -1,     3,     4,     5,     6,     7,
      90,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    -1,    65,    66,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    -1,     3,     4,     5,
       6,     7,    90,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    -1,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    -1,     3,
       4,     5,     6,     7,    90,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      -1,     3,     4,     5,     6,     7,    90,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    -1,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,     9,    -1,    11,    12,    13,    81,
      15,    83,    -1,    -1,    19,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    81,    82,     6,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    -1,    65,    66,    67,
      68,    69,     9,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    85,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,     9,    81,    11,    12,    13,    85,    15,
      16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,     9,    81,    11,    12,    13,    85,
      15,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,     9,    81,    11,    12,    13,
      85,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,     9,    81,    11,    12,
      13,    85,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    84,    85,     9,    -1,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,     9,    81,    11,    12,    13,    85,
      15,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,     9,    81,    11,    12,    13,
      85,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,     9,    81,    11,    12,
      13,    85,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    82,
      -1,     9,    85,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,     9,    81,    11,    12,    13,    85,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,     9,
      -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    -1,    84,    85,     9,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    82,
      -1,     9,    85,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    81,    82,    -1,     9,    85,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,     9,    81,    11,
      12,    13,    85,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,     9,    81,
      11,    12,    13,    85,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
       9,    -1,    11,    12,    13,    -1,    15,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    27,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    37,    -1,
      81,    -1,    41,    42,    85,    -1,    -1,    -1,    -1,    -1,
      49,    -1,     9,    -1,    11,    12,    13,    -1,    15,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      27,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      37,    -1,    81,    -1,    41,    42,    85,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,     6,    -1,    85,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    -1,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    -1,    65,    66,
      67,    68,    69,     6,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,     6,
      63,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    -1,    41,    42,    -1,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,     6,    61,    -1,    63,    -1,    65,    66,
      67,    68,    69,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    -1,    41,    42,
      -1,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    -1,
      63,    -1,    65,    66,    67,    68,    69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    94,    95,   101,   102,    18,    63,    83,    95,
       0,    61,    88,    99,   103,   104,    63,    95,    95,     6,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    37,
      38,    39,    41,    42,    44,    45,    46,    47,    49,    50,
      51,    52,    53,    54,    55,    57,    58,    59,    61,    63,
      65,    66,    67,    68,    69,   144,   145,   146,   198,    99,
      17,    34,   100,    24,    29,    33,    46,    50,    53,    55,
      62,    96,   105,   106,   107,   108,   130,   131,   132,   133,
     134,   137,   140,   141,   142,    95,    99,    99,    84,    87,
       3,     6,    40,    60,   147,    95,     6,   163,   182,   183,
     185,   189,   198,    43,    56,    64,    83,   148,   149,   150,
     151,   152,   153,   185,   189,   149,     3,     4,     5,     7,
       9,    25,    26,    28,    38,    40,    47,    48,    49,    60,
      74,    81,    83,    90,   138,   139,   158,   162,   163,   164,
     165,   168,   169,   170,   173,   176,   177,   178,   182,   197,
     135,   136,   158,   158,    54,    67,   120,   129,   108,    45,
      30,    99,    95,   145,    69,    85,    83,    85,    83,    83,
      83,    83,   152,   185,   186,    87,    71,    74,   154,    70,
      65,   158,   179,   180,    83,    83,    90,    83,    90,   158,
      83,   158,   158,   160,   161,   158,    36,    40,    48,    60,
     171,   172,   184,   189,   190,   191,   198,   199,    87,    11,
      12,    13,    15,    19,    27,    37,    41,    42,    49,    51,
      58,    68,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    81,    85,   197,    90,   158,    87,    16,    70,    20,
      34,    75,   121,   122,   158,    34,   121,   148,   158,   160,
      99,    97,    98,   158,   163,   189,    34,    75,    84,   160,
     189,   150,   150,   150,    84,    89,   156,   149,    74,    81,
     155,   153,   150,   158,    65,   179,    35,   180,   181,   160,
      34,    75,    84,   160,   109,   110,   111,   112,   113,   114,
     150,   166,   150,   167,   182,   109,     9,    11,    12,    13,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   189,
     190,   194,   195,   196,    41,    87,    82,    84,    91,    87,
      89,   139,   158,   158,   158,   188,   190,   192,   158,   158,
      67,   158,    47,    48,   158,    67,   158,   158,   158,   158,
     158,    72,   158,   158,   158,   158,   158,   158,   159,   158,
     158,    85,   174,   175,   182,   184,   189,   136,   158,   158,
     185,   121,    52,    87,   123,    20,   121,   123,    66,   143,
      87,   143,    20,    69,   160,    84,    84,    87,    84,    87,
     187,   190,     7,    70,   157,   170,   155,   186,    74,    59,
     181,   158,    36,    84,   160,    84,    84,    91,    61,    61,
     104,   143,    84,    84,    85,    91,    85,    84,   158,   158,
     184,   158,    83,   193,   158,    48,   158,   158,    82,    14,
      75,   184,    87,    91,    89,   123,    23,   122,    57,   127,
     185,   123,   127,   158,    98,   185,    97,    84,   158,   158,
     157,    84,    74,   156,    72,   158,    36,    84,   100,   100,
      96,   120,   129,   184,   194,    66,    82,    92,    89,   160,
     158,   159,   175,   158,   127,   124,   125,   158,   158,    44,
     128,   127,   128,   143,    84,    84,    84,    75,   115,   110,
     114,   111,   114,   158,   158,   158,    84,    82,   128,    87,
      21,    22,    31,    32,   126,   158,   128,   143,     3,   116,
     117,   118,   119,    70,   157,   104,   104,    82,    92,    82,
     125,   143,    14,   157,    82,   158,   117,   118,    82,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   102,   102,   103,   103,   103,   104,
     104,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   117,
     118,   118,   119,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   124,   124,   125,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   131,   131,   132,
     133,   134,   135,   135,   136,   136,   137,   138,   138,   139,
     140,   141,   141,   142,   143,   143,   144,   144,   145,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   155,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   165,   165,   166,   167,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   171,   171,   172,   172,   173,   174,   174,
     175,   175,   175,   175,   176,   177,   177,   177,   177,   178,
     178,   179,   179,   180,   181,   181,   182,   183,   183,   184,
     185,   186,   186,   187,   188,   189,   190,   190,   191,   191,
     192,   193,   193,   194,   194,   194,   195,   195,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   199,   199,   199,
     199
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     4,     4,     5,     6,     1,     4,
       2,     4,     5,     7,     1,     3,     3,     1,     0,     1,
       1,     1,     0,     2,     0,     4,     2,     3,     2,     0,
       2,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     4,     3,
       2,     1,     0,     3,     2,     0,     1,     3,     0,     1,
       1,     0,     1,     6,     5,     1,     3,     3,     1,     1,
       0,     3,     1,     3,     2,     0,     1,     1,     1,     1,
       0,     2,     0,     2,     7,     6,     4,     1,     0,     4,
       2,     2,     1,     3,     3,     3,     2,     1,     3,     1,
       3,     1,     0,     2,     0,     2,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     1,     3,
       1,     4,     6,     6,     1,     3,     1,     3,     5,     6,
       3,     4,     4,     6,     7,     0,     0,     2,     0,     1,
       1,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     2,     4,     4,     3,     4,     6,     3,     4,
       3,     1,     0,     1,     1,     3,     0,     1,     1,     1,
       3,     4,     4,     5,     4,     4,     4,     3,     4,     5,
       4,     4,     4,     2,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     3,     5,     4,     1,     3,
       2,     1,     3,     2,     3,     5,     7,     7,     9,     5,
       4,     1,     2,     4,     2,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, extra, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, extra); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (extra);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, extra);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, extra);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, extra); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (extra);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (ag_scanner_t scanner, cypher_yy_extra *extra)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* stmt: cypher_stmt semicolon_opt  */
#line 290 "cypher_gram.y"
        {
            /*
             * If there is no transition for the lookahead token and the
             * clauses can be reduced to single_query, the parsing is
             * considered successful although it actually isn't.
             *
             * For example, when `MATCH ... CREATE ... MATCH ... ;` query is
             * being parsed, there is no transition for the second `MATCH ...`
             * because the query is wrong but `MATCH .. CREATE ...` is correct
             * so it will be reduced to query_part_last anyway even if there
             * are more tokens to read.
             *
             * Throw syntax error in this case.
             */
            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);
            extra->extra = NULL;
        }
#line 2445 "cypher_gram.tab.c"
    break;

  case 3: /* stmt: EXPLAIN cypher_stmt semicolon_opt  */
#line 311 "cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = NIL;
            extra->extra = (Node *)estmt;
        }
#line 2463 "cypher_gram.tab.c"
    break;

  case 4: /* stmt: EXPLAIN VERBOSE cypher_stmt semicolon_opt  */
#line 325 "cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make1(makeDefElem("verbose", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2481 "cypher_gram.tab.c"
    break;

  case 5: /* stmt: EXPLAIN ANALYZE cypher_stmt semicolon_opt  */
#line 339 "cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make1(makeDefElem("analyze", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2499 "cypher_gram.tab.c"
    break;

  case 6: /* stmt: EXPLAIN ANALYZE VERBOSE cypher_stmt semicolon_opt  */
#line 353 "cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make2(makeDefElem("analyze", NULL, (yylsp[-3])),
                                        makeDefElem("verbose", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2518 "cypher_gram.tab.c"
    break;

  case 7: /* stmt: EXPLAIN '(' utility_option_list ')' cypher_stmt semicolon_opt  */
#line 368 "cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = (yyvsp[-3].list);
            extra->extra = (Node *)estmt;
        }
#line 2536 "cypher_gram.tab.c"
    break;

  case 8: /* cypher_stmt: single_query  */
#line 385 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2544 "cypher_gram.tab.c"
    break;

  case 9: /* cypher_stmt: cypher_stmt UNION all_or_distinct cypher_stmt  */
#line 389 "cypher_gram.y"
        {
            (yyval.list) = list_make1(make_set_op(SETOP_UNION, (yyvsp[-1].boolean), (yyvsp[-3].list), (yyvsp[0].list)));
        }
#line 2552 "cypher_gram.tab.c"
    break;

  case 10: /* call_stmt: CALL expr_func_norm  */
#line 396 "cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            n->funccall = castNode (FuncCall, (yyvsp[0].node));

            (yyval.node) = (Node *)n;
        }
#line 2563 "cypher_gram.tab.c"
    break;

  case 11: /* call_stmt: CALL expr_var '.' expr_func_norm  */
#line 403 "cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            FuncCall *fc = (FuncCall*)(yyvsp[0].node);
            ColumnRef *cr = (ColumnRef*)(yyvsp[-2].node);
            List *fields = cr->fields;
            String *string = linitial(fields);

            /*
             * A function can only be qualified with a single schema. So, we
             * check to see that the function isn't already qualified. There
             * may be unforeseen cases where we might need to remove this in
             * the future.
             */
            if (list_length(fc->funcname) == 1)
            {
                fc->funcname = lcons(string, fc->funcname);
                (yyval.node) = (Node*)fc;
            }
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                            errmsg("function already qualified"),
                            ag_scanner_errposition((yylsp[-3]), scanner)));
            }

            n->funccall = fc;
            (yyval.node) = (Node *)n;
        }
#line 2597 "cypher_gram.tab.c"
    break;

  case 12: /* call_stmt: CALL expr_func_norm YIELD yield_item_list where_opt  */
#line 433 "cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            n->funccall = castNode (FuncCall, (yyvsp[-3].node));
            n->yield_items = (yyvsp[-1].list);
            n->where = (yyvsp[0].node);
            (yyval.node) = (Node *)n;
        }
#line 2609 "cypher_gram.tab.c"
    break;

  case 13: /* call_stmt: CALL expr_var '.' expr_func_norm YIELD yield_item_list where_opt  */
#line 441 "cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            FuncCall *fc = (FuncCall*)(yyvsp[-3].node);
            ColumnRef *cr = (ColumnRef*)(yyvsp[-5].node);
            List *fields = cr->fields;
            String *string = linitial(fields);

            /*
             * A function can only be qualified with a single schema. So, we
             * check to see that the function isn't already qualified. There
             * may be unforeseen cases where we might need to remove this in
             * the future.
             */
            if (list_length(fc->funcname) == 1)
            {
                fc->funcname = lcons(string, fc->funcname);
                (yyval.node) = (Node*)fc;
            }
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                            errmsg("function already qualified"),
                            ag_scanner_errposition((yylsp[-6]), scanner)));
            }

            n->funccall = fc;
            n->yield_items = (yyvsp[-1].list);
            n->where = (yyvsp[0].node);
            (yyval.node) = (Node *)n;
        }
#line 2645 "cypher_gram.tab.c"
    break;

  case 14: /* yield_item_list: yield_item  */
#line 476 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2653 "cypher_gram.tab.c"
    break;

  case 15: /* yield_item_list: yield_item_list ',' yield_item  */
#line 480 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 2661 "cypher_gram.tab.c"
    break;

  case 16: /* yield_item: expr AS var_name  */
#line 487 "cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = (yyvsp[0].string);
            n->indirection = NIL;
            n->val = (yyvsp[-2].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 2677 "cypher_gram.tab.c"
    break;

  case 17: /* yield_item: expr  */
#line 499 "cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = NULL;
            n->indirection = NIL;
            n->val = (yyvsp[0].node);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 2693 "cypher_gram.tab.c"
    break;

  case 20: /* all_or_distinct: ALL  */
#line 519 "cypher_gram.y"
    {
        (yyval.boolean) = true;
    }
#line 2701 "cypher_gram.tab.c"
    break;

  case 21: /* all_or_distinct: DISTINCT  */
#line 523 "cypher_gram.y"
    {
        (yyval.boolean) = false;
    }
#line 2709 "cypher_gram.tab.c"
    break;

  case 22: /* all_or_distinct: %empty  */
#line 527 "cypher_gram.y"
    {
        (yyval.boolean) = false;
    }
#line 2717 "cypher_gram.tab.c"
    break;

  case 23: /* single_query: query_part_init query_part_last  */
#line 539 "cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), (yyvsp[0].list));
        }
#line 2725 "cypher_gram.tab.c"
    break;

  case 24: /* query_part_init: %empty  */
#line 546 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2733 "cypher_gram.tab.c"
    break;

  case 25: /* query_part_init: query_part_init reading_clause_list updating_clause_list_0 with  */
#line 550 "cypher_gram.y"
        {
            (yyval.list) = lappend(list_concat(list_concat((yyvsp[-3].list), (yyvsp[-2].list)), (yyvsp[-1].list)), (yyvsp[0].node));
        }
#line 2741 "cypher_gram.tab.c"
    break;

  case 26: /* query_part_last: reading_clause_list updating_clause_list_1  */
#line 557 "cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), (yyvsp[0].list));
        }
#line 2749 "cypher_gram.tab.c"
    break;

  case 27: /* query_part_last: reading_clause_list updating_clause_list_0 return  */
#line 561 "cypher_gram.y"
        {
            (yyval.list) = lappend(list_concat((yyvsp[-2].list), (yyvsp[-1].list)), (yyvsp[0].node));
        }
#line 2757 "cypher_gram.tab.c"
    break;

  case 28: /* query_part_last: reading_clause_list call_stmt  */
#line 565 "cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), list_make1((yyvsp[0].node)));
        }
#line 2765 "cypher_gram.tab.c"
    break;

  case 29: /* reading_clause_list: %empty  */
#line 572 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2773 "cypher_gram.tab.c"
    break;

  case 30: /* reading_clause_list: reading_clause_list reading_clause  */
#line 576 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 2781 "cypher_gram.tab.c"
    break;

  case 34: /* updating_clause_list_0: %empty  */
#line 589 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2789 "cypher_gram.tab.c"
    break;

  case 36: /* updating_clause_list_1: updating_clause  */
#line 597 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2797 "cypher_gram.tab.c"
    break;

  case 37: /* updating_clause_list_1: updating_clause_list_1 updating_clause  */
#line 601 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 2805 "cypher_gram.tab.c"
    break;

  case 43: /* subquery_stmt: subquery_stmt_with_return  */
#line 616 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2813 "cypher_gram.tab.c"
    break;

  case 44: /* subquery_stmt: subquery_stmt_no_return  */
#line 620 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2821 "cypher_gram.tab.c"
    break;

  case 45: /* subquery_stmt_with_return: single_subquery  */
#line 627 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2829 "cypher_gram.tab.c"
    break;

  case 46: /* subquery_stmt_with_return: subquery_stmt_with_return UNION all_or_distinct subquery_stmt_with_return  */
#line 631 "cypher_gram.y"
        {
            (yyval.list) = list_make1(make_set_op(SETOP_UNION, (yyvsp[-1].boolean), (yyvsp[-3].list), (yyvsp[0].list)));
        }
#line 2837 "cypher_gram.tab.c"
    break;

  case 47: /* subquery_stmt_no_return: single_subquery_no_return  */
#line 638 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2845 "cypher_gram.tab.c"
    break;

  case 48: /* subquery_stmt_no_return: subquery_stmt_no_return UNION all_or_distinct subquery_stmt_no_return  */
#line 642 "cypher_gram.y"
        {
            (yyval.list) = list_make1(make_subquery_returnless_set_op(SETOP_UNION, (yyvsp[-1].boolean), (yyvsp[-3].list), (yyvsp[0].list)));
        }
#line 2853 "cypher_gram.tab.c"
    break;

  case 49: /* single_subquery: subquery_part_init reading_clause_list return  */
#line 649 "cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-2].list), lappend((yyvsp[-1].list), (yyvsp[0].node)));
        }
#line 2861 "cypher_gram.tab.c"
    break;

  case 50: /* single_subquery_no_return: subquery_part_init reading_clause_list  */
#line 656 "cypher_gram.y"
        {
            ColumnRef *cr;
            ResTarget *rt;
            cypher_return *n;

            /*
             * since subqueries allow return-less clauses, we add a
             * return node manually to reflect that syntax
             */
            cr = makeNode(ColumnRef);
            cr->fields = list_make1(makeNode(A_Star));
            cr->location = (yylsp[-1]);

            rt = makeNode(ResTarget);
            rt->name = NULL;
            rt->indirection = NIL;
            rt->val = (Node *)cr;
            rt->location = (yylsp[-1]);

            n = make_ag_node(cypher_return);
            n->distinct = false;
            n->items = list_make1((Node *)rt);
            n->order_by = NULL;
            n->skip = NULL;
            n->limit = NULL;

            (yyval.list) = list_concat((yyvsp[-1].list), lappend((yyvsp[0].list), n));

        }
#line 2895 "cypher_gram.tab.c"
    break;

  case 51: /* single_subquery_no_return: subquery_pattern  */
#line 686 "cypher_gram.y"
        {
            ColumnRef *cr;
            ResTarget *rt;
            cypher_return *n;

            cr = makeNode(ColumnRef);
            cr->fields = list_make1(makeNode(A_Star));
            cr->location = (yylsp[0]);

            rt = makeNode(ResTarget);
            rt->name = NULL;
            rt->indirection = NIL;
            rt->val = (Node *)cr;
            rt->location = (yylsp[0]);

            n = make_ag_node(cypher_return);
            n->distinct = false;
            n->items = list_make1((Node *)rt);
            n->order_by = NULL;
            n->skip = NULL;
            n->limit = NULL;

            (yyval.list) = lappend(list_make1((yyvsp[0].node)), n);
        }
#line 2924 "cypher_gram.tab.c"
    break;

  case 52: /* subquery_part_init: %empty  */
#line 714 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2932 "cypher_gram.tab.c"
    break;

  case 53: /* subquery_part_init: subquery_part_init reading_clause_list with  */
#line 718 "cypher_gram.y"
        {
            (yyval.list) = lappend(list_concat((yyvsp[-2].list), (yyvsp[-1].list)), (yyvsp[0].node));    
        }
#line 2940 "cypher_gram.tab.c"
    break;

  case 54: /* cypher_varlen_opt: '*' cypher_range_opt  */
#line 725 "cypher_gram.y"
        {
            A_Indices *n = (A_Indices *) (yyvsp[0].node);

            if (n->lidx == NULL)
                n->lidx = make_int_const(1, (yylsp[0]));

            if (n->uidx != NULL)
            {
                A_Const    *lidx = (A_Const *) n->lidx;
                A_Const    *uidx = (A_Const *) n->uidx;

                if (lidx->val.ival.ival > uidx->val.ival.ival)
                    ereport(ERROR, (errcode(ERRCODE_SYNTAX_ERROR),
                                    errmsg("invalid range"),
                                    ag_scanner_errposition((yylsp[0]), scanner)));
            }
            (yyval.node) = (Node *) n;
        }
#line 2963 "cypher_gram.tab.c"
    break;

  case 55: /* cypher_varlen_opt: %empty  */
#line 744 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 2971 "cypher_gram.tab.c"
    break;

  case 56: /* cypher_range_opt: cypher_range_idx  */
#line 751 "cypher_gram.y"
        {
            A_Indices  *n;

            n = makeNode(A_Indices);
            n->lidx = copyObject((yyvsp[0].node));
            n->uidx = (yyvsp[0].node);
            (yyval.node) = (Node *) n;
        }
#line 2984 "cypher_gram.tab.c"
    break;

  case 57: /* cypher_range_opt: cypher_range_idx_opt DOT_DOT cypher_range_idx_opt  */
#line 760 "cypher_gram.y"
        {
            A_Indices  *n;

            n = makeNode(A_Indices);
            n->lidx = (yyvsp[-2].node);
            n->uidx = (yyvsp[0].node);
            (yyval.node) = (Node *) n;
        }
#line 2997 "cypher_gram.tab.c"
    break;

  case 58: /* cypher_range_opt: %empty  */
#line 769 "cypher_gram.y"
        {
            (yyval.node) = (Node *) makeNode(A_Indices);
        }
#line 3005 "cypher_gram.tab.c"
    break;

  case 59: /* cypher_range_idx: Iconst  */
#line 776 "cypher_gram.y"
        {
            (yyval.node) = make_int_const((yyvsp[0].integer), (yylsp[0]));
        }
#line 3013 "cypher_gram.tab.c"
    break;

  case 61: /* cypher_range_idx_opt: %empty  */
#line 783 "cypher_gram.y"
                                                        { (yyval.node) = NULL; }
#line 3019 "cypher_gram.tab.c"
    break;

  case 63: /* return: RETURN DISTINCT return_item_list order_by_opt skip_opt limit_opt  */
#line 794 "cypher_gram.y"
        {
            cypher_return *n;

            n = make_ag_node(cypher_return);
            n->distinct = true;
            n->items = (yyvsp[-3].list);
            n->order_by = (yyvsp[-2].list);
            n->skip = (yyvsp[-1].node);
            n->limit = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3036 "cypher_gram.tab.c"
    break;

  case 64: /* return: RETURN return_item_list order_by_opt skip_opt limit_opt  */
#line 807 "cypher_gram.y"
        {
            cypher_return *n;

            n = make_ag_node(cypher_return);
            n->distinct = false;
            n->items = (yyvsp[-3].list);
            n->order_by = (yyvsp[-2].list);
            n->skip = (yyvsp[-1].node);
            n->limit = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3053 "cypher_gram.tab.c"
    break;

  case 65: /* return_item_list: return_item  */
#line 824 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3061 "cypher_gram.tab.c"
    break;

  case 66: /* return_item_list: return_item_list ',' return_item  */
#line 828 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3069 "cypher_gram.tab.c"
    break;

  case 67: /* return_item: expr AS var_name  */
#line 835 "cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = (yyvsp[0].string);
            n->indirection = NIL;
            n->val = (yyvsp[-2].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3085 "cypher_gram.tab.c"
    break;

  case 68: /* return_item: expr  */
#line 847 "cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = NULL;
            n->indirection = NIL;
            n->val = (yyvsp[0].node);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 3101 "cypher_gram.tab.c"
    break;

  case 69: /* return_item: '*'  */
#line 859 "cypher_gram.y"
        {
            ColumnRef *cr;
            ResTarget *rt;

            cr = makeNode(ColumnRef);
            cr->fields = list_make1(makeNode(A_Star));
            cr->location = (yylsp[0]);

            rt = makeNode(ResTarget);
            rt->name = NULL;
            rt->indirection = NIL;
            rt->val = (Node *)cr;
            rt->location = (yylsp[0]);

            (yyval.node) = (Node *)rt;
        }
#line 3122 "cypher_gram.tab.c"
    break;

  case 70: /* order_by_opt: %empty  */
#line 879 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 3130 "cypher_gram.tab.c"
    break;

  case 71: /* order_by_opt: ORDER BY sort_item_list  */
#line 883 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 3138 "cypher_gram.tab.c"
    break;

  case 72: /* sort_item_list: sort_item  */
#line 890 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3146 "cypher_gram.tab.c"
    break;

  case 73: /* sort_item_list: sort_item_list ',' sort_item  */
#line 894 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3154 "cypher_gram.tab.c"
    break;

  case 74: /* sort_item: expr order_opt  */
#line 901 "cypher_gram.y"
        {
            SortBy *n;

            n = makeNode(SortBy);
            n->node = (yyvsp[-1].node);
            n->sortby_dir = (yyvsp[0].integer);
            n->sortby_nulls = SORTBY_NULLS_DEFAULT;
            n->useOp = NIL;
            n->location = -1; /* no operator */

            (yyval.node) = (Node *)n;
        }
#line 3171 "cypher_gram.tab.c"
    break;

  case 75: /* order_opt: %empty  */
#line 917 "cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DEFAULT; /* is the same with SORTBY_ASC */
        }
#line 3179 "cypher_gram.tab.c"
    break;

  case 76: /* order_opt: ASC  */
#line 921 "cypher_gram.y"
        {
            (yyval.integer) = SORTBY_ASC;
        }
#line 3187 "cypher_gram.tab.c"
    break;

  case 77: /* order_opt: ASCENDING  */
#line 925 "cypher_gram.y"
        {
            (yyval.integer) = SORTBY_ASC;
        }
#line 3195 "cypher_gram.tab.c"
    break;

  case 78: /* order_opt: DESC  */
#line 929 "cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DESC;
        }
#line 3203 "cypher_gram.tab.c"
    break;

  case 79: /* order_opt: DESCENDING  */
#line 933 "cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DESC;
        }
#line 3211 "cypher_gram.tab.c"
    break;

  case 80: /* skip_opt: %empty  */
#line 940 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3219 "cypher_gram.tab.c"
    break;

  case 81: /* skip_opt: SKIP expr  */
#line 944 "cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 3227 "cypher_gram.tab.c"
    break;

  case 82: /* limit_opt: %empty  */
#line 951 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3235 "cypher_gram.tab.c"
    break;

  case 83: /* limit_opt: LIMIT expr  */
#line 955 "cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 3243 "cypher_gram.tab.c"
    break;

  case 84: /* with: WITH DISTINCT return_item_list order_by_opt skip_opt limit_opt where_opt  */
#line 962 "cypher_gram.y"
        {
            ListCell *li;
            cypher_with *n;

            /* check expressions are aliased */
            foreach(li, (yyvsp[-4].list))
            {
                ResTarget *item = lfirst(li);

                /* variable does not have to be aliased */
                if (IsA(item->val, ColumnRef) || item->name)
                    continue;

                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("expression item must be aliased"),
                         errhint("Items can be aliased by using AS."),
                         ag_scanner_errposition(item->location, scanner)));
            }

            n = make_ag_node(cypher_with);
            n->distinct = true;
            n->items = (yyvsp[-4].list);
            n->order_by = (yyvsp[-3].list);
            n->skip = (yyvsp[-2].node);
            n->limit = (yyvsp[-1].node);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3278 "cypher_gram.tab.c"
    break;

  case 85: /* with: WITH return_item_list order_by_opt skip_opt limit_opt where_opt  */
#line 994 "cypher_gram.y"
        {
            ListCell *li;
            cypher_with *n;

            /* check expressions are aliased */
            foreach (li, (yyvsp[-4].list))
            {
                ResTarget *item = lfirst(li);

                /* variable does not have to be aliased */
                if (IsA(item->val, ColumnRef) || item->name)
                    continue;

                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("expression item must be aliased"),
                         errhint("Items can be aliased by using AS."),
                         ag_scanner_errposition(item->location, scanner)));
            }

            n = make_ag_node(cypher_with);
            n->distinct = false;
            n->items = (yyvsp[-4].list);
            n->order_by = (yyvsp[-3].list);
            n->skip = (yyvsp[-2].node);
            n->limit = (yyvsp[-1].node);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3313 "cypher_gram.tab.c"
    break;

  case 86: /* match: optional_opt MATCH pattern where_opt  */
#line 1032 "cypher_gram.y"
        {
            cypher_match *n;

            n = make_ag_node(cypher_match);
            n->optional = (yyvsp[-3].boolean);
            n->pattern = (yyvsp[-1].list);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3328 "cypher_gram.tab.c"
    break;

  case 87: /* optional_opt: OPTIONAL  */
#line 1046 "cypher_gram.y"
        {
            (yyval.boolean) = true;
        }
#line 3336 "cypher_gram.tab.c"
    break;

  case 88: /* optional_opt: %empty  */
#line 1050 "cypher_gram.y"
        {
            (yyval.boolean) = false;
        }
#line 3344 "cypher_gram.tab.c"
    break;

  case 89: /* unwind: UNWIND expr AS var_name  */
#line 1058 "cypher_gram.y"
        {
            ResTarget  *res;
            cypher_unwind *n;

            res = makeNode(ResTarget);
            res->name = (yyvsp[0].string);
            res->val = (Node *) (yyvsp[-2].node);
            res->location = (yylsp[-2]);

            n = make_ag_node(cypher_unwind);
            n->target = res;
            (yyval.node) = (Node *) n;
        }
#line 3362 "cypher_gram.tab.c"
    break;

  case 90: /* create: CREATE pattern  */
#line 1078 "cypher_gram.y"
        {
            cypher_create *n;

            n = make_ag_node(cypher_create);
            n->pattern = (yyvsp[0].list);

            (yyval.node) = (Node *)n;
        }
#line 3375 "cypher_gram.tab.c"
    break;

  case 91: /* set: SET set_item_list  */
#line 1094 "cypher_gram.y"
        {
            cypher_set *n;

            n = make_ag_node(cypher_set);
            n->items = (yyvsp[0].list);
            n->is_remove = false;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3390 "cypher_gram.tab.c"
    break;

  case 92: /* set_item_list: set_item  */
#line 1108 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3398 "cypher_gram.tab.c"
    break;

  case 93: /* set_item_list: set_item_list ',' set_item  */
#line 1112 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3406 "cypher_gram.tab.c"
    break;

  case 94: /* set_item: expr '=' expr  */
#line 1119 "cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[-2].node);
            n->expr = (yyvsp[0].node);
            n->is_add = false;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3422 "cypher_gram.tab.c"
    break;

  case 95: /* set_item: expr PLUS_EQ expr  */
#line 1131 "cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[-2].node);
            n->expr = (yyvsp[0].node);
            n->is_add = true;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3438 "cypher_gram.tab.c"
    break;

  case 96: /* remove: REMOVE remove_item_list  */
#line 1146 "cypher_gram.y"
        {
            cypher_set *n;

            n = make_ag_node(cypher_set);
            n->items = (yyvsp[0].list);
            n->is_remove = true;
             n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3453 "cypher_gram.tab.c"
    break;

  case 97: /* remove_item_list: remove_item  */
#line 1160 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3461 "cypher_gram.tab.c"
    break;

  case 98: /* remove_item_list: remove_item_list ',' remove_item  */
#line 1164 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3469 "cypher_gram.tab.c"
    break;

  case 99: /* remove_item: expr  */
#line 1171 "cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[0].node);
            n->expr = make_null_const(-1);
            n->is_add = false;

            (yyval.node) = (Node *)n;
        }
#line 3484 "cypher_gram.tab.c"
    break;

  case 100: /* delete: detach_opt DELETE expr_list  */
#line 1189 "cypher_gram.y"
        {
            cypher_delete *n;

            n = make_ag_node(cypher_delete);
            n->detach = (yyvsp[-2].boolean);
            n->exprs = (yyvsp[0].list);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3499 "cypher_gram.tab.c"
    break;

  case 101: /* detach_opt: DETACH  */
#line 1203 "cypher_gram.y"
        {
            (yyval.boolean) = true;
        }
#line 3507 "cypher_gram.tab.c"
    break;

  case 102: /* detach_opt: %empty  */
#line 1207 "cypher_gram.y"
        {
            (yyval.boolean) = false;
        }
#line 3515 "cypher_gram.tab.c"
    break;

  case 103: /* merge: MERGE path  */
#line 1217 "cypher_gram.y"
        {
            cypher_merge *n;

            n = make_ag_node(cypher_merge);
            n->path = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3528 "cypher_gram.tab.c"
    break;

  case 104: /* where_opt: %empty  */
#line 1233 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3536 "cypher_gram.tab.c"
    break;

  case 105: /* where_opt: WHERE expr  */
#line 1237 "cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 3544 "cypher_gram.tab.c"
    break;

  case 106: /* utility_option_list: utility_option_elem  */
#line 1244 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3552 "cypher_gram.tab.c"
    break;

  case 107: /* utility_option_list: utility_option_list ',' utility_option_elem  */
#line 1248 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3560 "cypher_gram.tab.c"
    break;

  case 108: /* utility_option_elem: utility_option_name utility_option_arg  */
#line 1255 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeDefElem((yyvsp[-1].string), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3568 "cypher_gram.tab.c"
    break;

  case 109: /* utility_option_name: IDENTIFIER  */
#line 1262 "cypher_gram.y"
        {
            char *modified_name = downcase_truncate_identifier((yyvsp[0].string), strlen((yyvsp[0].string)),
                                                               true);
            (yyval.string) = modified_name;
        }
#line 3578 "cypher_gram.tab.c"
    break;

  case 110: /* utility_option_name: safe_keywords  */
#line 1268 "cypher_gram.y"
        {
            char *name = pstrdup((yyvsp[0].keyword));
            char *modified_name = downcase_truncate_identifier(name,
                                                               strlen(name),
                                                               true);
            (yyval.string) = modified_name;
        }
#line 3590 "cypher_gram.tab.c"
    break;

  case 111: /* utility_option_arg: IDENTIFIER  */
#line 1279 "cypher_gram.y"
        {
            char *modified_val = downcase_truncate_identifier((yyvsp[0].string), strlen((yyvsp[0].string)),
                                                              true);
            (yyval.node) = (Node *)makeString(modified_val);
        }
#line 3600 "cypher_gram.tab.c"
    break;

  case 112: /* utility_option_arg: INTEGER  */
#line 1285 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeInteger((yyvsp[0].integer));
        }
#line 3608 "cypher_gram.tab.c"
    break;

  case 113: /* utility_option_arg: TRUE_P  */
#line 1289 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeString("true");
        }
#line 3616 "cypher_gram.tab.c"
    break;

  case 114: /* utility_option_arg: FALSE_P  */
#line 1293 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeString("false");
        }
#line 3624 "cypher_gram.tab.c"
    break;

  case 115: /* utility_option_arg: %empty  */
#line 1297 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3632 "cypher_gram.tab.c"
    break;

  case 116: /* pattern: path  */
#line 1309 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3640 "cypher_gram.tab.c"
    break;

  case 117: /* pattern: pattern ',' path  */
#line 1313 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3648 "cypher_gram.tab.c"
    break;

  case 119: /* path: var_name '=' anonymous_path  */
#line 1322 "cypher_gram.y"
        {
            cypher_path *p;

            p = (cypher_path *)(yyvsp[0].node);
            p->var_name = (yyvsp[-2].string);
            p->parsed_var_name = (yyvsp[-2].string);
            p->location = (yylsp[-2]);

            (yyval.node) = (Node *)p;
        }
#line 3663 "cypher_gram.tab.c"
    break;

  case 120: /* anonymous_path: simple_path_opt_parens  */
#line 1337 "cypher_gram.y"
        {
            cypher_path *n;

            n = make_ag_node(cypher_path);
            n->path = (yyvsp[0].list);
            n->var_name = NULL;
            n->parsed_var_name = NULL;
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 3679 "cypher_gram.tab.c"
    break;

  case 121: /* anonymous_path: SHORTESTPATH '(' anonymous_path ')'  */
#line 1349 "cypher_gram.y"
        {
            /* For now, return the path directly - the transformation 
             * will be handled in the transform phase */
            cypher_path *n;
            cypher_path *inner_path = (cypher_path *)(yyvsp[-1].node);

            n = make_ag_node(cypher_path);
            n->path = inner_path->path;
            n->var_name = NULL;
            n->parsed_var_name = NULL;
            n->location = (yylsp[-3]);
            
            /* Mark this as a shortest path for later processing */
            /* We'll need to handle this in the transform phase */

            (yyval.node) = (Node *)n;
        }
#line 3701 "cypher_gram.tab.c"
    break;

  case 122: /* anonymous_path: KSHORTESTPATHS '(' anonymous_path ',' expr ')'  */
#line 1367 "cypher_gram.y"
        {
            /* For now, return the path directly - the transformation 
             * will be handled in the transform phase */
            cypher_path *n;
            cypher_path *inner_path = (cypher_path *)(yyvsp[-3].node);

            n = make_ag_node(cypher_path);
            n->path = inner_path->path;
            n->var_name = NULL;
            n->parsed_var_name = NULL;
            n->location = (yylsp[-5]);

            (yyval.node) = (Node *)n;
        }
#line 3720 "cypher_gram.tab.c"
    break;

  case 123: /* anonymous_path: WEIGHTEDSHORTESTPATH '(' anonymous_path ',' expr ')'  */
#line 1382 "cypher_gram.y"
        {
            /* For now, return the path directly - the transformation 
             * will be handled in the transform phase */
            cypher_path *n;
            cypher_path *inner_path = (cypher_path *)(yyvsp[-3].node);

            n = make_ag_node(cypher_path);
            n->path = inner_path->path;
            n->var_name = NULL;
            n->parsed_var_name = NULL;
            n->location = (yylsp[-5]);

            (yyval.node) = (Node *)n;
        }
#line 3739 "cypher_gram.tab.c"
    break;

  case 125: /* simple_path_opt_parens: '(' simple_path ')'  */
#line 1401 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[-1].list);
        }
#line 3747 "cypher_gram.tab.c"
    break;

  case 126: /* simple_path: path_node  */
#line 1408 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3755 "cypher_gram.tab.c"
    break;

  case 127: /* simple_path: simple_path path_relationship path_node  */
#line 1412 "cypher_gram.y"
        {
            cypher_relationship *cr = NULL;

            /* get the relationship */
            cr = (cypher_relationship *)(yyvsp[-1].node);

            /* if this is a VLE relation node */
            if (cr->varlen != NULL)
            {
                /* build the VLE relation */
                cr = build_VLE_relation((yyvsp[-2].list), cr, (yyvsp[0].node), (yylsp[-2]), (yylsp[-1]));

                /* return the VLE relation in the path */
                (yyval.list) = lappend(lappend((yyvsp[-2].list), cr), (yyvsp[0].node));
            }
            /* otherwise, it is a regular relationship node */
            else
            {
                (yyval.list) = lappend(lappend((yyvsp[-2].list), (yyvsp[-1].node)), (yyvsp[0].node));
            }
        }
#line 3781 "cypher_gram.tab.c"
    break;

  case 128: /* path_node: '(' var_name_opt label_opt properties_opt ')'  */
#line 1437 "cypher_gram.y"
        {
            cypher_node *n;

            n = make_ag_node(cypher_node);
            n->name = (yyvsp[-3].string);
            n->parsed_name = (yyvsp[-3].string);
            n->label = (yyvsp[-2].string);
            n->parsed_label = (yyvsp[-2].string);
            n->use_equals = false;
            n->props = (yyvsp[-1].node);
            n->location = (yylsp[-3]);

            (yyval.node) = (Node *)n;
        }
#line 3800 "cypher_gram.tab.c"
    break;

  case 129: /* path_node: '(' var_name_opt label_opt '=' properties_opt ')'  */
#line 1452 "cypher_gram.y"
        {
            cypher_node *n;

            n = make_ag_node(cypher_node);
            n->name = (yyvsp[-4].string);
            n->parsed_name = (yyvsp[-4].string);
            n->label = (yyvsp[-3].string);
            n->parsed_label = (yyvsp[-3].string);
            n->use_equals = true;
            n->props = (yyvsp[-1].node);
            n->location = (yylsp[-4]);

            (yyval.node) = (Node *)n;
        }
#line 3819 "cypher_gram.tab.c"
    break;

  case 130: /* path_relationship: '-' path_relationship_body '-'  */
#line 1470 "cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-1].node);

            n->dir = CYPHER_REL_DIR_NONE;
            n->location = (yylsp[-1]);

            (yyval.node) = (yyvsp[-1].node);
        }
#line 3832 "cypher_gram.tab.c"
    break;

  case 131: /* path_relationship: '-' path_relationship_body '-' '>'  */
#line 1479 "cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-2].node);

            n->dir = CYPHER_REL_DIR_RIGHT;
            n->location = (yylsp[-2]);

            (yyval.node) = (yyvsp[-2].node);
        }
#line 3845 "cypher_gram.tab.c"
    break;

  case 132: /* path_relationship: '<' '-' path_relationship_body '-'  */
#line 1488 "cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-1].node);

            n->dir = CYPHER_REL_DIR_LEFT;
            n->location = (yylsp[-1]);

            (yyval.node) = (yyvsp[-1].node);
        }
#line 3858 "cypher_gram.tab.c"
    break;

  case 133: /* path_relationship_body: '[' var_name_opt label_opt cypher_varlen_opt properties_opt ']'  */
#line 1500 "cypher_gram.y"
        {
            cypher_relationship *n;

            n = make_ag_node(cypher_relationship);
            n->name = (yyvsp[-4].string);
            n->parsed_name = (yyvsp[-4].string);
            n->label = (yyvsp[-3].string);
            n->parsed_label = (yyvsp[-3].string);
            n->varlen = (yyvsp[-2].node);
            n->use_equals = false;
            n->props = (yyvsp[-1].node);

            (yyval.node) = (Node *)n;
        }
#line 3877 "cypher_gram.tab.c"
    break;

  case 134: /* path_relationship_body: '[' var_name_opt label_opt cypher_varlen_opt '=' properties_opt ']'  */
#line 1515 "cypher_gram.y"
        {
            cypher_relationship *n;

            n = make_ag_node(cypher_relationship);
            n->name = (yyvsp[-5].string);
            n->parsed_name = (yyvsp[-5].string);
            n->label = (yyvsp[-4].string);
            n->parsed_label = (yyvsp[-4].string);
            n->varlen = (yyvsp[-3].node);
            n->use_equals = true;
            n->props = (yyvsp[-1].node);

            (yyval.node) = (Node *)n;
        }
#line 3896 "cypher_gram.tab.c"
    break;

  case 135: /* path_relationship_body: %empty  */
#line 1531 "cypher_gram.y"
        {
            cypher_relationship *n;

            n = make_ag_node(cypher_relationship);
            n->name = NULL;
            n->parsed_name = NULL;
            n->label = NULL;
            n->parsed_label = NULL;
            n->varlen = NULL;
            n->use_equals = false;
            n->props = NULL;

            (yyval.node) = (Node *)n;
        }
#line 3915 "cypher_gram.tab.c"
    break;

  case 136: /* label_opt: %empty  */
#line 1549 "cypher_gram.y"
        {
            (yyval.string) = NULL;
        }
#line 3923 "cypher_gram.tab.c"
    break;

  case 137: /* label_opt: ':' label_name  */
#line 1553 "cypher_gram.y"
        {
            (yyval.string) = (yyvsp[0].string);
        }
#line 3931 "cypher_gram.tab.c"
    break;

  case 138: /* properties_opt: %empty  */
#line 1560 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3939 "cypher_gram.tab.c"
    break;

  case 140: /* properties_opt: PARAMETER  */
#line 1565 "cypher_gram.y"
        {
            cypher_param *n;

            n = make_ag_node(cypher_param);
            n->name = (yyvsp[0].string);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 3953 "cypher_gram.tab.c"
    break;

  case 141: /* expr: expr OR expr  */
#line 1583 "cypher_gram.y"
        {
            (yyval.node) = make_or_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3961 "cypher_gram.tab.c"
    break;

  case 142: /* expr: expr AND expr  */
#line 1587 "cypher_gram.y"
        {
            (yyval.node) = make_and_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3969 "cypher_gram.tab.c"
    break;

  case 143: /* expr: expr XOR expr  */
#line 1591 "cypher_gram.y"
        {
            (yyval.node) = make_xor_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3977 "cypher_gram.tab.c"
    break;

  case 144: /* expr: NOT expr  */
#line 1595 "cypher_gram.y"
        {
            (yyval.node) = make_not_expr((yyvsp[0].node), (yylsp[-1]));
        }
#line 3985 "cypher_gram.tab.c"
    break;

  case 145: /* expr: expr '=' expr  */
#line 1599 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "=", (yylsp[-1]));
        }
#line 3993 "cypher_gram.tab.c"
    break;

  case 146: /* expr: expr NOT_EQ expr  */
#line 1603 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<>", (yylsp[-1]));
        }
#line 4001 "cypher_gram.tab.c"
    break;

  case 147: /* expr: expr '<' expr  */
#line 1607 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<", (yylsp[-1]));
        }
#line 4009 "cypher_gram.tab.c"
    break;

  case 148: /* expr: expr LT_EQ expr  */
#line 1611 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<=", (yylsp[-1]));
        }
#line 4017 "cypher_gram.tab.c"
    break;

  case 149: /* expr: expr '>' expr  */
#line 1615 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), ">", (yylsp[-1]));
        }
#line 4025 "cypher_gram.tab.c"
    break;

  case 150: /* expr: expr GT_EQ expr  */
#line 1619 "cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), ">=", (yylsp[-1]));
        }
#line 4033 "cypher_gram.tab.c"
    break;

  case 151: /* expr: expr qual_op expr  */
#line 1623 "cypher_gram.y"
        {
            (yyval.node) = (Node *) makeA_Expr(AEXPR_OP, (yyvsp[-1].list), (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4041 "cypher_gram.tab.c"
    break;

  case 152: /* expr: qual_op expr  */
#line 1627 "cypher_gram.y"
        {
            (yyval.node) = (Node *) makeA_Expr(AEXPR_OP, (yyvsp[-1].list), NULL, (yyvsp[0].node), (yylsp[-1]));
        }
#line 4049 "cypher_gram.tab.c"
    break;

  case 153: /* expr: expr '+' expr  */
#line 1631 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "+", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4057 "cypher_gram.tab.c"
    break;

  case 154: /* expr: expr '-' expr  */
#line 1635 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "-", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4065 "cypher_gram.tab.c"
    break;

  case 155: /* expr: expr '*' expr  */
#line 1639 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "*", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4073 "cypher_gram.tab.c"
    break;

  case 156: /* expr: expr '/' expr  */
#line 1643 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "/", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4081 "cypher_gram.tab.c"
    break;

  case 157: /* expr: expr '%' expr  */
#line 1647 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "%", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4089 "cypher_gram.tab.c"
    break;

  case 158: /* expr: expr '^' expr  */
#line 1651 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "^", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4097 "cypher_gram.tab.c"
    break;

  case 159: /* expr: expr IN expr  */
#line 1655 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_IN, "=", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4105 "cypher_gram.tab.c"
    break;

  case 160: /* expr: expr IS NULL_P  */
#line 1659 "cypher_gram.y"
        {
            NullTest *n;

            n = makeNode(NullTest);
            n->arg = (Expr *)(yyvsp[-2].node);
            n->nulltesttype = IS_NULL;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 4120 "cypher_gram.tab.c"
    break;

  case 161: /* expr: expr IS NOT NULL_P  */
#line 1670 "cypher_gram.y"
        {
            NullTest *n;

            n = makeNode(NullTest);
            n->arg = (Expr *)(yyvsp[-3].node);
            n->nulltesttype = IS_NOT_NULL;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 4135 "cypher_gram.tab.c"
    break;

  case 162: /* expr: '-' expr  */
#line 1681 "cypher_gram.y"
        {
            (yyval.node) = do_negate((yyvsp[0].node), (yylsp[-1]));
        }
#line 4143 "cypher_gram.tab.c"
    break;

  case 163: /* expr: expr STARTS WITH expr  */
#line 1685 "cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_STARTS_WITH;
            n->lhs = (yyvsp[-3].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 4159 "cypher_gram.tab.c"
    break;

  case 164: /* expr: expr ENDS WITH expr  */
#line 1697 "cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_ENDS_WITH;
            n->lhs = (yyvsp[-3].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 4175 "cypher_gram.tab.c"
    break;

  case 165: /* expr: expr CONTAINS expr  */
#line 1709 "cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_CONTAINS;
            n->lhs = (yyvsp[-2].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 4191 "cypher_gram.tab.c"
    break;

  case 166: /* expr: expr '[' expr ']'  */
#line 1721 "cypher_gram.y"
        {
            A_Indices *i;

            i = makeNode(A_Indices);
            i->is_slice = false;
            i->lidx = NULL;
            i->uidx = (yyvsp[-1].node);

            (yyval.node) = append_indirection((yyvsp[-3].node), (Node *)i);
        }
#line 4206 "cypher_gram.tab.c"
    break;

  case 167: /* expr: expr '[' expr_opt DOT_DOT expr_opt ']'  */
#line 1732 "cypher_gram.y"
        {
            A_Indices *i;

            i = makeNode(A_Indices);
            i->is_slice = true;
            i->lidx = (yyvsp[-3].node);
            i->uidx = (yyvsp[-1].node);

            (yyval.node) = append_indirection((yyvsp[-5].node), (Node *)i);
        }
#line 4221 "cypher_gram.tab.c"
    break;

  case 168: /* expr: expr '.' expr  */
#line 1750 "cypher_gram.y"
        {
            /*
             * This checks for the grammar rule -
             *     expr '.' property_key_name
             * where the expr can be anything.
             * Note: A property_key_name ends up as a ColumnRef.
             * Note: We restrict some of what the expr can be, for now. More may
             *       need to be added later to loosen the restrictions. Or, it
             *       may need to be removed.
             */
            if (IsA((yyvsp[0].node), ColumnRef) &&
                (IsA((yyvsp[-2].node), ExtensibleNode) ||
                 IsA((yyvsp[-2].node), ColumnRef) ||
                 IsA((yyvsp[-2].node), A_Indirection)))
            {
                ColumnRef *cr = (ColumnRef*)(yyvsp[0].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                (yyval.node) = append_indirection((yyvsp[-2].node), (Node*)string);
            }
            /*
             * This checks for the grammar rule -
             *    symbolic_name '.' expr
             * Where expr is a function call.
             * Note: symbolic_name ends up as a ColumnRef
             */
            else if (IsA((yyvsp[0].node), FuncCall) && IsA((yyvsp[-2].node), ColumnRef))
            {
                FuncCall *fc = (FuncCall*)(yyvsp[0].node);
                ColumnRef *cr = (ColumnRef*)(yyvsp[-2].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                /*
                 * A function can only be qualified with a single schema. So, we
                 * check to see that the function isn't already qualified. There
                 * may be unforeseen cases where we might need to remove this in
                 * the future.
                 */
                if (list_length(fc->funcname) == 1)
                {
                    fc->funcname = lcons(string, fc->funcname);
                    (yyval.node) = (Node*)fc;
                }
                else
                    ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("function already qualified"),
                             ag_scanner_errposition((yylsp[-2]), scanner)));
            }
            /* allow a function to be used as a parent of an indirection */
            else if (IsA((yyvsp[-2].node), FuncCall) && IsA((yyvsp[0].node), ColumnRef))
            {
                ColumnRef *cr = (ColumnRef*)(yyvsp[0].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                (yyval.node) = append_indirection((yyvsp[-2].node), (Node*)string);
            }
            /* allow indirection with a typecast */
            else if ((IsA((yyvsp[-2].node), ColumnRef) || IsA((yyvsp[-2].node), A_Indirection)) && 
                     (IsA((yyvsp[0].node), ExtensibleNode) &&
                      is_ag_node((yyvsp[0].node), cypher_typecast)))
            {
                cypher_typecast *tc = (cypher_typecast *)(yyvsp[0].node);

                if (IsA(tc->expr, ColumnRef))
                {
                    ColumnRef *cr = (ColumnRef *)tc->expr;
                    List *fields = cr->fields;
                    String *string = linitial(fields);

                    tc->expr = append_indirection((yyvsp[-2].node), (Node *)string);

                    (yyval.node) = (Node *)tc;
                }
                else
                {
                    ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("invalid indirection syntax"),
                             ag_scanner_errposition((yylsp[-2]), scanner)));
                }
            }
            else if (IsA((yyvsp[-2].node), FuncCall) && IsA((yyvsp[0].node), A_Indirection))
            {
                ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("not supported A_Indirection indirection"),
                             ag_scanner_errposition((yylsp[-2]), scanner)));
            }
            /*
             * All other types of expression indirections are currently not
             * supported
             */
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("invalid indirection syntax"),
                         ag_scanner_errposition((yylsp[-2]), scanner)));
            }
        }
#line 4330 "cypher_gram.tab.c"
    break;

  case 169: /* expr: expr '-' '>' expr  */
#line 1855 "cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "->", (yyvsp[-3].node), (yyvsp[0].node), (yylsp[-2]));
        }
#line 4338 "cypher_gram.tab.c"
    break;

  case 170: /* expr: expr TYPECAST generic_type  */
#line 1859 "cypher_gram.y"
        {
            (yyval.node) = make_typecast_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 4346 "cypher_gram.tab.c"
    break;

  case 172: /* expr_opt: %empty  */
#line 1867 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 4354 "cypher_gram.tab.c"
    break;

  case 174: /* expr_list: expr  */
#line 1875 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 4362 "cypher_gram.tab.c"
    break;

  case 175: /* expr_list: expr_list ',' expr  */
#line 1879 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 4370 "cypher_gram.tab.c"
    break;

  case 176: /* expr_list_opt: %empty  */
#line 1886 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 4378 "cypher_gram.tab.c"
    break;

  case 180: /* expr_func_norm: func_name '(' ')'  */
#line 1899 "cypher_gram.y"
        {
            (yyval.node) = make_function_expr((yyvsp[-2].list), NIL, (yylsp[-2]));
        }
#line 4386 "cypher_gram.tab.c"
    break;

  case 181: /* expr_func_norm: func_name '(' expr_list ')'  */
#line 1903 "cypher_gram.y"
        {
            (yyval.node) = make_function_expr((yyvsp[-3].list), (yyvsp[-1].list), (yylsp[-2]));
        }
#line 4394 "cypher_gram.tab.c"
    break;

  case 182: /* expr_func_norm: func_name '(' '*' ')'  */
#line 1908 "cypher_gram.y"
        {
            /*
             * We consider AGGREGATE(*) to invoke a parameterless
             * aggregate.  This does the right thing for COUNT(*),
             * and there are no other aggregates in SQL that accept
             * '*' as parameter.
             *
             * The FuncCall node is marked agg_star = true by make_star_function_expr,
             * so that later processing can detect what the argument
             * really was.
             */
            FuncCall *n = (FuncCall *)make_star_function_expr((yyvsp[-3].list), NIL, (yylsp[-3]));
            (yyval.node) = (Node *)n;
         }
#line 4413 "cypher_gram.tab.c"
    break;

  case 183: /* expr_func_norm: func_name '(' DISTINCT expr_list ')'  */
#line 1923 "cypher_gram.y"
        {
            FuncCall *n = (FuncCall *)make_distinct_function_expr((yyvsp[-4].list), (yyvsp[-1].list), (yylsp[-4]));
            (yyval.node) = (Node *)n;
        }
#line 4422 "cypher_gram.tab.c"
    break;

  case 184: /* expr_func_subexpr: COALESCE '(' expr_list ')'  */
#line 1931 "cypher_gram.y"
        {
            CoalesceExpr *c;

            c = makeNode(CoalesceExpr);
            c->args = (yyvsp[-1].list);
            c->location = (yylsp[-3]);
            (yyval.node) = (Node *) c;
        }
#line 4435 "cypher_gram.tab.c"
    break;

  case 185: /* expr_func_subexpr: EXISTS '(' anonymous_path ')'  */
#line 1940 "cypher_gram.y"
        {
            cypher_sub_pattern *sub;
            SubLink    *n;

            sub = make_ag_node(cypher_sub_pattern);
            sub->kind = CSP_EXISTS;
            sub->pattern = list_make1((yyvsp[-1].node));

            n = makeNode(SubLink);
            n->subLinkType = EXISTS_SUBLINK;
            n->subLinkId = 0;
            n->testexpr = NULL;
            n->operName = NIL;
            n->subselect = (Node *) sub;
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *)node_to_agtype((Node *)n, "boolean", (yylsp[-3]));
        }
#line 4457 "cypher_gram.tab.c"
    break;

  case 186: /* expr_func_subexpr: EXISTS '(' property_value ')'  */
#line 1958 "cypher_gram.y"
        {
            FuncCall *n;
            n = makeFuncCall(list_make1(makeString("exists")),
                                    list_make1((yyvsp[-1].node)), COERCE_SQL_SYNTAX, (yylsp[-2]));

            (yyval.node) = (Node *)node_to_agtype((Node *)n, "boolean", (yylsp[-2]));

        }
#line 4470 "cypher_gram.tab.c"
    break;

  case 187: /* expr_func_subexpr: COUNT '(' ')'  */
#line 1967 "cypher_gram.y"
                {
            (yyval.node) = make_function_expr(list_make1(makeString("count")), NIL, (yylsp[-2]));
		}
#line 4478 "cypher_gram.tab.c"
    break;

  case 188: /* expr_func_subexpr: COUNT '(' expr_list ')'  */
#line 1971 "cypher_gram.y"
                {
            (yyval.node) = make_function_expr(list_make1(makeString("count")), (yyvsp[-1].list), (yylsp[-2]));
		}
#line 4486 "cypher_gram.tab.c"
    break;

  case 189: /* expr_func_subexpr: COUNT '(' DISTINCT expr_list ')'  */
#line 1975 "cypher_gram.y"
                {
            FuncCall *n = (FuncCall *)make_distinct_function_expr(
									  list_make1(makeString("count")), (yyvsp[-1].list), (yylsp[-4]));
            (yyval.node) = (Node *)n;
        }
#line 4496 "cypher_gram.tab.c"
    break;

  case 190: /* expr_func_subexpr: COUNT '(' '*' ')'  */
#line 1981 "cypher_gram.y"
                {
            FuncCall *n = (FuncCall *)make_star_function_expr(
									  list_make1(makeString("count")), NIL, (yylsp[-3]));
            (yyval.node) = (Node *)n;
		}
#line 4506 "cypher_gram.tab.c"
    break;

  case 191: /* expr_subquery: EXISTS '{' subquery_stmt '}'  */
#line 1990 "cypher_gram.y"
        {
            cypher_sub_query *sub;
            SubLink    *n;

            sub = make_ag_node(cypher_sub_query);
            sub->kind = CSP_EXISTS;
            sub->query = (yyvsp[-1].list);

            n = makeNode(SubLink);

            n->subLinkType = EXISTS_SUBLINK;
            n->subLinkId = 0;
            n->testexpr = NULL;
            n->operName = NIL;
            n->subselect = (Node *) sub;
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *)node_to_agtype((Node *)n, "boolean", (yylsp[-3]));
        }
#line 4529 "cypher_gram.tab.c"
    break;

  case 192: /* expr_subquery: COUNT '{' subquery_stmt '}'  */
#line 2009 "cypher_gram.y"
        {
            SubLink    *n;
            cypher_sub_query *sub;
            cypher_return *r;
            ResTarget *rt;
            FuncCall *func;

            func = (FuncCall *)make_star_function_expr(
								list_make1(makeString("count")), NIL, (yylsp[-3]));

            rt = makeNode(ResTarget);
            rt->name = NULL;
            rt->indirection = NIL;
            rt->val = (Node *)func;
            rt->location = (yylsp[-3]);

            r = make_ag_node(cypher_return);
            r->items = list_make1((Node *)rt);

            sub = make_ag_node(cypher_sub_query);
            sub->query = lappend((yyvsp[-1].list), r);

            n = makeNode(SubLink);
            n->subLinkType = EXPR_SUBLINK;
            n->subLinkId = 0;
            n->testexpr = NULL;
            n->operName = NIL;
            n->subselect = (Node *)sub;
            n->location = (yylsp[-3]);

            (yyval.node) = (Node *) n;
        }
#line 4566 "cypher_gram.tab.c"
    break;

  case 193: /* subquery_pattern: anonymous_path where_opt  */
#line 2045 "cypher_gram.y"
        {
            cypher_match *n;

            n = make_ag_node(cypher_match);
            n->pattern = list_make1((yyvsp[-1].node));
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 4580 "cypher_gram.tab.c"
    break;

  case 194: /* property_value: expr_var '.' property_key_name  */
#line 2058 "cypher_gram.y"
        {
            (yyval.node) = append_indirection((yyvsp[-2].node), (Node *)makeString((yyvsp[0].string)));
        }
#line 4588 "cypher_gram.tab.c"
    break;

  case 196: /* expr_atom: PARAMETER  */
#line 2066 "cypher_gram.y"
        {
            cypher_param *n;

            n = make_ag_node(cypher_param);
            n->name = (yyvsp[0].string);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 4602 "cypher_gram.tab.c"
    break;

  case 197: /* expr_atom: '(' expr ')'  */
#line 2076 "cypher_gram.y"
        {
            Node *n = (yyvsp[-1].node);

            if (is_ag_node(n, cypher_comparison_aexpr) ||
                is_ag_node(n, cypher_comparison_boolexpr))
            {
                n = (Node *)node_to_agtype(n, "boolean", (yylsp[-1]));
            }
            (yyval.node) = n;
        }
#line 4617 "cypher_gram.tab.c"
    break;

  case 202: /* expr_literal: INTEGER  */
#line 2094 "cypher_gram.y"
        {
            (yyval.node) = make_int_const((yyvsp[0].integer), (yylsp[0]));
        }
#line 4625 "cypher_gram.tab.c"
    break;

  case 203: /* expr_literal: DECIMAL  */
#line 2098 "cypher_gram.y"
        {
            (yyval.node) = make_float_const((yyvsp[0].string), (yylsp[0]));
        }
#line 4633 "cypher_gram.tab.c"
    break;

  case 204: /* expr_literal: STRING  */
#line 2102 "cypher_gram.y"
        {
            (yyval.node) = make_string_const((yyvsp[0].string), (yylsp[0]));
        }
#line 4641 "cypher_gram.tab.c"
    break;

  case 205: /* expr_literal: TRUE_P  */
#line 2106 "cypher_gram.y"
        {
            (yyval.node) = make_bool_const(true, (yylsp[0]));
        }
#line 4649 "cypher_gram.tab.c"
    break;

  case 206: /* expr_literal: FALSE_P  */
#line 2110 "cypher_gram.y"
        {
            (yyval.node) = make_bool_const(false, (yylsp[0]));
        }
#line 4657 "cypher_gram.tab.c"
    break;

  case 207: /* expr_literal: NULL_P  */
#line 2114 "cypher_gram.y"
        {
            (yyval.node) = make_null_const((yylsp[0]));
        }
#line 4665 "cypher_gram.tab.c"
    break;

  case 212: /* map: '{' map_keyval_list_opt '}'  */
#line 2125 "cypher_gram.y"
        {
            cypher_map *n;

            n = make_ag_node(cypher_map);
            n->keyvals = (yyvsp[-1].list);

            (yyval.node) = (Node *)n;
        }
#line 4678 "cypher_gram.tab.c"
    break;

  case 213: /* map_keyval_list_opt: %empty  */
#line 2137 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 4686 "cypher_gram.tab.c"
    break;

  case 215: /* map_keyval_list: property_key_name ':' expr  */
#line 2145 "cypher_gram.y"
        {
            (yyval.list) = list_make2(makeString((yyvsp[-2].string)), (yyvsp[0].node));
        }
#line 4694 "cypher_gram.tab.c"
    break;

  case 216: /* map_keyval_list: map_keyval_list ',' property_key_name ':' expr  */
#line 2149 "cypher_gram.y"
        {
            (yyval.list) = lappend(lappend((yyvsp[-4].list), makeString((yyvsp[-2].string))), (yyvsp[0].node));
        }
#line 4702 "cypher_gram.tab.c"
    break;

  case 217: /* map_projection: expr_var '{' map_projection_elem_list '}'  */
#line 2156 "cypher_gram.y"
        {
            cypher_map_projection *n;

            n = make_ag_node(cypher_map_projection);
            n->map_var = (ColumnRef *)(yyvsp[-3].node);
            n->map_elements = (yyvsp[-1].list);
            n->location = (yylsp[-3]);

            (yyval.node) = (Node *)n;
        }
#line 4717 "cypher_gram.tab.c"
    break;

  case 218: /* map_projection_elem_list: map_projection_elem  */
#line 2170 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 4725 "cypher_gram.tab.c"
    break;

  case 219: /* map_projection_elem_list: map_projection_elem_list ',' map_projection_elem  */
#line 2174 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 4733 "cypher_gram.tab.c"
    break;

  case 220: /* map_projection_elem: '.' property_key_name  */
#line 2181 "cypher_gram.y"
        {
            cypher_map_projection_element *n;

            n = make_ag_node(cypher_map_projection_element);
            n->type = PROPERTY_SELECTOR;
            n->key = (yyvsp[0].string);
            n->value = NULL;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 4749 "cypher_gram.tab.c"
    break;

  case 221: /* map_projection_elem: expr_var  */
#line 2193 "cypher_gram.y"
        {
            cypher_map_projection_element *n;

            n = make_ag_node(cypher_map_projection_element);
            n->type = VARIABLE_SELECTOR;
            n->key = NULL;
            n->value = (Node *)(yyvsp[0].node);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 4765 "cypher_gram.tab.c"
    break;

  case 222: /* map_projection_elem: property_key_name ':' expr  */
#line 2205 "cypher_gram.y"
        {
            cypher_map_projection_element *n;

            n = make_ag_node(cypher_map_projection_element);
            n->type = LITERAL_ENTRY;
            n->key = (yyvsp[-2].string);
            n->value = (Node *)(yyvsp[0].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 4781 "cypher_gram.tab.c"
    break;

  case 223: /* map_projection_elem: '.' '*'  */
#line 2217 "cypher_gram.y"
        {
            cypher_map_projection_element *n;

            n = make_ag_node(cypher_map_projection_element);
            n->type = ALL_PROPERTIES_SELECTOR;
            n->key = NULL;
            n->value = NULL;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 4797 "cypher_gram.tab.c"
    break;

  case 224: /* list: '[' expr_list_opt ']'  */
#line 2232 "cypher_gram.y"
        {
            cypher_list *n;

            n = make_ag_node(cypher_list);
            n->elems = (yyvsp[-1].list);

            (yyval.node) = (Node *)n;
        }
#line 4810 "cypher_gram.tab.c"
    break;

  case 225: /* list_comprehension: '[' expr IN expr ']'  */
#line 2249 "cypher_gram.y"
        {
            /*
             * If the first expr is not a ColumnRef(variable), then the rule
             * should evaluate as an IN operator.
             */
            if (!IsA((yyvsp[-3].node), ColumnRef))
            {
                (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_IN, "=", (yyvsp[-3].node), (yyvsp[-1].node), (yylsp[-2]));
            }

            (yyval.node) = build_list_comprehension_node((yyvsp[-3].node), (yyvsp[-1].node), NULL, NULL, (yylsp[-4]));
        }
#line 4827 "cypher_gram.tab.c"
    break;

  case 226: /* list_comprehension: '[' expr IN expr WHERE expr ']'  */
#line 2262 "cypher_gram.y"
        {
            (yyval.node) = build_list_comprehension_node((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL, (yylsp[-6]));
        }
#line 4835 "cypher_gram.tab.c"
    break;

  case 227: /* list_comprehension: '[' expr IN expr '|' expr ']'  */
#line 2266 "cypher_gram.y"
        {
            (yyval.node) = build_list_comprehension_node((yyvsp[-5].node), (yyvsp[-3].node), NULL, (yyvsp[-1].node), (yylsp[-6]));
        }
#line 4843 "cypher_gram.tab.c"
    break;

  case 228: /* list_comprehension: '[' expr IN expr WHERE expr '|' expr ']'  */
#line 2270 "cypher_gram.y"
        {
            (yyval.node) = build_list_comprehension_node((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node), (yylsp[-8]));
        }
#line 4851 "cypher_gram.tab.c"
    break;

  case 229: /* expr_case: CASE expr expr_case_when_list expr_case_default END_P  */
#line 2277 "cypher_gram.y"
        {
            CaseExpr *n;

            n = makeNode(CaseExpr);
            n->casetype = InvalidOid;
            n->arg = (Expr *) (yyvsp[-3].node);
            n->args = (yyvsp[-2].list);
            n->defresult = (Expr *) (yyvsp[-1].node);
            n->location = (yylsp[-4]);
            (yyval.node) = (Node *) n;
        }
#line 4867 "cypher_gram.tab.c"
    break;

  case 230: /* expr_case: CASE expr_case_when_list expr_case_default END_P  */
#line 2289 "cypher_gram.y"
        {
            CaseExpr *n;

            n = makeNode(CaseExpr);
            n->casetype = InvalidOid;
            n->args = (yyvsp[-2].list);
            n->defresult = (Expr *) (yyvsp[-1].node);
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *) n;
        }
#line 4882 "cypher_gram.tab.c"
    break;

  case 231: /* expr_case_when_list: expr_case_when  */
#line 2303 "cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 4890 "cypher_gram.tab.c"
    break;

  case 232: /* expr_case_when_list: expr_case_when_list expr_case_when  */
#line 2307 "cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 4898 "cypher_gram.tab.c"
    break;

  case 233: /* expr_case_when: WHEN expr THEN expr  */
#line 2314 "cypher_gram.y"
        {
            CaseWhen   *n;

            n = makeNode(CaseWhen);
            n->expr = (Expr *) (yyvsp[-2].node);
            n->result = (Expr *) (yyvsp[0].node);
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *) n;
        }
#line 4912 "cypher_gram.tab.c"
    break;

  case 234: /* expr_case_default: ELSE expr  */
#line 2327 "cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 4920 "cypher_gram.tab.c"
    break;

  case 235: /* expr_case_default: %empty  */
#line 2331 "cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 4928 "cypher_gram.tab.c"
    break;

  case 236: /* expr_var: var_name  */
#line 2338 "cypher_gram.y"
        {
            ColumnRef *n;

            n = makeNode(ColumnRef);
            n->fields = list_make1(makeString((yyvsp[0].string)));
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 4942 "cypher_gram.tab.c"
    break;

  case 237: /* func_name: symbolic_name  */
#line 2354 "cypher_gram.y"
        {
            (yyval.list) = list_make1(makeString((yyvsp[0].string)));
        }
#line 4950 "cypher_gram.tab.c"
    break;

  case 238: /* func_name: safe_keywords '.' symbolic_name  */
#line 2364 "cypher_gram.y"
        {
            (yyval.list) = list_make2(makeString((char *)(yyvsp[-2].keyword)), makeString((yyvsp[0].string)));
        }
#line 4958 "cypher_gram.tab.c"
    break;

  case 240: /* var_name: symbolic_name  */
#line 2375 "cypher_gram.y"
    {
        if (has_internal_default_prefix((yyvsp[0].string)))
        {
            ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                    errmsg("%s is only for internal use", AGE_DEFAULT_PREFIX),
                    ag_scanner_errposition((yylsp[0]), scanner)));
        }
    }
#line 4972 "cypher_gram.tab.c"
    break;

  case 241: /* var_name_opt: %empty  */
#line 2388 "cypher_gram.y"
        {
            (yyval.string) = NULL;
        }
#line 4980 "cypher_gram.tab.c"
    break;

  case 247: /* schema_name: reserved_keyword  */
#line 2409 "cypher_gram.y"
        {
            /* we don't need to copy it, as it already has been */
            (yyval.string) = (char *) (yyvsp[0].keyword);
        }
#line 4989 "cypher_gram.tab.c"
    break;

  case 250: /* generic_type: type_name opt_type_modifiers  */
#line 2425 "cypher_gram.y"
        {
            TypeName *typname;

            typname = makeTypeName((yyvsp[-1].string));
            typname->typmods = (yyvsp[0].list);
            typname->location = (yylsp[-1]);

            (yyval.node) = (Node *) typname;
        }
#line 5003 "cypher_gram.tab.c"
    break;

  case 251: /* opt_type_modifiers: '(' expr_list ')'  */
#line 2438 "cypher_gram.y"
        {
            (yyval.list) = (yyvsp[-1].list);
        }
#line 5011 "cypher_gram.tab.c"
    break;

  case 252: /* opt_type_modifiers: %empty  */
#line 2442 "cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 5019 "cypher_gram.tab.c"
    break;

  case 253: /* any_operator: all_op  */
#line 2452 "cypher_gram.y"
            {
                (yyval.list) = list_make1(makeString((yyvsp[0].string)));
            }
#line 5027 "cypher_gram.tab.c"
    break;

  case 254: /* any_operator: symbolic_name  */
#line 2456 "cypher_gram.y"
            {
                (yyval.list) = list_make1(makeString((yyvsp[0].string)));
            }
#line 5035 "cypher_gram.tab.c"
    break;

  case 255: /* any_operator: schema_name '.' any_operator  */
#line 2460 "cypher_gram.y"
            {
                (yyval.list) = lcons(makeString((yyvsp[-2].string)), (yyvsp[0].list));
            }
#line 5043 "cypher_gram.tab.c"
    break;

  case 258: /* math_op: '+'  */
#line 2471 "cypher_gram.y"
                                                                                { (yyval.string) = "+"; }
#line 5049 "cypher_gram.tab.c"
    break;

  case 259: /* math_op: '-'  */
#line 2472 "cypher_gram.y"
                                                                        { (yyval.string) = "-"; }
#line 5055 "cypher_gram.tab.c"
    break;

  case 260: /* math_op: '*'  */
#line 2473 "cypher_gram.y"
                                                                        { (yyval.string) = "*"; }
#line 5061 "cypher_gram.tab.c"
    break;

  case 261: /* math_op: '/'  */
#line 2474 "cypher_gram.y"
                                                                        { (yyval.string) = "/"; }
#line 5067 "cypher_gram.tab.c"
    break;

  case 262: /* math_op: '%'  */
#line 2475 "cypher_gram.y"
                                                                        { (yyval.string) = "%"; }
#line 5073 "cypher_gram.tab.c"
    break;

  case 263: /* math_op: '^'  */
#line 2476 "cypher_gram.y"
                                                                        { (yyval.string) = "^"; }
#line 5079 "cypher_gram.tab.c"
    break;

  case 264: /* math_op: '<'  */
#line 2477 "cypher_gram.y"
                                                                        { (yyval.string) = "<"; }
#line 5085 "cypher_gram.tab.c"
    break;

  case 265: /* math_op: '>'  */
#line 2478 "cypher_gram.y"
                                                                        { (yyval.string) = ">"; }
#line 5091 "cypher_gram.tab.c"
    break;

  case 266: /* math_op: '='  */
#line 2479 "cypher_gram.y"
                                                                        { (yyval.string) = "="; }
#line 5097 "cypher_gram.tab.c"
    break;

  case 267: /* math_op: LT_EQ  */
#line 2480 "cypher_gram.y"
                                                                { (yyval.string) = "<="; }
#line 5103 "cypher_gram.tab.c"
    break;

  case 268: /* math_op: GT_EQ  */
#line 2481 "cypher_gram.y"
                                                            { (yyval.string) = ">="; }
#line 5109 "cypher_gram.tab.c"
    break;

  case 269: /* math_op: NOT_EQ  */
#line 2482 "cypher_gram.y"
                                                                { (yyval.string) = "<>"; }
#line 5115 "cypher_gram.tab.c"
    break;

  case 270: /* qual_op: OP  */
#line 2487 "cypher_gram.y"
            {
                (yyval.list) = list_make1(makeString((yyvsp[0].string)));
            }
#line 5123 "cypher_gram.tab.c"
    break;

  case 271: /* qual_op: OPERATOR '(' any_operator ')'  */
#line 2491 "cypher_gram.y"
            {
                (yyval.list) = (yyvsp[-1].list);
            }
#line 5131 "cypher_gram.tab.c"
    break;

  case 272: /* safe_keywords: ALL  */
#line 2502 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5137 "cypher_gram.tab.c"
    break;

  case 273: /* safe_keywords: ANALYZE  */
#line 2503 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 5143 "cypher_gram.tab.c"
    break;

  case 274: /* safe_keywords: AND  */
#line 2504 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5149 "cypher_gram.tab.c"
    break;

  case 275: /* safe_keywords: AS  */
#line 2505 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 5155 "cypher_gram.tab.c"
    break;

  case 276: /* safe_keywords: ASC  */
#line 2506 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5161 "cypher_gram.tab.c"
    break;

  case 277: /* safe_keywords: ASCENDING  */
#line 2507 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 9); }
#line 5167 "cypher_gram.tab.c"
    break;

  case 278: /* safe_keywords: BY  */
#line 2508 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 5173 "cypher_gram.tab.c"
    break;

  case 279: /* safe_keywords: CALL  */
#line 2509 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5179 "cypher_gram.tab.c"
    break;

  case 280: /* safe_keywords: CASE  */
#line 2510 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5185 "cypher_gram.tab.c"
    break;

  case 281: /* safe_keywords: COALESCE  */
#line 2511 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 5191 "cypher_gram.tab.c"
    break;

  case 282: /* safe_keywords: CONTAINS  */
#line 2512 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 5197 "cypher_gram.tab.c"
    break;

  case 283: /* safe_keywords: COUNT  */
#line 2513 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword) ,5); }
#line 5203 "cypher_gram.tab.c"
    break;

  case 284: /* safe_keywords: CREATE  */
#line 2514 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5209 "cypher_gram.tab.c"
    break;

  case 285: /* safe_keywords: DELETE  */
#line 2515 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5215 "cypher_gram.tab.c"
    break;

  case 286: /* safe_keywords: DESC  */
#line 2516 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5221 "cypher_gram.tab.c"
    break;

  case 287: /* safe_keywords: DESCENDING  */
#line 2517 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 10); }
#line 5227 "cypher_gram.tab.c"
    break;

  case 288: /* safe_keywords: DETACH  */
#line 2518 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5233 "cypher_gram.tab.c"
    break;

  case 289: /* safe_keywords: DISTINCT  */
#line 2519 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 5239 "cypher_gram.tab.c"
    break;

  case 290: /* safe_keywords: ELSE  */
#line 2520 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5245 "cypher_gram.tab.c"
    break;

  case 291: /* safe_keywords: ENDS  */
#line 2521 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5251 "cypher_gram.tab.c"
    break;

  case 292: /* safe_keywords: EXISTS  */
#line 2522 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5257 "cypher_gram.tab.c"
    break;

  case 293: /* safe_keywords: EXPLAIN  */
#line 2523 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 5263 "cypher_gram.tab.c"
    break;

  case 294: /* safe_keywords: IN  */
#line 2524 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 5269 "cypher_gram.tab.c"
    break;

  case 295: /* safe_keywords: IS  */
#line 2525 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 5275 "cypher_gram.tab.c"
    break;

  case 296: /* safe_keywords: LIMIT  */
#line 2526 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5281 "cypher_gram.tab.c"
    break;

  case 297: /* safe_keywords: MATCH  */
#line 2527 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5287 "cypher_gram.tab.c"
    break;

  case 298: /* safe_keywords: MERGE  */
#line 2528 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5293 "cypher_gram.tab.c"
    break;

  case 299: /* safe_keywords: NOT  */
#line 2529 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5299 "cypher_gram.tab.c"
    break;

  case 300: /* safe_keywords: OPERATOR  */
#line 2530 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 5305 "cypher_gram.tab.c"
    break;

  case 301: /* safe_keywords: OPTIONAL  */
#line 2531 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 5311 "cypher_gram.tab.c"
    break;

  case 302: /* safe_keywords: OR  */
#line 2532 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 5317 "cypher_gram.tab.c"
    break;

  case 303: /* safe_keywords: ORDER  */
#line 2533 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 5323 "cypher_gram.tab.c"
    break;

  case 304: /* safe_keywords: REMOVE  */
#line 2534 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5329 "cypher_gram.tab.c"
    break;

  case 305: /* safe_keywords: RETURN  */
#line 2535 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5335 "cypher_gram.tab.c"
    break;

  case 306: /* safe_keywords: SET  */
#line 2536 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5341 "cypher_gram.tab.c"
    break;

  case 307: /* safe_keywords: SKIP  */
#line 2537 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5347 "cypher_gram.tab.c"
    break;

  case 308: /* safe_keywords: STARTS  */
#line 2538 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5353 "cypher_gram.tab.c"
    break;

  case 309: /* safe_keywords: THEN  */
#line 2539 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5359 "cypher_gram.tab.c"
    break;

  case 310: /* safe_keywords: UNION  */
#line 2540 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 5365 "cypher_gram.tab.c"
    break;

  case 311: /* safe_keywords: WHEN  */
#line 2541 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5371 "cypher_gram.tab.c"
    break;

  case 312: /* safe_keywords: VERBOSE  */
#line 2542 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 5377 "cypher_gram.tab.c"
    break;

  case 313: /* safe_keywords: WHERE  */
#line 2543 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 5383 "cypher_gram.tab.c"
    break;

  case 314: /* safe_keywords: WITH  */
#line 2544 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 5389 "cypher_gram.tab.c"
    break;

  case 315: /* safe_keywords: XOR  */
#line 2545 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 5395 "cypher_gram.tab.c"
    break;

  case 316: /* safe_keywords: YIELD  */
#line 2546 "cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 5401 "cypher_gram.tab.c"
    break;

  case 317: /* conflicted_keywords: END_P  */
#line 2550 "cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 5407 "cypher_gram.tab.c"
    break;

  case 318: /* conflicted_keywords: FALSE_P  */
#line 2551 "cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 5413 "cypher_gram.tab.c"
    break;

  case 319: /* conflicted_keywords: NULL_P  */
#line 2552 "cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5419 "cypher_gram.tab.c"
    break;

  case 320: /* conflicted_keywords: TRUE_P  */
#line 2553 "cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 5425 "cypher_gram.tab.c"
    break;


#line 5429 "cypher_gram.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, extra, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, extra);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, extra);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, extra, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, extra);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, extra);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2556 "cypher_gram.y"


/*
 * logical operators
 */

static Node *make_or_expr(Node *lexpr, Node *rexpr, int location)
{
    /* flatten "a OR b OR c ..." to a single BoolExpr on sight */
    if (IsA(lexpr, BoolExpr))
    {
        BoolExpr *bexpr = (BoolExpr *)lexpr;

        if (bexpr->boolop == OR_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)makeBoolExpr(OR_EXPR, list_make2(lexpr, rexpr), location);
}

static Node *make_and_expr(Node *lexpr, Node *rexpr, int location)
{
    /* flatten "a AND b AND c ..." to a single BoolExpr on sight */
    if (IsA(lexpr, BoolExpr))
    {
        BoolExpr *bexpr = (BoolExpr *)lexpr;

        if (bexpr->boolop == AND_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)makeBoolExpr(AND_EXPR, list_make2(lexpr, rexpr), location);
}

static Node *make_xor_expr(Node *lexpr, Node *rexpr, int location)
{
    Expr *aorb;
    Expr *notaandb;

    /* XOR is (A OR B) AND (NOT (A AND B)) */
    aorb = makeBoolExpr(OR_EXPR, list_make2(lexpr, rexpr), location);

    notaandb = makeBoolExpr(AND_EXPR, list_make2(lexpr, rexpr), location);
    notaandb = makeBoolExpr(NOT_EXPR, list_make1(notaandb), location);

    return (Node *)makeBoolExpr(AND_EXPR, list_make2(aorb, notaandb), location);
}

static Node *make_not_expr(Node *expr, int location)
{
    return (Node *)makeBoolExpr(NOT_EXPR, list_make1(expr), location);
}

/*
 * chained expression comparison operators
 */

static Node *make_cypher_comparison_aexpr(A_Expr_Kind kind, char *name,
                 Node *lexpr, Node *rexpr, int location)
{
    cypher_comparison_aexpr *a = make_ag_node(cypher_comparison_aexpr);

    a->kind = kind;
    a->name = list_make1(makeString((char *) name));
    a->lexpr = lexpr;
    a->rexpr = rexpr;
    a->location = location;
    return (Node *)a;
}

static Node *make_cypher_comparison_boolexpr(BoolExprType boolop, List *args, int location)
{
    cypher_comparison_boolexpr *b = make_ag_node(cypher_comparison_boolexpr);

    b->boolop = boolop;
    b->args = args;
    b->location = location;
    return (Node *)b;
}

static Node *make_comparison_and_expr(Node *lexpr, Node *rexpr, int location)
{
    /* flatten "a AND b AND c ..." to a single BoolExpr on sight */
    if (is_ag_node(lexpr, cypher_comparison_boolexpr))
    {
        cypher_comparison_boolexpr *bexpr = (cypher_comparison_boolexpr *)lexpr;

        if (bexpr->boolop == AND_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)make_cypher_comparison_boolexpr(AND_EXPR, list_make2(lexpr, rexpr), location);
}

/*
 * arithmetic operators
 */

static Node *do_negate(Node *n, int location)
{
    if (IsA(n, A_Const))
    {
        A_Const *c = (A_Const *)n;

        /* report the constant's location as that of the '-' sign */
        c->location = location;

        if (c->val.ival.type == T_Integer)
        {
            c->val.ival.ival = -c->val.ival.ival;
            return n;
        }
        else if (c->val.fval.type == T_Float)
        {
            do_negate_float(&c->val.fval);
            return n;
        }
    }

    return (Node *)makeSimpleA_Expr(AEXPR_OP, "-", NULL, n, location);
}

static void do_negate_float(Float *v)
{
    char *oldval = NULL;

    Assert(v != NULL);
    Assert(IsA(v, Float));

    oldval = v->fval;

    if (*oldval == '+')
    {
        oldval++;
    }
    if (*oldval == '-')
    {
        v->fval = oldval+1;    /* just strip the '-' */
    }
    else
    {
        v->fval = psprintf("-%s", oldval);
    }
}

/*
 * indirection
 */

static Node *append_indirection(Node *expr, Node *selector)
{
    A_Indirection *indir;

    if (IsA(expr, A_Indirection))
    {
        indir = (A_Indirection *)expr;
        indir->indirection = lappend(indir->indirection, selector);

        return expr;
    }
    else
    {
        indir = makeNode(A_Indirection);
        indir->arg = expr;
        indir->indirection = list_make1(selector);

        return (Node *)indir;
    }
}

/*
 * literals
 */

static Node *make_int_const(int i, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.ival.type = T_Integer;
    n->val.ival.ival = i;
    n->location = location;

    return (Node *) n;
}

static Node *make_float_const(char *s, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.fval.type = T_Float;
    n->val.fval.fval = s;
    n->location = location;

    return (Node *) n;
}

static Node *make_string_const(char *s, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.sval.type = T_String;
    n->val.sval.sval = s;
    n->location = location;

    return (Node *) n;
}

static Node *make_bool_const(bool b, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.boolval.type = T_Boolean;
    n->val.boolval.boolval = b;
    n->location = location;

    return (Node *) n;
}

static Node *make_null_const(int location)
{
    A_Const *n = makeNode(A_Const);

    n->isnull = true;
    n->location = location;

    return (Node *) n;
}

/*
 * typecast
 */
static Node *make_typecast_expr(Node *expr, Node *typname, int location)
{
    cypher_typecast *node;

    node = make_ag_node(cypher_typecast);
    node->expr = expr;
    node->typname = (TypeName *) typname;
    node->location = location;

    return (Node *)node;
}

/*
 * functions
 */
static Node *make_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);

            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    return (Node *)fnode;
}

/*
 * function to make a function that has received a star-argument
 */
static Node *make_star_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
            fnode->agg_star = true;

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);

            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    fnode->agg_star = true;
    return (Node *)fnode;
}

/*
 * function to make a function that has received a distinct keyword
 */
static Node *make_distinct_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
            fnode->agg_order = NIL;
            fnode->agg_distinct = true;

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);
            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    fnode->agg_order = NIL;
    fnode->agg_distinct = true;
    return (Node *)fnode;
}

/*
 * helper function to wrap pg_function in the appropiate typecast function to
 * interface with AGE components
 */
static FuncCall *node_to_agtype(Node * fnode, char *type, int location)
{
    List *funcname = list_make1(makeString("ag_catalog"));

    if (pg_strcasecmp(type, "float") == 0)
    {
        funcname = lappend(funcname, makeString("float8_to_agtype"));
    }
    else if (pg_strcasecmp(type, "int") == 0 ||
             pg_strcasecmp(type, "integer") == 0)
    {
        funcname = lappend(funcname, makeString("int8_to_agtype"));
    }
    else if (pg_strcasecmp(type, "bool") == 0 ||
             pg_strcasecmp(type, "boolean") == 0)
    {
        funcname = lappend(funcname, makeString("bool_to_agtype"));
    }
    else if (pg_strcasecmp(type, "agtype[]") == 0)
    {
        funcname = lappend(funcname, makeString("agtype_array_to_agtype"));
    }
    else
    {
        ereport(ERROR,
            (errmsg_internal("type \'%s\' not supported by AGE functions",
                             type)));
    }

    return makeFuncCall(funcname, list_make1(fnode), COERCE_EXPLICIT_CAST, location);
}

/* function to create a unique name given a prefix */
static char *create_unique_name(char *prefix_name)
{
    char *name = NULL;
    char *prefix = NULL;
    uint nlen = 0;
    unsigned long unique_number = 0;

    /* get a unique number */
    unique_number = get_a_unique_number();

    /* was a valid prefix supplied */
    if (prefix_name == NULL || strlen(prefix_name) <= 0)
    {
        prefix = pnstrdup(UNIQUE_NAME_NULL_PREFIX,
                          strlen(UNIQUE_NAME_NULL_PREFIX));
    }
    else
    {
        prefix = prefix_name;
    }

    /* get the length of the combined string */
    nlen = snprintf(NULL, 0, "%s_%lu", prefix, unique_number);

    /* allocate the space */
    name = palloc0(nlen + 1);

    /* create the name */
    snprintf(name, nlen + 1, "%s_%lu", prefix, unique_number);

    /* if we created the prefix, we need to free it */
    if (prefix_name == NULL || strlen(prefix_name) <= 0)
    {
        pfree_if_not_null(prefix);
    }

    return name;
}

/* function to check if given string has internal alias as prefix */
static bool has_internal_default_prefix(char *str)
{
    return strncmp(AGE_DEFAULT_PREFIX, str, strlen(AGE_DEFAULT_PREFIX)) == 0;
}

/* function to return a unique unsigned long number */
static unsigned long get_a_unique_number(void)
{
    /* STATIC VARIABLE unique_counter for number uniqueness */
    static unsigned long unique_counter = 0;

    return unique_counter++;
}

/*set operation function node to make a set op node*/
static Node *make_set_op(SetOperation op, bool all_or_distinct, List *larg,
                         List *rarg)
{
    cypher_return *n = make_ag_node(cypher_return);

    n->op = op;
    n->all_or_distinct = all_or_distinct;
    n->larg = (List *) larg;
    n->rarg = (List *) rarg;
    return (Node *) n;
}

/*set operation function node to make a returnless set op node for subqueries*/
static Node *make_subquery_returnless_set_op(SetOperation op, bool all_or_distinct, List *larg,
                         List *rarg)
{
    cypher_return *n = make_ag_node(cypher_return);

    n->op = op;
    n->all_or_distinct = all_or_distinct;
    n->returnless_union = true;
    n->larg = (List *) larg;
    n->rarg = (List *) rarg;
    return (Node *) n;
}

/* check if A_Expr is a comparison expression */
static bool is_A_Expr_a_comparison_operation(cypher_comparison_aexpr *a)
{
    String *v = NULL;
    char *opr_name = NULL;

    /* we don't support qualified comparison operators */
    if (list_length(a->name) != 1)
    {
        ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                 errmsg("qualified comparison operator names are not permitted")));
    }

    /* get the value and verify that it is a string */
    v = linitial(a->name);
    Assert(v->type == T_String);

    /* get the string value */
    opr_name = v->sval;

    /* verify it is a comparison operation */
    if (strcmp(opr_name, "<") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, ">") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "<=") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "=>") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "=") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "<>") == 0)
    {
        return true;
    }

    return false;
}

/*
 * Helper function to build the comparison operator expression. It will also
 * build a chained comparison operator expression if it detects a chained
 * comparison.
 */
static Node *build_comparison_expression(Node *left_grammar_node,
                                         Node *right_grammar_node,
                                         char *opr_name, int location)
{
    Node *result_expr = NULL;

    Assert(left_grammar_node != NULL);
    Assert(right_grammar_node != NULL);
    Assert(opr_name != NULL);

    /*
     * Case 1:
     *    If the left expression is an A_Expr and it is also a
     *    comparison, then this is part of a chained comparison. In this
     *    specific case, the second chained element.
     */
    if (is_ag_node(left_grammar_node, cypher_comparison_aexpr) &&
        is_A_Expr_a_comparison_operation((cypher_comparison_aexpr *)left_grammar_node))
    {
        cypher_comparison_aexpr *aexpr = NULL;
        Node *lexpr = NULL;
        Node *n = NULL;

        /* get the A_Expr on the left side */
        aexpr = (cypher_comparison_aexpr *)left_grammar_node;
        /* get its rexpr which will be our lexpr */
        lexpr = aexpr->rexpr;
        /* build our comparison operator */
        n = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name, lexpr,
                                     right_grammar_node, location);

        /* now add it (AND) to the other comparison */
        result_expr = make_comparison_and_expr(left_grammar_node, n, location);
    }

    /*
     * Case 2:
     *    If the left expression is a boolean AND and its right most
     *    expression is an A_Expr and a comparison, then this is part of
     *    a chained comparison. In this specific case, the third and
     *    beyond chained element.
     */
    else if (is_ag_node(left_grammar_node, cypher_comparison_boolexpr) &&
        ((cypher_comparison_boolexpr*)left_grammar_node)->boolop == AND_EXPR)
    {
        cypher_comparison_boolexpr *bexpr = NULL;
        Node *last = NULL;

        /* cast the left to a boolean */
        bexpr = (cypher_comparison_boolexpr *)left_grammar_node;
        /* extract the last node - ANDs are chained in a flat list */
        last = llast(bexpr->args);

        /* is the last node an A_Expr and a comparison operator */
        if (is_ag_node(last, cypher_comparison_aexpr) &&
            is_A_Expr_a_comparison_operation((cypher_comparison_aexpr *)last))
        {
            cypher_comparison_aexpr *aexpr = NULL;
            Node *lexpr = NULL;
            Node *n = NULL;

            /* get the last expressions right expression */
            aexpr = (cypher_comparison_aexpr *) last;
            lexpr = aexpr->rexpr;
            /* make our comparison operator */
            n = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name, lexpr,
                                         right_grammar_node, location);

            /* now add it (AND) to the other comparisons */
            result_expr = make_comparison_and_expr(left_grammar_node, n, location);
        }
    }


    /*
     * Case 3:
     *    The left expression isn't a chained comparison. So, treat
     *    it as a regular comparison expression. This is usually an initial
     *    comparison expression.
     */
    else if (result_expr == NULL)
    {
        result_expr = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name,
                                               left_grammar_node,
                                               right_grammar_node, location);
    }

    return result_expr;
}

static cypher_relationship *build_VLE_relation(List *left_arg,
                                               cypher_relationship *cr,
                                               Node *right_arg,
                                               int left_arg_location,
                                               int cr_location)
{
    ColumnRef *cref = NULL;
    A_Indices *ai = NULL;
    List *args = NIL;
    List *eargs = NIL;
    List *fname = NIL;
    cypher_node *cnl = NULL;
    cypher_node *cnr = NULL;
    Node *node = NULL;
    int length = 0;
    unsigned long unique_number = 0;
    int location = 0;

    /* get a unique number to identify this VLE node */
    unique_number = get_a_unique_number();

    /* get the location */
    location = cr->location;

    /* get the left and right cypher_nodes */
    cnl = (cypher_node*)llast(left_arg);
    cnr = (cypher_node*)right_arg;

    /* get the length of the left path */
    length = list_length(left_arg);

    /*
     * If the left name is NULL and the left path is greater than 1
     * If the left name is NULL and the left label is not NULL
     * If the left name is NULL and the left props is not NULL
     * If the left name is NULL and the right name is not NULL
     * If the left name is NULL and the right label is not NULL
     * If the left name is NULL and the right props is not NULL
     * we need to create a variable name for the left node.
     */
    if ((cnl->name == NULL && length > 1) ||
        (cnl->name == NULL && cnl->label != NULL) ||
        (cnl->name == NULL && cnl->props != NULL) ||
        (cnl->name == NULL && cnr->name != NULL) ||
        (cnl->name == NULL && cnr->label != NULL) ||
        (cnl->name == NULL && cnr->props != NULL))
    {
        cnl->name = create_unique_name(AGE_DEFAULT_PREFIX"vle_function_start_var");
    }

    /* add in the start vertex as a ColumnRef if necessary */
    if (cnl->name != NULL)
    {
        cref = makeNode(ColumnRef);
        cref->fields = list_make2(makeString(cnl->name), makeString("id"));
        cref->location = left_arg_location;
        args = lappend(args, cref);
    }
    /*
     * If there aren't any variables in the VLE path, we can use
     * the FROM_ALL algorithm.
     */
    else
    {
        args = lappend(args, make_null_const(-1));
    }

    /*
     * Create a variable name for the end vertex if we have a label
     * name or props but we don't have a variable name.
     *
     * For example: ()-[*]-(:label) or ()-[*]-({name: "John"})
     *
     * We need this so the addition of match_vle_terminal_edge is
     * done in the transform phase.
     */
    if (cnr->name == NULL &&
        (cnr->label != NULL || cnr->props != NULL))
    {
        cnr->name = create_unique_name(AGE_DEFAULT_PREFIX"vle_function_end_var");
    }
    /*
     * We need a NULL for the target vertex in the VLE match to
     * force the dfs_find_a_path_from algorithm. However, for now,
     * the default will be to only do that when a target isn't
     * supplied.
     *
     * TODO: We will likely want to force it to use
     * dfs_find_a_path_from.
     */
    if (cnl->name == NULL && cnr->name != NULL)
    {
        cref = makeNode(ColumnRef);
        cref->fields = list_make2(makeString(cnr->name), makeString("id"));
        cref->location = left_arg_location;
        args = lappend(args, cref);
    }
    else
    {
        args = lappend(args, make_null_const(-1));
    }

    /* build the required edge arguments */
    if (cr->label == NULL)
    {
        eargs = lappend(eargs, make_null_const(location));
    }
    else
    {
        eargs = lappend(eargs, make_string_const(cr->label, location));
    }
    if (cr->props == NULL)
    {
        eargs = lappend(eargs, make_null_const(location));
    }
    else
    {
        eargs = lappend(eargs, cr->props);
    }
    /* build the edge function name (schema.funcname) */
    fname = list_make2(makeString("ag_catalog"),
                       makeString("age_build_vle_match_edge"));
    /* build the edge function node */
    node = make_function_expr(fname, eargs, location);
    /* add in the edge*/
    args = lappend(args, node);
    /* add in the lidx and uidx range as Const */
    ai = (A_Indices*)cr->varlen;
    if (ai == NULL || ai->lidx == NULL)
    {
        args = lappend(args, make_null_const(location));
    }
    else
    {
        args = lappend(args, ai->lidx);
    }
    if (ai == NULL || ai->uidx == NULL)
    {
        args = lappend(args, make_null_const(location));
    }
    else
    {
        args = lappend(args, ai->uidx);
    }
    /* add in the direction as Const */
    args = lappend(args, make_int_const(cr->dir, cr_location));

    /* add in the unique number used to identify this VLE node */
    args = lappend(args, make_int_const(unique_number, -1));

    /* build the VLE function node */
    cr->varlen = make_function_expr(list_make1(makeString("vle")), args,
                                    cr_location);
    /* return the VLE relation node */
    return cr;
}

/* helper function to build a list_comprehension grammar node */
static Node *build_list_comprehension_node(Node *var, Node *expr,
                                           Node *where, Node *mapping_expr,
                                           int location)
{
    SubLink *sub;
    String *val;
    ColumnRef *cref = NULL;
    cypher_list_comprehension *list_comp = NULL;

    if (!IsA(var, ColumnRef))
    {
        ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                 errmsg("Syntax error at or near IN")));
    }

    cref = (ColumnRef *)var;
    val = linitial(cref->fields);
    if (!IsA(val, String))
    {
        ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                 errmsg("Invalid list comprehension variable name")));
    }

    /* build the list comprehension node */
    list_comp = make_ag_node(cypher_list_comprehension);
    list_comp->varname = val->sval;
    list_comp->expr = expr;
    list_comp->where = where;
    list_comp->mapping_expr = (mapping_expr != NULL) ? mapping_expr :
                                                       (Node *) cref;

    /*
     * Build an ARRAY sublink and attach list_comp as sub-select,
     * it will be transformed in to query tree by us and reattached for 
     * pg to process.
     */
    sub = makeNode(SubLink);
    sub->subLinkType = ARRAY_SUBLINK;
    sub->subLinkId = 0;
    sub->testexpr = NULL;
    sub->subselect = (Node *)list_comp;
    sub->location = location;

    return (Node *) node_to_agtype((Node *)sub, "agtype[]", location);
}

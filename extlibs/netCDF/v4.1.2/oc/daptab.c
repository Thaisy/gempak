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
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse dapparse
#define yylex   daplex
#define yyerror daperror
#define yylval  daplval
#define yychar  dapchar
#define yydebug dapdebug
#define yynerrs dapnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SCAN_ALIAS = 258,
     SCAN_ARRAY = 259,
     SCAN_ATTR = 260,
     SCAN_BYTE = 261,
     SCAN_CODE = 262,
     SCAN_DATASET = 263,
     SCAN_DATA = 264,
     SCAN_ERROR = 265,
     SCAN_FLOAT32 = 266,
     SCAN_FLOAT64 = 267,
     SCAN_GRID = 268,
     SCAN_INT16 = 269,
     SCAN_INT32 = 270,
     SCAN_MAPS = 271,
     SCAN_MESSAGE = 272,
     SCAN_SEQUENCE = 273,
     SCAN_STRING = 274,
     SCAN_STRUCTURE = 275,
     SCAN_UINT16 = 276,
     SCAN_UINT32 = 277,
     SCAN_URL = 278,
     SCAN_WORD = 279,
     SCAN_PTYPE = 280,
     SCAN_PROG = 281
   };
#endif
/* Tokens.  */
#define SCAN_ALIAS 258
#define SCAN_ARRAY 259
#define SCAN_ATTR 260
#define SCAN_BYTE 261
#define SCAN_CODE 262
#define SCAN_DATASET 263
#define SCAN_DATA 264
#define SCAN_ERROR 265
#define SCAN_FLOAT32 266
#define SCAN_FLOAT64 267
#define SCAN_GRID 268
#define SCAN_INT16 269
#define SCAN_INT32 270
#define SCAN_MAPS 271
#define SCAN_MESSAGE 272
#define SCAN_SEQUENCE 273
#define SCAN_STRING 274
#define SCAN_STRUCTURE 275
#define SCAN_UINT16 276
#define SCAN_UINT32 277
#define SCAN_URL 278
#define SCAN_WORD 279
#define SCAN_PTYPE 280
#define SCAN_PROG 281




/* Copy the first part of user declarations.  */
#line 11 "dap.y"
#include "dapparselex.h"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 168 "dap.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    29,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    16,    18,    20,    22,
      24,    30,    31,    34,    39,    47,    54,    66,    68,    70,
      72,    74,    76,    78,    80,    82,    84,    86,    87,    90,
      94,   100,   105,   107,   109,   111,   113,   117,   119,   120,
     123,   126,   131,   136,   141,   146,   151,   156,   161,   166,
     171,   176,   178,   180,   184,   186,   190,   192,   196,   198,
     202,   204,   208,   210,   214,   216,   220,   222,   226,   228,
     232,   234,   236,   240,   248,   249,   254,   255,   260,   261,
     266,   267,   272,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   312,   314
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    40,    -1,    37,    40,     9,    -1,
      38,    48,    -1,    39,    63,    -1,     1,    -1,     8,    -1,
       5,    -1,    10,    -1,    27,    41,    28,    46,    29,    -1,
      -1,    41,    42,    -1,    43,    47,    44,    29,    -1,    20,
      27,    41,    28,    47,    44,    29,    -1,    18,    27,    41,
      28,    47,    29,    -1,    13,    27,     4,    30,    42,    16,
      30,    41,    28,    47,    29,    -1,     1,    -1,     6,    -1,
      14,    -1,    21,    -1,    15,    -1,    22,    -1,    11,    -1,
      12,    -1,    23,    -1,    19,    -1,    -1,    44,    45,    -1,
      31,    24,    32,    -1,    31,    68,    33,    24,    32,    -1,
      31,    33,    24,    32,    -1,     1,    -1,    47,    -1,     1,
      -1,    68,    -1,    27,    49,    28,    -1,     1,    -1,    -1,
      49,    50,    -1,    62,    29,    -1,     6,    68,    51,    29,
      -1,    14,    68,    52,    29,    -1,    21,    68,    53,    29,
      -1,    15,    68,    54,    29,    -1,    22,    68,    55,    29,
      -1,    11,    68,    56,    29,    -1,    12,    68,    57,    29,
      -1,    19,    68,    58,    29,    -1,    23,    68,    59,    29,
      -1,    68,    27,    49,    28,    -1,     1,    -1,    24,    -1,
      51,    34,    24,    -1,    24,    -1,    52,    34,    24,    -1,
      24,    -1,    53,    34,    24,    -1,    24,    -1,    54,    34,
      24,    -1,    24,    -1,    55,    34,    24,    -1,    24,    -1,
      56,    34,    24,    -1,    24,    -1,    57,    34,    24,    -1,
      61,    -1,    58,    34,    61,    -1,    60,    -1,    59,    34,
      60,    -1,    24,    -1,    24,    -1,     3,    24,    24,    -1,
      27,    64,    65,    66,    67,    28,    29,    -1,    -1,     7,
      33,    24,    29,    -1,    -1,    17,    33,    24,    29,    -1,
      -1,    25,    33,    24,    29,    -1,    -1,    26,    33,    24,
      29,    -1,    24,    -1,     3,    -1,     4,    -1,     5,    -1,
       6,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,     7,    -1,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    51,    55,    59,    63,
      71,    77,    78,    84,    86,    88,    90,    93,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   111,   112,   116,
     117,   118,   119,   124,   125,   129,   132,   133,   138,   139,
     143,   144,   146,   148,   150,   152,   154,   156,   158,   160,
     162,   163,   168,   169,   173,   174,   178,   179,   183,   184,
     188,   189,   192,   193,   196,   197,   200,   201,   205,   206,
     210,   214,   224,   228,   232,   232,   233,   233,   234,   234,
     235,   235,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCAN_ALIAS", "SCAN_ARRAY", "SCAN_ATTR",
  "SCAN_BYTE", "SCAN_CODE", "SCAN_DATASET", "SCAN_DATA", "SCAN_ERROR",
  "SCAN_FLOAT32", "SCAN_FLOAT64", "SCAN_GRID", "SCAN_INT16", "SCAN_INT32",
  "SCAN_MAPS", "SCAN_MESSAGE", "SCAN_SEQUENCE", "SCAN_STRING",
  "SCAN_STRUCTURE", "SCAN_UINT16", "SCAN_UINT32", "SCAN_URL", "SCAN_WORD",
  "SCAN_PTYPE", "SCAN_PROG", "'{'", "'}'", "';'", "':'", "'['", "']'",
  "'='", "','", "$accept", "start", "dataset", "attr", "err",
  "datasetbody", "declarations", "declaration", "base_type", "array_decls",
  "array_decl", "datasetname", "var_name", "attributebody", "attr_list",
  "attribute", "bytes", "int16", "uint16", "int32", "uint32", "float32",
  "float64", "strs", "urls", "url", "str_or_id", "alias", "errorbody",
  "errorcode", "errormsg", "errorptype", "errorprog", "name", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   123,   125,    59,
      58,    91,    93,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    37,    38,    39,
      40,    41,    41,    42,    42,    42,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    45,
      45,    45,    45,    46,    46,    47,    48,    48,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    61,    62,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     1,     1,     1,     1,
       5,     0,     2,     4,     7,     6,    11,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     3,
       5,     4,     1,     1,     1,     1,     3,     1,     0,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     3,     7,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     8,     7,     9,     0,     0,     0,     0,     1,
      11,     2,    37,    38,     4,    74,     5,     0,     3,     0,
       0,    76,    17,    18,    23,    24,     0,    19,    21,     0,
      26,     0,    20,    22,    25,     0,    12,     0,    51,    83,
      84,    85,    86,   102,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   103,    96,    97,    98,    99,   100,   101,
      82,    36,    39,     0,     0,     0,     0,    78,     0,    11,
      11,    34,    83,    86,    90,    91,    93,    94,    97,    99,
     100,   101,     0,    33,    35,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    38,     0,     0,
       0,    80,     0,     0,     0,    10,     0,    72,    52,     0,
      62,     0,    64,     0,    54,     0,    58,     0,    71,     0,
      66,    56,     0,    60,     0,    70,     0,    68,     0,    75,
       0,     0,     0,     0,     0,     0,     0,    32,    13,     0,
      28,    41,     0,    46,     0,    47,     0,    42,     0,    44,
       0,    48,     0,    43,     0,    45,     0,    49,     0,    50,
      77,     0,     0,     0,     0,     0,    27,    82,     0,     0,
      53,    63,    65,    55,    59,    67,    57,    61,    69,    79,
       0,    73,     0,    15,     0,    29,     0,     0,    81,    11,
      14,    31,     0,     0,    30,     0,     0,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    11,    17,    36,    37,   106,
     140,    82,    83,    14,    19,    62,   109,   115,   122,   117,
     124,   111,   113,   119,   126,   127,   120,    63,    16,    21,
      67,   101,   133,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
       3,   -68,   -68,   -68,   -68,    19,    -1,     4,     0,   -68,
     -68,    26,   -68,   -68,   -68,    21,   -68,   148,   -68,    72,
      34,    54,   -68,   -68,   -68,   -68,    47,   -68,   -68,    70,
     -68,    74,   -68,   -68,   -68,   243,   -68,   288,   -68,    78,
     -68,   -68,   288,   -68,   -68,   -68,   -68,   288,   288,   -68,
     288,   288,   -68,   -68,   -68,   288,   -68,   288,   288,   288,
     -68,   -68,   -68,    75,    76,    81,    73,    82,   104,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,    80,   -68,   -68,   -68,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,   -68,   -68,   118,   100,
     115,   125,   123,   171,   194,   -68,     5,   -68,   -68,   -22,
     -68,   -20,   -68,   -19,   -68,   -13,   -68,   -12,   -68,   -11,
     -68,   -68,    -9,   -68,    35,   -68,    36,   -68,   122,   -68,
     126,   128,   124,   136,   267,   288,   288,   -68,   -68,    39,
     -68,   -68,   132,   -68,   141,   -68,   149,   -68,   150,   -68,
     151,   -68,    93,   -68,   154,   -68,   155,   -68,    96,   -68,
     -68,   152,   156,   158,   172,   167,   -68,   165,   174,   168,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     173,   -68,   180,   -68,    37,   -68,   179,   195,   -68,   -68,
     -68,   -68,   188,   217,   -68,   288,   175,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,   -68,   -68,   -68,   -67,    69,   -68,    55,
     -68,   -68,   -37,   -68,   127,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,    67,   117,   -68,   -68,   -68,
     -68,   -68,   -68,   -18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      85,    64,   103,   104,     1,    12,   137,   141,     2,   143,
     145,     3,   142,     4,   144,   146,   147,   149,   151,     9,
     153,   148,   150,   152,    87,   154,    10,    15,    20,    88,
      89,    13,    90,    91,   138,    18,   139,    92,   137,    93,
      94,    95,    72,    40,    41,    73,    43,    44,    45,    46,
      74,    75,    49,    76,    77,    52,    53,    54,    78,    56,
      79,    80,    81,   167,   155,   157,   190,    65,   139,   156,
     158,    66,   168,    38,    68,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    69,   165,   166,
      61,    70,    86,    97,    96,    98,    99,   100,   102,   105,
      64,   107,   108,   110,   112,   114,   116,   118,   121,   123,
     125,   169,   193,    38,   130,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   129,   131,    22,
     159,   132,   161,   134,    23,   160,   170,   162,   196,    24,
      25,    26,    27,    28,   163,   171,    29,    30,    31,    32,
      33,    34,    22,   172,   173,   174,    35,    23,   176,   177,
     180,   179,    24,    25,    26,    27,    28,   181,   182,    29,
      30,    31,    32,    33,    34,    22,   183,   185,   186,   135,
      23,   187,   188,   164,   197,    24,    25,    26,    27,    28,
     189,   191,    29,    30,    31,    32,    33,    34,    22,   192,
     194,   184,   136,    23,   128,   178,     0,     0,    24,    25,
      26,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,     0,     0,     0,    71,   195,    72,    40,    41,    73,
      43,    44,    45,    46,    74,    75,    49,    76,    77,    52,
      53,    54,    78,    56,    79,    80,    81,    60,    22,   175,
       0,     0,     0,    23,     0,     0,     0,     0,    24,    25,
      26,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,    72,    40,    41,    73,    43,    44,    45,    46,    74,
      75,    49,    76,    77,    52,    53,    54,    78,    56,    79,
      80,    81,    60
};

static const yytype_int16 yycheck[] =
{
      37,    19,    69,    70,     1,     1,     1,    29,     5,    29,
      29,     8,    34,    10,    34,    34,    29,    29,    29,     0,
      29,    34,    34,    34,    42,    34,    27,    27,     7,    47,
      48,    27,    50,    51,    29,     9,    31,    55,     1,    57,
      58,    59,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    29,    29,    29,    33,    31,    34,
      34,    17,    33,     1,    27,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    27,   135,   136,
      28,    27,    24,    27,    29,    24,    33,    25,     4,    29,
     128,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,   139,   189,     1,    24,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    29,    33,     1,
      28,    26,    24,    30,     6,    29,    24,    33,   195,    11,
      12,    13,    14,    15,    28,    24,    18,    19,    20,    21,
      22,    23,     1,    24,    24,    24,    28,     6,    24,    24,
      24,    29,    11,    12,    13,    14,    15,    29,    16,    18,
      19,    20,    21,    22,    23,     1,    29,    32,    24,    28,
       6,    33,    29,   134,    29,    11,    12,    13,    14,    15,
      30,    32,    18,    19,    20,    21,    22,    23,     1,    24,
      32,   166,    28,     6,    97,   158,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,     1,    28,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     1,   152,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     8,    10,    36,    37,    38,    39,     0,
      27,    40,     1,    27,    48,    27,    63,    41,     9,    49,
       7,    64,     1,     6,    11,    12,    13,    14,    15,    18,
      19,    20,    21,    22,    23,    28,    42,    43,     1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    28,    50,    62,    68,    33,    17,    65,    27,    27,
      27,     1,     3,     6,    11,    12,    14,    15,    19,    21,
      22,    23,    46,    47,    68,    47,    24,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    29,    27,    24,    33,
      25,    66,     4,    41,    41,    29,    44,    24,    24,    51,
      24,    56,    24,    57,    24,    52,    24,    54,    24,    58,
      61,    24,    53,    24,    55,    24,    59,    60,    49,    29,
      24,    33,    26,    67,    30,    28,    28,     1,    29,    31,
      45,    29,    34,    29,    34,    29,    34,    29,    34,    29,
      34,    29,    34,    29,    34,    29,    34,    29,    34,    28,
      29,    24,    33,    28,    42,    47,    47,    24,    33,    68,
      24,    24,    24,    24,    24,    61,    24,    24,    60,    29,
      24,    29,    16,    29,    44,    32,    24,    33,    29,    30,
      29,    32,    24,    41,    32,    28,    47,    29
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
      yyerror (parsestate, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parsestate)
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
		  Type, Value, parsestate); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, DAPparsestate* parsestate)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parsestate)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    DAPparsestate* parsestate;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parsestate);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, DAPparsestate* parsestate)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parsestate)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    DAPparsestate* parsestate;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parsestate);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, DAPparsestate* parsestate)
#else
static void
yy_reduce_print (yyvsp, yyrule, parsestate)
    YYSTYPE *yyvsp;
    int yyrule;
    DAPparsestate* parsestate;
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
		       		       , parsestate);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parsestate); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, DAPparsestate* parsestate)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parsestate)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    DAPparsestate* parsestate;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parsestate);

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
int yyparse (DAPparsestate* parsestate);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (DAPparsestate* parsestate)
#else
int
yyparse (parsestate)
    DAPparsestate* parsestate;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

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
        case 6:
#line 51 "dap.y"
    {dap_unrecognizedresponse(parsestate); YYABORT;;}
    break;

  case 7:
#line 56 "dap.y"
    {dap_tagparse(parsestate,SCAN_DATASET);;}
    break;

  case 8:
#line 60 "dap.y"
    {dap_tagparse(parsestate,SCAN_ATTR);;}
    break;

  case 9:
#line 64 "dap.y"
    {dap_tagparse(parsestate,SCAN_ERROR);;}
    break;

  case 10:
#line 72 "dap.y"
    {dap_datasetbody(parsestate,(yyvsp[(4) - (5)]),(yyvsp[(2) - (5)]));;}
    break;

  case 11:
#line 77 "dap.y"
    {(yyval)=dap_declarations(parsestate,null,null);;}
    break;

  case 12:
#line 78 "dap.y"
    {(yyval)=dap_declarations(parsestate,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 13:
#line 85 "dap.y"
    {(yyval)=dap_makebase(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));;}
    break;

  case 14:
#line 87 "dap.y"
    {if(((yyval)=dap_makestructure(parsestate,(yyvsp[(5) - (7)]),(yyvsp[(6) - (7)]),(yyvsp[(3) - (7)])))==null) {YYABORT;};}
    break;

  case 15:
#line 89 "dap.y"
    {if(((yyval)=dap_makesequence(parsestate,(yyvsp[(5) - (6)]),(yyvsp[(3) - (6)])))==null) {YYABORT;};}
    break;

  case 16:
#line 92 "dap.y"
    {if(((yyval)=dap_makegrid(parsestate,(yyvsp[(10) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)])))==null) {YYABORT;};}
    break;

  case 17:
#line 94 "dap.y"
    {daperror(parsestate,"Unrecognized type"); YYABORT;;}
    break;

  case 18:
#line 99 "dap.y"
    {(yyval)=(Object)SCAN_BYTE;;}
    break;

  case 19:
#line 100 "dap.y"
    {(yyval)=(Object)SCAN_INT16;;}
    break;

  case 20:
#line 101 "dap.y"
    {(yyval)=(Object)SCAN_UINT16;;}
    break;

  case 21:
#line 102 "dap.y"
    {(yyval)=(Object)SCAN_INT32;;}
    break;

  case 22:
#line 103 "dap.y"
    {(yyval)=(Object)SCAN_UINT32;;}
    break;

  case 23:
#line 104 "dap.y"
    {(yyval)=(Object)SCAN_FLOAT32;;}
    break;

  case 24:
#line 105 "dap.y"
    {(yyval)=(Object)SCAN_FLOAT64;;}
    break;

  case 25:
#line 106 "dap.y"
    {(yyval)=(Object)SCAN_URL;;}
    break;

  case 26:
#line 107 "dap.y"
    {(yyval)=(Object)SCAN_STRING;;}
    break;

  case 27:
#line 111 "dap.y"
    {(yyval)=dap_arraydecls(parsestate,null,null);;}
    break;

  case 28:
#line 112 "dap.y"
    {(yyval)=dap_arraydecls(parsestate,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 29:
#line 116 "dap.y"
    {(yyval)=dap_arraydecl(parsestate,null,(yyvsp[(2) - (3)]));;}
    break;

  case 30:
#line 117 "dap.y"
    {(yyval)=dap_arraydecl(parsestate,(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));;}
    break;

  case 31:
#line 118 "dap.y"
    {(yyval)=dap_arraydecl(parsestate,null,(yyvsp[(3) - (4)]));;}
    break;

  case 32:
#line 120 "dap.y"
    {daperror(parsestate,"Illegal dimension declaration"); YYABORT;;}
    break;

  case 33:
#line 124 "dap.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 34:
#line 126 "dap.y"
    {daperror(parsestate,"Illegal dataset declaration"); YYABORT;;}
    break;

  case 35:
#line 129 "dap.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 36:
#line 132 "dap.y"
    {dap_attributebody(parsestate,(yyvsp[(2) - (3)]));;}
    break;

  case 37:
#line 134 "dap.y"
    {daperror(parsestate,"Illegal DAS body"); YYABORT;;}
    break;

  case 38:
#line 138 "dap.y"
    {(yyval)=dap_attrlist(parsestate,null,null);;}
    break;

  case 39:
#line 139 "dap.y"
    {(yyval)=dap_attrlist(parsestate,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 40:
#line 143 "dap.y"
    {(yyval)=null;;}
    break;

  case 41:
#line 145 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_BYTE);;}
    break;

  case 42:
#line 147 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_INT16);;}
    break;

  case 43:
#line 149 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_UINT16);;}
    break;

  case 44:
#line 151 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_INT32);;}
    break;

  case 45:
#line 153 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_UINT32);;}
    break;

  case 46:
#line 155 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_FLOAT32);;}
    break;

  case 47:
#line 157 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_FLOAT64);;}
    break;

  case 48:
#line 159 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_STRING);;}
    break;

  case 49:
#line 161 "dap.y"
    {(yyval)=dap_attribute(parsestate,(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(Object)SCAN_URL);;}
    break;

  case 50:
#line 162 "dap.y"
    {(yyval)=dap_attrset(parsestate,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));;}
    break;

  case 51:
#line 164 "dap.y"
    {daperror(parsestate,"Illegal attribute"); YYABORT;;}
    break;

  case 52:
#line 168 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_BYTE);;}
    break;

  case 53:
#line 170 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_BYTE);;}
    break;

  case 54:
#line 173 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_INT16);;}
    break;

  case 55:
#line 175 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_INT16);;}
    break;

  case 56:
#line 178 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_UINT16);;}
    break;

  case 57:
#line 180 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_UINT16);;}
    break;

  case 58:
#line 183 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_INT32);;}
    break;

  case 59:
#line 185 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_INT32);;}
    break;

  case 60:
#line 188 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_UINT32);;}
    break;

  case 61:
#line 189 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_UINT32);;}
    break;

  case 62:
#line 192 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_FLOAT32);;}
    break;

  case 63:
#line 193 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_FLOAT32);;}
    break;

  case 64:
#line 196 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_FLOAT64);;}
    break;

  case 65:
#line 197 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_FLOAT64);;}
    break;

  case 66:
#line 200 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_STRING);;}
    break;

  case 67:
#line 201 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_STRING);;}
    break;

  case 68:
#line 205 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,null,(yyvsp[(1) - (1)]),(Object)SCAN_URL);;}
    break;

  case 69:
#line 206 "dap.y"
    {(yyval)=dap_attrvalue(parsestate,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(Object)SCAN_URL);;}
    break;

  case 70:
#line 210 "dap.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 71:
#line 214 "dap.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 72:
#line 224 "dap.y"
    {(yyval)=(yyvsp[(2) - (3)]); (yyval)=(yyvsp[(3) - (3)]); (yyval)=null;;}
    break;

  case 73:
#line 229 "dap.y"
    {dap_errorbody(parsestate,(yyvsp[(2) - (7)]),(yyvsp[(3) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]));;}
    break;

  case 74:
#line 232 "dap.y"
    {(yyval)=null;;}
    break;

  case 75:
#line 232 "dap.y"
    {(yyval)=(yyvsp[(3) - (4)]);;}
    break;

  case 76:
#line 233 "dap.y"
    {(yyval)=null;;}
    break;

  case 77:
#line 233 "dap.y"
    {(yyval)=(yyvsp[(3) - (4)]);;}
    break;

  case 78:
#line 234 "dap.y"
    {(yyval)=null;;}
    break;

  case 79:
#line 234 "dap.y"
    {(yyval)=(yyvsp[(3) - (4)]);;}
    break;

  case 80:
#line 235 "dap.y"
    {(yyval)=null;;}
    break;

  case 81:
#line 235 "dap.y"
    {(yyval)=(yyvsp[(3) - (4)]);;}
    break;

  case 82:
#line 241 "dap.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 83:
#line 242 "dap.y"
    {(yyval)=strdup("alias");;}
    break;

  case 84:
#line 243 "dap.y"
    {(yyval)=strdup("array");;}
    break;

  case 85:
#line 244 "dap.y"
    {(yyval)=strdup("attributes");;}
    break;

  case 86:
#line 245 "dap.y"
    {(yyval)=strdup("byte");;}
    break;

  case 87:
#line 246 "dap.y"
    {(yyval)=strdup("dataset");;}
    break;

  case 88:
#line 247 "dap.y"
    {(yyval)=strdup("data");;}
    break;

  case 89:
#line 248 "dap.y"
    {(yyval)=strdup("error");;}
    break;

  case 90:
#line 249 "dap.y"
    {(yyval)=strdup("float32");;}
    break;

  case 91:
#line 250 "dap.y"
    {(yyval)=strdup("float64");;}
    break;

  case 92:
#line 251 "dap.y"
    {(yyval)=strdup("grid");;}
    break;

  case 93:
#line 252 "dap.y"
    {(yyval)=strdup("int16");;}
    break;

  case 94:
#line 253 "dap.y"
    {(yyval)=strdup("int32");;}
    break;

  case 95:
#line 254 "dap.y"
    {(yyval)=strdup("maps");;}
    break;

  case 96:
#line 255 "dap.y"
    {(yyval)=strdup("sequence");;}
    break;

  case 97:
#line 256 "dap.y"
    {(yyval)=strdup("string");;}
    break;

  case 98:
#line 257 "dap.y"
    {(yyval)=strdup("structure");;}
    break;

  case 99:
#line 258 "dap.y"
    {(yyval)=strdup("uint16");;}
    break;

  case 100:
#line 259 "dap.y"
    {(yyval)=strdup("uint32");;}
    break;

  case 101:
#line 260 "dap.y"
    {(yyval)=strdup("url");;}
    break;

  case 102:
#line 261 "dap.y"
    {(yyval)=strdup("code");;}
    break;

  case 103:
#line 262 "dap.y"
    {(yyval)=strdup("message");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2055 "dap.tab.c"
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
      yyerror (parsestate, YY_("syntax error"));
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
	    yyerror (parsestate, yymsg);
	  }
	else
	  {
	    yyerror (parsestate, YY_("syntax error"));
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
		      yytoken, &yylval, parsestate);
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
		  yystos[yystate], yyvsp, parsestate);
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
  yyerror (parsestate, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parsestate);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parsestate);
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


#line 265 "dap.y"


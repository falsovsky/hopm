/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "config-parser.y"

#include <string.h>

#include "memory.h"
#include "config.h"

int yylex(void);

static void *tmp;  /* Variable to temporarily hold nodes before insertion to list */


#line 82 "config-parser.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_CONFIG_PARSER_H_INCLUDED
# define YY_YY_CONFIG_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADDRESS_FAMILY = 258,
    AWAY = 259,
    BAN_UNKNOWN = 260,
    BIND = 261,
    BLACKLIST = 262,
    BYTES = 263,
    KBYTES = 264,
    MBYTES = 265,
    CHANNEL = 266,
    COMMAND_INTERVAL = 267,
    COMMAND_QUEUE_SIZE = 268,
    COMMAND_TIMEOUT = 269,
    CONNREGEX = 270,
    DNS_FDLIMIT = 271,
    DNS_TIMEOUT = 272,
    DNSBL_FROM = 273,
    DNSBL_TO = 274,
    EXEMPT = 275,
    FD = 276,
    INVITE = 277,
    IPV4 = 278,
    IPV6 = 279,
    IRC = 280,
    KLINE = 281,
    KEY = 282,
    MASK = 283,
    MAX_READ = 284,
    MODE = 285,
    NAME = 286,
    NEGCACHE = 287,
    NEGCACHE_REBUILD = 288,
    NICK = 289,
    NICKSERV = 290,
    NOTICE = 291,
    OPER = 292,
    OPM = 293,
    OPTIONS = 294,
    PASSWORD = 295,
    PERFORM = 296,
    PIDFILE = 297,
    PORT = 298,
    PROTOCOL = 299,
    RSA_PRIVATE_KEY_FILE = 300,
    READTIMEOUT = 301,
    REALNAME = 302,
    RECONNECTINTERVAL = 303,
    REPLY = 304,
    SCANLOG = 305,
    SCANNER = 306,
    SECONDS = 307,
    MINUTES = 308,
    HOURS = 309,
    DAYS = 310,
    WEEKS = 311,
    MONTHS = 312,
    YEARS = 313,
    SENDMAIL = 314,
    SERVER = 315,
    TARGET_IP = 316,
    TARGET_PORT = 317,
    TARGET_STRING = 318,
    TIMEOUT = 319,
    TLS = 320,
    TLS_CERTIFICATE_FILE = 321,
    TLS_HOSTNAME_VERIFICATION = 322,
    TYPE = 323,
    USERNAME = 324,
    USER = 325,
    NUMBER = 326,
    STRING = 327,
    PROTOCOLTYPE = 328
  };
#endif
/* Tokens.  */
#define ADDRESS_FAMILY 258
#define AWAY 259
#define BAN_UNKNOWN 260
#define BIND 261
#define BLACKLIST 262
#define BYTES 263
#define KBYTES 264
#define MBYTES 265
#define CHANNEL 266
#define COMMAND_INTERVAL 267
#define COMMAND_QUEUE_SIZE 268
#define COMMAND_TIMEOUT 269
#define CONNREGEX 270
#define DNS_FDLIMIT 271
#define DNS_TIMEOUT 272
#define DNSBL_FROM 273
#define DNSBL_TO 274
#define EXEMPT 275
#define FD 276
#define INVITE 277
#define IPV4 278
#define IPV6 279
#define IRC 280
#define KLINE 281
#define KEY 282
#define MASK 283
#define MAX_READ 284
#define MODE 285
#define NAME 286
#define NEGCACHE 287
#define NEGCACHE_REBUILD 288
#define NICK 289
#define NICKSERV 290
#define NOTICE 291
#define OPER 292
#define OPM 293
#define OPTIONS 294
#define PASSWORD 295
#define PERFORM 296
#define PIDFILE 297
#define PORT 298
#define PROTOCOL 299
#define RSA_PRIVATE_KEY_FILE 300
#define READTIMEOUT 301
#define REALNAME 302
#define RECONNECTINTERVAL 303
#define REPLY 304
#define SCANLOG 305
#define SCANNER 306
#define SECONDS 307
#define MINUTES 308
#define HOURS 309
#define DAYS 310
#define WEEKS 311
#define MONTHS 312
#define YEARS 313
#define SENDMAIL 314
#define SERVER 315
#define TARGET_IP 316
#define TARGET_PORT 317
#define TARGET_STRING 318
#define TIMEOUT 319
#define TLS 320
#define TLS_CERTIFICATE_FILE 321
#define TLS_HOSTNAME_VERIFICATION 322
#define TYPE 323
#define USERNAME 324
#define USER 325
#define NUMBER 326
#define STRING 327
#define PROTOCOLTYPE 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 95 "config-parser.y"

  int number;
  char *string;

#line 285 "config-parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

#define YYUNDEFTOK  2
#define YYMAXUTOK   328


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    76,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   110,   110,   111,   114,   115,   116,   117,   118,   119,
     121,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     132,   132,   133,   134,   135,   136,   141,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   157,
     162,   167,   173,   178,   183,   189,   194,   199,   206,   208,
     209,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   235,   241,   247,   253,   259,   265,
     271,   277,   282,   287,   292,   297,   304,   310,   315,   320,
     325,   331,   337,   343,   349,   358,   358,   371,   372,   374,
     375,   376,   378,   386,   394,   405,   405,   415,   416,   418,
     419,   420,   422,   429,   439,   439,   474,   475,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   488,   496,
     504,   512,   525,   532,   539,   546,   553,   569,   571,   572,
     574,   575,   576,   577,   578,   580,   586,   592,   601,   601,
     617,   618,   620,   621,   622,   623,   624,   625,   626,   628,
     637,   636,   644,   644,   645,   650,   657,   665,   677,   684,
     686,   687,   689,   703,   705,   706,   708,   709,   711
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADDRESS_FAMILY", "AWAY", "BAN_UNKNOWN",
  "BIND", "BLACKLIST", "BYTES", "KBYTES", "MBYTES", "CHANNEL",
  "COMMAND_INTERVAL", "COMMAND_QUEUE_SIZE", "COMMAND_TIMEOUT", "CONNREGEX",
  "DNS_FDLIMIT", "DNS_TIMEOUT", "DNSBL_FROM", "DNSBL_TO", "EXEMPT", "FD",
  "INVITE", "IPV4", "IPV6", "IRC", "KLINE", "KEY", "MASK", "MAX_READ",
  "MODE", "NAME", "NEGCACHE", "NEGCACHE_REBUILD", "NICK", "NICKSERV",
  "NOTICE", "OPER", "OPM", "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE",
  "PORT", "PROTOCOL", "RSA_PRIVATE_KEY_FILE", "READTIMEOUT", "REALNAME",
  "RECONNECTINTERVAL", "REPLY", "SCANLOG", "SCANNER", "SECONDS", "MINUTES",
  "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SENDMAIL", "SERVER",
  "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TLS",
  "TLS_CERTIFICATE_FILE", "TLS_HOSTNAME_VERIFICATION", "TYPE", "USERNAME",
  "USER", "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='",
  "':'", "','", "$accept", "config", "config_items", "timespec_",
  "timespec", "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_dns_timeout",
  "options_scanlog", "options_command_queue_size",
  "options_command_interval", "options_command_timeout", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_notice",
  "irc_port", "irc_tls", "irc_rsa_private_key_file",
  "irc_tls_certificate_file", "irc_tls_hostname_verification",
  "irc_readtimeout", "irc_reconnectinterval", "irc_realname", "irc_server",
  "irc_username", "irc_bind", "irc_connregex", "channel_entry", "$@1",
  "channel_items", "channel_item", "channel_name", "channel_key",
  "channel_invite", "user_entry", "$@2", "user_items", "user_item",
  "user_mask", "user_scanner", "scanner_entry", "$@3", "scanner_items",
  "scanner_item", "scanner_name", "scanner_bind", "scanner_target_ip",
  "scanner_target_string", "scanner_fd", "scanner_target_port",
  "scanner_timeout", "scanner_max_read", "scanner_protocol", "opm_entry",
  "opm_items", "opm_item", "opm_dnsbl_from", "opm_dnsbl_to",
  "opm_sendmail", "opm_blacklist_entry", "$@4", "blacklist_items",
  "blacklist_item", "blacklist_name", "blacklist_address_family", "$@5",
  "blacklist_address_family_items", "blacklist_address_family_item",
  "blacklist_kline", "blacklist_type", "blacklist_ban_unknown",
  "blacklist_reply", "blacklist_reply_items", "blacklist_reply_item",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_mask", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   123,   125,    59,    61,    58,    44
};
# endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-149)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -209,    77,  -209,   -69,   -67,   -61,   -49,  -209,  -209,  -209,
    -209,   -28,  -209,    -7,  -209,  -209,    63,   116,    71,   183,
     -25,   -17,  -209,    10,    30,  -209,  -209,  -209,    15,    23,
      27,    41,    42,    44,    49,    59,    60,    61,    62,    64,
      66,    67,    68,    70,    72,    96,    97,    98,   101,     0,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,    75,  -209,   102,   110,   112,     9,  -209,
    -209,  -209,  -209,  -209,    92,  -209,   114,   117,   121,   124,
     125,   127,   135,   136,   137,    38,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,    31,   159,    36,    78,
    -209,   120,   145,   146,   147,   154,   155,   156,   157,   158,
     160,   162,   122,   163,   165,   166,   165,   167,   169,   170,
     172,   173,   161,  -209,   174,   175,   177,   178,   168,  -209,
     179,   165,   180,   165,   181,   165,   165,   165,   182,   184,
     185,  -209,  -209,   164,   186,    28,  -209,  -209,  -209,  -209,
     187,   188,   189,   190,   191,   192,   193,   194,   195,    32,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
     197,  -209,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   153,   211,   212,   213,   214,
     215,   216,   217,   218,  -209,   -19,   219,   220,   221,  -209,
     109,   222,   223,   224,   225,   226,   227,   228,   229,   230,
    -209,   235,   236,   233,  -209,   238,   240,   241,   242,   243,
     245,   244,   246,   165,   237,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
     165,   165,   165,   165,   165,   165,   165,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,   247,   248,   249,
     -13,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
     250,   251,   252,   256,   254,    80,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,   257,   258,  -209,   259,   260,   115,   261,   262,
     263,   264,   266,   267,   268,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   273,   274,   275,   272,  -209,   255,   278,
     279,   280,   282,   283,   281,  -209,  -209,  -209,  -209,  -209,
     241,   241,   241,  -209,  -209,  -209,  -209,   285,  -209,  -209,
    -209,  -209,   284,   286,   287,  -209,    50,   288,   289,   290,
     277,   -51,  -209,   291,  -209,  -209,  -209,  -209,   292,  -209,
    -209,  -209,  -209,  -209,    22,  -209,  -209,  -209,  -209,   297,
     294,  -209,  -209,  -209,  -209,    50,   295,  -209,  -209,  -209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   105,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   177,     0,     0,   175,   176,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    53,    56,    54,    55,    57,    58,    70,    71,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    52,    72,     0,   144,     0,     0,     0,     0,   139,
     140,   141,   142,   143,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   111,     0,     0,     0,   108,   109,   110,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   118,   119,   121,   123,   120,   122,   125,   126,   124,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   178,    74,    93,    94,
      75,    76,    77,    78,    82,    79,    80,    81,    83,    85,
      10,    10,    10,    10,    10,    10,    10,    12,    11,    88,
      90,    89,    91,    84,    86,    87,    92,     0,     0,     0,
       0,    98,    99,   100,   101,   145,   146,   147,   158,   160,
       0,     0,     0,     0,     0,     0,   151,   152,   153,   155,
     154,   156,   157,    46,    45,    47,    42,    43,    39,    40,
      41,    44,     0,     0,   106,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,   115,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,   150,   112,   113,   129,   132,
      20,    20,    20,    22,    21,   135,   128,     0,   130,   133,
     131,   134,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,   171,     0,   149,    23,    24,    25,     0,   104,
     103,   102,   164,   165,     0,   163,   168,   166,   159,     0,
       0,   170,   167,   136,   161,     0,     0,   169,   162,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,   -84,  -124,  -208,     4,  -209,  -209,   151,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,   270,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,   -15,  -209,  -209,  -209,
    -209,  -209,  -209,   103,  -209,  -209,  -209,  -209,  -209,    88,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,   296,  -209,  -209,  -209,  -209,  -209,  -209,   -26,  -209,
    -209,  -209,  -209,  -125,  -209,  -209,  -209,  -209,  -209,   -99,
    -209,  -209,   298,  -209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   257,   258,   343,   344,     8,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     9,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   270,   271,   272,   273,   274,
      10,    11,   155,   156,   157,   158,    12,    13,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,    14,
      78,    79,    80,    81,    82,    83,    84,   285,   286,   287,
     288,   328,   374,   375,   289,   290,   291,   292,   361,   362,
      15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     196,    27,   198,   267,    28,    16,    29,    17,   268,   267,
      74,   -95,   269,    18,   268,    30,  -148,   211,   269,   213,
     360,   215,   216,   217,   380,    19,    31,    75,    76,   152,
      32,    22,   152,   159,    33,    34,    35,    36,   160,    85,
      37,    38,    20,    39,    21,    40,    41,    42,    43,   106,
      86,    87,    88,   161,    89,    90,   153,   107,    23,   153,
      44,   162,   326,   163,    22,    45,    46,    47,    77,    48,
      91,    92,    74,   372,   373,   132,   164,     2,  -148,   154,
      93,   278,   154,   279,   138,   280,   134,   108,    94,    75,
      76,    23,   111,   165,   166,   167,   168,     3,   384,   140,
     112,   385,     4,   223,   113,   109,   281,   234,   180,   314,
     278,   282,   279,   150,   280,     5,     6,    27,   114,   115,
      28,   116,    29,   340,   341,   342,   117,   -95,  -114,   283,
      77,    30,   365,   366,   367,   281,   118,   119,   120,   121,
     282,   122,    31,   123,   124,   125,    32,   126,   284,   127,
      33,    34,    35,    36,   181,   334,    37,    38,   283,    39,
     159,    40,    41,    42,    43,   160,   316,   317,   318,   319,
     320,   321,   322,   128,   129,   130,    44,   284,   131,   135,
     161,    45,    46,    47,    85,    48,   307,   136,   162,   137,
     163,   141,   182,   193,   142,    86,    87,    88,   143,    89,
      90,   144,   145,   164,   146,   250,   251,   252,   253,   254,
     255,   256,   147,   148,   149,    91,    92,   183,   184,   185,
     165,   166,   167,   168,   195,    93,   186,   187,   188,   189,
     190,   308,   191,    94,   192,   194,   195,   204,   197,   199,
     200,   221,   201,   202,   209,   203,   151,   206,   205,   207,
     208,   212,   214,   210,   218,   327,   219,   235,   224,   335,
     388,   220,   381,   222,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   259,   260,   261,
     262,   263,   264,   265,   266,   275,   276,   277,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   315,   309,   312,   310,   311,   313,   133,
       0,     0,   110,     0,   323,   324,   325,   329,   330,   331,
     332,   333,   356,   336,   337,   338,   339,   345,   346,     0,
     348,   347,   349,   350,   351,   352,   353,   354,   355,   357,
       0,   358,   359,   360,   379,   363,   368,   364,     0,     0,
     369,     0,   370,   371,   376,   377,   378,   382,   383,   386,
     387,   389,     0,     0,   139
};

static const yytype_int16 yycheck[] =
{
     124,     1,   126,    22,     4,    74,     6,    74,    27,    22,
       1,    11,    31,    74,    27,    15,     7,   141,    31,   143,
      71,   145,   146,   147,    75,    74,    26,    18,    19,     1,
      30,     1,     1,     1,    34,    35,    36,    37,     6,     1,
      40,    41,    70,    43,    51,    45,    46,    47,    48,    74,
      12,    13,    14,    21,    16,    17,    28,    74,    28,    28,
      60,    29,    75,    31,     1,    65,    66,    67,    59,    69,
      32,    33,     1,    23,    24,    75,    44,     0,     7,    51,
      42,     1,    51,     3,    75,     5,    11,    77,    50,    18,
      19,    28,    77,    61,    62,    63,    64,    20,    76,     7,
      77,    79,    25,    75,    77,    75,    26,    75,    72,   233,
       1,    31,     3,    75,     5,    38,    39,     1,    77,    77,
       4,    77,     6,     8,     9,    10,    77,    11,    51,    49,
      59,    15,   340,   341,   342,    26,    77,    77,    77,    77,
      31,    77,    26,    77,    77,    77,    30,    77,    68,    77,
      34,    35,    36,    37,    76,    75,    40,    41,    49,    43,
       1,    45,    46,    47,    48,     6,   250,   251,   252,   253,
     254,   255,   256,    77,    77,    77,    60,    68,    77,    77,
      21,    65,    66,    67,     1,    69,    71,    77,    29,    77,
      31,    77,    72,    71,    77,    12,    13,    14,    77,    16,
      17,    77,    77,    44,    77,    52,    53,    54,    55,    56,
      57,    58,    77,    77,    77,    32,    33,    72,    72,    72,
      61,    62,    63,    64,    71,    42,    72,    72,    72,    72,
      72,   227,    72,    50,    72,    72,    71,    76,    72,    72,
      71,    77,    72,    71,    76,    72,    95,    72,    74,    72,
      72,    71,    71,    74,    72,   270,    72,   169,   155,   285,
     385,    76,   361,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    72,    72,    76,
      72,    71,    71,    76,    72,    71,    73,    72,    72,    49,
      -1,    -1,    24,    -1,    77,    77,    77,    77,    77,    77,
      74,    77,    77,    76,    76,    76,    76,    76,    76,    -1,
      76,    78,    76,    76,    76,    72,    72,    72,    76,    71,
      -1,    72,    72,    71,    77,    72,    71,    76,    -1,    -1,
      76,    -1,    76,    76,    76,    76,    76,    76,    76,    72,
      76,    76,    -1,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,    20,    25,    38,    39,    82,    87,    99,
     130,   131,   136,   137,   149,   170,    74,    74,    74,    74,
      70,    51,     1,    28,   171,   172,   173,     1,     4,     6,
      15,    26,    30,    34,    35,    36,    37,    40,    41,    43,
      45,    46,    47,    48,    60,    65,    66,    67,    69,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     1,    18,    19,    59,   150,   151,
     152,   153,   154,   155,   156,     1,    12,    13,    14,    16,
      17,    32,    33,    42,    50,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    74,    74,    77,    75,
     172,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    75,   101,    11,    77,    77,    77,    75,   151,
       7,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      75,    89,     1,    28,    51,   132,   133,   134,   135,     1,
       6,    21,    29,    31,    44,    61,    62,    63,    64,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      72,    76,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    71,    72,    71,    84,    72,    84,    72,
      71,    72,    71,    72,    76,    74,    72,    72,    72,    76,
      74,    84,    71,    84,    71,    84,    84,    84,    72,    72,
      76,    77,    77,    75,   133,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    75,   139,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      52,    53,    54,    55,    56,    57,    58,    83,    84,    76,
      76,    76,    76,    76,    76,    76,    76,    22,    27,    31,
     125,   126,   127,   128,   129,    76,    76,    76,     1,     3,
       5,    26,    31,    49,    68,   157,   158,   159,   160,   164,
     165,   166,   167,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    72,    72,    76,    72,    71,    71,    86,    72,
      73,    72,    71,    72,    84,    76,    83,    83,    83,    83,
      83,    83,    83,    77,    77,    77,    75,   126,   161,    77,
      77,    77,    74,    77,    75,   158,    76,    76,    76,    76,
       8,     9,    10,    85,    86,    76,    76,    78,    76,    76,
      76,    76,    72,    72,    72,    76,    77,    71,    72,    72,
      71,   168,   169,    72,    76,    85,    85,    85,    71,    76,
      76,    76,    23,    24,   162,   163,    76,    76,    76,    77,
      75,   169,    76,    76,    76,    79,    72,    76,   163,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   124,   123,   125,   125,   126,
     126,   126,   127,   128,   129,   131,   130,   132,   132,   133,
     133,   133,   134,   135,   137,   136,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   150,
     151,   151,   151,   151,   151,   152,   153,   154,   156,   155,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   159,
     161,   160,   162,   162,   163,   163,   164,   165,   166,   167,
     168,   168,   169,   170,   171,   171,   172,   172,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     5,     2,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     5,     3,     1,     1,     1,     4,     4,     4,     5,
       2,     1,     4,     5,     2,     1,     1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10:
#line 121 "config-parser.y"
           { (yyval.number) = 0; }
#line 1754 "config-parser.c"
    break;

  case 12:
#line 122 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1760 "config-parser.c"
    break;

  case 13:
#line 123 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1766 "config-parser.c"
    break;

  case 14:
#line 124 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1772 "config-parser.c"
    break;

  case 15:
#line 125 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1778 "config-parser.c"
    break;

  case 16:
#line 126 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1784 "config-parser.c"
    break;

  case 17:
#line 127 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1790 "config-parser.c"
    break;

  case 18:
#line 128 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1796 "config-parser.c"
    break;

  case 19:
#line 129 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1802 "config-parser.c"
    break;

  case 20:
#line 132 "config-parser.y"
           { (yyval.number) = 0; }
#line 1808 "config-parser.c"
    break;

  case 22:
#line 133 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1814 "config-parser.c"
    break;

  case 23:
#line 134 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1820 "config-parser.c"
    break;

  case 24:
#line 135 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1826 "config-parser.c"
    break;

  case 25:
#line 136 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1832 "config-parser.c"
    break;

  case 39:
#line 158 "config-parser.y"
{
  OptionsItem.negcache = (yyvsp[-1].number);
}
#line 1840 "config-parser.c"
    break;

  case 40:
#line 163 "config-parser.y"
{
  OptionsItem.negcache_rebuild = (yyvsp[-1].number);
}
#line 1848 "config-parser.c"
    break;

  case 41:
#line 168 "config-parser.y"
{
  xfree(OptionsItem.pidfile);
  OptionsItem.pidfile = xstrdup((yyvsp[-1].string));
}
#line 1857 "config-parser.c"
    break;

  case 42:
#line 174 "config-parser.y"
{
  OptionsItem.dns_fdlimit = (yyvsp[-1].number);
}
#line 1865 "config-parser.c"
    break;

  case 43:
#line 179 "config-parser.y"
{
  OptionsItem.dns_timeout = (yyvsp[-1].number);
}
#line 1873 "config-parser.c"
    break;

  case 44:
#line 184 "config-parser.y"
{
  xfree(OptionsItem.scanlog);
  OptionsItem.scanlog = xstrdup((yyvsp[-1].string));
}
#line 1882 "config-parser.c"
    break;

  case 45:
#line 190 "config-parser.y"
{
  OptionsItem.command_queue_size = (yyvsp[-1].number);
}
#line 1890 "config-parser.c"
    break;

  case 46:
#line 195 "config-parser.y"
{
  OptionsItem.command_interval = (yyvsp[-1].number);
}
#line 1898 "config-parser.c"
    break;

  case 47:
#line 200 "config-parser.y"
{
  OptionsItem.command_timeout = (yyvsp[-1].number);
}
#line 1906 "config-parser.c"
    break;

  case 74:
#line 236 "config-parser.y"
{
  xfree(IRCItem.away);
  IRCItem.away = xstrdup((yyvsp[-1].string));
}
#line 1915 "config-parser.c"
    break;

  case 75:
#line 242 "config-parser.y"
{
  xfree(IRCItem.kline);
  IRCItem.kline = xstrdup((yyvsp[-1].string));
}
#line 1924 "config-parser.c"
    break;

  case 76:
#line 248 "config-parser.y"
{
  xfree(IRCItem.mode);
  IRCItem.mode = xstrdup((yyvsp[-1].string));
}
#line 1933 "config-parser.c"
    break;

  case 77:
#line 254 "config-parser.y"
{
  xfree(IRCItem.nick);
  IRCItem.nick = xstrdup((yyvsp[-1].string));
}
#line 1942 "config-parser.c"
    break;

  case 78:
#line 260 "config-parser.y"
{
  xfree(IRCItem.nickserv);
  IRCItem.nickserv = xstrdup((yyvsp[-1].string));
}
#line 1951 "config-parser.c"
    break;

  case 79:
#line 266 "config-parser.y"
{
  xfree(IRCItem.oper);
  IRCItem.oper = xstrdup((yyvsp[-1].string));
}
#line 1960 "config-parser.c"
    break;

  case 80:
#line 272 "config-parser.y"
{
  xfree(IRCItem.password);
  IRCItem.password = xstrdup((yyvsp[-1].string));
}
#line 1969 "config-parser.c"
    break;

  case 81:
#line 278 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.performs);
}
#line 1977 "config-parser.c"
    break;

  case 82:
#line 283 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.notices);
}
#line 1985 "config-parser.c"
    break;

  case 83:
#line 288 "config-parser.y"
{
  IRCItem.port = (yyvsp[-1].number);
}
#line 1993 "config-parser.c"
    break;

  case 84:
#line 293 "config-parser.y"
{
  IRCItem.tls = (yyvsp[-1].number);
}
#line 2001 "config-parser.c"
    break;

  case 85:
#line 298 "config-parser.y"
{
  xfree(IRCItem.rsa_private_key_file);
  IRCItem.rsa_private_key_file = xstrdup((yyvsp[-1].string));
}
#line 2010 "config-parser.c"
    break;

  case 86:
#line 305 "config-parser.y"
{
  xfree(IRCItem.tls_certificate_file);
  IRCItem.tls_certificate_file = xstrdup((yyvsp[-1].string));
}
#line 2019 "config-parser.c"
    break;

  case 87:
#line 311 "config-parser.y"
{
  IRCItem.tls_hostname_verification = (yyvsp[-1].number);
}
#line 2027 "config-parser.c"
    break;

  case 88:
#line 316 "config-parser.y"
{
  IRCItem.readtimeout = (yyvsp[-1].number);
}
#line 2035 "config-parser.c"
    break;

  case 89:
#line 321 "config-parser.y"
{
  IRCItem.reconnectinterval = (yyvsp[-1].number);
}
#line 2043 "config-parser.c"
    break;

  case 90:
#line 326 "config-parser.y"
{
  xfree(IRCItem.realname);
  IRCItem.realname = xstrdup((yyvsp[-1].string));
}
#line 2052 "config-parser.c"
    break;

  case 91:
#line 332 "config-parser.y"
{
  xfree(IRCItem.server);
  IRCItem.server = xstrdup((yyvsp[-1].string));
}
#line 2061 "config-parser.c"
    break;

  case 92:
#line 338 "config-parser.y"
{
  xfree(IRCItem.username);
  IRCItem.username = xstrdup((yyvsp[-1].string));
}
#line 2070 "config-parser.c"
    break;

  case 93:
#line 344 "config-parser.y"
{
  xfree(IRCItem.bind);
  IRCItem.bind = xstrdup((yyvsp[-1].string));
}
#line 2079 "config-parser.c"
    break;

  case 94:
#line 350 "config-parser.y"
{
  xfree(IRCItem.connregex);
  IRCItem.connregex = xstrdup((yyvsp[-1].string));
}
#line 2088 "config-parser.c"
    break;

  case 95:
#line 358 "config-parser.y"
{
  struct ChannelConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->key = xstrdup("");
  item->invite = xstrdup("");

  list_add(item, &item->node, &IRCItem.channels);
  tmp = item;
}
#line 2104 "config-parser.c"
    break;

  case 102:
#line 379 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2115 "config-parser.c"
    break;

  case 103:
#line 387 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 2126 "config-parser.c"
    break;

  case 104:
#line 395 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 2137 "config-parser.c"
    break;

  case 105:
#line 405 "config-parser.y"
{
  struct UserConf *item;

  item = xcalloc(sizeof(*item));

  list_add(item, &item->node, &UserItemList);
  tmp = item;
}
#line 2150 "config-parser.c"
    break;

  case 112:
#line 423 "config-parser.y"
{
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->masks);
}
#line 2160 "config-parser.c"
    break;

  case 113:
#line 430 "config-parser.y"
{
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->scanners);
}
#line 2170 "config-parser.c"
    break;

  case 114:
#line 439 "config-parser.y"
{
  struct ScannerConf *item, *olditem;

  item = xcalloc(sizeof(*item));

  /* Setup ScannerConf defaults */
  item->name = xstrdup("undefined");

  if (LIST_SIZE(&ScannerItemList))
  {
    olditem = ScannerItemList.tail->data;

    item->bind = xstrdup(olditem->bind);
    item->fd = olditem->fd;
    item->target_ip = xstrdup(olditem->target_ip);
    item->target_port = olditem->target_port;
    item->timeout = olditem->timeout;
    item->max_read = olditem->max_read;
    memcpy(&item->target_string, &olditem->target_string, sizeof(item->target_string));
  }
  else
  {
    item->bind = xstrdup("0.0.0.0");
    item->fd = 512;
    item->target_ip = xstrdup("127.0.0.1");
    item->target_port = 6667;
    item->timeout = 30;
    item->max_read = 4096;
  }

  list_add(item, &item->node, &ScannerItemList);
  tmp = item;
}
#line 2208 "config-parser.c"
    break;

  case 128:
#line 489 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2219 "config-parser.c"
    break;

  case 129:
#line 497 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->bind);
  item->bind = xstrdup((yyvsp[-1].string));
}
#line 2230 "config-parser.c"
    break;

  case 130:
#line 505 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2241 "config-parser.c"
    break;

  case 131:
#line 513 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  if (item->target_string_created == 0)
  {
    memset(&item->target_string, 0, sizeof(item->target_string));
    item->target_string_created = 1;
  }

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->target_string);
}
#line 2257 "config-parser.c"
    break;

  case 132:
#line 526 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2267 "config-parser.c"
    break;

  case 133:
#line 533 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2277 "config-parser.c"
    break;

  case 134:
#line 540 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2287 "config-parser.c"
    break;

  case 135:
#line 547 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2297 "config-parser.c"
    break;

  case 136:
#line 554 "config-parser.y"
{
  struct ProtocolConf *item;
  struct ScannerConf *item2;

  item = xcalloc(sizeof(*item));
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  list_add(item, node_create(), &item2->protocols);
}
#line 2314 "config-parser.c"
    break;

  case 145:
#line 581 "config-parser.y"
{
  xfree(OpmItem.dnsbl_from);
  OpmItem.dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2323 "config-parser.c"
    break;

  case 146:
#line 587 "config-parser.y"
{
  xfree(OpmItem.dnsbl_to);
  OpmItem.dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2332 "config-parser.c"
    break;

  case 147:
#line 593 "config-parser.y"
{
  xfree(OpmItem.sendmail);
  OpmItem.sendmail = xstrdup((yyvsp[-1].string));
}
#line 2341 "config-parser.c"
    break;

  case 148:
#line 601 "config-parser.y"
{
  struct BlacklistConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->kline = xstrdup("");
  item->ipv4 = 1;
  item->ban_unknown = 0;
  item->type = A_BITMASK;

  list_add(item, node_create(), &OpmItem.blacklists);

  tmp = item;
}
#line 2360 "config-parser.c"
    break;

  case 159:
#line 629 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2371 "config-parser.c"
    break;

  case 160:
#line 637 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv4 = 0;
  item->ipv6 = 0;
}
#line 2382 "config-parser.c"
    break;

  case 164:
#line 646 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv4 = 1;
}
#line 2392 "config-parser.c"
    break;

  case 165:
#line 651 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv6 = 1;
}
#line 2402 "config-parser.c"
    break;

  case 166:
#line 658 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2413 "config-parser.c"
    break;

  case 167:
#line 666 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2428 "config-parser.c"
    break;

  case 168:
#line 678 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2438 "config-parser.c"
    break;

  case 172:
#line 690 "config-parser.y"
{
  struct BlacklistReplyConf *item;
  struct BlacklistConf *blacklist = tmp;

  item = xcalloc(sizeof(*item));
  item->number = (yyvsp[-3].number);
  item->type = xstrdup((yyvsp[-1].string));

  list_add(item, node_create(), &blacklist->reply);
}
#line 2453 "config-parser.c"
    break;

  case 178:
#line 712 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &ExemptItem.masks);
}
#line 2461 "config-parser.c"
    break;


#line 2465 "config-parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 716 "config-parser.y"


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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
extern int line_num;

#line 83 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TAMSAYI = 3,                    /* TAMSAYI  */
  YYSYMBOL_ONDALIK = 4,                    /* ONDALIK  */
  YYSYMBOL_METIN = 5,                      /* METIN  */
  YYSYMBOL_TANIMLAYICI = 6,                /* TANIMLAYICI  */
  YYSYMBOL_EGER = 7,                       /* EGER  */
  YYSYMBOL_DEGILSE = 8,                    /* DEGILSE  */
  YYSYMBOL_IKEN = 9,                       /* IKEN  */
  YYSYMBOL_SON = 10,                       /* SON  */
  YYSYMBOL_DOGRU = 11,                     /* DOGRU  */
  YYSYMBOL_YANLIS = 12,                    /* YANLIS  */
  YYSYMBOL_FONKSIYON = 13,                 /* FONKSIYON  */
  YYSYMBOL_DONDUR = 14,                    /* DONDUR  */
  YYSYMBOL_EKRANA_YAZ = 15,                /* EKRANA_YAZ  */
  YYSYMBOL_DEGER_GOSTER = 16,              /* DEGER_GOSTER  */
  YYSYMBOL_EKRANI_TEMIZLE = 17,            /* EKRANI_TEMIZLE  */
  YYSYMBOL_RENK_AYARLA = 18,               /* RENK_AYARLA  */
  YYSYMBOL_KALINLIK_AYARLA = 19,           /* KALINLIK_AYARLA  */
  YYSYMBOL_DIKDORTGEN_CIZ = 20,            /* DIKDORTGEN_CIZ  */
  YYSYMBOL_DAIRE_CIZ = 21,                 /* DAIRE_CIZ  */
  YYSYMBOL_UCGEN_CIZ = 22,                 /* UCGEN_CIZ  */
  YYSYMBOL_DOLDUR = 23,                    /* DOLDUR  */
  YYSYMBOL_GUNCELLE = 24,                  /* GUNCELLE  */
  YYSYMBOL_ATAMA = 25,                     /* "←"  */
  YYSYMBOL_ARTI_ATAMA = 26,                /* "+←"  */
  YYSYMBOL_EKSI_ATAMA = 27,                /* "-←"  */
  YYSYMBOL_VE = 28,                        /* "ve"  */
  YYSYMBOL_VEYA = 29,                      /* "veya"  */
  YYSYMBOL_DEGIL = 30,                     /* "değil"  */
  YYSYMBOL_ESIT = 31,                      /* "=="  */
  YYSYMBOL_ESIT_DEGIL = 32,                /* "!="  */
  YYSYMBOL_KUCUK = 33,                     /* "<"  */
  YYSYMBOL_BUYUK = 34,                     /* ">"  */
  YYSYMBOL_KUCUK_ESIT = 35,                /* "<="  */
  YYSYMBOL_BUYUK_ESIT = 36,                /* ">="  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_41_ = 41,                       /* '%'  */
  YYSYMBOL_UMINUS = 42,                    /* UMINUS  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_ifadeler = 50,                  /* ifadeler  */
  YYSYMBOL_ifade = 51,                     /* ifade  */
  YYSYMBOL_ifade_opt = 52,                 /* ifade_opt  */
  YYSYMBOL_blok = 53,                      /* blok  */
  YYSYMBOL_deyim = 54,                     /* deyim  */
  YYSYMBOL_atama_deyimi = 55,              /* atama_deyimi  */
  YYSYMBOL_dongu_deyimi = 56,              /* dongu_deyimi  */
  YYSYMBOL_kosul_deyimi = 57,              /* kosul_deyimi  */
  YYSYMBOL_fonksiyon_tanimi = 58,          /* fonksiyon_tanimi  */
  YYSYMBOL_dondur_deyimi = 59,             /* dondur_deyimi  */
  YYSYMBOL_opt_parametre_listesi = 60,     /* opt_parametre_listesi  */
  YYSYMBOL_parametre_listesi = 61,         /* parametre_listesi  */
  YYSYMBOL_fonksiyon_cagrisi = 62,         /* fonksiyon_cagrisi  */
  YYSYMBOL_opt_arguman_listesi = 63,       /* opt_arguman_listesi  */
  YYSYMBOL_arguman_listesi = 64,           /* arguman_listesi  */
  YYSYMBOL_komut = 65,                     /* komut  */
  YYSYMBOL_mantiksal_ifade = 66,           /* mantiksal_ifade  */
  YYSYMBOL_aritmetik_ifade = 67,           /* aritmetik_ifade  */
  YYSYMBOL_terim = 68,                     /* terim  */
  YYSYMBOL_faktor = 69,                    /* faktor  */
  YYSYMBOL_unary_ifade = 70,               /* unary_ifade  */
  YYSYMBOL_literal = 71                    /* literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      45,    46,    39,    37,    47,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    68,    69,    74,    76,    78,    84,    85,
      90,    95,    97,    99,   101,   103,   105,   107,   112,   114,
     116,   121,   126,   128,   133,   138,   144,   145,   150,   152,
     157,   163,   164,   169,   171,   176,   178,   180,   182,   184,
     186,   188,   190,   192,   194,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   224,   232,   234,   236,
     241,   243,   245,   247,   252,   254,   259,   261,   266,   271,
     273,   275
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
  "\"end of file\"", "error", "\"invalid token\"", "TAMSAYI", "ONDALIK",
  "METIN", "TANIMLAYICI", "EGER", "DEGILSE", "IKEN", "SON", "DOGRU",
  "YANLIS", "FONKSIYON", "DONDUR", "EKRANA_YAZ", "DEGER_GOSTER",
  "EKRANI_TEMIZLE", "RENK_AYARLA", "KALINLIK_AYARLA", "DIKDORTGEN_CIZ",
  "DAIRE_CIZ", "UCGEN_CIZ", "DOLDUR", "GUNCELLE", "\"←\"", "\"+←\"",
  "\"-←\"", "\"ve\"", "\"veya\"", "\"değil\"", "\"==\"", "\"!=\"", "\"<\"",
  "\">\"", "\"<=\"", "\">=\"", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS",
  "'{'", "'}'", "'('", "')'", "','", "$accept", "program", "ifadeler",
  "ifade", "ifade_opt", "blok", "deyim", "atama_deyimi", "dongu_deyimi",
  "kosul_deyimi", "fonksiyon_tanimi", "dondur_deyimi",
  "opt_parametre_listesi", "parametre_listesi", "fonksiyon_cagrisi",
  "opt_arguman_listesi", "arguman_listesi", "komut", "mantiksal_ifade",
  "aritmetik_ifade", "terim", "faktor", "unary_ifade", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -111,     2,   104,  -111,  -111,  -111,  -111,   -11,   -36,   -32,
    -111,  -111,    11,   104,     7,    15,    17,    36,    42,    44,
      50,    55,    60,    61,   127,     1,   127,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,    63,   168,    38,  -111,
    -111,  -111,   104,   104,   104,   104,   127,   127,    67,  -111,
    -111,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,  -111,  -111,   168,  -111,   -10,   142,   127,   127,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    -111,  -111,  -111,  -111,   -24,   -16,    -8,    -3,    29,    83,
      89,    94,    95,    99,   100,   101,   102,   105,   106,  -111,
    -111,  -111,   116,    98,    56,    56,    56,    56,    56,    56,
      38,    38,  -111,  -111,  -111,  -111,   104,   107,   107,  -111,
     108,   109,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,    -9,  -111,  -111,    78,   143,   107,   149,    52,
     107,  -111,  -111,   148,  -111,  -111,   150,  -111,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,    69,    70,    71,    67,     0,     0,
      55,    56,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,    11,
      12,    13,    14,    15,    17,    16,     7,     6,    59,    63,
      64,    66,     0,     0,     0,    31,     0,     0,     0,     9,
      25,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    67,    53,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    20,    33,     0,    32,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      65,    51,    52,     0,    45,    46,    47,    48,    49,    50,
      57,    58,    60,    61,    62,    30,     0,     0,     0,    28,
       0,    27,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    34,     3,     0,     0,     0,     0,     0,
       0,    22,    21,     0,    29,    10,     0,    24,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,    25,    -2,  -111,  -110,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   138,  -111,  -111,   -14,   -23,
      23,     6,   136,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    83,    50,   135,    28,    29,    30,    31,
      32,    33,   120,   121,    34,    84,    85,    35,    36,    37,
      38,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    63,     3,    66,     4,     5,     6,    61,   136,    46,
      62,    49,    65,    47,    42,    43,    44,    48,    67,    68,
      67,    68,   115,    63,    63,    67,    68,   143,    75,    76,
     146,   116,    86,    87,    45,   119,    99,   100,   117,    25,
      80,    81,    82,   118,    63,    63,   104,   105,   106,   107,
     108,   109,    51,   101,   102,     4,     5,     6,     7,     8,
      52,     9,    53,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    77,    78,    79,
     132,    54,    24,   112,   113,   114,   140,    55,   141,    56,
      25,    67,    68,    75,    76,    57,   145,    26,   110,   111,
      58,     4,     5,     6,    61,    59,    60,     4,     5,     6,
       7,     8,    88,     9,   133,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   122,
       4,     5,     6,    61,    24,   123,    25,    27,    10,    11,
     124,   125,    25,   103,    67,   126,   127,   128,   129,    26,
     134,   130,   131,   142,   137,   144,   138,    24,   147,   139,
     148,    64,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,    26,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,   100,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    69,
      70,    71,    72,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
       2,    24,     0,    26,     3,     4,     5,     6,   118,    45,
      24,    13,    26,    45,    25,    26,    27,     6,    28,    29,
      28,    29,    46,    46,    47,    28,    29,   137,    37,    38,
     140,    47,    46,    47,    45,     6,    46,    46,    46,    38,
      42,    43,    44,    46,    67,    68,    69,    70,    71,    72,
      73,    74,    45,    67,    68,     3,     4,     5,     6,     7,
      45,     9,    45,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    39,    40,    41,
     103,    45,    30,    77,    78,    79,     8,    45,    10,    45,
      38,    28,    29,    37,    38,    45,    44,    45,    75,    76,
      45,     3,     4,     5,     6,    45,    45,     3,     4,     5,
       6,     7,    45,     9,   116,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    46,
       3,     4,     5,     6,    30,    46,    38,   139,    11,    12,
      46,    46,    38,    45,    28,    46,    46,    46,    46,    45,
      43,    46,    46,    10,    46,     6,    47,    30,    10,   134,
      10,    25,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    31,
      32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,     4,     5,     6,     7,     9,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    30,    38,    45,    51,    54,    55,
      56,    57,    58,    59,    62,    65,    66,    67,    68,    69,
      70,    71,    25,    26,    27,    45,    45,    45,     6,    51,
      52,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,     6,    66,    67,    70,    66,    67,    28,    29,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      51,    51,    51,    51,    63,    64,    66,    66,    45,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    46,
      46,    66,    66,    45,    67,    67,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    46,    47,    46,    46,     6,
      60,    61,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    67,    51,    43,    53,    53,    46,    47,    50,
       8,    10,    10,    53,     6,    44,    53,    10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    52,    52,
      53,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    56,    57,    57,    58,    59,    60,    60,    61,    61,
      62,    63,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     0,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     6,     6,     8,     7,     2,     0,     1,     1,     3,
       4,     0,     1,     1,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     3,     1,     1,     2,     1,
       1,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
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
  case 2: /* program: ifadeler  */
#line 61 "parser.y"
        { 
            (yyval.dummy) = 0; // Sadece gramer denetimi yapacağız, AST üretmeyeceğiz
        }
#line 1251 "parser.tab.c"
    break;

  case 3: /* ifadeler: %empty  */
#line 68 "parser.y"
        { (yyval.dummy) = 0; }
#line 1257 "parser.tab.c"
    break;

  case 4: /* ifadeler: ifadeler ifade  */
#line 70 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1263 "parser.tab.c"
    break;

  case 5: /* ifade: deyim  */
#line 75 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1269 "parser.tab.c"
    break;

  case 6: /* ifade: aritmetik_ifade  */
#line 77 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1275 "parser.tab.c"
    break;

  case 7: /* ifade: mantiksal_ifade  */
#line 79 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1281 "parser.tab.c"
    break;

  case 8: /* ifade_opt: %empty  */
#line 84 "parser.y"
        { (yyval.dummy) = 0; }
#line 1287 "parser.tab.c"
    break;

  case 9: /* ifade_opt: ifade  */
#line 86 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1293 "parser.tab.c"
    break;

  case 10: /* blok: '{' ifadeler '}'  */
#line 91 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1299 "parser.tab.c"
    break;

  case 11: /* deyim: atama_deyimi  */
#line 96 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1305 "parser.tab.c"
    break;

  case 12: /* deyim: dongu_deyimi  */
#line 98 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1311 "parser.tab.c"
    break;

  case 13: /* deyim: kosul_deyimi  */
#line 100 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1317 "parser.tab.c"
    break;

  case 14: /* deyim: fonksiyon_tanimi  */
#line 102 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1323 "parser.tab.c"
    break;

  case 15: /* deyim: dondur_deyimi  */
#line 104 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1329 "parser.tab.c"
    break;

  case 16: /* deyim: komut  */
#line 106 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1335 "parser.tab.c"
    break;

  case 17: /* deyim: fonksiyon_cagrisi  */
#line 108 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1341 "parser.tab.c"
    break;

  case 18: /* atama_deyimi: TANIMLAYICI "←" ifade  */
#line 113 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1347 "parser.tab.c"
    break;

  case 19: /* atama_deyimi: TANIMLAYICI "+←" ifade  */
#line 115 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1353 "parser.tab.c"
    break;

  case 20: /* atama_deyimi: TANIMLAYICI "-←" ifade  */
#line 117 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1359 "parser.tab.c"
    break;

  case 21: /* dongu_deyimi: IKEN '(' mantiksal_ifade ')' blok SON  */
#line 122 "parser.y"
        { (yyval.dummy) = (yyvsp[-3].dummy); }
#line 1365 "parser.tab.c"
    break;

  case 22: /* kosul_deyimi: EGER '(' mantiksal_ifade ')' blok SON  */
#line 127 "parser.y"
        { (yyval.dummy) = (yyvsp[-3].dummy); }
#line 1371 "parser.tab.c"
    break;

  case 23: /* kosul_deyimi: EGER '(' mantiksal_ifade ')' blok DEGILSE blok SON  */
#line 129 "parser.y"
        { (yyval.dummy) = (yyvsp[-5].dummy); }
#line 1377 "parser.tab.c"
    break;

  case 24: /* fonksiyon_tanimi: FONKSIYON TANIMLAYICI '(' opt_parametre_listesi ')' blok SON  */
#line 134 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1383 "parser.tab.c"
    break;

  case 25: /* dondur_deyimi: DONDUR ifade_opt  */
#line 139 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1389 "parser.tab.c"
    break;

  case 26: /* opt_parametre_listesi: %empty  */
#line 144 "parser.y"
        { (yyval.dummy) = 0; }
#line 1395 "parser.tab.c"
    break;

  case 27: /* opt_parametre_listesi: parametre_listesi  */
#line 146 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1401 "parser.tab.c"
    break;

  case 28: /* parametre_listesi: TANIMLAYICI  */
#line 151 "parser.y"
        { (yyval.dummy) = 0; }
#line 1407 "parser.tab.c"
    break;

  case 29: /* parametre_listesi: parametre_listesi ',' TANIMLAYICI  */
#line 153 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1413 "parser.tab.c"
    break;

  case 30: /* fonksiyon_cagrisi: TANIMLAYICI '(' opt_arguman_listesi ')'  */
#line 158 "parser.y"
        { (yyval.dummy) = 0; }
#line 1419 "parser.tab.c"
    break;

  case 31: /* opt_arguman_listesi: %empty  */
#line 163 "parser.y"
        { (yyval.dummy) = 0; }
#line 1425 "parser.tab.c"
    break;

  case 32: /* opt_arguman_listesi: arguman_listesi  */
#line 165 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1431 "parser.tab.c"
    break;

  case 33: /* arguman_listesi: ifade  */
#line 170 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1437 "parser.tab.c"
    break;

  case 34: /* arguman_listesi: arguman_listesi ',' ifade  */
#line 172 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1443 "parser.tab.c"
    break;

  case 35: /* komut: EKRANA_YAZ '(' opt_arguman_listesi ')'  */
#line 177 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1449 "parser.tab.c"
    break;

  case 36: /* komut: DEGER_GOSTER '(' opt_arguman_listesi ')'  */
#line 179 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1455 "parser.tab.c"
    break;

  case 37: /* komut: EKRANI_TEMIZLE '(' opt_arguman_listesi ')'  */
#line 181 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1461 "parser.tab.c"
    break;

  case 38: /* komut: RENK_AYARLA '(' opt_arguman_listesi ')'  */
#line 183 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1467 "parser.tab.c"
    break;

  case 39: /* komut: KALINLIK_AYARLA '(' opt_arguman_listesi ')'  */
#line 185 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1473 "parser.tab.c"
    break;

  case 40: /* komut: DIKDORTGEN_CIZ '(' opt_arguman_listesi ')'  */
#line 187 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1479 "parser.tab.c"
    break;

  case 41: /* komut: DAIRE_CIZ '(' opt_arguman_listesi ')'  */
#line 189 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1485 "parser.tab.c"
    break;

  case 42: /* komut: UCGEN_CIZ '(' opt_arguman_listesi ')'  */
#line 191 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1491 "parser.tab.c"
    break;

  case 43: /* komut: DOLDUR '(' opt_arguman_listesi ')'  */
#line 193 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1497 "parser.tab.c"
    break;

  case 44: /* komut: GUNCELLE '(' opt_arguman_listesi ')'  */
#line 195 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1503 "parser.tab.c"
    break;

  case 45: /* mantiksal_ifade: aritmetik_ifade "==" aritmetik_ifade  */
#line 200 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1509 "parser.tab.c"
    break;

  case 46: /* mantiksal_ifade: aritmetik_ifade "!=" aritmetik_ifade  */
#line 202 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1515 "parser.tab.c"
    break;

  case 47: /* mantiksal_ifade: aritmetik_ifade "<" aritmetik_ifade  */
#line 204 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1521 "parser.tab.c"
    break;

  case 48: /* mantiksal_ifade: aritmetik_ifade ">" aritmetik_ifade  */
#line 206 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1527 "parser.tab.c"
    break;

  case 49: /* mantiksal_ifade: aritmetik_ifade "<=" aritmetik_ifade  */
#line 208 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1533 "parser.tab.c"
    break;

  case 50: /* mantiksal_ifade: aritmetik_ifade ">=" aritmetik_ifade  */
#line 210 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1539 "parser.tab.c"
    break;

  case 51: /* mantiksal_ifade: mantiksal_ifade "ve" mantiksal_ifade  */
#line 212 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1545 "parser.tab.c"
    break;

  case 52: /* mantiksal_ifade: mantiksal_ifade "veya" mantiksal_ifade  */
#line 214 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1551 "parser.tab.c"
    break;

  case 53: /* mantiksal_ifade: "değil" mantiksal_ifade  */
#line 216 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1557 "parser.tab.c"
    break;

  case 54: /* mantiksal_ifade: '(' mantiksal_ifade ')'  */
#line 218 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1563 "parser.tab.c"
    break;

  case 55: /* mantiksal_ifade: DOGRU  */
#line 220 "parser.y"
        { 
          /* Create a boolean constant node */
          (yyval.dummy) = 1; /* In a real implementation, you would create an AST node here */
        }
#line 1572 "parser.tab.c"
    break;

  case 56: /* mantiksal_ifade: YANLIS  */
#line 225 "parser.y"
        { 
          /* Create a boolean constant node */
          (yyval.dummy) = 0; /* In a real implementation, you would create an AST node here */
        }
#line 1581 "parser.tab.c"
    break;

  case 57: /* aritmetik_ifade: aritmetik_ifade '+' terim  */
#line 233 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1587 "parser.tab.c"
    break;

  case 58: /* aritmetik_ifade: aritmetik_ifade '-' terim  */
#line 235 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1593 "parser.tab.c"
    break;

  case 59: /* aritmetik_ifade: terim  */
#line 237 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1599 "parser.tab.c"
    break;

  case 60: /* terim: terim '*' faktor  */
#line 242 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1605 "parser.tab.c"
    break;

  case 61: /* terim: terim '/' faktor  */
#line 244 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1611 "parser.tab.c"
    break;

  case 62: /* terim: terim '%' faktor  */
#line 246 "parser.y"
        { (yyval.dummy) = (yyvsp[-2].dummy); }
#line 1617 "parser.tab.c"
    break;

  case 63: /* terim: faktor  */
#line 248 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1623 "parser.tab.c"
    break;

  case 64: /* faktor: unary_ifade  */
#line 253 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1629 "parser.tab.c"
    break;

  case 65: /* faktor: '(' aritmetik_ifade ')'  */
#line 255 "parser.y"
        { (yyval.dummy) = (yyvsp[-1].dummy); }
#line 1635 "parser.tab.c"
    break;

  case 66: /* unary_ifade: literal  */
#line 260 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1641 "parser.tab.c"
    break;

  case 67: /* unary_ifade: TANIMLAYICI  */
#line 262 "parser.y"
        {
          /* Create identifier node */
          (yyval.dummy) = 0; /* In a real implementation, you would create an AST node here */
        }
#line 1650 "parser.tab.c"
    break;

  case 68: /* unary_ifade: '-' unary_ifade  */
#line 267 "parser.y"
        { (yyval.dummy) = (yyvsp[0].dummy); }
#line 1656 "parser.tab.c"
    break;

  case 69: /* literal: TAMSAYI  */
#line 272 "parser.y"
        { (yyval.dummy) = 0; }
#line 1662 "parser.tab.c"
    break;

  case 70: /* literal: ONDALIK  */
#line 274 "parser.y"
        { (yyval.dummy) = 0; }
#line 1668 "parser.tab.c"
    break;

  case 71: /* literal: METIN  */
#line 276 "parser.y"
        { (yyval.dummy) = 0; }
#line 1674 "parser.tab.c"
    break;


#line 1678 "parser.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 279 "parser.y"


void yyerror(const char* s) {
    fprintf(stderr, "Hata: Satır %d: %s\n", line_num, s);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Kullanım: %s <dosya>\n", argv[0]);
        return 1;
    }

    FILE* input = fopen(argv[1], "r");
    if (!input) {
        fprintf(stderr, "Dosya açılamadı: %s\n", argv[1]);
        return 1;
    }

    yyin = input;
    if (yyparse() == 0) {
        printf("[Başarılı] Kod gramer kurallarına uygundur.\n");
    }

    fclose(input);
    return 0;
}

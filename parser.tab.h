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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    TAMSAYI = 258,                 /* TAMSAYI  */
    ONDALIK = 259,                 /* ONDALIK  */
    METIN = 260,                   /* METIN  */
    TANIMLAYICI = 261,             /* TANIMLAYICI  */
    EGER = 262,                    /* EGER  */
    DEGILSE = 263,                 /* DEGILSE  */
    IKEN = 264,                    /* IKEN  */
    SON = 265,                     /* SON  */
    DOGRU = 266,                   /* DOGRU  */
    YANLIS = 267,                  /* YANLIS  */
    FONKSIYON = 268,               /* FONKSIYON  */
    DONDUR = 269,                  /* DONDUR  */
    EKRANA_YAZ = 270,              /* EKRANA_YAZ  */
    DEGER_GOSTER = 271,            /* DEGER_GOSTER  */
    EKRANI_TEMIZLE = 272,          /* EKRANI_TEMIZLE  */
    RENK_AYARLA = 273,             /* RENK_AYARLA  */
    KALINLIK_AYARLA = 274,         /* KALINLIK_AYARLA  */
    DIKDORTGEN_CIZ = 275,          /* DIKDORTGEN_CIZ  */
    DAIRE_CIZ = 276,               /* DAIRE_CIZ  */
    UCGEN_CIZ = 277,               /* UCGEN_CIZ  */
    DOLDUR = 278,                  /* DOLDUR  */
    GUNCELLE = 279,                /* GUNCELLE  */
    ATAMA = 280,                   /* "←"  */
    ARTI_ATAMA = 281,              /* "+←"  */
    EKSI_ATAMA = 282,              /* "-←"  */
    VE = 283,                      /* "ve"  */
    VEYA = 284,                    /* "veya"  */
    DEGIL = 285,                   /* "değil"  */
    ESIT = 286,                    /* "=="  */
    ESIT_DEGIL = 287,              /* "!="  */
    KUCUK = 288,                   /* "<"  */
    BUYUK = 289,                   /* ">"  */
    KUCUK_ESIT = 290,              /* "<="  */
    BUYUK_ESIT = 291,              /* ">="  */
    UMINUS = 292                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    int int_value;
    double double_value;
    char* string_value;
    char* identifier;
    int dummy;  /* Sadece sentaks analizi yapmak için kullanılacak */

#line 109 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

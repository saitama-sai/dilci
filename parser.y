%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
extern int line_num;
%}

/* Değer tipleri için union tanımlaması */
%union {
    int int_value;
    double double_value;
    char* string_value;
    char* identifier;
    int dummy;  /* Sadece sentaks analizi yapmak için kullanılacak */
}

%token <int_value> TAMSAYI
%token <double_value> ONDALIK
%token <string_value> METIN
%token <identifier> TANIMLAYICI

%token EGER DEGILSE IKEN SON
%token <int_value> DOGRU YANLIS
%token FONKSIYON DONDUR
%token EKRANA_YAZ DEGER_GOSTER
%token EKRANI_TEMIZLE RENK_AYARLA KALINLIK_AYARLA
%token DIKDORTGEN_CIZ DAIRE_CIZ UCGEN_CIZ DOLDUR GUNCELLE

%token ATAMA "←"
%token ARTI_ATAMA "+←"
%token EKSI_ATAMA "-←"
%token VE "ve" VEYA "veya" DEGIL "değil"
%token ESIT "==" ESIT_DEGIL "!=" KUCUK "<" BUYUK ">" KUCUK_ESIT "<=" BUYUK_ESIT ">="

/* Tip tanımlamaları - her üretim kuralına uygun tip atanır */
%type <dummy> program ifadeler ifade ifade_opt blok deyim atama_deyimi
%type <dummy> dongu_deyimi kosul_deyimi fonksiyon_tanimi dondur_deyimi
%type <dummy> opt_parametre_listesi parametre_listesi fonksiyon_cagrisi
%type <dummy> opt_arguman_listesi arguman_listesi komut
%type <dummy> mantiksal_ifade aritmetik_ifade terim faktor unary_ifade literal

%left VEYA
%left VE
%left ESIT ESIT_DEGIL
%left KUCUK BUYUK KUCUK_ESIT BUYUK_ESIT
%left '+' '-'
%left '*' '/' '%'
%right DEGIL UMINUS

%start program

%%

program
    : ifadeler
        { 
            $$ = 0; // Sadece gramer denetimi yapacağız, AST üretmeyeceğiz
        }
    ;

ifadeler
    : /* bos */
        { $$ = 0; }
    | ifadeler ifade
        { $$ = $1; }
    ;

ifade
    : deyim
        { $$ = $1; }
    | aritmetik_ifade
        { $$ = $1; }
    | mantiksal_ifade
        { $$ = $1; }
    ;

ifade_opt
    : /* boş */
        { $$ = 0; }
    | ifade
        { $$ = $1; }
    ;

blok
    : '{' ifadeler '}'
        { $$ = $2; }
    ;

deyim
    : atama_deyimi
        { $$ = $1; }
    | dongu_deyimi
        { $$ = $1; }
    | kosul_deyimi
        { $$ = $1; }
    | fonksiyon_tanimi
        { $$ = $1; }
    | dondur_deyimi
        { $$ = $1; }
    | komut
        { $$ = $1; }
    | fonksiyon_cagrisi
        { $$ = $1; }
    ;

atama_deyimi
    : TANIMLAYICI ATAMA ifade
        { $$ = $3; }
    | TANIMLAYICI ARTI_ATAMA ifade
        { $$ = $3; }
    | TANIMLAYICI EKSI_ATAMA ifade
        { $$ = $3; }
    ;

dongu_deyimi
    : IKEN '(' mantiksal_ifade ')' blok SON
        { $$ = $3; }
    ;

kosul_deyimi
    : EGER '(' mantiksal_ifade ')' blok SON
        { $$ = $3; }
    | EGER '(' mantiksal_ifade ')' blok DEGILSE blok SON
        { $$ = $3; }
    ;

fonksiyon_tanimi
    : FONKSIYON TANIMLAYICI '(' opt_parametre_listesi ')' blok SON
        { $$ = $6; }
    ;

dondur_deyimi
    : DONDUR ifade_opt
        { $$ = $2; }
    ;

opt_parametre_listesi
    : /* bos */
        { $$ = 0; }
    | parametre_listesi
        { $$ = $1; }
    ;

parametre_listesi
    : TANIMLAYICI
        { $$ = 0; }
    | parametre_listesi ',' TANIMLAYICI
        { $$ = $1; }
    ;

fonksiyon_cagrisi
    : TANIMLAYICI '(' opt_arguman_listesi ')'
        { $$ = 0; }
    ;

opt_arguman_listesi
    : /* boş */
        { $$ = 0; }
    | arguman_listesi
        { $$ = $1; }
    ;

arguman_listesi
    : ifade
        { $$ = $1; }
    | arguman_listesi ',' ifade
        { $$ = $1; }
    ;

komut
    : EKRANA_YAZ '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | DEGER_GOSTER '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | EKRANI_TEMIZLE '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | RENK_AYARLA '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | KALINLIK_AYARLA '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | DIKDORTGEN_CIZ '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | DAIRE_CIZ '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | UCGEN_CIZ '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | DOLDUR '(' opt_arguman_listesi ')'
        { $$ = $3; }
    | GUNCELLE '(' opt_arguman_listesi ')'
        { $$ = $3; }
    ;

mantiksal_ifade
    : aritmetik_ifade ESIT aritmetik_ifade
        { $$ = $1; }
    | aritmetik_ifade ESIT_DEGIL aritmetik_ifade
        { $$ = $1; }
    | aritmetik_ifade KUCUK aritmetik_ifade
        { $$ = $1; }
    | aritmetik_ifade BUYUK aritmetik_ifade
        { $$ = $1; }
    | aritmetik_ifade KUCUK_ESIT aritmetik_ifade
        { $$ = $1; }
    | aritmetik_ifade BUYUK_ESIT aritmetik_ifade
        { $$ = $1; }
    | mantiksal_ifade VE mantiksal_ifade
        { $$ = $1; }
    | mantiksal_ifade VEYA mantiksal_ifade
        { $$ = $1; }
    | DEGIL mantiksal_ifade
        { $$ = $2; }  /* Changed from $1 to $2 */
    | '(' mantiksal_ifade ')'
        { $$ = $2; }
    | DOGRU
        { 
          /* Create a boolean constant node */
          $$ = 1; /* In a real implementation, you would create an AST node here */
        }
    | YANLIS
        { 
          /* Create a boolean constant node */
          $$ = 0; /* In a real implementation, you would create an AST node here */
        }
    ;

aritmetik_ifade
    : aritmetik_ifade '+' terim
        { $$ = $1; }
    | aritmetik_ifade '-' terim
        { $$ = $1; }
    | terim
        { $$ = $1; }
    ;

terim
    : terim '*' faktor
        { $$ = $1; }
    | terim '/' faktor
        { $$ = $1; }
    | terim '%' faktor
        { $$ = $1; }
    | faktor
        { $$ = $1; }
    ;

faktor
    : unary_ifade
        { $$ = $1; }
    | '(' aritmetik_ifade ')'
        { $$ = $2; }
    ;

unary_ifade
    : literal
        { $$ = $1; }
    | TANIMLAYICI
        {
          /* Create identifier node */
          $$ = 0; /* In a real implementation, you would create an AST node here */
        }
    | '-' unary_ifade %prec UMINUS
        { $$ = $2; }  /* Changed from $1 to $2 */
    ;

literal
    : TAMSAYI
        { $$ = 0; }
    | ONDALIK
        { $$ = 0; }
    | METIN
        { $$ = 0; }
    ;

%%

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
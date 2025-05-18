%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h" // Bison tarafından oluşturulacak

int line_num = 1;
%}

/* Flex seçenekleri */
%option noyywrap
%option yylineno
%option case-insensitive

/* Durum tanımlamaları */
%x YORUM_DURUMU
%x METIN_DURUMU

/* Kural tanımlamaları */
SAYI_TAMSAYI     [-]?[0-9]+
SAYI_ONDALIK     [-]?[0-9]+"."[0-9]+
BOSLUK           [ \t\r]+
TANIMLAYICI      [a-zA-Z_][a-zA-Z0-9_]*

%%

"--"                  { BEGIN(YORUM_DURUMU); }
<YORUM_DURUMU>\n      { BEGIN(INITIAL); line_num++; }
<YORUM_DURUMU>.       { /* Açıklama içeriğini yok say */ }

\"                    { BEGIN(METIN_DURUMU); yylval.string_value = strdup(""); }
<METIN_DURUMU>\"      { BEGIN(INITIAL); return METIN; }
<METIN_DURUMU>\n      { fprintf(stderr, "Hata: Metin sabiti içinde satır sonu\n"); line_num++; }
<METIN_DURUMU>\\\"    { char* yeni_metin = malloc(strlen(yylval.string_value) + 2);
                        strcpy(yeni_metin, yylval.string_value);
                        strcat(yeni_metin, "\"");
                        free(yylval.string_value);
                        yylval.string_value = yeni_metin; }
<METIN_DURUMU>\\n     { char* yeni_metin = malloc(strlen(yylval.string_value) + 2);
                        strcpy(yeni_metin, yylval.string_value);
                        strcat(yeni_metin, "\n");
                        free(yylval.string_value);
                        yylval.string_value = yeni_metin; }
<METIN_DURUMU>\\t     { char* yeni_metin = malloc(strlen(yylval.string_value) + 2);
                        strcpy(yeni_metin, yylval.string_value);
                        strcat(yeni_metin, "\t");
                        free(yylval.string_value);
                        yylval.string_value = yeni_metin; }
<METIN_DURUMU>\\\\    { char* yeni_metin = malloc(strlen(yylval.string_value) + 2);
                        strcpy(yeni_metin, yylval.string_value);
                        strcat(yeni_metin, "\\");
                        free(yylval.string_value);
                        yylval.string_value = yeni_metin; }
<METIN_DURUMU>.       { char* yeni_metin = malloc(strlen(yylval.string_value) + 2);
                        strcpy(yeni_metin, yylval.string_value);
                        strncat(yeni_metin, yytext, 1);
                        free(yylval.string_value);
                        yylval.string_value = yeni_metin; }

"eger"                { return EGER; }
"degilse"             { return DEGILSE; }
"iken"                { return IKEN; }
"son"                 { return SON; }
"dogru"               { yylval.int_value = 1; return DOGRU; }
"yanlis"              { yylval.int_value = 0; return YANLIS; }
"fonksiyon"           { return FONKSIYON; }
"dondur"              { return DONDUR; }

"ve"                  { return VE; }
"veya"                { return VEYA; }
"değil"               { return DEGIL; }

"ekrana_yaz"          { return EKRANA_YAZ; }
"deger_goster"        { return DEGER_GOSTER; }
"ekrani_temizle"      { return EKRANI_TEMIZLE; }
"renk_ayarla"         { return RENK_AYARLA; }
"kalinlik_ayarla"     { return KALINLIK_AYARLA; }
"dikdortgen_ciz"      { return DIKDORTGEN_CIZ; }
"daire_ciz"           { return DAIRE_CIZ; }
"ucgen_ciz"           { return UCGEN_CIZ; }
"doldur"              { return DOLDUR; }
"guncelle"            { return GUNCELLE; }

"←"                   { return ATAMA; }
"+←"                  { return ARTI_ATAMA; }
"-←"                  { return EKSI_ATAMA; }

"+"                   { return '+'; }
"-"                   { return '-'; }
"*"                   { return '*'; }
"/"                   { return '/'; }
"%"                   { return '%'; }

"=="                  { return ESIT; }
"!="                  { return ESIT_DEGIL; }
">"                   { return BUYUK; }
"<"                   { return KUCUK; }
">="                  { return BUYUK_ESIT; }
"<="                  { return KUCUK_ESIT; }

"{"                   { return '{'; }
"}"                   { return '}'; }
"("                   { return '('; }
")"                   { return ')'; }
","                   { return ','; }

{SAYI_TAMSAYI}        { yylval.int_value = atoi(yytext); return TAMSAYI; }
{SAYI_ONDALIK}        { yylval.double_value = atof(yytext); return ONDALIK; }

{TANIMLAYICI}         { yylval.identifier = strdup(yytext); return TANIMLAYICI; }

\n                    { line_num++; }

{BOSLUK}              { /* Boşlukları yok say */ }

.                     { fprintf(stderr, "Hata: Tanınmayan karakter: %s\n", yytext); }

%%
#include <stdio.h>

extern int yyparse();
extern FILE* yyin;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Kullanım: %s <dosya>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Dosya açılamadı");
        return 1;
    }

    if (yyparse() == 0) {
        printf("İfade başarıyla çözüldü.\n");
    } else {
        printf("Bir hata oluştu.\n");
    }

    fclose(yyin);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // Biblioteca de erros.

int main() {

    // char para int

    char i[] = "12 oi";
    int q = atoi(i);
    // atoi() e responsavel por converter uma string em um int.
    // caso o valor do atoi for 0 significa que caracteres foram inseridos.
    // caso vc coloque números é caracteres juntos ele vai somente retornar o número não os caracteres.
    printf("\nInt: %d",q);

    char e[] = "3.14";
    float o = atof(e);
    // atof(), responsavel por converter string em float.
    printf("\nFloat: %.2f",o); 

    int stringConverter = 100;
    char stringC[20];
    itoa(stringConverter,stringC,10);
    // itoa() - converter int para string, é preciso passar o valor int, o valor string, é quantidade me memoria ocupada. 
    printf("\nString: %s",stringC);

    // error com conversão

    char l[] = "32qeba";
    char *pon;
    errno = 0;
    // strtol para extrair dados que sejam int
    strtol(l,&pon,10);
    //  esse é um tratamento de erro, caso tenha caracteres vai dar erro
    if(*pon != '\0' || errno != 0) {
        printf("\nFalha na conversao");
    } else {
        printf("\nTudo certo!");
    }

    char l_float[] = "1.22qwA";
    char *ponter;
    errno = 0;
    // strod, extrair string para float
    double d_double = strtod(l_float,&ponter);

    if(*ponter != '\0' || errno != 0) {
        printf("\nError!");
    } else {
        printf("\n%.4lf",d_double);
    };

    return 0;
};  
#include <stdio.h>

int main() {

    char i[] = "hello";

    // Char 
    
    // \0 significa um caracter nulo

    for(int c = 0; i[c] != '\0'; c++) {
        printf("%c",i[c]);
    }

    // Comando acima para imprimir uma palavra que foi armazenardar em um char

    int date = 12;  

    // int - Guarda números interios

    printf("\n%d", date);

    // % no printf - para imprimir o valor da variavel, ela deve ser digitada de forma certa, sendo que %d é para int é %c para caracter

    char caracter = 'A';

    printf("\n%c",caracter);

    float g = 12.23;

    // Float - Ponto flutuante

    printf("\n%.2f",g);
    //  Você pode limitar os caracteres do float colocando %.2f, nesse exemplo ele vai mostar dois números depois do ponto

    // Double - ele é parecido com o float, porém ele consegue guardar mais informações precisa em comparação ao float
    double v = 60000.76;

    printf("\n%.2f",v);

    short int qq = 10;

    // short int - ele armazenar números, pórem ele armazenar uma quantidade baixa comparado ao int

    printf("\n%d",qq);

    // long - armezenar valores maiores, é preciso colocar o L no final do número.
    
    long l_g =8934148L;
    printf("Valor de ff (long): %ld\n", l_g);

    // existe os unsigned que armazenão números negativos.


    return 0;
} 

// É preciso sempre retornar.

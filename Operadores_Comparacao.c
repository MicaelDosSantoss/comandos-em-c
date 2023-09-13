#include <stdio.h>


int main() {

// Operadores de Comparação

    int a = 5, b = 7;

if (a == b) {
    printf("Verdadeiro 1");
}

if (a != b) {
    printf("Verdadeiro 2");
}

if (a < b) {
    printf("Verdadeiro 3");
}

// Operadores lógicos.

if(b < a && a == b) {
     printf("Verdadeiro 4");
}

if(b < a || a != b) {
    printf("Verdadeiro 5");
}

if(!a){
    printf("Verdadeiro 6");
}

    return 0;
}
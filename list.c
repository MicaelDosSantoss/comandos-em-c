#include <stdio.h>
#include <string.h>

 struct list { 
        char nome[50];
        int idade;
        float altura;
    };

int main() {

    struct list cadastro;
    char n[50];
    int i;
    float a; 

    
    printf("Digite o seu nome: ");
    scanf("%s",n);
    printf("Digite sua idade: ");
    scanf("%i",&i);
    printf("Digite a sua altura: ");
    scanf("%f",&a);

    strcpy(cadastro.nome, n);
    cadastro.idade = i;
    cadastro.altura = a;

    printf("\nNome: %s \nIdade: %d\nAltura: %.2f\n",cadastro.nome,cadastro.idade,cadastro.altura);

    return 0;
}
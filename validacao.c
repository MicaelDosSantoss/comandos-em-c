#include <stdio.h>

int main() {
    int i;
        

        do {
            printf("Digite um número: ");
        scanf("%d",&i);

        printf("número digitado %d\n",i);
        } while(i != 1);

// As Validações podem ser feitas de diversas formas de loop, mais prefiro usar os whiles, por conta da facilidade  
        
    return 0;
}
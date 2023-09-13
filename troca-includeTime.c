#include <stdio.h>
#include <time.h> /*Biblioteca que trás operações envolvendo o tempo*/
#define id 18

int main() {
    struct tm *time_info; /*struct tm guardar informações da blioteca time.h, uma estrutura do time.h*/
    time_t temp; /*armazenar valores do tempo*/

    time(&temp); // Obtenha o tempo atual em segundos desde a época
    time_info = localtime(&temp); // Converta o tempo para a hora local, Estou convertendo o temp que é um time_t em um struct

     // -> para acessar membros de um struct

    int t, year, total,f;

    year = time_info->tm_year + 1900;

    printf("\n %d \n",year);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &t);

    total = year - t;


    if (total == id) {

        printf("Idade ideal para o alistamento");
    } else if (total < 18) {
        f = id - total;
        printf("Você não poderá se alistar no momento, falta %d anos.",f);
    } else {
        f = total - id;
        printf("data de alistamento já passou faz %d",f);
    }

    return 0;
}
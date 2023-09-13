#include <stdio.h>

int main() {

    int v = 10;

    while (v > 0) {
        printf("numero %d \n",v);
        v--;
    }

    for(int i = 0; i <= 5; i++) {
        printf("tttttttttttttttttt %d \n",i);
    }

       int x = 5;
    do {
        printf("x = %d\n", x);
        x--;
    } while (x > 0);

    return 0;
}
#include <stdio.h>

int main() {
    int *p, v;
    v = 10;

    p = &v;
    int valor = *p;

    printf("%d",valor);

    return 0;
};
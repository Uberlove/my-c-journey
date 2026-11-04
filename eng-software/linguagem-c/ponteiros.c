#include <stdio.h>

void cuboPorReferencia(int *);

int main(){
    int n = 5;

    printf("O valor original do numero: %d\n", n);

    cuboPorReferencia(&n);
    printf("O novo valor de n: %d\n", n);

    return 0;
}

void cuboPorReferencia(int *n){
    *n = *n * *n * *n;
}

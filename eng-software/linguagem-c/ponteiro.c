#include <stdio.h>

int cuboPorValor(int);

int main(){
    int n = 5;
    int c;

    printf("O valor original do numero: %d\n", n);
    c = cuboPorValor(n);

    printf("O novo valor de n: %d\n", n);
    printf("Valor de C? %d", c);

    return 0;
}

int cuboPorValor(int n){
    n = 2;
    return n * n * n;
}

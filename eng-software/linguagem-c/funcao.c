#include <stdio.h>

int somar(int a, int b){

    int resultado = a + b;

    return resultado;
}

int main(){
    int a = 0, b = 0;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Seguando valor: ");
    scanf("%d", &b);

    int resultado = somar(a, b);

    printf("Soma de %d e %d: %d", a, b, resultado);
    return 0;
}

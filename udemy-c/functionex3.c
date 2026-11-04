// Encontrar o maior de tres numeros.

#include <stdio.h>

int maior(int, int, int);

int main(){
    int x, y, z;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);
    maior(x, y, z);
    return 0;
}

int maior(int a, int b, int c){
    int bigger = a;
    if(b > a)
        bigger = b;
    if(c > b)
        bigger = c;
    return printf("Maior numero: %d", bigger);
}

// Encontrar o maior de três números.

#include <stdio.h>
int maior(int, int, int);

int main(){
    int x, y, z;
    printf("Digite tres numeros... ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Maior numero: %d", maior(x, y, z));

    return 0;
}

int maior(int a, int b, int c){
    int maior = a;
    if(b > a)
        maior = b;
    if(c > b)
        maior = c;
    return maior;
}

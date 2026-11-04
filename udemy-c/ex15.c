// Recebe um numero inteiro e imprime uma tabuada de 0 a 10.

#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero... ");
    scanf("%d", &n);

    for(int i = 0;i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

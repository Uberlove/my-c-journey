// Triangulo de asteriscos com altura N e largura 2N-1.

#include <stdio.h>

int main(){
    int n;
    printf("Digite um valor... ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){ // linhas
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("*");;
        }
        printf("\n");
    }
    return 0;
}

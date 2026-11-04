// Exibe uma piramide de numeros pares com N linhas.

#include <stdio.h>

int main(){
    int n, par = 2;
    printf("Digite um numero... ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
                printf("%d ", par);
                par += 2;
        }
        printf("\n");
    }

    return 0;
}

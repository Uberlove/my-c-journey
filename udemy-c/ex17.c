/* Exibe um triangulo numerico com N linhas,
onde cada linha tem os numeros de 1 ate a posicao (N)*/

#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero... ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){ //linhas
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

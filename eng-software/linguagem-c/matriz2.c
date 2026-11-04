#include <stdio.h>

int main(){

    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");

    for(int i = 0; i < nome['\0']; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    printf("Diagonal principal:\n");
    for(int i = 0; i > -3;){
        for(int j = 0; j < 3; j++){
        printf("%d ", matriz[i + 2][j]);
        i--;
        }
    }

    printf("\n");

    return 0;
}

// Define uma matriz 3x3, utilizando array bidimensional

#include <stdio.h>
#include <stdlib.h>

#define LINE 3
#define COLUMN 3

int main()
{
    int matriz[LINE][COLUMN];

    // Preenchendo a matriz com valores do usuário
    printf("Digite os elementos da matriz %dx%d:\n", LINE, COLUMN);
    for(int i = 0; i < LINE; i++){
        for(int j = 0; j < COLUMN; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("\nMatriz inserida:\n");
    for(int i = 0; i < LINE; i++){
        for(int j = 0; j < COLUMN; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

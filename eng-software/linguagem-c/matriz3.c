#include <stdio.h>

int main(){
    int linhas, colunas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas], transposta[colunas][linhas];

    // Leitura da matriz original
    printf("Digite os elementos da matriz (%dx%d):\n", linhas, colunas);
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Elemento [%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe original
    printf("\nMatriz A (%dx%d):\n", linhas, colunas);
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcule a transposta
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    // Exibe a matriz transposta
    printf("\nMatriz trasnposta (%dx%d):\n", colunas, linhas);
    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

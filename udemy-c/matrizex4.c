//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    int matriz[3][2];
    int transposta[2][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }
    printf("\n\n");

    //MATRIZ ORIGINAL
    for(int i = 0; i < 3; i++)
    {
        printf("| ");
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n\n");

    //MATRIZ TRANSPOSTA
    for(int i = 0; i < 2; i++)
    {
        printf("| ");
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("|\n");
    }

    return 0;
}

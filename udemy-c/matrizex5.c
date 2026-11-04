//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    int matriz[4][4];
    int cont = 0;
    int contZero = 0;
    printf("Digite os valores da matriz: \n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
            if(i == j && matriz[i][j] == 1)cont++;
            if(i != j && matriz[i][j] == 0)contZero++;
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ IDENTIDADE? ");
    if(cont == 4 && contZero == 12)printf("SIM\n");
    else printf("NAO\n");

    return 0;
}

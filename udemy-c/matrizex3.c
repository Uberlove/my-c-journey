//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    int matriz[4][4];
    int somaDiagonalPrincipal = 0;
    for(int i = 0; i < 4; i++)
    {
        printf("Digite os valores da linha %d da matriz:\n", i + 1);
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
            if(i == j)somaDiagonalPrincipal += matriz[i][j];
        }
    }
    printf("Soma da diagonal principal: %d", somaDiagonalPrincipal);

    return 0;
}

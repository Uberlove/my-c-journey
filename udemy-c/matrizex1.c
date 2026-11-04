//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    int valores[2][3];
    int soma = 0;
    printf("Digite os valores arrecadados:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &valores[i][j]);
            printf("Agencia %d, Dia %d: %d\n", i + 1, j + 1, valores[i][j]);
            soma += valores[i][j];
        }
    }
    printf("\nTotal arrecadado: R$%d\n", soma);

    return 0;
}

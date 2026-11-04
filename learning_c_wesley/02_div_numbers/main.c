// Divide dois números inteiros

#include <stdio.h> // Header
#include <stdlib.h>

int main()
{
    int x, y;
    float division;

    printf("Insira o primeiro numero:\n");
    scanf("%d", &x);

    printf("Insira o segundo numero:\n");
    scanf("%d", &y);

    division = (float) x / y; // Operador de coersão/conversão

    printf("Resultado da divisao inteira: %.2f\n", division); // .2f para mostrar até 2 casas após a vírgula

    return 0;
}

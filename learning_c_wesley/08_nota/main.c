// Operado ternario, utiliza três operandos
// (condição/expressão ? "O valor true" : "O valor false"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Insira uma nota: \n");
    scanf("%d", &nota);

    nota >= 7 ? printf("Aprovado\n") : printf("Reprovado\n"); // Operador ternário

    return 0;
}

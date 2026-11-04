// Um array é um grupo de locais na memória relacionados com o mesmo tipo de dados

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], i; // Define o tamanho do array

    // preenche o array
    for(i = 0; i < 10; i++)
    {
        n[i] = i + 1; // Atribuição de um valor para uma determinada posição do array
    }

    printf("%s%14s\n", "Indice", "Valor");

    for(i = 0; i < 10; i++)
        printf("%6d%14d\n", i, n[i]);

    return 0;
}

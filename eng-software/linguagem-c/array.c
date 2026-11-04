#include <stdio.h>

int main(){
    int n[10], i; // Define o tamanho do array

    // preenche o array
    for(i = 0; i < 10; i++){
        n[i] = i + 1; // Atribuicao de um valor para uma determinada posicao do array
    }

    printf("%s%14s\n", "Indice", "Valor");

    for(i = 0; i < 10; i++)
        printf("%7d%13d\n", i, n[i]);

    return 0;
}

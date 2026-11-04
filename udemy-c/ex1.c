#include <stdio.h>

int main(){
    char nome[20];
    int gols;

    printf("Qual o nome do jogador: ");
    scanf("%s", &nome);
    printf("Quantos gols o %s fez: ", nome);
    scanf(" %d", &gols);

    printf("O jogador %s fez %d gols na carreira.", nome, gols);

    return 0;
}

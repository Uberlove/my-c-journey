#include <stdio.h>

int main(){
    int gols, partidas;
    float media;

    printf("Quantas partidas jogadas: ");
    scanf("%d", &partidas);
    printf("Quantos gols marcados: ");
    scanf("%d", &gols);

    media = (float)gols/partidas;

    printf("Media de gols desse jogador: %.2f por partida.", media);

    return 0;
}

#include <stdio.h>

int main(){
    int win, lose = 0, draw;

    printf("Numero de vitorias: ");
    scanf("%d", &win);
    printf("Numero de derrotas: ");
    scanf("%d", &lose);
    printf("Numero de empates: ");
    scanf("%d", &draw);

    int totalWin = win * 3;
    int totalDraw = draw * 1;

    int total = totalWin + totalDraw;

    printf("Total de pontos: %d pontos", total);

    return 0;
}

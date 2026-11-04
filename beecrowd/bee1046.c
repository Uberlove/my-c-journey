#include <stdio.h>

int main() {

    int hourStart, hourLasted;
    scanf("%d%d", &hourStart, &hourLasted);
    int horajogada = 24 - hourStart + hourLasted;
    if(horajogada > 24)
    {
        horajogada -= 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", horajogada);

    return 0;
}

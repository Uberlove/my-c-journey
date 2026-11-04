#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int horajogada = 24 - a + c;
    int minutosjogados = 60 - b + d;
    if(horajogada > 24 && b > d) horajogada -= 25;
    if(horajogada > 24) horajogada -= 24;
    if(minutosjogados >= 60) minutosjogados -= 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horajogada, minutosjogados);

    return 0;
}

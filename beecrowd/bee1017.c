#include <stdio.h>

int main()
{
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    int distancia = tempo * velocidade;
    double consumo = (double)distancia / 12;

    printf("%.3lf\n", consumo);

    return 0;
}

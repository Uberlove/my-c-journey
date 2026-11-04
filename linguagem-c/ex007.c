#include <stdio.h>

int main(){
    int n, mult;
    double div;
    printf("D¡gite um n£mero: ");
    scanf("%d", &n);
    mult = n * 2;
    div = (double)n / 3;
    printf("Analisando o n£mero %d, seu dobro ‚ %d e a ter‡a parte ‚ %.2f.", n, mult, div);
    return 0;
}
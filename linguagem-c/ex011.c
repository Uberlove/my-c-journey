#include <stdio.h>

int main(){
    int n;
    printf("D¡gite um n£mero qualquer: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("O n£mero %d que vocˆ digitou ‚ PAR.", n);
    }else (printf("O n£mero %d que vocˆ digitou ‚ IMPAR.", n));
    return 0;
}
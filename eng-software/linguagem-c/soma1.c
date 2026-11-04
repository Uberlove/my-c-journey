#include <stdio.h>

int main(){
    int x, y, z, p1, p2;
    printf("D¡gite um n£mero: \n");
    scanf("%d", &x);
    printf("D¡gite um n£mero: \n");
    scanf("%d", &y);
    printf("D¡gite um n£mero: \n");
    scanf("%d", &z);
    p1 = z + x * y;
    p2 = (z - x) * y;
    printf("p1 = %d\n", p1);
    printf("p2 = %d", p2);
    return 0;
}
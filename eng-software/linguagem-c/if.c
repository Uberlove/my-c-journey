#include <stdio.h>

int main() {
    int x, y;
    printf("D¡gite um n£mero: \n");
    scanf("%d", &x);
    printf("D¡gite um n£mero: \n");
    scanf("%d", &y);
    if (x==y)
    {
        printf("%d ‚ igual a %d\n", x, y);
    }
    if (!(x!=y))
    {
        printf("%d ‚ diferente de %d\n", x, y);
    }
    if (x>y)
    {
        printf("%d ‚ maior que %d\n", x, y);
    }
    if (x<y)
    {
        printf("%d ‚ menor que %d\n", x, y);
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    float consumption, fuel;
    int km;
    scanf("%d %f", &km, &fuel);
    consumption = km / fuel;

    printf("%.3f km/l\n", consumption);

    return 0;
}

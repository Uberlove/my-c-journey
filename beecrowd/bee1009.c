#include <stdio.h>

int main()
{
    char name;
    double salary, sales;
    scanf("%s", &name);
    scanf("%lf %lf", &salary, &sales);
    double total = salary + sales * 0.15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

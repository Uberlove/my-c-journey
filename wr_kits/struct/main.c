#include <stdio.h>

int main() {

    char name;
    float salary, bonus = 15/100, sales;
    scanf(" %[^\n]s", name);
    scanf("%f %f", &salary, &sales);
    float total = salary + (sales * bonus);

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}

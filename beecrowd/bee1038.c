#include <stdio.h>

int main()
{
    int quant, i;
    double price[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    scanf("%d", &i);
    i = i - 1;
    scanf("%d", &quant);
    double total = price[i] * quant;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}

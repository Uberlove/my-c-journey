#include <stdio.h>

int main()
{
    int prod1, prod2, quant;
    float preco;
    scanf("%d %d %f", &prod1, &quant, &preco);
    float total = preco * quant;
    scanf("%d %d %f", &prod2, &quant, &preco);
    total += preco * quant;

    printf("VALOR A PAGAR: R$ %.2f", total);

    return 0;
}

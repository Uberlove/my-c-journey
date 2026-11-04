#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b);

int main()
{
    int a = 1, b = 2;
    int result = a + b;
    printf("a = %d e b = %d\n", a, b);
    printf("Soma = %d\n", result);
    result = soma(&a,&b);
    printf("a = %d e b = %d\n", a, b);
    printf("Soma = %d", result);

    return 0;
}

int soma(int *a, int *b)
{
    scanf("%d %d", a, b);
    return *a + *b;
}

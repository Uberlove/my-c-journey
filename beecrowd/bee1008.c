#include <stdio.h>

int main()
{
    int number, hour;
    float salary, amount;
    scanf("%d %d %f", &number, &hour, &amount);
    salary = amount * hour;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);

    return 0;
}

#include <stdio.h>

int main()
{
    float salary = 0, newsalary = 0;
    float percent = 0;
    scanf("%f", &salary);
    if(salary <= 400) percent = 15;
    else if(salary <= 800) percent = 12;
    else if(salary <= 1200) percent = 10;
    else if(salary <= 2000) percent = 7;
    else percent = 4;
    newsalary = salary + salary * percent/100;

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", newsalary, newsalary - salary, percent);

    return 0;
}

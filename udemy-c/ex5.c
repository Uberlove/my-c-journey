#include <stdio.h>

int main(){
    float salario1, salario2, diferenca;

    printf("Quanto o primeiro jogador recebe: R$");
    scanf("%f", &salario1);
    printf("Quanto o segundo jogador recebe: R$");
    scanf("%f", &salario2);

    diferenca = (salario1 % salario2);

    printf("Diferenca dos salarios: R$%.2f", diferenca);

    return 0;
}

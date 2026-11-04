#include <stdio.h>

float salario(float h, float vh){
    return h * vh;
}

float comissao(float v, float p){
    return v * p/100;
}

int main(){
    float h, vh, v, p;
    printf("Valor da hora trabalhada: ");
    scanf("%f", &h);
    printf("Quantas horas trabalhadas: ");
    scanf("%f", &vh);

    printf("Total de vendas: ");
    scanf("%f", &v);

    if (v > 0){
        printf("Valor da comissao: ");
        scanf("%f", &p);
        printf("O salario vai ser R$%.2f", salario(h, vh) + comissao(v, p));
    }else{
        printf("Salario: R$%.2f", salario(h, vh));
    }

    return 0;
}

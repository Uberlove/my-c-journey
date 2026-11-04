#include <stdio.h>

float imc(float, float);

int main(){
    float peso, altura;
    printf("Digite seu peso... ");
    scanf("%f", &peso);
    printf("Digite sua altura... ");
    scanf("%f", &altura);

    imc(peso, altura);

    return 0;
}

float imc(float x, float y){
    float z = x / (y * y);
    printf("%.2f", z);
    return z;
}

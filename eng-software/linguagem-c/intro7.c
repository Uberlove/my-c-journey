#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Coloque seu peso: ");
    scanf("%f", &peso);
    printf("Coloque sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    float pesomin, pesomax;
    printf("Seu peso ‚ %.2fKg e sua altura ‚ %.2f metros, logo seu IMC ‚ %.2f.\n", peso, altura, imc);
    if (imc < 18.5)
    {
        printf("Abaixo do peso!");
    }else if (imc > 18.5 && imc < 24.9)
    {
        printf("Peso normal (eutr¢fico)");
    }else if (imc > 25 && imc < 29.9)
    {
        printf("Sobrepeso");
    }else if (imc > 30 && imc < 34.9)
    {
        printf("Obesidade Grau 1");
    }else if (imc > 35 && imc < 39.9)
    {
        printf("Obesidade Grau 2");
    }else (printf("Obesidade Grau 3"));
    
    pesomin = 21.5 * (altura * altura);
    pesomax = 24.9 * (altura * altura);
    
    printf("\nSeu peso ideal seria entre %.2fKg e %.2fKg.", pesomin, pesomax);

    return 0;
}
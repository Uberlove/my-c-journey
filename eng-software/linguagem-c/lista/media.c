// Calcular a media de duas notas e verificar se o aluno esta aprovado ou reprovado
#include <stdio.h>

float media(float, float);
float aprovReprov(float, float);

int main(){
    float nota1, nota2;

    printf("Notas... ");
    scanf("%f %f", &nota1, &nota2);

    media(nota1, nota2);
    aprovReprov(nota1, nota2);

    return 0;
}

float media(float x, float y){
    return (x + y) / 2;
}

float aprovReprov(float x, float y){
    float z = (x + y) / 2;
    if(z < 7)
        printf("Reprovado!");
    else
        printf("Aprovado!");
    return z;
}

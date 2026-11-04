// Calcular a media de 2 numeros.

#include <stdio.h>

float media(float, float);

int main(){
    float x, y;

    media(x, y);

    return 0;
}

float media(float a, float b){
    printf("Nota 1: ");
    scanf("%f", &a);
    printf("Nota 2: ");
    scanf("%f", &b);
    float c = (a + b) / 2;

    return printf("Nota 1: %.2f\nNota 2: %.2f\nMedia: %.2f", a, b, c);
}

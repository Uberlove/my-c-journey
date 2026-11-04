// Calcular a média de dois números.

#include <stdio.h>

float media(float, float);

int main(){
    float x, y;
    printf("Notas: ");
    scanf("%f %f", &x, &y);
    printf("Media: %.2f", media(x, y));

    return 0;
}

float media(float x, float y){
    return (x + y) / 2;
}

//Média de FPS de um Jogo.

#include <stdio.h>

float media(float[6]);

int main(){
    float n[6];
    printf("Media de FPS: %.2f", media(n));
    return 0;
}

float media(float a[6]){
    printf("Digite os FPS regristado em 6 momentos: ");
    for(int i = 0; i < 6; i ++){
        scanf("%f", &a[i]);
    }
    for(int i = 0; i < 6; i++){
        printf("Momento %d: %.f\n", i + 1, a[i]);
    }
    float resultado = (a[0] + a [1] + a [2] + a [3] + a [4] + a [5]) / 6;
    return resultado;
}


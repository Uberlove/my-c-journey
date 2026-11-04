#include <stdio.h>

int main(){
    int minutos, horas, min_restantes;

    printf("Quantos minutos jogados: ");
    scanf("%d", &minutos);

    horas = minutos / 60;
    min_restantes = minutos % 60;

    printf("Tempo jogado: %dh:%d", horas, min_restantes);

    return 0;
}

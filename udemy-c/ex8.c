#include <stdio.h>

int main(){
    int gols;

    printf("Quantos gols marcado na temporada: ");
    scanf("%d", &gols);

    if(gols > 10){
        printf("Excelente temporada!");
    }else if(gols >= 5 && gols <= 10){
        printf("Boa temporada!");
    }else(printf("Temporada abaixo do esperado."));

    return 0;
}

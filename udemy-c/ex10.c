#include <stdio.h>

int main(){
    int capacidade, torcedores;

    printf("Capacidade do estadio: ");
    scanf("%d", &capacidade);
    printf("Quantidade de torcedores: ");
    scanf("%d", &torcedores);

    if(torcedores > capacidade * 0.9){
        printf("Lotado!");
    }else if(torcedores > capacidade * 0.7){
        printf("Otima presenca de publico!");
    }else if(torcedores > capacidade * 0.5){
        printf("Publico razoavel.");
    }else(printf("Morumbis"));

    return 0;
}

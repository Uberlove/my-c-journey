#include <stdio.h>

int main(){
    int cartao;

    printf("Quantos cartoes amarelos o jogador recebeu: ");
    scanf("%d", &cartao);

    if(cartao == 2)
        printf("EXPULSO");

    return 0;
}

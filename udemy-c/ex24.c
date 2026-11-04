/*
Imagine que você está construindo um jogo em que o jogador deve adivinhar um número secreto entre 1 e 10.
O programa deve continuar pedindo palpites até que o número correto seja adivinhado.
Use DO WHILE para garantir que o jogador tenha ao menos uma tentativa.
O número secreto deve ser 7. Ao acertar, exiba "Você acertou!".
*/
#include <stdio.h>

int main(){
    int n;
    do{
        printf("Digite o numero secreto... ");
        scanf("%d", &n);
    }while(n != 7);

    printf("Parabens, acertou!!!");

    return 0;
}

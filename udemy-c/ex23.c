/* Um jogador precisa coletar moedas em um jogo.
A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas.
O jogo só termina quando o jogador acumula pelo menos 100 moedas.
Escreva um programa em C que solicite ao usuário, repetidamente,
a quantidade de moedas coletadas por rodada,
até que o total acumulado atinja ou ultrapasse 100 moedas.
Ao final, exiba quantas rodadas foram necessárias para atingir a meta.
*/
#include <stdio.h>

int main(){
    int cont = 0, coins, coinsTotal = 0;

    do{
        printf("Moedas coletadas... ");
        scanf("%d",&coins);
        coinsTotal += coins;
        cont++;
    }while(coinsTotal < 100);

    printf("%d rodadas\n", cont);
    printf("Ganhou!");

    return 0;
}

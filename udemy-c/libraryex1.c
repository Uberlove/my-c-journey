/*Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60,
 como em um jogo de loteria (ex: Mega Sena). Os números devem ser exibidos na tela.
 Não é necessário garantir que os números sejam diferentes entre si neste primeiro momento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int sorteio(int);

int main(){
    setlocale(LC_ALL, "");
    int n;
    sorteio(n);
    return 0;
}

int sorteio(int a){
    srand(time(NULL));
    a = 6;
    printf("Números: ");
    for(int i = 0; i < a; i++)
        printf("%d ", rand() % 60 + 1);
    return a;
}

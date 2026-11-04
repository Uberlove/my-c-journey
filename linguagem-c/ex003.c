#include <stdio.h>
#include <string.h>

int main(){
    printf("Qual ‚ o seu nome? ");
    char nome[50];
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Qual ‚ a sua idade? ");
    int idade;
    scanf("%d", &idade);
    printf("Qual ‚ o seu peso? ");
    float peso;
    scanf("%f", &peso);
    printf("\n-----<<<PROCESSANDO>>>-----\n");
    printf("Prazer em te conhecer %s, sua idade ‚ %d anos e o seu peso ‚ %.2fKg, correto?\nFIM.", nome, idade, peso);
}
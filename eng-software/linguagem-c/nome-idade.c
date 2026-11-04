#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Ola %s, sua idade ‚ %d", nome, idade);
    return 0;
}
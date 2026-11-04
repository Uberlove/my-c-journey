#include <stdio.h>
int main() {

    char nome[50];
    int idade;

    printf("Qual ‚ o seu nome? ");
    fgets(nome, 50, stdin);

    printf("Quantos anos vocˆ tem? ");
    scanf("%d", &idade);

    printf("Ol  %svocˆ tem %d anos", nome, idade);

    return 0;
}
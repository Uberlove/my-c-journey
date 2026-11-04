#include <stdio.h>
#include <string.h>

int main(){
    float nota1, nota2, media;
    char sit[10];

    printf("Adicione uma nota: ");
    scanf("%f", &nota1);

    printf("Adicione uma nota: "); 
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    strcpy(sit, (media >= 7)?"Aprovado":"Reprovado");

    printf("A m‚dia do aluno foi %.2f e a situa‡ao dele ‚ %s.", media, sit);

    return 0;
}
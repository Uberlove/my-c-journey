#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    float n1, n2, media;
    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("O aluno %s tirou as notas %.1f e %.1f.\n", nome, n1, n2);
    printf("A m‚dia final foi de %.1f.\n", media);
    
    if (media > 7)
    {
        printf("Parab‚ns!!! APROVADO!!!");
    }else(printf("REPROVADO!"));

    return 0;
}
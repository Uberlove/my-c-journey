#include <stdio.h> 
#include <string.h>

int main() {
    char nome1[50], nome2[50], nome3[50];
    char sexo1[2], sexo2[2], sexo3[2];
    float nota1, nota2, nota3;
    int c;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("SEXO [M/F]: ");
    scanf("%s", sexo1);
    printf("NOTA: ");
    scanf("%f", &nota1);
    while ((c = getchar()) != '\n' && c != EOF);


    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("SEXO [M/F]: ");
    scanf("%s", sexo2);
    printf("NOTA: ");
    scanf("%f", &nota2);
    while ((c = getchar()) != '\n' && c != EOF);


    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = '\0';
    printf("SEXO [M/F]: ");
    scanf("%s", sexo3);
    printf("NOTA: ");
    scanf("%f", &nota3);
    while ((c = getchar()) != '\n' && c != EOF);


    printf("Listagem Completa\n");
    printf("------------------------------\n");
    printf("%-15s%-8s%s\n", "NOME", "SEXO", "NOTA");
    printf("%-15s%-8s%.1f\n", nome1, sexo1, nota1);
    printf("%-15s%-8s%.1f\n", nome2, sexo2, nota2);
    printf("%-15s%-8s%.1f\n", nome3, sexo3, nota3);

    return 0;
}
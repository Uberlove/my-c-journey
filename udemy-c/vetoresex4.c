//BIBLIOTECAS AUXILIARES
#include <stdio.h>
#include <string.h>

//FUNÇÃO MAIN
int main()
{
    char letra;
    char nome[5][51];
    int cont = 0;
    printf("Digite 5 nomes: ");
    for(int i = 0; i < 5; i++)
    {
        printf("Nome %d: ", i + 1);
        scanf(" %50[^\n]", nome[i]);
    }

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < strlen(nome[i]); j++)
        {
            if(nome[i][j] == letra)
               {
                    printf("- %s\n", nome[i]);
                    break;
               }
        }
    }

    return 0;
}

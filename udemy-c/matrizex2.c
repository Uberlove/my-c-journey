//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    float nota[3][4];
    float media[3];

    for(int i = 0; i < 3; i++)
    {
        printf("NOTAS DO ALUNO %d: \n", i + 1);
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &nota[i][j]);
            printf("PROVA %d: %.1f\n", j + 1, nota[i][j]);
            media[i] += nota[i][j];
        }
        printf("\nMEDIA DO ALUNO %d: %.2f\n\n", i + 1, media[i] / 4);
    }

    return 0;
}

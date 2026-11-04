//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//FUNÇÃO MAIN
int main()
{
    int scores[5] = {0};
    int record = scores[0];
    printf("Digite os 5 scores do jogador: \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &scores[i]);
        printf("Score %d: %d\n", i + 1, scores[i]);
        if(scores[i] > record)
        {
            record = scores[i];
            printf("Parabens! Score %d superou o recorde!\n", record);
        }
    }

    return 0;
}

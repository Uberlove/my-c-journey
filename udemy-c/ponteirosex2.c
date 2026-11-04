#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    float *vetor;
    float soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (float*)malloc(tamanho * sizeof(float));

    if(vetor == NULL)
    {
        printf("ERRO");
        return 1;
    }

    printf("Digite os valores do vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d ", vetor[i]);
        soma += vetor[i];
    }

    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", i + 1);
    }

    float media = soma / tamanho;

    printf("Media = %.1f", media);

    return 0;
}

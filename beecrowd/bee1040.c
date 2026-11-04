#include <stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float media = (a*2 + b*3 + c*4 + d*1) / 10;
    if(media >= 7.0)
    {
        printf("Media: %.2f\nAluno aprovado.\n", media);
    }
    else if(media < 5.0)
    {
        printf("Media: %.2f\nAluno reprovado.\n", media);
    }
    else
    {
        float exame;
        scanf("%f", &exame);
        float mediaFinal = (exame + media) / 2;
        if(exame >= 5.0)
            printf("Media: %.2f\nAluno em exame.\nNota do exame: %.2f\nAluno aprovado.\nMedia final: %.2f\n", media, exame, mediaFinal);
        else
            printf("Media: %.2f\nAluno em exame.\nNota do exame: %.2f\nAluno reprovado.\nMedia final: %.2f\n", media, exame, mediaFinal);
    }
    return 0;
}

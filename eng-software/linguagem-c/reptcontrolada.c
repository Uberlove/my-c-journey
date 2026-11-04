#include <stdio.h>

int main(){
    int nota, k, total;
float media;

total = 0;
k = 0;

printf("Adicione uma nota: (-1 para finalizar)\n");
scanf("%d", &nota);

while(nota != -1)
{
    total += nota;
    k++;

    printf("Adicione uma nota: \n");
    scanf("%d", &nota);
}

if (k != 0)
{
    media = (float)total / k;
    printf("A media ‚: %.2f", media);
} else(printf("Nenhum valor inserido!"));
}







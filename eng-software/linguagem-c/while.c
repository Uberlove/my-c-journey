#include <stdio.h>

int main(){
    int k, total, nota;
    float media;
    
    total = 0;
    k = 0;

    while (k < 3)
    {
        printf("Adicione uma nota: \n");
        scanf("%d", &nota);
        total += nota;
        k++;
    }
    media = (float)total / k;
    printf("A media total ‚ %.2f \n", media);
    if(media > 7){
        printf("Aprovado");
    } else(printf("Reprovado"));
    return 0;
}
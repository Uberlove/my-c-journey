#include <stdio.h>

int main(){
    int nota;
    printf("Adicione a nota:\n");
    scanf("%d", &nota);

    nota >= 70 ? printf("Aprovado\n") : printf("Reprovado\n");

    return 0;
}
#include <stdio.h>

int main(){
    char nome[30];
    printf("Digite um nome... ");
    scanf("%[^\n]s", nome);
    printf("%s", nome);
    return 0;
}

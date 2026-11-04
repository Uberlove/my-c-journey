// Criar um padrão de asteriscos.

#include <stdio.h>

void asterisco(int, char);

int main(){
    int n;
    char caracter;
    printf("Digite o numero de lados... ");
    scanf("%d", &n);
    printf("Escolha um caracter especial... ");
    scanf(" %c", &caracter);

    asterisco(n, caracter);

    return 0;
}

void asterisco(int a, char b){
    b;
    for(int i = 0; i < a; i++){
        for(int i = 0; i < a; i++){
            printf("%c ", b);
        }
        printf("\n");
    }
}

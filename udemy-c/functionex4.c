// Cria um padrao de asteriscos.

#include <stdio.h>

int astc(char, int);

int main(){
    char x;
    int y;

    astc(x, y);
    return 0;
}

int astc(char a, int b){
    printf("Digite um simbolo... ");
    scanf("%c", &a);
    printf("Numero de linhas... ");
    scanf("%d", &b);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            printf("%c ", a);
        }
        printf("\n");
    }
    return a;
}

// Contar vogais em uma palavra.
#include <stdio.h>

int vogais(char[]);

int main(){
    char cont[100];

    printf("Quantidade de vogais: %d", vogais(cont));

    return 0;
}

int vogais(char x[]){
    int cont = 0;
    printf("Digite algo... ");
    scanf("%s", x);
    for(int i = 0; x[i] != '\0'; i++){
        if(x[i] == 'a' || x[i] == 'A' ||
           x[i] == 'e' || x[i] == 'E' ||
           x[i] == 'i' || x[i] == 'I' ||
           x[i] == 'o' || x[i] == 'O' ||
           x[i] == 'u' || x[i] == 'U')
            cont++;
    }
    return cont;
}

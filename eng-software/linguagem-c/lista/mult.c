#include <stdio.h>

int multiplicacao(int a, int b){
    return a * b;
}

int divisao(int a, int b){
    return a - b;
}

int parImpar(int a){
    char resp[6];
    if(int a % 2 = 0)
        resp = "Par";
    else
        resp = "Impar;
    return resp;
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf(" %d", &x);

    printf("%c", parImpar(x));
    return 0;
}

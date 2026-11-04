#include <stdio.h>

int imparPar(int);

int main(){
    int x;
    printf("Digite um numero... ");
    scanf("%d", &x);

    imparPar(x);

    return 0;
}

int imparPar(int x){
    //int result = x;
    if(x % 2 == 0){
        printf("Par");
    }else
        printf("Impar");

    return result;
}

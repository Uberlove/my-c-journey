#include <stdio.h>

int num(int);

int main(){
    int n;
    printf("Digite um numero... ");
    scanf("%d", &n);

    printf("%d\n", n);

    num(n);

    return 0;
}

int num(int x){
    if(x > 0)
        printf("Positivo!");
    else if(x == 0)
        printf("Zero!");
    else
        printf("Negativo!");
    return x;
}

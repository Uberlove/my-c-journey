#include <stdio.h>

int idade(int);

int main(){
    int i;
    printf("Idade... ");
    scanf("%d", &i);

    printf("%d\n", i);

    idade(i);

    return 0;
}

int idade(int x){
    if(x >= 18)
        printf("Maior de idade");
    else
        printf("Menor de idade");
    return x;
}

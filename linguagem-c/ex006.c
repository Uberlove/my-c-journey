#include <stdio.h>

int main(){
    int n;
    printf("Dig¡te um n£mero: ");
    scanf("%d", &n);
    int sub = n - 1;
    int soma = n + 1;
    printf("Analisando o n£mero %d, o antecessor ‚ %d e o sucessor ‚ %d.", n, sub, soma);
    return 0;
}
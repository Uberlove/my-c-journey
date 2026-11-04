#include <stdio.h>

int main(){
    int x, y, rest;
    printf("Insira um n£mero:\n");
    scanf("%d", &x);
    printf("Insira um n£mero:\n");
    scanf("%d", &y);
    rest = x % y;
    printf("O resto ‚ %d", rest);
    return 0;
}
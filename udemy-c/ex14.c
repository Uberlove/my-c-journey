/* O usuario digita um numero n, e o programa calcula a soma
de todos os numeros de 1 ate n.*/

#include <stdio.h>

int main(){
    int n = 0, soma = 0;
    printf("Digite um numero... ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        soma += i;
    }

    printf("A soma de 1 ate %d eh %d", n, soma);

    return 0;
}

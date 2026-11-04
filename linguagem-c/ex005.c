#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    srand(time(NULL));
    int n = rand() % 5 + 1;
    int r;
    printf("Vou pensar em um n£mero entre 1 e 5. Tente adivinhar! \n");
    printf("Qual ‚ o seu palpite? ");
    scanf("%d", &r);
    printf("Eu pensei no n£mero %d e vocˆ pensou no %d\n", n, r);
    if (r == n)
    {
        printf("Parab‚ns, vocˆ acertou!!!");
    } else(printf("Vocˆ errou!!!"));
    
}
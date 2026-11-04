/* Para obter numeros randomicos utiliza-se srand()
ela utiliza um argumento inteiro unsigned para ser a "semente"
produzindo uma sequencia diferente de numeros aleatórios
unsigned é uma abreviação para unsigned int
*/

#include <stdio.h>
#include <stdlib.h>

int rollDice();

int main(){
    unsigned seed = 42; // mantem o padrão
    srand(seed);

    for(int i = 0; i < 20; i++){
        printf("%10d", rollDice());

        if((i + 1) % 5 == 0)
            printf("\n");
    }

    return 0;
}

int rollDice(){
    return (1 + (rand() % 6));
}

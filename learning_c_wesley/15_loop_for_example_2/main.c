// Soma números

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, soma = 0;

    for(k = 2; k <=10; k+= 2)
        soma += k;

    printf("%d\n", soma);

    return 0;
}

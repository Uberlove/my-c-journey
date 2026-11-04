// Encontrando o Maior Dano Causado.

#include <stdio.h>

int maiorDano(int[4]);

int main(){
    int dano[4];
    maiorDano(dano);
    return 0;
}

int maiorDano(int a[4]){
    printf("Digite o dano de 4 ataques: ");
    for(int i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 4; i++){
        printf("Ataque %d: %d\n", i + 1, a[i]);
    }

    int result = a[0];

    for(int i = 0; i < 4; i++){
        if(a[i] > result)
            result = a[i];
    }

    return printf("Maior dano causado: %d", result);
}

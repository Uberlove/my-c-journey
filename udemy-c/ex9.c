#include <stdio.h>

int main(){
    int idade, gols;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Quantidade de gols: ");
    scanf("%d", &gols);

    if(idade <= 20 && gols > 10){
        printf("Jovem talento promissor!");
    }else if(idade <= 20 && gols <= 10){
        printf("Jovem em desenvolvimento.");
    }else if(idade > 20 && gols > 15){
        printf("Jogador experiente em grande fase!");
    }else(printf("Estevao"));

    return 0;
}

#include <stdio.h>

int main(){
    int idade;

    printf("Idade do jogador: ");
    scanf("%d", &idade);

    if(idade <= 20){
        printf("PODE JOGAR");
    }else(printf("DEVE JOGAR PROFISSIONAL"));

    return 0;
}

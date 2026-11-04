/* Um sistema de cadastro recebe a idade de uma pessoa como texto (string).
 Escreva um programa em C que leia essa informação como uma string e depois
 converta para inteiro usando atoi. Em seguida, exiba a idade e verifique se
 a pessoa é maior de idade (18 anos ou mais).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char idadeS[] = "";
    printf("Digite a idade... ");
    scanf("%s", idadeS);
    int idadeI = atoi(idadeS);
    printf("Idade: %d", idadeI);
    return 0;
}

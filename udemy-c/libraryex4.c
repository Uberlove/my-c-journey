//Detector de caracteres proibidos.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = "";
    int cont = 0;
    printf("Digite o nome: ");
    scanf("%s", nome);
    //printf("Tamanho do nome: %d\n", strlen(nome));

    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == '@' ||
           nome[i] == '#' ||
           nome[i] == '$' ||
           nome[i] == '%' ||
           nome[i] == '!')
        cont++;
    }

    if(cont > 0){
        printf("%d caractere(s) invalido(s)!\n", cont);
        printf("Nome invalido!");
    }
    else{
        printf("Nome valido");
    }

    return 0;
}

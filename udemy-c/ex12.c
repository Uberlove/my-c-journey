#include <stdio.h>

int main(){
    int status, opcao;
    float nota, frequencia, frequenciaT = 100;

    do{

        printf("--------------------------------\n");
        printf(" 1 - Verificar se o aluno foi aprovado\n");
        printf(" 2 - Sair\n");
        printf("--------------------------------\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Nota final: ");
            scanf("%f", &nota);
            printf("Frequencia escolar: ");
            scanf("%f", &frequencia);

            if(nota >= 7 && frequencia >= frequenciaT * 0.75){
                printf("Aprovado!\n");
            }else printf("Reprovado!\n");

        }else if(opcao < 1 || opcao > 2){
            printf("Opcao invalida!\n");
        }else{
            printf("Programa encerrado!");
        }

    }while(opcao != 2);

    return 0;
}

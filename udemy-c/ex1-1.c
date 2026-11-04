#include <stdio.h>

int main(){
    int menuOpcao, quantidade;
    float valor = 0, total = 0, valorT = 0, subtotal = 0;

    do{
        printf("---------Cardapio Interativo---------\n");
        printf(" 1 - Hamburguer \n");
        printf(" 2 - Cachorro-quente \n");
        printf(" 3 - Pizza \n");
        printf(" 4 - Sair \n");
        printf("-------------------------------------\n");

        scanf("%d", &menuOpcao);

        if(menuOpcao < 1 || menuOpcao > 4){
            printf("Opcao invalida\n");
            continue;
        }

        switch(menuOpcao){

            case 1:
                valor = 10;
                break;
            case 2:
                valor = 5;
                break;
            case 3:
                valor = 20;
                break;
            case 4:
                printf("Pedido Finalizado!\n");
                continue;
            default:
                printf("Opcao Invalida\n");
                continue;
        }

        printf("Quantidade: ");
        scanf(" %d", &quantidade);

        valorT = quantidade * valor;
        subtotal = valorT;
        total += subtotal;

    }while(menuOpcao != 4);

    printf("Valor total: R$%.2f", total);

    return 0;
}

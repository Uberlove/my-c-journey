// Bibliotecas usadas
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

// Variáveis globais

int estoqueL[7] = {50, 30, 0, 20, 100, 15, 60};
char *produtosL[8] = {"Detergente", "Sabao em po(1kg)","Esponja", "Amaciante(1L)", "Bucha de pia(kit com 3)","Desinfetante(1L)", "Sabao em barra(un)", "Voltar ao menu principal"};
float valorL[7] = {1.99, 8.99, 1.50, 15.00, 4.99, 7.99, 1.00};

char *produtosA[8] = {"Café (500 g)", "Leite (caixa)", "Arroz (1 Kg)", "Feijão-preto(1 Kg)", "Açúcar (1 Kg)", "Sal (1 Kg)", "Farinha de Trigo (1 Kg)", "Voltar ao menu principal"};
float valorA[7] = {19.99, 5.90, 4.50, 8.00, 5.00, 2.00, 5.00};
int estoqueA[7] = {10, 15, 10, 5, 20, 6, 15};

int estoqueP[7] = {0};
int estoqueAtP[7] = {0};
char *produtosP[8] = {"Pão de forma(pacote)", "Pão integral(pacote)", "Pão frances (unidade)", "Sonho (unidade)", "Biscoito(Kg)", "Pão doce(un)", "Salgado (un)", "Voltar ao menu principal"};
float valorP[7] = {9.50, 12.50, 1.90, 8.50, 12.50, 2.50, 17.50};

float totalLimpeza = 0, totalAlimento = 0, totalPadaria = 0, subTotal = 0, total = 0, caixaInicial = 155.34;
int quant = 0, cont = 0;
int opcaoMenu = 0;

void menu(){
    while(opcaoMenu != 7)
    {
        system("cls");
        printf("\n---------- MENU ----------\n");
        char *opcao[7] = {"Material de Limpeza", "Venda de Alimentos", "Padaria", "Pagamento", "Abertura de Caixa", "Fechamento de Caixa", "Sair"};
        for (int i = 0; i < 7; i++){
            printf("%d. %s\n",i + 1, opcao[i]);
        }
        printf("--------------------------\n");

        if(scanf("%d", &opcaoMenu) != 1) opcaoMenu = 0;
        while(getchar() != '\n');
        system("cls");

        switch(opcaoMenu){
        case 1: limpeza(); break;
        case 2: alimento(); break;
        case 3: padaria(); break;
        //case 4: pagamento(); break;
        case 5:
            if(cont == 0){
                aberturaCaixa();
                cont++;
                break;
            }else {
                attCaixa();
                break;
            }

        //case 6: fechamentoCaixa(); break;*/
        case 7: sair(); break;
        default:
            break;
        }
    }
}

void limpezaV(){
    subMenu();
    produtos();
}

void alimentoV(){
    subMenu();
    produtos();
}

void padariaV(){
    subMenu();
    produtos();
}

void aberturaCaixa(){
    printf("----------------------- ABERTURA DE CAIXA ------------------------\n");
    printf("\n Valor em caixa: R$%.2f\n", caixaInicial);
    printf("\n--------------------------- Processando... -------------------------\n");
    system("PAUSE");

    char *produtosP[7] = {"Pão de forma(pacote)", "Pão integral(pacote)", "Pão frances (unidade)", "Sonho (unidade)", "Biscoito(Kg)", "Pão doce(un)", "Salgado (un)"};
    int i = 0;

    while(i < 7){
        system("cls");
        printf("----------------------- ABERTURA DE CAIXA -----------------------\n");
        printf("\n Valor em caixa: R$%.2f\n\n", caixaInicial);
        printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
        printf("-----------------------------------------------------------------\n");

        for(int j = 0; j < i; j++){
            if(j == 1){
                printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", j + 31, produtosP[j], valorP[j], "Sem estoque");
            } else {
                printf(" %-10d| %-25s | R$%-8.2f | %5d\n", j + 31, produtosP[j], valorP[j], estoqueP[j]);
            }
        }

        if(i == 1){
            printf(" %-10d| %-25s | R$%-8.2f |%-10s  ", i + 31, produtosP[i], valorP[i], "Sem estoque");
            scanf("%d", &estoqueP[i]);
            estoqueP[i] = 0;
            i++;
        } else {
            printf(" %-10d| %-25s | R$%-8.2f |  \t", i + 31, produtosP[i], valorP[i]);
            if(scanf("%d", &estoqueP[i]) != 1){
                while(getchar() != '\n');
                continue;
            }

            if(estoqueP[i] >= 0){
                i++;
            }
        }
        printf("-----------------------------------------------------------------\n");
    }
    system("PAUSE");
    printf("\n Estoque cadastrado com sucesso!\n");
    system("PAUSE");
}

void attCaixa(){
    int i = 0;
    printf("--------------------- ATUALIZAÇÃO DE CAIXA -----------------------\n");
    do{
        for (int i = 0; i < 8; i++){
        if(i == 7){
            printf(" %-10s| %-25s \n", "38", produtosP[i]);
            continue;
        }
        if(produtosP[i] == produtosP[1] || estoqueP[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
        else
            printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 31, produtosP[i], valorP[i], estoqueP[i]);
        }
        printf("Selecione um item da padaria: ");
        scanf("%d", &i);
        printf("%s: ", produtosP[i]);
        scanf("%d", &estoqueAtP[i]);
        estoqueP[i] += estoqueAtP[i];
    }while(produtosP[i] != 0);
        printf("----------------------- ABERTURA DE CAIXA -----------------------\n");
        printf("\n Valor em caixa: R$%.2f\n\n", caixaInicial);
        printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
        printf("-----------------------------------------------------------------\n");

        for (int i = 0; i < 8; i++){
        if(i == 7){
            printf(" %-10s| %-25s \n", "38", produtosP[i]);
            continue;
        }
        if(produtosP[i] == produtosP[1] || estoqueP[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
        else
            printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 31, produtosP[i], valorP[i], estoqueP[i]);
        }
}


void subMenu(){
    switch(opcaoMenu){
    case 1:
        printf("---------------------- MATERIAL DE LIMPEZA -----------------------\n");
        break;
    case 2:
        printf("-------------------------- ALIMENTOS -----------------------------\n");
        break;
    case 3:
        printf("--------------------------- PADARIA ------------------------------\n");
        break;
    default:
        break;
    }
    printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
    printf("-----------------------------------------------------------------\n");
}

void produtos(){
    switch(opcaoMenu){
    case 1:
        for (int i = 0; i < 8; i++){
            if(i == 7){
                printf(" %-10s| %-25s \n", "18", produtosL[i]);
                continue;
            }
            if(estoqueL[i] == 0)
                printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 11, produtosL[i], valorL[i], "Sem estoque");
            else
                printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 11, produtosL[i], valorL[i], estoqueL[i]);
        }
        break;
    case 2:
        for (int i = 0; i < 8; i++){
        if(i == 7){
            printf(" %-10s| %-25s \n", "28", produtosA[i]);
            continue;
        }
        if(estoqueA[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 21, produtosA[i], valorA[i], "Sem estoque");
        else
            printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 21, produtosA[i], valorA[i], estoqueA[i]);
        }
        break;
    case 3:
        for (int i = 0; i < 8; i++){
        if(i == 7){
            printf(" %-10s| %-25s \n", "38", produtosP[i]);
            continue;
        }
        if(produtosP[i] == produtosP[1] || estoqueP[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
        else
            printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 31, produtosP[i], valorP[i], estoqueP[i]);
        }
        break;
    default:
        break;
    }
    printf("-----------------------------------------------------------------\n");
}


int limpeza(){
    int opL, quantItem = 0, cont = 0;
    limpezaV();
    do{
            printf(" Digite um código: ");
            scanf("%d", &opL);
            while(getchar() != '\n');
            if(opL >= 11 && opL <= 17){
                int i = opL - 11;

            if(estoqueL[i] > 0){
                printf(" Digite a quantidade: ");
                scanf("%d", &quant);
                system("cls");

                if(quant <= estoqueL[i]){
                    subTotal = valorL[i] * quant;
                    totalLimpeza += subTotal;
                    total += subTotal;
                    quantItem = quant;
                    estoqueL[i] -= quant;
                    cont++;
                }else{
                    system("cls");
                    limpezaV();
                    printf("\n Sem estoque suficiente\n\n");
                    printf(" Total de Limpeza: R$ %.2f\n", totalLimpeza);
                    printf(" Total Geral: R$ %.2f\n\n", total);
                    continue;
                }
            }else{
                system("cls");
                limpezaV();
                printf("\n Sem estoque suficiente\n\n");
                printf(" Total de Limpeza: R$ %.2f\n", totalLimpeza);
                printf(" Total Geral: R$ %.2f\n\n", total);
                continue;
            }
                limpezaV();
                for(int i = 0; i < cont; i++){
                    if(estoqueL[i] > 0){
                        subTotal = valorL[i] * quant;
                        printf(" %s x %d = %.2f\n", produtosL[i], quant, subTotal);
                    }else
                        continue;
                }

                printf(" Total de Limpeza: R$ %.2f\n", totalLimpeza);
                printf(" Total Geral: R$ %.2f\n\n", total);
            }
        }while(opL != 18);
        system("cls");
    return total;
}

int alimento(){
    int opA, quantItem = 0;
    alimentoV();
    do{
            printf(" Digite um código: ");
            scanf("%d", &opA);
            while(getchar() != '\n');
            if(opA >= 21 && opA <= 27){
                int i = opA - 21;

            if(estoqueA[i] > 0){
                printf(" Digite a quantidade: ");
                scanf("%d", &quant);
                system("cls");

                if(quant <= estoqueA[i]){
                    subTotal = valorA[i] * quant;
                    totalAlimento += subTotal;
                    total += subTotal;
                    quantItem += quant;
                    estoqueA[i] -= quant;
                }else{
                    system("cls");
                    alimentoV();
                    printf("\n Sem estoque suficiente\n\n");
                    printf(" Total de Alimentos: R$ %.2f\n", totalAlimento);
                    printf(" Total Geral: R$ %.2f\n\n", total);
                    continue;
                }
            }else{
                system("cls");
                alimentoV();
                printf("\n Sem estoque suficiente\n\n");
                printf(" Total de Alimentos: R$ %.2f\n", totalAlimento);
                printf(" Total Geral: R$ %.2f\n\n", total);
                continue;
            }
                alimentoV();
                printf(" %s x %d = %.2f\n", produtosA[i], quant, subTotal);
                printf(" Total de Alimentos: R$ %.2f\n", totalAlimento);
                printf(" Total Geral: R$ %.2f\n\n", total);
            }
        }while(opA != 28);
        system("cls");
    return total;
};

int padaria(){
    int opP, quantItem = 0;
    padariaV();
    do{
            printf(" Digite um código: ");
            scanf("%d", &opP);
            while(getchar() != '\n');
            if(opP >= 31 && opP <= 37){
                int i = opP - 31;

            if(estoqueP[i] > 0){
                printf(" Digite a quantidade: ");
                scanf("%d", &quant);
                system("cls");

                if(quant <= estoqueP[i]){
                    subTotal = valorP[i] * quant;
                    totalPadaria += subTotal;
                    total += subTotal;
                    quantItem += quant;
                    estoqueP[i] -= quant;
                }else{
                    system("cls");
                    padariaV();
                    printf("\n Sem estoque suficiente\n\n");
                    printf(" Total da Padaria: R$ %.2f\n", totalPadaria);
                    printf(" Total Geral: R$ %.2f\n\n", total);
                    continue;
                }
            }else{
                system("cls");
                padariaV();
                printf("\n Sem estoque suficiente\n\n");
                printf(" Total da Padaria: R$ %.2f\n", totalPadaria);
                printf(" Total Geral: R$ %.2f\n\n", total);
                continue;
            }
                padariaV();

                printf(" %s x %d = %.2f\n", produtosP[i], quant, subTotal);
                printf(" Total da Padaria: R$ %.2f\n", totalPadaria);
                printf(" Total Geral: R$ %.2f\n\n", total);
            }
        }while(opP != 38);
        system("cls");

    return total;
};



void sair(){
    printf("Programa encerrado...");
}

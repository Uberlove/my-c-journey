#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Variáveis globais
float totalLimpeza = 0;
float totalAlimento = 0;
float totalPadaria = 0;
float subTotal = 0;
float total = 0;
float dinheirorecebido, troco, falta, trocoT =0;
float caixaEnd;
int quantL = 0, quantA = 0, quantP = 0;
int itensL = 0, itensA = 0, itensP = 0, itens =0, Vendas = 0;
float valorBruto = 0, faturamento = 0, desconto = 0;
void menu();
int limpeza();
int alimento();
int padaria();
int pagamento();
int aberturaCaixa();
int fechamentoCaixa();
void sair();
int dinheiro();

float caixaInicial = 155.34;
int estoqueP[7], estoqueL[7], estoqueA[7], estoqueP2[7];
char *produtosP[8], *produtosL[8], produtosA[8];


int main(){
// ==================== MENU ====================
void menu();
{
int opcaoMenu =0;
    while (opcaoMenu != 7)
    {
        printf("---------- MENU ----------\n");

        char *opcao[7] = {"Material de Limpeza", "Venda de Alimentos", "Padaria","Pagamento", "Abertura de Caixa", "Fechamento de Caixa", "Sair"};

        for (int i = 0; i < 7; i++)
        {
            printf("%d. %s\n", i + 1, opcao[i]);
        }

        printf("--------------------------\n");
        scanf("%d", &opcaoMenu);

        system("cls");

        switch (opcaoMenu)
        {
            case 1:limpeza();break;
            case 2:alimento();break;
            case 3:padaria();break;
            case 4:pagamento();break;
            case 5:aberturaCaixa();break;
            case 6:fechamentoCaixa();break;
            case 7:sair();break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}
return 0;
};
int aberturaCaixa(){
    float valorP[7] = {9.50, 12.50, 1.90, 8.50, 12.50, 2.50, 17.50};

    caixaInicial = 155.34;
    caixaInicial += total;

    if (caixaInicial > 156)
    {
        printf("----------------------- ATUALIZACAO DO ESTOQUE ------------------------ \n");
        char *produtosP[7] = {"Pão de forma(pacote)", "Pão integral(pacote)", "Pão frances (unidade)", "Sonho (unidade)", "Biscoito(Kg)", "Pão doce(un)", "Salgado (un)"};
        for (int i = 0; i < 7; i++){
            if (produtosP[i] == produtosP[1])
                printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
            else{
                printf(" %-10d| %-25s | R$%-8.2f | \t", i + 31, produtosP[i], valorP[i]);
                scanf("%d", &estoqueP2[i]);

                if (estoqueP2[i] < 0)
                {
                    printf(" %-10d| %-25s | R$%-8.2f | \t", i + 31, produtosP[i], valorP[i]);
                    scanf("%d", &estoqueP2[i]);
                    break;
                }
            }
        }
    return caixaInicial;
    }

    printf("----------------------- ABERTURA DE CAIXA ------------------------\n");

    printf("\nValor registrado de caixa: R$%.2f\n", caixaInicial);
    printf("\n--------------------------- Processando... -------------------------\n");
    printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
    printf("-----------------------------------------------------------------\n");
    char *produtosP[7] = {"Pão de forma(pacote)", "Pão integral(pacote)", "Pão frances (unidade)", "Sonho (unidade)", "Biscoito(Kg)", "Pão doce(un)", "Salgado (un)"};
    for(int i = 0; i < 7; i++){
            if(produtosP[i] == produtosP[1])
                printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
            else{
                printf(" %-10d| %-25s | R$%-8.2f | \t", i + 31, produtosP[i], valorP[i]);
                scanf("%d", &estoqueP[i]);

                if (estoqueP[i] < 0)
                {
                    printf(" %-10d| %-25s | R$%-8.2f | \t", i + 31, produtosP[i], valorP[i]);
                    scanf("%d", &estoqueP[i]);
                }
                }
            }
    system("PAUSE");
    return caixaInicial;
};
// ==================== LIMPEZA ====================
int limpeza()
{
    int opL = 0;
    float valorL[7] = {1.99, 8.99, 1.50, 15.00, 4.99, 7.99, 1.00};
    int estoqueL[7] = {50, 30, 0, 20, 100, 15, 60};
    char *produtosL[8] = {"Detergente", "Sabao em po (1kg)", "Esponja", "Amaciante (1L)", "Bucha de pia (kit com 3)", "Desinfetante (1L)", "Sabao em barra (un)", "Voltar ao menu principal"};

    while (opL != 18)
    {

        printf("--------------------- MATERIAL DE LIMPEZA ---------------------\n");
        printf("%-10s | %-25s | %-10s  | %-12s \n",
               "CODIGO", "PRODUTO", "PRECO", "ESTOQUE");

        for (int i = 0; i < 7; i++)
        {
                if(estoqueL[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 11, produtosL[i], valorL[i], "Sem estoque");
                else
            printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 11, produtosL[i], valorL[i], estoqueL[i]);
        }

        printf("%-10d | %-25s\n", 18, produtosL[7]);
        printf("---------------------------------------------------------------\n");
        scanf("%d", &opL);

        if (opL >= 11 && opL <= 17)
        {
            int i = opL - 11;
            if (estoqueL[i] == 0)
            {
                printf("-----Sem estoque-----\n");
                continue;
            }

            printf("Digite a quantidade: ");
            scanf("%d", &quantL);

            if (quantL <= 0)
            {
                printf("-----Opcao Invalida----- \n");
                continue;
            }

            if (quantL > estoqueL[i])
            {
                printf("\nEstoque insuficiente \n");
                printf("Estoque disponivel %d \n", estoqueL[i]);
                continue;
            }
            estoqueL[i] -= quantL;
            subTotal = valorL[i] * quantL;
            totalLimpeza += subTotal;
            total += subTotal;
            itensL += quantL;
            itens += itensL;
            valorBruto += total;
            system("cls");

            if (estoqueL[i] > 0 && estoqueL[i] <= 5)
            {
                printf("ATENÇÃO: Estoque baixo \n");
            }
            if (estoqueL[i] == 0)
            {
                printf("ATENÇÃO: Estoque esgotado \n");
            }

            printf("-------------------------------");
            printf("Quantidade de iten/s: %d \n", itensL);
            printf("Subtotal: R$ %.2f\n", subTotal);
            printf("Total de limpeza: R$ %.2f\n", totalLimpeza);
            printf("Total geral: R$ %.2f\n\n", total);
            printf("Estoque restante : %d \n", estoqueL[i]);
            Vendas++;

        }
        else if (opL != 18)
        {
            printf("Opcao invalida!\n\n");
        }
    }
    return totalLimpeza;
}
// ==================== ALIMENTOS ====================
int alimento()
{
    int opA = 0;
    int estoqueA[7] = {10, 15, 10, 5, 20, 6, 15};
    float valorA[7] = {19.99, 5.90, 4.50, 8.00, 5.00, 2.00, 5.00};
    char *produtosA[8] = {"Cafe (500 g)", "Leite (caixa)", "Arroz (1 Kg)", "Feijao-preto (1 Kg)", "Acucar (1 Kg)", "Sal (1 Kg)", "Farinha de Trigo (1 Kg)", "Voltar ao menu principal"};

    while (opA != 28)
    {
        printf("-------------------------- ALIMENTOS --------------------------\n");
        printf("%-10s | %-25s | %-10s | %-12s \n",
               "CODIGO", "PRODUTO", "PRECO", "ESTOQUE");

        for (int i = 0; i < 7; i++)
        {
            printf("%-10d | %-25s | R$ %-7.2f | %10d \n",
                   i + 21, produtosA[i], valorA[i], estoqueA[i]);
        }

        printf("%-10d | %-25s\n", 28, produtosA[7]);

        printf("---------------------------------------------------------------\n");

        scanf("%d", &opA);

        if (opA >= 21 && opA <= 27)
        {
            int i = opA - 21;
            if (estoqueA[i] == 0)
            {
                printf("Sem estoque \n");
                continue;
            }

            printf("Digite a quantidade: ");
            scanf("%d", &quantA);

            if (quantA <= 0 )
            {
                printf("Opção Invalida \n");
                continue;
            }

            if (quantA > estoqueA[i])
            {
                printf("\nEstoque insuficiente \n");
                printf("Estoque disponivel %d \n", estoqueA[i]);
                continue;
            }
            estoqueA[i] -= quantA;
            subTotal = valorA[i] * quantA;
            totalAlimento += subTotal;
            total += subTotal;
            itensA += quantA;
            itens += itensA;
            valorBruto += total;
            system("cls");

            if (estoqueA[i] > 0 && estoqueA[i] <= 5)
            {
                printf("ATENÇÃO: estoque baixo" );
            }
            if (estoqueA == 0)
            {
                printf("ATENÇÃO: Estoque esgotado");
            }
            printf("Quantidade de itens: %d\n", itensA);
            printf("Subtotal: R$ %.2f\n", subTotal);
            printf("Total de alimentos: R$ %.2f\n", totalAlimento);
            printf("Total geral: R$ %.2f\n\n", total);
            Vendas++;
        }
        else if (opA != 28)
        {
            printf("Opcao invalida!\n\n");
        }
    }
    return totalAlimento;
}
// ==================== PADARIA ====================
int padaria()
{
    int opP = 0;
    float valorP[7] = {9.50, 12.50, 1.90, 8.50, 12.50, 2.50, 17.50};
    char *produtosP[8] = {"Pao de forma (pacote)", "Pao integral (pacote)", "Pao frances (unidade)", "Sonho (unidade)", "Biscoito (Kg)", "Pao doce (un)", "Salgado (un)", "Voltar ao menu principal"};

    while (opP != 38)
    {
        printf("--------------------------- PADARIA ---------------------------\n");
        printf("%-10s | %-25s | %-10s | %-10s\n",
               "CODIGO", "PRODUTO", "PRECO", "ESTOQUE");

        for (int i = 0; i < 7; i++)
        {
            estoqueP[i] += estoqueP2[i];
            if(estoqueP[i] == 0)
            printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 31, produtosP[i], valorP[i], "Sem estoque");
                else
            printf(" %-10d| %-25s | R$%-8.2f | %-10d\n", i + 31, produtosP[i], valorP[i], estoqueP[i]);
        }

        printf(" %-10d| %-25s\n", 38, produtosP[7]);

        printf("---------------------------------------------------------------\n");

        scanf("%d", &opP);

        if (opP >= 31 && opP <= 37)
        {
            int i = opP - 31;
            if (estoqueP[i] == 0)
            {
                printf("Sem estoque \n");
                continue;
            }
            printf("Digite a quantidade: ");
            scanf("%d", &quantP);
            if (quantP <= 0 )
            {
                printf("Opção Invalida \n");
                continue;
            }
            if (quantP > estoqueA[i])
            {
                printf("\nEstoque insuficiente \n");
                printf("Estoque disponivel %d \n", estoqueP[i]);
                continue;
            }

            subTotal = valorP[i] * quantP;
            estoqueP[i] -= quantP;
            totalPadaria += subTotal;
            total += subTotal;
            itensP += quantP;
            itens += itensP;
            valorBruto += total;

            if (estoqueP[i] > 0 && estoqueP[i] <= 5)
            {
                printf("ATENCAO: Estoque baixo\n");
                continue;
            }
            if (estoqueP[i] == 0)
            {
                printf("ATENCAO: Estoque esgotado\n");
                continue;
            }

            system("cls");
            printf("Quantidade de itens: %d", quantP);
            printf("Subtotal: R$ %.2f\n", subTotal);
            printf("Total de padaria: R$ %.2f\n", totalPadaria);
            printf("Total geral: R$ %.2f\n\n", total);
            Vendas++;
        }
        else if (opP != 38)
        {
            printf("Opcao invalida!\n\n");
        }
    }
    return totalPadaria;
}

// ==================== PAGAMENTO ====================
int pagamento()
{
    int opcaoPagamento;

    printf("-------------- PAGAMENTO --------------\n");
    printf("Total da compra: R$ %.2f\n\n", total);

    printf("1 - Dinheiro\n");
    printf("2 - Cartao\n");
    printf("3 - Voltar\n");
    printf("Escolha a forma de pagamento: \n");
    scanf("%d", &opcaoPagamento);

    system("cls");
        switch (opcaoPagamento)
        {
            case 1:
                dinheiro();
                break;
            case 2:
                printf("Pagamento no cartao selecionado.\n");
                break;
            case 3:
                //printf("Voltar ao menu principal. \n");
                break;
            default:
                printf("Opcao de pagamento invalida.\n");
                break;
        }
    printf("Valor da compra: R$ %.2f\n", total);
    return opcaoPagamento;
}

// ==================== FECHAMENTO DO CAIXA ====================
int fechamentoCaixa()
{
    caixaEnd += valorBruto;
    if(valorBruto > caixaInicial){
        faturamento = valorBruto - caixaInicial;
    }else{
        faturamento = valorBruto;
    }


    printf("---------- FECHAMENTO DE CAIXA ------------\n");
    printf("Total de limpeza: R$ %.2f\n", totalLimpeza);
    printf("Total de alimentos: R$ %.2f\n", totalAlimento);
    printf("Total de padaria: R$ %.2f\n", totalPadaria);
    printf("-------------------------------------------\n");
    printf("TOTAL GERAL: R$ %.2f\n", total);
    printf("Caixa Inicial: R$ %.2f \n", caixaInicial);
    printf("Fechamento do caixa: R$ %.2f \n", caixaEnd);
    printf("Faturamento do dia: R$ %.2f \n", faturamento);
    printf("Troco total: R$ %.2f \n", trocoT);
    printf("-------------------------------------------\n");
    printf("Total de produtos vendidos %d\n", itens);
    printf("Total de Vendas: %d \n", Vendas);
    system("PAUSE");
    system("cls");
    return 1;
}
// ==================== SAIR ====================
void sair()
{
    time_t agora;
    struct tm *hora;

    time(&agora);
    hora = localtime(&agora);

    printf("Programa finalizado as %02d:%02d:%02d\n",
           hora->tm_hour,
           hora->tm_min,
           hora->tm_sec);
}
int dinheiro(){
    float desc = 0;
    if (total > 0 && total <= 50)
    {
        desconto = total * 0.95;
    }
    if (total > 50 && total < 200)
    {
        desconto = total * 0.90;
    }else if (total > 200)
    {
        printf("Digite a %% do desconto que deseja\n");
        scanf("%f", &desc);
        desconto = total -  (total * (desc/100));
    }

    printf("----------DINHEIRO---------\n");
    printf("Total de limpeza: R$ %.2f\n", totalLimpeza);
    printf("Total de alimentos: R$ %.2f\n", totalAlimento);
    printf("Total de padaria: R$ %.2f\n", totalPadaria);
    printf("------------------------------------------\n");
    printf("TOTAL GERAL: R$ %.2f\n", total);
    printf("TOTAL COM DESCONTO: R$ %.2f\n", desconto);
    printf("Valor a receber\n");
    scanf("%f", &dinheirorecebido);
    system("cls");

    if (dinheirorecebido > desconto)
    {
        troco = dinheirorecebido - desconto;
        falta = desconto - dinheirorecebido;
        trocoT += troco;
        printf("Valor entregue: %.2f \n", dinheirorecebido);
        printf("TROCO: R$ %.2f \n", troco);
        printf("Compra aprovada \n");
    }
    else if(dinheirorecebido < desconto)
    {
        falta = desconto - dinheirorecebido;
        printf("Valor entregue: %.2f \n", dinheirorecebido);
        printf("Falta: R$ %.2f\n", falta);
        printf("Compra negada: \n");
    }
   else// if(total > 200)
    {
        troco = dinheirorecebido - total;
        trocoT += troco;
        printf("Valor entregue: %.2f \n", dinheirorecebido);
        printf("TROCO: R$ %.2f \n", troco);
        printf("Compra aprovada \n");
    }

    return dinheirorecebido;
}

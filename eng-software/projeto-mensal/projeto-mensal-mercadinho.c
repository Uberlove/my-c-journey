#include <stdio.h>

int main() {

    int opcao, opcaoL, opcaoA, opcaoP, opcaoPA, quantidade, status, venda = 0;
    float valor, Qdin, troco, faltou , desconto;
    float total = 0, subtotal = 0, faturamento = 0;
    float totalLimpeza = 0, totalAlimentos = 0, totalPadaria = 0;
    float faturamentoL = 0, faturamentoA = 0, faturamentoP = 0;

    do{

        printf("============= MENU =============\n");
        printf(" 1 - Material de Limpeza\n");
        printf(" 2 - Alimentos\n");
        printf(" 3 - Padaria\n");
        printf(" 4 - Pagar\n");
        printf(" 5 - Sair\n\n");
        printf(" FATURAMENTO DO DIA: R$ %.2f\n", faturamento);
        printf("--------------------------------\n");
        scanf("%d", &opcao);

        if(opcao == 1){

        do{

            printf("====== Material de Limpeza ======\n");
            printf(" 11 - Detergente \t R$1.99\n");
            printf(" 12 - Sabao em po(1kg) \t R$8.99\n");
            printf(" 13 - Esponja \t\t R$1.50\n");
            printf(" 14 - Amaciante(1L) \t R$15.00\n");
            printf(" 0  - Retornar \n");
            printf("---------------------------------\n");
            scanf("%d", &opcaoL);

            switch(opcaoL){

                case 11:
                    valor = 1.99;
                    break;
                case 12:
                    valor = 8.99;
                    break;
                case 13:
                    valor = 1.50;
                    break;
                case 14:
                    valor = 15.00;
                    break;
                case 0:
                    continue;
                    break;
                default:
                    printf("INVALIDO");
                    break;

            }

            printf("\nDigite a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0){
                printf("Valor precisa ser maior que 0!\n");
                continue;
            }

            subtotal = quantidade * valor;
            totalLimpeza += subtotal;
            total += subtotal;

            printf("%d item(ns) = R$%.2f\n\n", quantidade, subtotal);

            }while(opcaoL != 0);

        } else if(opcao == 2){

            do{

            printf("=============== Alimentos ===============\n");
            printf(" 21 - Cafe \t\t\t R$19.99\n");
            printf(" 22 - Leite(caixa)(1kg) \t R$5.90\n");
            printf(" 23 - Arroz(1kg) \t\t R$4.50\n");
            printf(" 24 - Feijao-preto(1kg) \t R$8.00\n");
            printf(" 25 - Acucar(1kg) \t\t R$5.00\n");
            printf(" 0  - Retornar \n");
            printf("-----------------------------------------\n");
            scanf("%d", &opcaoA);

            switch(opcaoA){

                case 21:
                    valor = 19.99;
                    break;
                case 22:
                    valor = 5.90;
                    break;
                case 23:
                    valor = 4.50;
                    break;
                case 24:
                    valor = 8.00;
                    break;
                case 25:
                    valor = 5.00;
                    break;
                case 0:
                    continue;
                    break;
                default:
                    printf("INVALIDO");
                    break;

            }

            printf("\nDigite a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0){
                printf("Valor precisa ser maior que 0!\n");
                continue;

            }

            subtotal = quantidade * valor;
            totalAlimentos += subtotal;
            total += subtotal;

            printf("%d item(ns) = R$%.2f\n\n", quantidade, subtotal);

            }while(opcaoA != 0);

        }else if(opcao == 3){
            do{

            printf("============= Padaria ===========\n");
            printf(" 31 - Pao de forma \t R$9.50\n");
            printf(" 32 - Pao integral \t R$12.50\n");
            printf(" 33 - Pao frances(un) \t R$1.90\n");
            printf(" 34 - Sonho \t\t R$8.50\n");
            printf(" 0  - Retorno\n");
            printf("---------------------------------\n");
            scanf("%d", &opcaoP);

            switch(opcaoP){

                case 31:
                    valor = 9.50;
                    break;
                case 32:
                    valor = 12.50;
                    break;
                case 33:
                    valor = 1.90;
                    break;
                case 34:
                    valor = 8.50;
                    break;
                case 0:
                    continue;
                    break;

                default:
                    printf("INVALIDO");
                    break;

            }

            printf("\nDigite a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0){
                printf("Valor precisa ser maior que 0!\n");
                continue;
            }

            subtotal = quantidade * valor;
            totalPadaria += subtotal;
            total += subtotal;

            printf("%d item(ns) = R$%.2f\n\n", quantidade, subtotal);

            }while(opcaoP != 0);

        }else if(opcao == 4){
            if(total == 0){
                printf("NENHUM ITEM ADICIONADO!\n");
                continue;
            }

            do{

                printf("===== RESUMO DA COMPRA =====\n");
                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                printf("Alimentos:           R$%.2f\n", totalAlimentos);
                printf("Padaria:             R$%.2f\n", totalPadaria);
                printf("----------------------------\n");

                printf("==== OPCOES DE PAGAMENTO ====\n");
                printf(" 1 - Dinheiro\n");
                printf(" 2 - Cartao\n");
                printf(" 0 - Para voltar\n");
                printf("-----------------------------\n");
                scanf("%d", &opcaoPA);

                if(opcaoPA == 1){

                        printf("\nValor da Compra: R$%.2f \n", total);
                        printf("\nValor Recebido: R$");
                        scanf("%f", &Qdin);

                        if (Qdin < total) {
                            faltou = total - Qdin;
                            printf("\nFaltam R$%.2f para completar o pagamento... \n", faltou);

                        } else if (Qdin == total) {

                            if(total >= 30){

                                desconto = total - total * (5/100);

                                printf("\n\nCompra APROVADA!\n\n");
                                printf("\n===== RESUMO DA COMPRA =====\n");
                                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                                printf("Alimentos:           R$%.2f\n", totalAlimentos);
                                printf("Padaria:             R$%.2f\n", totalPadaria);
                                printf("----------------------------\n");
                                printf("Desconto:            R$%.2f\n", desconto = total * 0.05);
                                printf("TOTAL A PAGAR:       R$%.2f\n", total - desconto);
                                printf("Valor Recebido:      R$%.2f\n", Qdin);
                                printf("Troco                R$%.2f\n", troco = 0 + desconto);
                                printf("----------------------------\n");

                                faturamentoA += totalAlimentos;
                                faturamentoL += totalLimpeza;
                                faturamentoP += totalPadaria;

                                faturamento += total - desconto;
                                venda++;
                                total = 0;

                                }else{

                                troco = Qdin - total;

                                printf("COMPRA APROVADA!\n");
                                printf("===== RESUMO DA COMPRA =====\n");
                                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                                printf("Alimentos:           R$%.2f\n", totalAlimentos);
                                printf("Padaria:             R$%.2f\n", totalPadaria);
                                printf("----------------------------\n");
                                printf("Desconto:            R$%.2f\n", desconto = 0);
                                printf("TOTAL A PAGAR:       R$%.2f\n", total);
                                printf("Valor Recebido:      R$%.2f\n", Qdin);
                                printf("Troco:               R$%.2f\n", troco);
                                printf("----------------------------\n");

                                faturamentoA += totalAlimentos;
                                faturamentoL += totalLimpeza;
                                faturamentoP += totalPadaria;

                                faturamento += total;
                                venda++;
                                total = 0;

                                break;

                                }

                                break;

                        } else {
                            if(total >= 30){

                                desconto = total - total * (5/100);

                                troco = Qdin - total;

                                printf("COMPRA APROVADA!\n");
                                printf("===== RESUMO DA COMPRA =====\n");
                                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                                printf("Alimentos:           R$%.2f\n", totalAlimentos);
                                printf("Padaria:             R$%.2f\n", totalPadaria);
                                printf("----------------------------\n");
                                printf("Desconto:            R$%.2f\n", desconto = total * 0.05);
                                printf("TOTAL A PAGAR:       R$%.2f\n", total - desconto);
                                printf("Valor Recebido:      R$%.2f\n", Qdin);
                                printf("Troco:               R$%.2f\n", troco + desconto);
                                printf("----------------------------\n");

                                faturamentoA += totalAlimentos;
                                faturamentoL += totalLimpeza;
                                faturamentoP += totalPadaria;

                                faturamento += total - desconto;
                                venda++;
                                total = 0;

                                break;

                            } else{

                                troco = Qdin - total;

                                printf("COMPRA APROVADA!\n");
                                printf("===== RESUMO DA COMPRA =====\n");
                                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                                printf("Alimentos:           R$%.2f\n", totalAlimentos);
                                printf("Padaria:             R$%.2f\n", totalPadaria);
                                printf("----------------------------\n");
                                printf("Desconto:            R$%.2f\n", desconto = 0);
                                printf("TOTAL A PAGAR:       R$%.2f\n", total);
                                printf("Valor Recebido:      R$%.2f\n", Qdin);
                                printf("Troco:               R$%.2f\n", troco);
                                printf("----------------------------\n");

                                faturamentoA += totalAlimentos;
                                faturamentoL += totalLimpeza;
                                faturamentoP += totalPadaria;

                                faturamento += total;
                                venda++;
                                total = 0;

                                break;

                                }


                        }

                } else if (opcaoPA == 2) {

                    printf("1 - APROVADO | 0 - RECUSADO\n");
                    printf("Processando... \n");
                    scanf("%d",&status);

                    if (status == 1){

                    printf("CARTAO APROVADO!\n");

                    Qdin = total;

                    printf("===== RESUMO DA COMPRA =====\n");
                    printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                    printf("Alimentos:           R$%.2f\n", totalAlimentos);
                    printf("Padaria:             R$%.2f\n", totalPadaria);
                    printf("----------------------------\n");
                    printf("Compra APROVADA!\n");

                    faturamentoA += totalAlimentos;
                    faturamentoL += totalLimpeza;
                    faturamentoP += totalPadaria;

                    faturamento += total;
                    venda++;
                    total = 0;

                    break;

                    }

                    else if(status == 0){
                    printf("CARTAO RECUSADO!\n");

                    }

                }


            }while(opcaoPA != 0);

            totalAlimentos = 0;
            totalLimpeza = 0;
            totalPadaria = 0;

        }

    } while(opcao != 5);{
            printf("\n============= RESUMO DIARIO =============\n");
            printf("\nTotal de vendas: %d\n", venda);
            printf("\nFaturamento Mat. de Limpeza:      R$%.2f\n", faturamentoL);
            printf("\nFaturamento Alimentos:            R$%.2f\n", faturamentoA);
            printf("\nFaturamento Padaria:              R$%.2f\n", faturamentoP);
            printf("\nFaturamento total:                R$%.2f\n", faturamento);
            printf("\n-----------------------------------------");
            }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Material de Limpeza
int estoqueL[7] = {50, 30, 0, 20, 100, 15, 60};
char *produtosL[8] = {
    "Detergente", "Sabao em po(1kg)", "Esponja", "Amaciante(1L)",
    "Bucha de pia(kit com 3)", "Desinfetante(1L)", "Sabao em barra(un)", "Voltar ao menu principal"
};
float valorL[7] = {1.99, 8.99, 1.50, 15.00, 4.99, 7.99, 1.00};

// Alimentos
char *produtosA[8] = {
    "Café (500 g)", "Leite (caixa)", "Arroz (1 Kg)", "Feijão-preto(1 Kg)",
    "Açúcar (1 Kg)", "Sal (1 Kg)", "Farinha de Trigo (1 Kg)", "Voltar ao menu principal"
};
float valorA[7] = {19.99, 5.90, 4.50, 8.00, 5.00, 2.00, 5.00};
int estoqueA[7] = {10, 15, 10, 5, 20, 6, 15};

// Padaria
int estoqueP[7] = {0};
int estoqueAtP[7] = {0};
char *produtosP[8] = {
    "Pão de forma(pacote)", "Pão integral(pacote)", "Pão frances (unidade)",
    "Sonho (unidade)", "Biscoito(Kg)", "Pão doce(un)", "Salgado (un)", "Voltar ao menu principal"
};
float valorP[7] = {9.50, 12.50, 1.90, 8.50, 12.50, 2.50, 17.50};

// Variáveis de controle de compras
float totalLimpeza = 0, totalAlimento = 0, totalPadaria = 0;
float subTotal = 0, total = 0;
int quant = 0;
int itensCompraAtual = 0;

// Variáveis financeiras e de fechamento
float caixaInicial = 0;
float fatLimpeza = 0, fatAlimento = 0, fatPadaria = 0;
float faturamento = 0, caixaEnd = 0;
float dinheirorecebido = 0, troco = 0, falta = 0, trocoT = 0, desc = 0, desconto = 0;
int itens = 0, Vendas = 0;

int opcaoMenu = 0;
int cont = 0; // Controle de caixa aberto (0 = fechado, 1 = aberto)

// Protótipos das Funções
void limparBuffer(void);
void menu(void);
void subMenu(void);
void produtos(void);
int limpeza(void);
int alimento(void);
int padaria(void);
int pagamento(void);
int dinheiro(void);
int cartao(void);
void aberturaCaixa(void);
int fechamentoCaixa(void);
void sair(void);

// Função principal
int main(void) {
    setlocale(LC_ALL, "");
    menu();
    return 0;
}
// Verifica os scanfs
void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu(void) {
    while (opcaoMenu != 7) {
        system("PAUSE");
        system("cls");
        printf("---------- MENU ----------\n");
        char *opcao[7] = {
            "Material de Limpeza", "Venda de Alimentos", "Padaria",
            "Pagamento", "Abertura de Caixa", "Fechamento de Caixa", "Sair"
        };
        for (int i = 0; i < 7; i++) {
            printf("%d. %s\n", i + 1, opcao[i]);
        }
        printf("--------------------------\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcaoMenu) != 1) {
            limparBuffer();
            opcaoMenu = 0;
            continue;
        }
        limparBuffer();

        // Exigência de abertura de caixa prévia
        if (opcaoMenu >= 1 && opcaoMenu <= 4 && cont == 0) {
            printf("\n[AVISO] Abra o caixa antes de prosseguir com as vendas!\n");
            continue;
        }

        switch (opcaoMenu) {
            case 1: limpeza(); break;
            case 2: alimento(); break;
            case 3: padaria(); break;
            case 4: pagamento();
                    break;
            case 5:
                if (cont == 0) {
                    aberturaCaixa();
                    cont++;
                } else {
                    printf("\n[AVISO] O caixa ja foi aberto hoje!\n");
                }
                break;
            case 6:
                if (cont == 0) {
                    printf("\n[AVISO] O caixa ainda nao foi aberto hoje!\n");
                } else {
                    fechamentoCaixa();
                }
                break;
            case 7: sair(); break;
            default:
                printf("\nOpção invalida. Digite de 1 a 7.\n");
                break;
        }
    }
}

void subMenu(void) {
    switch (opcaoMenu) {
        case 1:
            printf("\n---------------------- MATERIAL DE LIMPEZA -----------------------\n");
            break;
        case 2:
            printf("\n-------------------------- ALIMENTOS -----------------------------\n");
            break;
        case 3:
            printf("\n--------------------------- PADARIA ------------------------------\n");
            break;
        default:
            break;
    }
    printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
    printf("-----------------------------------------------------------------\n");
}

void produtos(void) {
    switch (opcaoMenu) {
        case 1:
            for (int i = 0; i < 8; i++) {
                if (i == 7) {
                    printf(" %-10s| %-25s \n", "18", produtosL[i]);
                    continue;
                }
                if (estoqueL[i] <= 0)
                    printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 11, produtosL[i], valorL[i], "Sem estoque");
                else
                    printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 11, produtosL[i], valorL[i], estoqueL[i]);
            }
            break;
        case 2:
            for (int i = 0; i < 8; i++) {
                if (i == 7) {
                    printf(" %-10s| %-25s \n", "28", produtosA[i]);
                    continue;
                }
                if (estoqueA[i] <= 0)
                    printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", i + 21, produtosA[i], valorA[i], "Sem estoque");
                else
                    printf(" %-10d| %-25s | R$%-8.2f | %5d\n", i + 21, produtosA[i], valorA[i], estoqueA[i]);
            }
            break;
        case 3:
            for (int i = 0; i < 8; i++) {
                if (i == 7) {
                    printf(" %-10s| %-25s \n", "38", produtosP[i]);
                    continue;
                }
                if (estoqueP[i] <= 0)
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

int limpeza(void) {
    int opL;
    do {
        subMenu();
        produtos();
        printf(" Total de Limpeza: R$ %.2f | Total Geral: R$ %.2f\n", totalLimpeza, total);
        printf(" Digite um código (ou 18 para voltar): ");
        if (scanf("%d", &opL) != 1) {
            limparBuffer();
            continue;
        }
        limparBuffer();

        if (opL >= 11 && opL <= 17) {
            int i = opL - 11;
            if (estoqueL[i] <= 0) {
                printf("\n [AVISO] Produto sem estoque! Operacao cancelada.\n");
                continue;
            }

            printf(" Digite a quantidade: ");
            if (scanf("%d", &quant) != 1 || quant <= 0) {
                limparBuffer();
                printf("\n Quantidade invalida!\n");
                continue;
            }
            limparBuffer();

            if (quant <= estoqueL[i]) {
                subTotal = valorL[i] * quant;
                totalLimpeza += subTotal;
                total += subTotal;
                estoqueL[i] -= quant;
                itensCompraAtual += quant;
                printf("\n %s x %d = R$ %.2f adicionado com sucesso!\n", produtosL[i], quant, subTotal);
            } else {
                printf("\n [ERRO] Sem estoque suficiente. Estoque atual: %d\n", estoqueL[i]);
            }
        }
    } while (opL != 18);
    return (int)total;
}

int alimento(void) {
    int opA;
    do {
        subMenu();
        produtos();
        printf(" Total de Alimentos: R$ %.2f | Total Geral: R$ %.2f\n", totalAlimento, total);
        printf(" Digite um código (ou 28 para voltar): ");
        if (scanf("%d", &opA) != 1) {
            limparBuffer();
            continue;
        }
        limparBuffer();

        if (opA >= 21 && opA <= 27) {
            int i = opA - 21;
            if (estoqueA[i] <= 0) {
                printf("\n [AVISO] Produto sem estoque! Operacao cancelada.\n");
                continue;
            }

            printf(" Digite a quantidade: ");
            if (scanf("%d", &quant) != 1 || quant <= 0) {
                limparBuffer();
                printf("\n Quantidade invalida!\n");
                continue;
            }
            limparBuffer();

            if (quant <= estoqueA[i]) {
                subTotal = valorA[i] * quant;
                totalAlimento += subTotal;
                total += subTotal;
                estoqueA[i] -= quant;
                itensCompraAtual += quant;
                printf("\n %s x %d = R$ %.2f adicionado com sucesso!\n", produtosA[i], quant, subTotal);
            } else {
                printf("\n [ERRO] Sem estoque suficiente. Estoque atual: %d\n", estoqueA[i]);
            }
        }
    } while (opA != 28);
    return (int)total;
}

int padaria(void) {
    int opP;
    do {
        subMenu();
        produtos();
        printf(" Total de Padaria: R$ %.2f | Total Geral: R$ %.2f\n", totalPadaria, total);
        printf(" Digite um código (ou 38 para voltar): ");
        if (scanf("%d", &opP) != 1) {
            limparBuffer();
            continue;
        }
        limparBuffer();

        if (opP >= 31 && opP <= 37) {
            int i = opP - 31;
            if (estoqueP[i] <= 0) {
                printf("\n [AVISO] Produto sem estoque! Operacao cancelada.\n");
                continue;
            }

            printf(" Digite a quantidade: ");
            if (scanf("%d", &quant) != 1 || quant <= 0) {
                limparBuffer();
                printf("\n Quantidade invalida!\n");
                continue;
            }
            limparBuffer();

            if (quant <= estoqueP[i]) {
                subTotal = valorP[i] * quant;
                totalPadaria += subTotal;
                total += subTotal;
                estoqueP[i] -= quant;
                itensCompraAtual += quant;
                printf("\n %s x %d = R$ %.2f adicionado com sucesso!\n", produtosP[i], quant, subTotal);
            } else {
                printf("\n [ERRO] Sem estoque suficiente. Estoque atual: %d\n", estoqueP[i]);
            }
        }
    } while (opP != 38);
    return (int)total;
}

// Consolidado e escolha do método de pagamento
int pagamento(void) {
    if (total <= 0) {
        printf("\n[AVISO] Nenhum produto adicionado ao carrinho!\n");
        return 0;
    }

    int opcaoPagamento = 0;
    int aprovado = 0;

    do {
        printf("\n--------------------- PAGAMENTO ----------------------\n");
        printf("Total Material de Limpeza: R$ %.2f\n", totalLimpeza);
        printf("Total Venda de Alimentos:  R$ %.2f\n", totalAlimento);
        printf("Total Padaria:             R$ %.2f\n", totalPadaria);
        printf("--------------------------------------------------------\n");
        printf("TOTAL GERAL DA COMPRA:     R$ %.2f\n\n", total);

        printf("1 - Dinheiro\n");
        printf("2 - Cartao\n");
        printf("3 - Voltar (Preservar compra)\n");
        printf("Escolha a forma de pagamento: ");

        if (scanf("%d", &opcaoPagamento) != 1) {
            limparBuffer();
            continue;
        }
        limparBuffer();

        switch (opcaoPagamento) {
            case 1:
                aprovado = dinheiro();
                break;
            case 2:
                aprovado = cartao();
                break;
            case 3:
                printf("\nRetornando ao menu principal. Compra preservada intacta.\n");
                return 0;
            default:
                printf("\nOpcao de pagamento invalida.\n");
                break;
        }

        // Se a venda for finalizada, acumula no caixa diário e limpa o carrinho
        if (aprovado) {
            float valorFinalVenda = total;
            if(opcaoPagamento == 1){
                valorFinalVenda = total - desconto;
            }
            fatLimpeza += totalLimpeza;
            fatAlimento += totalAlimento;
            fatPadaria += totalPadaria;
            faturamento += valorFinalVenda;
            itens += itensCompraAtual;
            Vendas++;

            // Zera variáveis para o próximo cliente
            totalLimpeza = 0;
            totalAlimento = 0;
            totalPadaria = 0;
            total = 0;
            itensCompraAtual = 0;

            printf("\n>>> VENDA CONCLUIDA COM SUCESSO! <<<\n");
            break;
        }
    } while (!aprovado);

    return opcaoPagamento;
}

// Pagamento em Dinheiro com Troco e Desconto
int dinheiro(void) {
    float valorFinal = 0;

    if (total <= 50.0) {
        desconto = total * 0.05;
    } else if (total < 200) {
        desconto = total * 0.10;
    } else {
        printf("\nCompra a partir de R$ 200,00.\n");
        printf("Dona Bere, digite a %% de desconto que deseja aplicar: ");
        while (scanf("%f", &desc) != 1 || desc < 0 || desc > 100) {
            limparBuffer();
            printf("Percentual invalido. Digite entre 0 e 100: ");
        }
        limparBuffer();
        desconto = total * (desc / 100);
    }

    valorFinal = total - desconto;

    printf("\n----------------- DINHEIRO -----------------\n");
    printf("Total Bruto:          R$ %.2f\n", total);
    printf("Desconto Concedido:   R$ %.2f\n", desconto);
    printf("TOTAL A RECEBER:      R$ %.2f\n", valorFinal);
    printf("--------------------------------------------\n");

    // Laço obrigatório até que o valor recebido seja suficiente
    while (1) {
        printf("Informe o valor recebido em dinheiro: R$ ");
        if (scanf("%f", &dinheirorecebido) != 1) {
            limparBuffer();
            continue;
        }
        limparBuffer();

        if (dinheirorecebido < valorFinal) {
            falta = valorFinal - dinheirorecebido;
            printf("\n[ERRO] Valor entregue insuficiente! Faltam R$ %.2f\n", falta);
            printf("A compra nao pode ser concluida sem o valor total.\n\n");
        } else {
            troco = dinheirorecebido - valorFinal;
            trocoT += troco;
            printf("\nValor entregue: R$ %.2f\n", dinheirorecebido);
            printf("TROCO:          R$ %.2f\n", troco);
            return 1; // Pagamento realizado
        }
    }
}

// Pagamento em Cartão com validação de status
int cartao(void) {
    int statusCartao = -1;

    printf("\n----------------- CARTAO -----------------\n");
    printf("Total a debitar: R$ %.2f\n", total);
    printf("Digite 1 para Aprovado ou 0 para Nao aprovado: ");

    while (scanf("%d", &statusCartao) != 1 || (statusCartao != 0 && statusCartao != 1)) {
        limparBuffer();
        printf("Entrada invalida! Digite 1 (Aprovado) ou 0 (Nao aprovado): ");
    }
    limparBuffer();

    if (statusCartao == 1) {
        printf("\n[OK] Pagamento em cartao aprovado!\n");
        return 1;
    } else {
        printf("\n[AVISO] Pagamento nao aprovado! A compra foi preservada.\n");
        return 0;
    }
}

// Abertura de Caixa e cadastro de estoque da Padaria
void aberturaCaixa(void) {
    int i = 0;
    printf("\n----------------------- ABERTURA DE CAIXA ------------------------\n");
    printf("\nInforme o valor em dinheiro disponivel para troco (R$): ");
    while (scanf("%f", &caixaInicial) != 1 || caixaInicial < 0) {
        limparBuffer();
        printf("Valor invalido! Digite o valor de abertura (R$): ");
    }
    limparBuffer();
    printf("\n--------------------------- Processando... -------------------------\n\n");
    system("PAUSE");

    printf("\nO estoque da padaria precisa ser atualizado...\n");

    while(i < 7){
        system("cls");
        printf("----------------------- ABERTURA DE CAIXA -----------------------\n");
        printf("\n Valor em caixa: R$%.2f\n\n", caixaInicial);
        printf("--------------------------- PADARIA -------------------------------\n");
        printf(" %-10s| %-25s | %-10s | %-10s\n", "CÓDIGO", "PRODUTO", "PREÇO", "ESTOQUE");
        printf("-------------------------------------------------------------------\n");

        for(int j = 0; j < i; j++){
            if(estoqueP[j] <= 0){
                printf(" %-10d| %-25s | R$%-8.2f |%-10s\n", j + 31, produtosP[j], valorP[j], "Sem estoque");
            } else {
                printf(" %-10d| %-25s | R$%-8.2f | %5d\n", j + 31, produtosP[j], valorP[j], estoqueP[j]);
            }
        }

        printf(" %-10d| %-25s | R$%-8.2f | Digite a quantidade: ", i + 31, produtosP[i], valorP[i]);
        if(scanf("%d", &estoqueP[i]) != 1){
            while(getchar() != '\n');
            continue;
        }

        if(estoqueP[i] >= 0){
            i++;
        }
    }

    printf("\n[SUCESSO] Caixa aberto e estoque diario da padaria cadastrado!\n");
}

// Fechamento de Caixa com relatório
int fechamentoCaixa(void) {
    caixaEnd = caixaInicial + faturamento;

    printf("\n=============== FECHAMENTO DE CAIXA ===============\n");
    printf("CAIXA INICIAL (Troco): R$ %8.2f\n", caixaInicial);
    printf("---------------------------------------------------\n");
    printf("FATURAMENTO POR CATEGORIA:\n");
    printf("  - Material de Limpeza:   R$ %8.2f\n", fatLimpeza);
    printf("  - Venda de Alimentos:    R$ %8.2f\n", fatAlimento);
    printf("  - Padaria:               R$ %8.2f\n", fatPadaria);
    printf("---------------------------------------------------\n");
    printf("FATURAMENTO TOTAL DO DIA:  R$ %8.2f\n", faturamento);
    printf("SALDO TOTAL EM CAIXA:      R$ %8.2f\n", caixaEnd);
    printf("Troco Total Entregue:      R$ %8.2f\n", trocoT);
    printf("---------------------------------------------------\n");
    printf("Total de Vendas Feitas:    %d\n", Vendas);
    printf("Total de Produtos Vendidos:%d\n", itens);
    printf("===================================================\n");
    return 1;
}

void sair(void) {
    printf("\nPrograma SISBERE 2 encerrado com sucesso.\n");
}

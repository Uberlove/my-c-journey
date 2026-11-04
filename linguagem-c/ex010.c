#include <stdio.h>
#include <string.h>

int main(){
    char produto[30];
    float preco;
    float desconto;
    printf("Produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';
    printf("Pre‡o de %s: R$", produto);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    scanf("%f", &desconto);
    float pDesc = preco - preco * desconto/100;
    printf("O produto %s custava R$%.2f.\n", produto, preco);
    printf("Por‚m, com %.2f%% de desconto, passa a custar R$%.2f.", desconto, pDesc);
    return 0;
}
// Controle de estoque de um mercado.

#include <stdio.h>

int main(){
    int amountProd;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &amountProd);

    for(int i = 1; i <= amountProd; i++){
        char product[20];
        int stock, minStock;

        printf("Produto %d: \n", i);
        printf("Nome do produto: ");
        scanf(" %s", &product);
        printf("Quantidade em estoque: ");
        scanf("%d", &stock);
        printf("Estoque minimo recomendado: ");
        scanf("%d", &minStock);

        if(stock < minStock){
            printf("-> O produto %s precisa ser reposto! (Estoque: %d, Minimo: %d) \n", product, stock, minStock);
        }else
            printf("-> O produto %s tem estoque suficiente. (Estoque: %d, Minimo: %d) \n", product, stock, minStock);
    }

    return 0;
}

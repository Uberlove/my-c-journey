#include <stdio.h>

int main(){
    int n;
    char *menu["Material de limpeza",
               "Venda de alimentos",
                  "Padaria",
                  "Pagamento",
                  "Abertura de caixa",
                  "Fechamento de caixa",
                  "Sair"
                  ];
    for(int i = 0; i < 7; i++){
        printf("%d. %s", i + 1, menu[i]);
    }
    return 0;
}

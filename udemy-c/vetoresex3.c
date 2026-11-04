//BIBLIOTECAS AUXILIARES
#include <stdio.h>

//----- FUNÇÃO MAIN -----
int main()
{
    int pares[10];
    int n = 0;
    int cont = 0;
    printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            pares[cont] = n;
            cont++;
        }
    }
    if(cont == 0)printf("Nenhuma par encontrado!");
    else
    {
        printf("%d pares encontrados\n", cont);
        for(int i = 0; i < cont; i++)
        {
            printf("%d ", pares[i]);
        }
    }

    return 0;
}

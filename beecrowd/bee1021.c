#include <stdio.h>

int main() {

    double valor;
    scanf("%lf", &valor);
    int valorMoeda = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", valorMoeda/10000); valorMoeda%=10000;
    printf("%d nota(s) de R$ 50.00\n", valorMoeda/5000); valorMoeda%=5000;
    printf("%d nota(s) de R$ 20.00\n", valorMoeda/2000); valorMoeda%=2000;
    printf("%d nota(s) de R$ 10.00\n", valorMoeda/1000); valorMoeda%=1000;
    printf("%d nota(s) de R$ 5.00\n", valorMoeda/500); valorMoeda%=500;
    printf("%d nota(s) de R$ 2.00\n", valorMoeda/200); valorMoeda%=200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", valorMoeda/100); valorMoeda%=100;
    printf("%d moeda(s) de R$ 0.50\n", valorMoeda/50); valorMoeda%=50;
    printf("%d moeda(s) de R$ 0.25\n", valorMoeda/25); valorMoeda%=25;
    printf("%d moeda(s) de R$ 0.10\n", valorMoeda/10); valorMoeda%=10;
    printf("%d moeda(s) de R$ 0.05\n", valorMoeda/5); valorMoeda%=5;
    printf("%d moeda(s) de R$ 0.01\n", valorMoeda);

    return 0;
}

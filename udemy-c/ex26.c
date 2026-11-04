// Contar vogais em uma palavra.

#include <stdio.h>

int vogal(char x[]) {
    int cont = 0;
    for (int i = 0; x[i] != '\0'; i++) {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' ||
            x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U') {
            cont++;
        }
    }
    printf("Quantidade de vogais: %d\n", cont);

    return cont;
}

int main() {
    char nome[20];
    printf("Digite um nome... ");
    scanf("%s", nome);

    vogal(nome);

    return 0;
}


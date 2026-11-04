#include <stdio.h>

// Definindo a struct para um Produto
struct Produto {
    int codigo;
    char nome[30];
    float preco;
};

int main() {
    // Criando uma variável do tipo struct Produto
    struct Produto prod;

    printf("--- CADASTRO DE PRODUTO ---\n");

    // Lendo o código do produto
    printf("Digite o codigo do produto: ");
    scanf("%d", &prod.codigo);

    // Lendo o nome (limpando o buffer do teclado antes)
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", prod.nome);

    // Lendo o preço
    printf("Digite o preco: R$ ");
    scanf("%f", &prod.preco);

    // Mostrando os dados cadastrados
    printf("\n--- PRODUTO CADASTRADO ---\n");
    printf("Codigo: %d\n", prod.codigo);
    printf("Nome: %s\n", prod.nome);
    printf("Preco: R$ %.2f\n", prod.preco);

    return 0;
}

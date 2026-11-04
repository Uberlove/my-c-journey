#include <stdio.h>

int main(){
    float n1, n2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("Com as notas %.1f e %.1f, o aluno tem m‚dia %.1f.\n", n1, n2, media);
    printf("A sua situa‡ao ‚ %s.\n", (media>=7?"APROVADO":"REPROVADO"));
}
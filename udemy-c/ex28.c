// Classificar notas de alunos.

#include <stdio.h>

void status(int);

int main(){
    int n;
    printf("Digite a nota do aluno... ");
    scanf("%d", &n);

    status(n);

    return 0;
}

void status(int a){
    if(a >= 6)
        printf("Aprovado");
    else if(a >= 4)
        printf("Recuperacao");
    else
        printf("Reprovado");
}

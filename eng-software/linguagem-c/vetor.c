#include <stdio.h>

int main(){
    float nota[3], media, totalNotas;
    for(int i = 0; i < 3; i++){
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
    }

    printf("Notas atribuidas: \n");

    for(int i = 0; i < 3; i++){
        printf("Nota %d: %.2f\n", i + 1, nota[i]);
        totalNotas += nota[i];
    }

    media = totalNotas / 3;

    printf("Media de notas: %.2f", media);

    return 0;
}

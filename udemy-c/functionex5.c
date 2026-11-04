// Avaliacao de desempenho.

#include <stdio.h>

float media(float a[3]);

int main(){
    float n[5][3];
    int player = 5;

    for(int i = 0; i < player; i++){
        printf("Digite as notas: ");
        scanf("%f %f %f", &n[i][0], &n[i][1], &n[i][2]);
    }
    for(int i = 0; i < player; i++){
        printf("Jogador %d: %.2f ", i + 1, media(n[i]));
        if(media(n[i]) >= 9)
            printf("Excelente\n");
        else if(media(n[i]) >= 7)
            printf("Bom\n");
        else if(media(n[i]) >= 5)
            printf("Regular\n");
        else
            printf("Ruim\n");
    }
    return 0;
}

float media(float a[3]){
    return (a[0] + a[1] + a[2]) / 3;
}

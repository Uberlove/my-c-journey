#include <stdio.h>

char main(){
    char letra;
    printf("D¡gite uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c e depois temos a letra %c.", letra, (letra - 1), (letra + 1));
    return 0;
}
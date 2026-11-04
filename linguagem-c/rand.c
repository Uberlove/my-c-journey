#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
        srand(time(NULL));
        int n = rand() % 50 + 1;//Gera entre 1 e 50;
        printf("Eu gerei o n£mero (%d)", n); 
}
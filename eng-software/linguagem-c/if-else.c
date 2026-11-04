#include <stdio.h>
/*
int main(){
    int nota;
    printf("Adicione uma nota:\n");
    scanf("%d", &nota);
    
    if (nota >= 90)
        printf("A\n");
     else if(nota >= 80)
        printf("B\n");
     else if(nota >= 70)
        printf("C\n");
     else
        printf("Reprovado");
    return 0;
    
}*/

int main(){
   int x, y, nota;
   printf("insira nota x:\n");
   scanf("%d", &x);
   printf("insira nota y:\n");
   scanf("%d", &y);
   nota = (x + y) / 2;
   if (nota >= 90)
        printf("A\n");
     else if(nota >= 80)
        printf("B\n");
     else if(nota >= 70)
        printf("C\n");
     else
        printf("Reprovado");
    return 0;
}
/*Um sensor envia a temperatura de um ambiente como texto, por exemplo "25.7".
 Escreva um programa que leia essa temperatura como string, converta para float
 com atof e depois informe se o ambiente está frio (abaixo de 18°C),
 agradável (entre 18°C e 26°C) ou quente (acima de 26°C).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char tempS[] = "";
    printf("Digite a temperatura... ");
    scanf("%s", tempS);
    float tempF = atof(tempS);
    printf("Temperatura do ambiente: %.1f\n", tempF);
    if(tempF < 18)
        printf("Frio");
    else if(tempF < 26)
        printf("Agradavel");
    else
        printf("Quente");

    return 0;
}

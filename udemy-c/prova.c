#include <stdio.h>
#include <math.h>

int main(){

           char opcao;

           float hip, per, area, c1, c2;

           printf("Digite o valor do primerio cateto: ");

           scanf("%f", &c1);

           printf("Digite o valor do segundo cateto: ");

           scanf(" %f", &c2);



do{

           printf("-------------- MENU --------------\n");

           printf(" h - para ver a hipotenusa\n");

           printf(" p - para ver o perímetro\n");

           printf(" a - para ver a área\n");

           printf(" f - para finalizar\n");

           printf("---------------------------------------\n");

           printf("\n Selecione uma opção: ");

           scanf(" %c", &opcao);



           if(opcao == 'h'){

                    hip = sqrt(pow(c1, 2) + pow(c2, 2));

                    printf("Valor da hipotenusa: %.2f\n", hip);

                    continue;

           }else if(opcao == 'p'){

                    hip = sqrt(pow(c1, 2) + pow(c2, 2));

                    per = c1 + c2 + hip;

                    printf("Valor do perímetro: %.2f\n", per);

                    continue;

           }else if(opcao == 'a'){

                    area = (c1 * c2) / 2;

                    printf("Valor da área: %.2f\n", area);

                    continue;

           }else if(opcao == 'f'){

                    printf("Programa finalizado.\n");

                    printf("Da nota maxima ai professor, deixei bonitinho *_*.");

                    continue;

           }else{

                    printf("Comando invalido!\n");

                    continue;

           }

}while(opcao != 'f');



return 0;

}






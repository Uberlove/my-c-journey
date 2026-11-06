#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h" //--- MINHA BIBLIOTEQUINHA ---

int main(){
	int on = 0;
	int x,y,z;
	char ch;

	do{
		printf("Valor x: ");
		scanf("%d", &x);
		printf("Escolha uma operacao matematica (+ - * /): ");
		scanf(" %c", &ch);
		printf("Valor y: ");
		scanf("%d", &y);

		switch(ch){
		case '+':
			printf("%d + %d = %d\n", x, y, z = soma(x,y));
			break;
		case '-':
			printf("%d - %d = %d\n", x, y, z = subtracao(x,y));
			break;
		case '*':
			printf("%d * %d = %d\n", x, y, z = produto(x,y));
			break;
		case '/':
			printf("%d / %d = %d\n", x, y, z = divisao(x,y));
			break;
		default:
			printf("ERROR");
		}//end switch
		printf("finalizar?(1-sim, 0-nao)");
		scanf("%d", &on);
	}while(on == 0);//end do

	return 0;
}//end main

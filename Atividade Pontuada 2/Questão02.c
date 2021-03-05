#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int maior =0, quant =0, flag =1,idade = 0;
	
	while (flag!=0){
		
		printf("\t\t\tSEJA BEM VINDO! \nInforme sua idade...\n");
		scanf("%i", &idade);
		
		if (idade>maior){
			maior = idade;
		}
		if (idade >= 18 && idade <= 35){
			quant++;
		}
	
	printf("\t\tDESEJA CONTINUAR?"); printf("\n\n 1 PARA CONTINUAR"); printf("\t\t0 PARA ENCERRAR\n");
	scanf("%i", &flag);
	system("cls");
	}
	
	printf( "A maior idade eh -> %i anos\n", maior); printf( "Temos %i individuos com idade entre 18 e 35", quant);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int contfla =0, contflu = 0, contvasc = 0, contbota= 0, mais_votado =0, i, resp =0, quant_p =0, d_v_f = 0;
	
	printf("\t\t\tSEJA BEM VINDO!   \n\n\t   QUANTAS PESSOAS DESEJA ENTREVISTAR?\n"); // O USUARIO ESCOLHE A QUANTIDADE DE ENTREVISTADOS. 
	scanf("%i", &quant_p);
	system("cls");
	
	for (i =0; i<quant_p; i++){
		
		printf("Para qual time voce torce? Escolha uma das seguintes opcoes baixo:\n\n");
		printf(" 1 - PARA FLAMENGO\t\t"); printf ("2  PARA VASCO\n\n"); printf(" 3 - PARA BOTAFOGO\t\t"); printf("4- PARA FLUMINENSE\n"); 
		printf("\n\t 5 - PARA ENCERRAR O PROGRAMA\n");
		scanf("%i",&resp);
		
		switch (resp){
			
			case 1: 
				contfla++; 
				
			break;
			
			case 2:
				contvasc++; 
			
			break;
			
			case 3:
				contbota++; 
				
			break;
			
			case 4:
				contflu++;
			
			break;
			
			case 5:
				i=quant_p;
			
			break;
			
			default:
				printf("Valor invalido");
				i--;         // CASO SEJA DIGITADO UM VALOR INVÁLIDO, ESTOU DECREMENTADO EM UMA UNIDADE PARA O FOR PERCORRER A QUANTIDADE DE ENTREVISTADOS DESEJADA.
			
			
		}
		
		system("cls");
		
	}
// NESSAS CONDICIONAIS ABAIXO, VERIFIQUEI DE FORMA SIMPLES QUEM FOI O TIME VENCEDOR, OU SEJA, COM A MAIOR QUANTIDADE DE VOTOS. 	
	
	if (contfla > contflu && contfla > contvasc &&contfla > contbota){
		printf( " O time vencedor foi o: ***FLAMENGO*** com %i torcedores",contfla);
	}
	else{
		if (contvasc > contfla && contvasc > contflu && contvasc> contbota){
			printf(" O time vencedor foi o: ***VASCO*** com %i torcedores",contvasc);
		}
		else{
			if (contbota>contvasc && contbota>contflu && contbota > contfla){
				printf(" O time vencedor foi o: ***BOTAFOGO*** com %i torcedores",contbota);
			}
			else{
				if(contflu>contfla && contflu>contvasc && contflu>contbota){
					printf(" O time vencedor foi o: ***FLUMINENSE*** com %i torcedores",contflu);
				}
				else{
					printf(" Nao houve vencedores. Tivemos empate");
				}
				
			}
		}
	}
	
	d_v_f = (contvasc-contflu); 
	if (d_v_f < 0) { // Pequena manipulação para diferença de votos entre vasco e fluminense ficar sempre positivo.
		d_v_f = d_v_f * -1;
	}	
	printf(" \n\n O Flamengo tem %i torcedores", contfla); printf("\n\n A diferenca de votos entre vasco e fluminense foi de: %i ",d_v_f);
	printf("\n\n O Vasco teve %i votos", contvasc); printf( "\n\n O Fluminense teve %i votos", contflu);
	
	
	return 0;
}

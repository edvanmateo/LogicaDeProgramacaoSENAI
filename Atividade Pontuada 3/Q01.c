#include <stdio.h>
#include <stdlib.h>
int i = 0; // vari�vel global 

//  Abaixo, todos os prot�tipos das fun��es e procedimentos.
void preenche (int vet[20]);
int v_m_dez(int vet[20]);
int menor(int vet[20]);
void par_impar (int vet[20]);
int maior_numero(int vet[20], int num);

main (){ 
	
	int vetor[20], num=0;
	printf("\t\t\tSeja bem vindo!\n\n  Informe um numero inteiro\n\n");
	scanf("%i", &num);
	printf("Logo abaixo vamos preencher o vetor\n\n\n");
	
	
	preenche(vetor);
	printf("A quantidade de valores maiores que dez e: %i\n\n",v_m_dez(vetor));
	printf("O menor numero indexado no vetor e:%i\n\n", menor(vetor));
	par_impar (vetor);
	printf("\n\nA quantidade de numeros indexados no vetor maiores que o numero\n"
			"inteiro informado no inico do programa e: %i ", maior_numero(vetor,num));
		
	
}

void preenche (int vet[20]){  // fun��o p/ preencher o vetor

	
	for (i =0; i <20; i++){
		printf("Informe o valor %i\n", i +1);
		scanf("%i",&vet[i]);
	}
	system("cls");
}

int v_m_dez(int vet[20]){ // fun��o que retorna quant de valores maiores que 10. 
	
	int cont = 0; 
	for (i =0; i <20; i++){
		if (vet[i]>10) {
			cont ++;	
		}	
	}
	return cont;
}

int menor(int vet[20]){ // fun��o que retorna o menor valor indexado
	
	int min = 0;
	
	min = vet[0];
	for (i=0; i<20;i++){
		if (vet[i]<min){
			min = vet[i];
		}		
	}
	return min;
}
/* Nessa fun��o abaixo, o c�digo ficou um pouco maior para a exibi��o dos 
pares e �mpares ficarem organizadas na tela.*/
void par_impar (int vet[20]){ 
	int vetpar[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //N�o queria inicializar assim.
	int vetimpar[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // mas estva ficando com lixo de memoria.
	
	for (i=0; i<20;i++){
		if (vet[i] % 2== 0){
			vetpar[i]= vet[i];
		}else{
			vetimpar[i]=vet[i];
		}
		
	}
	printf("Os numeros pares sao\n");
	for (i=0; i<20;i++){
		if (vetpar[i]>0){
			printf("%i-",vetpar[i]);
		}
	}
	
	printf("\n\nOs numeros impares sao\n");
	for (i=0; i<20;i++){
		if (vetimpar[i]>0){
			printf("%i-",vetimpar[i]);
		}
		 
	}
}

/* Na fun��o abaixio, percorremoso vetor verificando se existe algum
n�mero maior que o informado pelo usu�rio no iniico do programa. A 
fun��o recebe esse n�mero por parametro*/

int maior_numero(int vet[20], int num){ 
	int cont =0;						
	for (i=0; i<20; i++){
		if (vet[i]> num){
			cont++;
		}
	}
	return cont;
}
	
	

	


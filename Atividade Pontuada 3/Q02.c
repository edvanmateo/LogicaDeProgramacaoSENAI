#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	char nome [20];
	int idade;
	float nota1,  nota2 , nota3 ;
}alunos; 

int i = 0; // variável global para todos os (for).

//  Abaixo, todos os protótipos dos procedimentos.

void cadastrar (alunos vetor[], int q_alu);
void consultar (alunos vetor[], int q_alu, int mat);
void imprimir (alunos vetor[], int q_alu);
void nome_media (alunos vetor[], int q_alu);
void mais_velho (alunos vetor[],int q_alu);

///////Fim dos Protótipos////////////////

main(){
 	int flag,opcao,q_alu = 0;
	int mat = 0; 
	
	printf("\t\t\tSeja bem vindo!\n\nQuer cadastar quantos alunos?\n"); // Aqui só para ter controle do tamanho do vetor.
	scanf("%i",&q_alu);
	system("cls");
	alunos vet[q_alu]; // declaração do vetor do tipo alunos
	
	printf(" Escolha uma das opcoes abaixo...\n\n");
	
	while (flag!= 6){
		
		printf("1 - Cadastrar aluno\t\t\t 2 - Consultar aluno pela matriclua\n\n");
		printf("3 - Imprimir dados de todos os alunos\t 4 -Mostrar media de todos os alunos\n\n");
		printf("5 - Mostrar dados do aluno mais velho\t 6 - Para encerrar o programa\n");
		scanf("%i",&opcao);
		system("cls");
		
		switch (opcao){
			case 1:
				cadastrar(vet,q_alu);
			break;
			
			case 2:
				printf("Informe a matricula desejada\n");
				scanf("%i", &mat);
				system("cls");
				consultar(vet,q_alu,mat);
			break;
			case 3:
				imprimir(vet,q_alu);
			break;
			case 4:
				nome_media(vet, q_alu);
			break;
			
			case 5:
				mais_velho(vet, q_alu);
			break;
			
			case 6:
				flag =6;
				printf("Programa Finalizado");
			break;
		}
		
		if (flag !=6){
		
		printf("\n6 - Para encerrar o programa\t 0 - para voltar para o menu inicial\n");
		scanf("%i",&flag);	
		system("cls");
		
		}	
	
	}
	
}
void cadastrar (alunos vetor[], int q_alu){ // Função de cadastro.
	for (i=0;i<q_alu; i++){
		printf("Informe a matricula do aluno %i\n", i +1);
		scanf("%i",& vetor[i].matricula);
		printf("Informe o nome do aluno %i\n", i +1); 
		scanf("%s", vetor[i].nome);				 
		printf("Informe a idade do aluno %i\n", i +1);
		scanf("%i",&vetor[i].idade);
		printf("Inform a primeira nota\n");
		scanf("%f",&vetor[i].nota1);
		printf("Inform a segunda nota\n");
		scanf("%f",&vetor[i].nota2);
		printf("Inform a terceira nota\n");
		scanf("%f",&vetor[i].nota3);
		system("cls");
	}
}


//////////////////// Consulta pela matrícula///////////////////////


void consultar (alunos vetor[], int q_alu, int mat){ 
	
	for (i=0;i<q_alu; i++){
		if (vetor[i].matricula == mat){
			printf("Aluno - %s\n", vetor[i].nome); 
			printf("Matricula - %i", vetor[i].matricula);
			printf("\nIdade - %i", vetor[i].idade);
			printf("\nNota 1 - %.2f \n", vetor[i].nota1);
			printf("\nNota 2 - %.2f \n", vetor[i].nota2);
			printf("\nNota 3 - %.2f \n", vetor[i].nota3);
			printf("\nmedia - %.2f \n", (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3)/3);
		}
	}
	
}
			
//////////// imprime todos os alunos///////////////////
	
void imprimir (alunos vetor[], int q_alu){ 
		
	for (i=0;i<q_alu; i++){

		printf("\nALUNO - %s\n\n", vetor[i].nome); 
		printf("Matricula - %i", vetor[i].matricula);
		printf("\nIdade - %i", vetor[i].idade);
		printf("\nNota 1 - %.2f ", vetor[i].nota1);
		printf("\nNota 2 - %.2f ", vetor[i].nota2);
		printf("\nNota 3 - %.2f ", vetor[i].nota3);
		printf("\nmedia - %.2f \n\n", (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3)/3);
		printf("______________________________");
	}
} 

////////////////imprime nome e media///////////////

void nome_media (alunos vetor[], int q_alu){ 
	for (i=0;i<q_alu; i++){
		printf("\nALUNO - %s\n\n", vetor[i].nome);
		printf("\nmedia - %.2f \n\n", (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3)/3);
		printf("________________________");
	}
}

////////////// imprime os dados do aluno mais velho.//////////////

void mais_velho(alunos vetor[], int q_alu){ 
	
	int maior = 0, velho = 0;  // variaveis locais
	
for (i=0; i <q_alu; i++){
	if( vetor[i].idade> maior){
		maior = vetor[i].idade;
		velho = i;
	}
}

	printf("\nALUNO MAIS VELHO - %s\n\n", vetor[velho].nome); 
	printf("Matricula - %i", vetor[velho].matricula);
	printf("\nIdade - %i", vetor[velho].idade);
	printf("\nNota 1 - %.2f ", vetor[velho].nota1);
	printf("\nNota 2 - %.2f ", vetor[velho].nota2);
	printf("\nNota 3 - %.2f ", vetor[velho].nota3);
	printf("\nmedia - %.2f \n\n", (vetor[velho].nota1 + vetor[i].nota2 + vetor[i].nota3)/3);
	printf("____________________________");
	
}


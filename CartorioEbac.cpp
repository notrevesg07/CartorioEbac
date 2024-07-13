#include <stdio.h>  //biblioteca de comunica��o
#include <stdlib.h> //biblioteca de Memoria
#include <locale.h> //biblioteca de Acentua��o
#include <string.h> //biblioteca de strings

int inserir(){// Fun��o inserir
	setlocale(LC_ALL, "portuguese"); // Aceitar pontua��o portugu�s 
	
	char arquivo[40]; // Criar Strings 				    
	char cpf[40]; // Criar Strings						
	char nome[40]; // Criar Strings						
	char sobrenome[40]; // Criar Strings					
	char cargo[40]; // Criar Strings						
	
	
	printf("Qual seu CPF? "); // guardar cpf do usuario
	scanf("%s", cpf);
	
	
	strcpy(arquivo, cpf); // fun��o para copiar string
	

	FILE *file; // criar Arquivo
	
	
	file = fopen(arquivo, "w"); // abrir primera vez arquivo
	fprintf(file,cpf);
	fclose(file);

	file = fopen(arquivo, "a"); // atualizar arquivo com ,
	fprintf(file, ",");
	fclose(file);

	printf("Qual seu nome? "); // guardar nome do usuario
	scanf("%s", nome);
	
	file = fopen(arquivo, "a"); // atualizar arquivo com nome
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); // atualizar arquivo com ,
	fprintf(file, ",");
	fclose(file);
	

	printf("Qual seu sobrenome? "); // guardar sobrenome do usuario
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a"); // atualizar arquivo com sobrenome
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a"); // atualizar arquivo com ,
	fprintf(file, ",");
	fclose(file);
	
	
	printf("Qual seu cargo? "); // guardar cargo do usuario
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a"); // atualizar arquivo com cargo
	fprintf(file, cargo);
	fclose(file);
	
	
}

int consultar(){ //Fun��o consuta
	
	setlocale(LC_ALL, "portuguese"); // Aceitar pontua��o portugu�s 

	char cpf[40]; // strings criadas
	char conteudo[200]; // strings criadas
	 
	printf("Digite o CPF: "); // guardar cpf do usuario
	scanf("%s", cpf);
	
	FILE *file; // abrir arquivo
	file = fopen(cpf,"r");

	if(file == NULL) // verificar se s�o dados validos
	{
		printf("Arquivo n�o  encontrado!!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL) // exibir dados solicitados
	{
		printf("\nEsse s�o os dados solicitado: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause"); // pausar sistema para Visualiza��o 
	
	
}

int excluir(){ // Fun��o Excluir
	char cpf[40]; 
	
	printf("Digite o CPF do usu�rio a ser deletado: "); // guardar cpf do usuario
	scanf("%s", cpf);

	FILE *file; // abrir arquivo
	file = fopen(cpf, "r");
	fclose(file);
	
	if (file == NULL) // verificar se s�o dados validos
	{
		printf("\nCPF n�o encontrado!\n\n"); // dado inexistente
		system("pause");
	}
	else
	{
		if (remove(cpf) == NULL) // remover dado
		{ 
			printf("\nCPF deletado com sucesso!\n\n "); // Informa que foi apagado
			system("pause");
		}
	}
}


int main() // Fun��o Principal
{
		
	setlocale(LC_ALL, "portuguese"); // Aceitar pontua��o portugu�s 
	
	int opcao=0; // criar variavel inteiro
	int loco=1; // criar variavel inteiro
	
	for(loco=1;loco=1;){ // la�o de repeti��o
		system("cls"); // limpar console
		
		
		printf("### Cart�rio Everton ### \n"); // Menu para Usuario			
		printf("Escolha a op��o desejada do menu: \n\n");	 
		printf("\t1 - registar nome\n");				  
		printf("\t2 - consultar nome \n");				 	
		printf("\t3 - deletar nome  \n");
		printf("\t4 - Sair Do Sistema  \n\n");					
		printf("Op��o: "); // Menu para Usuario									
		
		
		scanf("%d", &opcao); // guardar Op��o escolida do usuario
		system("cls"); // limpar console
		
		 
		switch(opcao){ // Verifica��es das op��es do menu
			case 1:
			inserir(); // chanar Fun��o inserir
			break;
			
			case 2:
			consultar(); // chanar Fun��o consultar
			break;
			
			case 3:
			excluir(); // chanar Fun��o excluir
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema flw\n"); // Sair Do Sistema 
			return 0;
			break;
					
			default:
			printf("Voc� escolheu op��o Que n�o existe \n"); // informar que op��es nao existe
			system("pause");
			break;
		}
		printf(" Software livre SQN"); // print Aleat�rio   
	}
	
}

#include <stdio.h>  //biblioteca de comunica��o
#include <stdlib.h> //biblioteca de Memoria
#include <locale.h> //biblioteca de Acentua��o
#include <string.h> //biblioteca de strings
//Fun��o inserir
int inserir(){
	//Aceitar pontua��o portugu�s 
	setlocale(LC_ALL, "portuguese");
	// strings criadas
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	// guardar cpf
	printf("Qual seu CPF? ");
	scanf("%s", cpf);
	
	//copiar string
	strcpy(arquivo, cpf);
	
	//criar bloco de nota
	FILE *file;
	
	//abrir atualizar e fechar arquivo
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	//guardar nome
	printf("Qual seu nome? ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	//guardar sobrenome
	printf("Qual seu sobrenome? ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	//guardar cargo
	printf("Qual seu cargo? ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	
}
//Fun��o consutar
int consultar(){
	//Aceitar pontua��o portugu�s 
	setlocale(LC_ALL, "portuguese");
	// strings criadas
	char cpf[40];
	char conteudo[200];
	//solicitar dados usuario 
	printf("Digite o CPF: ");
	scanf("%s", cpf);
	//abrir arquivo
	FILE *file;
	file = fopen(cpf,"r");
	// verificar dados validos
	if(file == NULL)
	{
		printf("Arquivo na encontrado!!\n");
	}
	//exibir dados solicitados
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEsse s�o os dados solicitado: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
	
}
//Fun��o Excluir
int excluir(){
	char cpf[40];
	
	//solicitar dados usuario 
	printf("Digite o CPF que deseja excluir: ");
	scanf("%s", cpf);
	
	// revover arquivo
	remove(cpf);
	
	// abrir e ler arquivo
	FILE *file;
	file = fopen(cpf,"r");
	
	//verifificar dados do usuario
	if(file == NULL)
	{
		printf("CPF n�o existe mais \n");
		system("pause");	
	}
	
}

//Fun��o Principal
int main()
{
	//Aceitar pontua��o portugu�s 
	setlocale(LC_ALL, "portuguese"); 
	// Definiu vari�vel 
	int opcao=0; 
	int loco=1;
	//la�o de repeti��o
	for(loco=1;loco=1;){
		system("cls");// limpar console
		//menu
		printf("### Cart�rio Everton ### \n");
		printf("Escolha a op��o desejada do menu: \n\n");
		printf("\t1 - registar nome\n");
		printf("\t2 - consultar nome \n");
		printf("\t3 - deletar nome  \n\n");
		printf("Op��o: ");
		
		//Informa��o do usu�rio 
		scanf("%d", &opcao);
		system("cls");// limpar console
		
		// Verifica��es das op��es do menu 
		switch(opcao){
			case 1:
			inserir();
			break;
			
			case 2:
			consultar();
			break;
			
			case 3:
			excluir();
			break;
					
			default:
			printf("Voc� escolheu op��o Que n�o existe \n");
			system("pause");
			break;
		}
		printf(" Software livre SQN");
	}
	
}

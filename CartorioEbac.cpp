#include <stdio.h>  //biblioteca de comunicação
#include <stdlib.h> //biblioteca de Memoria
#include <locale.h> //biblioteca de Acentuação

int main()
{
	//Aceitar pontuação português 
	setlocale(LC_ALL, "portuguese"); 
	// Definiu variável 
	int opcao=0; 
	int loco=1;
	//laço de repetiçõo
	for(loco=1;loco=1;){
		system("cls");// limpar console
		//menu
		printf("### Cartório Everton ### \n");
		printf("Escolha a opção desejada do menu: \n\n");
		printf("\t1 - registar nome\n");
		printf("\t2 - consultar nome \n");
		printf("\t3 - deletar nome  \n\n");
		printf("Opção: ");
		
		//Informação do usuário 
		scanf("%d", &opcao);
		system("cls");// limpar console
		
		// Verificações das opções do menu 
		if(opcao==1){
			printf("Você escolheu inserir registros\n");
			system("pause");
		}
		if(opcao==2){
			printf("Você escolheu consultar os registros\n");
			system("pause");
		}
		if(opcao==3){
			printf("Você escolheu excluir registros\n");
			system("pause");
		}
		if(opcao>=4 || opcao<=0 ){
			printf("Você escolheu opção Que não existe \n");
			system("pause");
		}
		printf(" Software livre SQN");
	}
	
}

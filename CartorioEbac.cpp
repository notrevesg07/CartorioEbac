#include <stdio.h>  //biblioteca de comunicação
#include <stdlib.h> //biblioteca de Memoria
#include <locale.h> //biblioteca de Acentuação
#include <string.h> //biblioteca de strings
//Função inserir
int inserir(){
	printf("Você escolheu inserir registros\n");
	system("pause");	
}
//Função consutar
int consultar(){
	printf("Você escolheu consultar os registros\n");
	system("pause");	
}
//Função Excluir
int excluir(){
	printf("Você escolheu excluir registros\n");
	system("pause");
}

//Função Principal
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
			printf("Você escolheu opção Que não existe \n");
			system("pause");
			break;
		}
		printf(" Software livre SQN");
	}
	
}

#include <stdio.h>  //biblioteca de comunica��o
#include <stdlib.h> //biblioteca de Memoria
#include <locale.h> //biblioteca de Acentua��o

int main()
{
	//Aceitar pontua��o portugu�s 
	setlocale(LC_ALL, "portuguese"); 
	// Definiu vari�vel 
	int opcao=0; 
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
	if(opcao==1){
		printf("Voc� escolheu inserir registros\n");
	}
	if(opcao==2){
		printf("Voc� escolheu consultar os registros\n");
	}
	if(opcao==3){
		printf("Voc� escolheu excluir registros\n");
	}
	if(opcao>=4 || opcao<=0 ){
		printf("Voc� escolheu op��o Que n�o existe \n");
	}
	
	
	printf(" Software livre SQN");
	
}

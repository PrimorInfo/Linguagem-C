#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* prof. Jos� de assis
Curso B�sico de Linguagem C
Aula 8 - Estrutura de Repeti��o */

int numero, resposta;
int contador=0;

int main(int argc, char *argv[])
{
do{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	printf("Tabuada\n\n");	
	printf("Digite o n�mero da tabuada: ");
	scanf("%d", &numero);
	// o la�o abaixo gera um la�o finito
	for(contador=0; contador<=10; contador++)
	{
		printf("%d x %d = %d\n", numero, contador, numero*contador);
	}
	printf("\n1 - Novo C�lculo\n");
	printf("2 - Sair\n");
	printf("\nDigite op��o desejada: ");
	scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");
	return 0;
}




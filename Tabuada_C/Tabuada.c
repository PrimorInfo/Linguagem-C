#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* prof. José de assis
Curso Básico de Linguagem C
Aula 8 - Estrutura de Repetição */

int numero, resposta;
int contador=0;

int main(int argc, char *argv[])
{
do{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	printf("Tabuada\n\n");	
	printf("Digite o número da tabuada: ");
	scanf("%d", &numero);
	// o laço abaixo gera um laço finito
	for(contador=0; contador<=10; contador++)
	{
		printf("%d x %d = %d\n", numero, contador, numero*contador);
	}
	printf("\n1 - Novo Cálculo\n");
	printf("2 - Sair\n");
	printf("\nDigite opção desejada: ");
	scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");
	return 0;
}




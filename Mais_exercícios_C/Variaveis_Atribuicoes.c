#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados."

/* Aula 5 */

int main(int argc, char *argv[]) 
{
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:");
	scanf("%d", &idade);
	
	printf("Digite altura:");
	scanf("%f", &altura);
	
	printf("Digite o nome:");
	scanf("%s", &nome);
	
	printf("dados informados:\n");
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Nome: %s\n", nome);
	
	return 0;
}

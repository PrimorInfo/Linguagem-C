#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[tam];
	int i;
	
	for(i=0; i<tam; i++){
	printf("Insira os dados %d:\n", i+1);
	puts("Nome: ");
	scanf("%50[^\n]s", &lista[i].nome);//^\n = enquanto usuário não digitar \n = espaço
	fflush(stdin); // fflush -> para não bugar o teclado
	
	puts("Idade: ");
	scanf("%d", &lista[i].idade);
	fflush(stdin);
	
	puts("Peso: ");
	scanf("%f", &lista[i].peso);
	fflush(stdin);
	}
	system("cls");
	
	puts("Seus dados:\n");
	for(i=0; i<tam; i++){
		printf("--------- Pessoa %d ------------\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %.2f\n", lista[i].peso);
	}
	printf("-----------------------------------\n");
	system("pause");
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Curso B�sico de lInguagem C
Aula7 - Parte 2 - Fun��es com passagem de p��metros e retorno
Calculadora*/

float somar (float num1, float num2){
	return num1 + num2;
}
float subtrair (float num1, float num2){
	return num1 - num2;
}
float multiplicar (float num1, float num2){
	return num1 * num2;
}
float dividir (float num1, float num2 ){
	return num1 / num2;
}
float porcentagem (float num1, float num2){
	return (num1 * num2)/100;
}

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	float num1, num2, resultado;
	printf("Calculadora\n");
	printf("------------------------------------------------\n");
	printf("Digite o valor do primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o valor do segundo n�mero: ");
	scanf("%f", &num2);
	printf("------------------------------------------------\n");
	printf("1. Somar\n");
	printf("2. Subtrair\n");
	printf("3. Multiplicar\n");
	printf("4. Dividir\n");
	printf("5. Porcentagem\n");
	printf("\n");
	printf("Digite a op��o desejada: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			resultado = somar(num1, num2);
			break;
		case 2:
			resultado = subtrair(num1, num2);
			break;
		case 3:
			resultado = multiplicar(num1, num2);
			break;
		case 4:
			if(num2 == 0)
			{
				printf("N�o � poss�vel dividir por 0\n");
			}
			else
			{
				resultado = dividir(num1, num2);
			}
			break;
		case 5:
			resultado = porcentagem(num1, num2);
			break;
		default:
			printf("Op��o inv�lida\n");
			break;
	}
	printf("------------------------------------------------\n");
	printf("Resultado: %.0f\n", resultado);
	printf("\n");
	system("pause");
	return 0;
}

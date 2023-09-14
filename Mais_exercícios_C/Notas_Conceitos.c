#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FÓRMULA -> Média Ponderada = (nota1*peso1) + (nota2*peso2) + (nota3*peso3)/peso1 + peso2 + peso3

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, medPond;
	
	printf("Insira nota do Trabalho: \n");
	scanf("%f", &nota1);
	printf("Insira nota da avaliação semestral: \n");
	scanf("%f", &nota2);
	printf("Insira nota do exame final: \n");
	scanf("%f", &nota3);
	
	medPond = (nota1*2 + nota2*3 + nota3*5)/10; // esse 10 corresponde a pesos: 2 + 3 + 5
	printf("Média: %.2f \n ", medPond);
	
	//8,0 - 10,0 = A
	if(medPond >= 8  && medPond <= 10){
			printf("Conceito: A \n ");
	}
	//7,0 -  8,0 = B
		if(medPond >= 7  && medPond < 8){
			printf("\nConceito: B \n ");
	}
	//6,0 -  7,0 = C
	if(medPond >= 6  && medPond < 7){
			printf("\nConceito: C \n ");
	}
	//5,0 -  6,0 = D
	if(medPond >= 5  && medPond < 6){
			printf("\nConceito: D \n ");
	}
	//0,0 -  5,0 = E
	if(medPond >= 0  && medPond < 5){
			printf("\nConceito: E \n");
	}
	
	system("pause");
	return 0;
}














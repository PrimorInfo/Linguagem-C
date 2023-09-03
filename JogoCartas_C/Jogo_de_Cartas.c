#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Curso báscio de Linguagem C
	Aula 12 - Array - Jogo de Cartas */

int main(int argc, char *argv[]) 
{
		srand(time(NULL));
		char faces[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
		char nipes[4][8] = {"espadas", "paus", "copas", "ouros"};
		printf("%c de %s\n", faces[rand()%13], nipes[rand()%4]); // onde a máquina sorteará 'faces' e 'nipes'
		
		//printf("%s\n", nipes[3]);
		//printf("%c\n", faces[rand()%13]);// % 13 quer dizer que ele vai fazer um sorteio entre 0 e 12
	return 0;
}




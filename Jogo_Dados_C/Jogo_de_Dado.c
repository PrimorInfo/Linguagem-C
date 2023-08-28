#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Curso básico Linguagem C - Aula 9 - Jogo do dado */

int main(int argc, char *argv[]) 
{
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face: %d\n", rand()%6+1);
	system("pause");
	return 0;
}

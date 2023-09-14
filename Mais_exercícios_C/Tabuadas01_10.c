#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, res;
		
	for(i=0; i<=10; i++){
	 for(j=0; j<=10; j++){
		res = i * j;
		printf("%d x %d = %d \n", i, j, res);
		}
	printf("\n");
	}	
	
	
	system("pause");
	return 0;
}

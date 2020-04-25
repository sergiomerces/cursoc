//Imprimir o n termo da sequência de Fibonacci com laço for

#include <stdio.h>
#include <stdlib.h>

int main(void){

	unsigned int termoA = 1, termoB = 0, soma = 0, cont = 0, termoN = 0;

	system("clear");
	printf("Digite o n termo de Fibonacci: ");
	scanf("%u", &termoN);

	for(cont; cont < termoN; cont++)
	{
		soma = termoA + termoB;
		printf("%u\t", soma);
		termoB = termoA;
		termoA = soma;
	}

	getchar();
	return 0;
}

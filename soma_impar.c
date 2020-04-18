//Imprimir a soma nos n números ímpares do intervalo

#include <stdio.h>
#include <stdlib.h>

int main(void){

	unsigned int num = 0, soma = 1, i = 0;

	system("clear");
	printf("\nInforme um número para a soma dos ímpares: \a");
	scanf("%u",&num);

	for(i; i <= num; i++)
	{
		(num % 2 != 0) ? (soma += num) : (soma += 0);
		num--;
	}

	printf("\nA soma dos ímpares é: %u\a\n\n", soma);

	getchar();
	return 0;
}

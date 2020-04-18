//Somar de os números naturais até o valor definido pelo usuário

#include <stdio.h>
#include <stdlib.h>

int main(void){

int num = 0, count = 0, soma = 0;

system("clear");
printf("\nInforme um número para a soma: ");
scanf("%d",&num);

for(count; count <= num; count++)
	soma += count;

printf("\nA soma dos números de 0 a %d é: %d\n\n", num, soma);

getchar();
return 0;
}

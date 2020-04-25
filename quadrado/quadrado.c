//Pedir um número ao usuário e imprimir o quadrado

#include <stdio.h>
#include <stdlib.h>

int main(void){

unsigned int base = 1;

system("clear");
printf("\nInforme um número: ");
scanf("%u",&base);
printf("\nO quadradado de %u é %u\n",base, base * base);
	
getchar();
return 0;
}

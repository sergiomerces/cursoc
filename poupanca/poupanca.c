//Cálculo do rendimento anual da Caderneta de Poupança
//Considerar Selic = 3,75% aa e TR = 0,000

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Linha();
void Titulo();

#define SELIC 3.75
#define TR 0.000

int main()
{    
    float capital = 0.00, taxa = 0.00, juros = 0.00, montante = 0.00;
    int prazo = 0;
    char repetir = 'r';

    setlocale(LC_ALL, "portuguese");

    while(repetir = 'r')
    {
        Titulo();
    printf("\n\nValor da aplicação: R$ ");
    scanf(" %f", &capital);
    printf("\nPrazo a ser aplicado: ");
    scanf(" %d", &prazo);
    
    if(SELIC >= 8.5)
        taxa = (SELIC / 100) + 0.5;

    else if(SELIC < 8.5)
        taxa = (SELIC / 100) * 0.7;

    juros = capital * taxa * prazo;
    montante = capital + juros;
    
    Titulo();
    printf("\n\nAplicação: R$ %.2f\nAno(s): %d\nRendimentos: R$ %.2f\nMontante: R$ %.2f\n\n", capital, prazo, juros, montante);

    printf("\n\nPara repetir pressione 'r' ou qualquer outra tecla para sair: ");
    scanf(" %c", &repetir);
    }
    
    return 0;
}

void Linha()
{
    int i = 0;

    for(i; i < 79; i++)
        printf("=");
}

void Titulo()
{
    system("clear");
    Linha();
    puts("\n\n\t\t\tRENDIMENTO ANUAL DA CADERNETA DE POUPANÇA\n");
    Linha();
    printf("\n\n[SELIC = %.2f aa  |   TR = %f]\n", SELIC, TR);
}
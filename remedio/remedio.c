//Apontar remédio adequado conform lista predeterminada

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Linha();
void Titulo();

int main()
{
    char codDoenca;
    char repetir = 'r';

    setlocale(LC_ALL, "portuguese");
    while (repetir == 'r')
    {
        system("clear");
        Titulo();
        puts("\n\n[0: Cefaleia | 1: Diarreia | 2: Febre | 3: Gripe]\n");
        printf("\nDigite o código da doença: ");
        scanf(" %c", &codDoenca);
        
        system("clear");
        Titulo();
        switch(codDoenca)
        {
            case '0':
            {
                puts("\n\nDoença: Diarreia\n\nSintomas: Evacuação de fezes aquosa, evacuação quase involuntária.\n\nMedicação: Paracetamol.");
                break;
            }

            case '1':
            {
                puts("\n\nDoença: Diarreia\n\nSintomas: Evacuação de fezes aquosa, evacuação quase involuntária.\n\nMedicação: Soro caseiro (solução isotônica composta por água, sal e açúcar.");
                break;
            }

            case '2':
            {
                puts("\n\nDoença: Febre\n\nSintomas: Temperatura corporal acima de 36,6°C, podendo apresentar transpiração excessiva, ressecamento das mucosas, calafrio e convulsão.\n\nMedicação: Dipirona.");
                break;
            }

            case '3':
            {
                puts("\n\nDoença: Gripe\n\nSintomas: Coriza com secreção purulenta, tosse, pode ocorrer vermelhidão e ardência dos olhos, dores musculares, exaustão, sonolência.\n\nMedicação: Hidratação constante, inalação com soro fisiológico, vitamina C, dipirona se houver febre, boa alimentação e repouso.");
                break;
            }

            default:
            {
                puts("\n\nEscolha uma opção válida de 0 ~ 3");
                scanf(" %c", &codDoenca);
                continue;
            }
        }

        printf("\n\nPara repetir pressione 'r' ou qualquer outra tecla para sair: ");
        scanf(" %c", &repetir);
    }
    
    system("clear");    
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
    Linha();
    puts("\n\n\t\t\tSISTEMA DE MEDICAÇÃO\n");
    Linha();
}
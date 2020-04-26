//Boletim escolar recebe notas bimestrais, calcular média e aprovar ou reprovar o aluno

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Linha();
void Titulo();

float nota[4], media = 0;

int main()
{    
    int i = 0, j = 0;

    for(i; i < 4; i++)
        nota[i] = 0.00;

    setlocale(LC_ALL, "portuguese");

    Titulo();    
    printf("\n\nDigite as notas dos quatro bimestres:\n");
    
    for(j; j < 4; j++)
        scanf(" %f", &nota[j]);
    
    media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;

    Titulo(); 

    if(media >= 6)
        puts("Aluno aprovado\a\n\n");
    else
        puts("Aluno reprovado\a\n\n");

    getchar();
    return 0;
}

void Linha()
{
    int i = 0;

    for(i; i <= 79; i++)
        printf("=");
}

void Titulo()
{
    system("clear");
    Linha();
    puts("\n\n\t\t\t\tBOLETIM ESCOLAR\n");    
    Linha();
    printf("\n\nNota 1° Bim: %.2f | Nota 2° Bim: %.2f | Nota 3° Bim: %.2f | Nota 4° Bim: %.2f\n\nMédia: %.2f\n", nota[0], nota[1], nota[2], nota[3], media);
}
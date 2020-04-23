//Calcular o IMC de uma pessoa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void Linha();
void Titulo();
void Imc();

int main(){

  char repetir = 'r';

  setlocale(LC_ALL, "portuguese");

  while(repetir == 'r')
  {  
    Titulo();
    Imc();
    puts("\n\n\n\nPressione r para calcular novamente ou qualquer tecla para sair.");
    scanf(" %c", &repetir);
  }

  return 0;
}

//Gerador de linha horizontal
void Linha(){

    int i = 0;

    for(i = 0; i < 78; i++)
      putchar('=');
}

//Título do programa
void Titulo(){

    system("clear");    
    Linha();
    puts("\n\n\tCÁLCULO DO ÍNDICE DE MASSA CORPORAL - IMC QUETELET 1835\n");
    Linha();
}

//Cálculo do IMC
void Imc(){

    float altura = 0, massa= 0, imc = 0;
    char sexo;
    char genero[10];
    char classificacao[38];

    printf("\n\nMassa em kilogramas: ");
    scanf(" %f", &massa);
    printf("\nAltura em metros: ");
    scanf(" %f", &altura);
    printf("\nSexo |M: Masculino | F: Feminino| ");
    scanf(" %c", &sexo);

    imc = massa / (altura * altura);

    switch(sexo)
    {
      case 'm':
      {
        system("clear");
        Titulo();
        strcpy(genero, "MASCULINO");

        if(imc < 20.7)
          strcpy(classificacao, "Você está abaixo do peso!");

        if(imc < 26.4)
          strcpy(classificacao, "Você está com o peso ideal!");

        if(imc < 27.8)
          strcpy(classificacao, "Você está um pouco acima do peso!");

        if(imc < 31.1)
          strcpy(classificacao, "Você está acima do peso!");

        if(imc > 31.1)
          strcpy(classificacao, "Você está em estado de OBESIDADE!");

        printf("\n\nMassa: %5.2f kg | Altura: %3.2f m | Sexo: %s", massa, altura, genero);
        printf("\n\nSeu IMC é: %3.1f.\n%s", imc, classificacao);
        break;
      }

      case 'f':
      {
        system("clear");
        Titulo();
        strcpy(genero, "FEMININO");
        if(imc < 19.1)
          strcpy(classificacao, "Você está abaixo do peso!");

        if(imc < 28.8)
          strcpy(classificacao, "Você está com o peso ideal!");

        if(imc < 27.3)
          strcpy(classificacao, "Você está um pouco acima do peso!");

        if(imc < 32.3)
          strcpy(classificacao, "Você está acima do peso!");

        if(imc > 32.4)
          strcpy(classificacao, "Você está em estado de OBESIDADE!");

        printf("\n\nMassa: %5.2f kg | Altura: %3.2f m | Sexo: %s", massa, altura, genero);
        printf("\n\nSeu IMC é: %3.1f.\n%s", imc, classificacao);
        break;
      }
    }
}

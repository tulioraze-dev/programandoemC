/* Analista: Tulio Rabelo Azevedo
Data: 02/12/2021
Segunda Avaliação. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    //variaveis utilizadas
    float VetorX[5];
    float VetorW[5];
    float net = 0;
    float NumeroRandomico;
    
    //gera numero randomico
    srand(time(0));

    //preenche Vetor X com numero randomico
    printf("Vetor X preenchido:\n");
    for (int i = 0; i < 5; i++)
    {
        NumeroRandomico = (rand() % 11) / 10.0;
        VetorX[i] = NumeroRandomico;
        printf("VetorX [%d] = %.1f\n", i, NumeroRandomico);
    }
    //preenche Vetor W com numero randomico
    printf("Vetor W preenchido\n");
    for (int i = 0; i < 5; i++)
    {
        NumeroRandomico = (rand() % 11) / 10.0;
        VetorW[i] = NumeroRandomico;
        printf("VetorW [%d] = %.1f\n", i, NumeroRandomico);
    }
    //Faz o cálculo da variavel Net
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            net += VetorX[i] * VetorW[j];
            //printf("[%d] * [%d] = %.2f\n", i, j , resultado);
        }
    }
    printf("\n");
    //função de trazer o resultado da Tangente Hiperbolica de Net
    float Y = tanh(net);
    //printa o resultado
    printf("Resultado da Tangente hiperbolica da variavel Net: %.2lf", Y);
}
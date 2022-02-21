/* Programador : Tulio Rabelo Azevedo
Data: 02/12/2021
hora: 15:30 */

#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    int vetor1[25];
    int vetor2[25];
    int VetorResultado[25];

    srand(time(0));

    int NumeroRandomico;

    printf("Vetor 1\n");
    //preenche com numeros aleatórios o Vetor 1
    for (int i = 0; i < 25; i++)
    {
        NumeroRandomico = rand() % 100;
        vetor1[i] = NumeroRandomico;
        printf("[%d] = %d\n", i, vetor1[i]);
    }
    printf("Vetor 2\n");
    //preenche com números aleatórios o Vetor 2
    for (int i = 0; i < 25; i++)
    {
        NumeroRandomico = rand() % 100;
        vetor2[i] = NumeroRandomico;
        printf("[%d] = %d\n", i, vetor2[i]);
    }
    printf("Vetor Resultado\n");
    //Soma os valores que estão na posição dos vetores e armazena o resultado no Vetor Resultado
    for (int i = 0; i < 25; i++)
    {
        VetorResultado[i] = vetor1[i] + vetor2[i];
        printf("[%d] = %d\n", i, VetorResultado[i]);
    }
}
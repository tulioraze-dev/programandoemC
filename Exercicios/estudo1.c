/* Programador: Tulio Rabelo Azevedo
Data: 02/12/2021 hora: 15:34 hrs
lista 1 primeira questão */

#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

/*  Solicitar a idade de várias pessoas e imprimir: Total de pessoas
com menos de 21 anos. Total de pessoas com mais de 50 anos. O
programa termina quando idade for =-99*/

int main()
{
    SetConsoleOutputCP(65001);
    //variaveis uzadas para resolver a questao
    int idade;
    int Contador21 = 0;
    int Contador50 = 0;
    int QtdPessoas = 0;
    
    printf("\n");
    printf("**Descubra a quantidade de pessoas maiores de 21 e menores de 50 \n**");
    printf("!! Após digitar todas as idades digite -99 para exibir o resultado\n");
    //loop condicionado que separa as pessoas por idades
    while (idade != -99)
    {

        printf("Digite uma idade: \n");
        scanf("%d", &idade);
    
        if (idade <= 21)
        {
            Contador21++;
        }
        if (idade >= 50)
        {
            Contador50++;
        }

        QtdPessoas++;
    }
    //printa o resultado da condição
    printf("Quantidade de pessaos digitadas: %d\n", QtdPessoas);
    printf("A quantidade de pessoas maiores de 50 são: %d\n", Contador50);
    printf("A quantidade de pessoas menores de 21 são: %d\n", Contador21);
}
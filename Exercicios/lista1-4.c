/*Programdor: Tulio Rabelo Azevedo
Data: 03-12-2021 hora: 15-14 hrs
Lista 1 - Atividade 4 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) valor unitárA quantidade vendida, io e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados). */

int main()
{
    SetConsoleOutputCP(65001);

    int valordosObjetos[10];
    int quantidadeVendida[10];
    int valorTotal[10];
    int totalVendido = 0;
    float comissao = 0;
    float taxadeComissao = 0.05;
    int objetoMaisVendido = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor do %d objeto: ", i + 1);
        scanf("%d", &valordosObjetos[i]);

        printf("Digite a quantidade vendida do %d objeto: ", i + 1);
        scanf("%d", &quantidadeVendida[i]);

        valorTotal[i] = quantidadeVendida[i] * valordosObjetos[i];
        printf("O valor Total Vendido Objeto %d foi de : %d\n", i + 1, valorTotal[i]);

        totalVendido = totalVendido + valorTotal[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(quantidadeVendida[i] < quantidadeVendida[j]){
                objetoMaisVendido = j;
            }
        }
    }
    printf("\n");
    printf("A quantidade de Objetos vendidos foi de : %d\n", totalVendido);

    printf("\n");

    comissao = totalVendido * taxadeComissao;
    printf("O valor da comissão será de : %.2f\n", comissao);
    printf("O objeto mais vendido foi : %d\n", objetoMaisVendido+1);
    printf("O valor do objeto mais vendido é de : %d", valordosObjetos[objetoMaisVendido]);
}
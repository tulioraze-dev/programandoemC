#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int vetor[10];
    int VetorQuadrada[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
    }
    printf("Vetor\n");
    for(int i = 0; i < 10; i++){
        printf("[%d] = %d ", i, vetor[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("VetorQuadrado[%d] = %d ", i, vetor[i] * vetor[i]);
    }
}

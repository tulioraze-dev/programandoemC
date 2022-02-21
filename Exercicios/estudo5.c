#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//06) Solicitar um nome e escrevê-lo de trás pra frente.

int main()
{   SetConsoleOutputCP(65001);

    char nome[10];
    int x;
    int t;

    printf("Digite um nome, e veja ele de traz pra frente:");
    gets(nome);
    t = strlen(nome);
    for (x = t - 1; x >= 0; x--)
    printf("%c", nome[x]);

}
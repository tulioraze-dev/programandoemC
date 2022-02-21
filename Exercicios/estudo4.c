#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//05) Solicitar um nome e escrevê-lo.

int main(){

    char nome[10];
    printf("Digite um nome:\n");
    gets(nome);
    printf("Nome capturado: %s", nome);

}
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

/*02) Solicitar um número entre 1 e 4. Se a pessoas digitar um número
diferente, mostrar a mensagem "entrada inválida" e solicitar o
número novamente. Se digitar correto mostrar o número digitado*/

int main()
{

    int numerodigitado;

    do
    {
        printf("Digite um numero entre 1 e 4:\n");
        scanf("%d", &numerodigitado);
        printf("Numero digitado: %d\n", numerodigitado);

        if (numerodigitado > 4)
        {
            printf("Numero invalido\n");
        }

    } while (numerodigitado > 4);

    system("pause");
}


#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int VetorN[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int aux = 0;

    /*for (int i = 0; i < 20; i++)
    {
        //printf("VetorN[%d] = %d\n", i, VetorN[i]);
    } */
    for (int i = 0; i < 10; i++)
    {
        aux = VetorN[19 - i];
        VetorN[19 - i] = VetorN[i];
        VetorN[i] = aux;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("VetorN[%d] = %d\n", i, VetorN[i]);
    }
}
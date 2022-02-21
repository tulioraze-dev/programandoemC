#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float vetor[2];
    
    float numeroRandomico;

    srand(time(0));

    for (int i = 0; i < 2 ; i++)
    {   
        numeroRandomico = (rand() % 11) / 10.0;        
        vetor[i] = numeroRandomico;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%.1f\n", vetor[i]);
    }

    /*float matriz1[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        numeroRandomico = (rand() % 11) / 10.0;
        matriz1[i] = numeroRandomico;
        matriz1[j] = numeroRandomico; 
        }
    }*/
}

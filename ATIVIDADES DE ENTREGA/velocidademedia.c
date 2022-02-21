#include <stdio.h>

void velocidadecarro() {

    int tempomin = 30;
    int distancia = 10;

 
    double temposec;
    
    temposec = tempomin * 60;

    double velocidademedia;

    velocidademedia = distancia / temposec;

    printf("\nSe um veiculo percorre 10m em 30min sua velocidade media e de  : %f", velocidademedia); 
}
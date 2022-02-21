#include <stdio.h>
#include <stdlib.h>


//variaveis globais

int numero1;
int numero2;
int numero3;
int maior;

int comparação(){
    
    if(numero1 > numero2 ){
        (maior = numero1);
    } else {
        (maior = numero2);
    }
    if(maior < numero3) {
        (maior = numero3);
    }
}

int main() {

    printf("Digite 3 Numeros e Descubra qual e o maior :\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    comparação();

    printf("O numero mairo e : %d", maior);
}
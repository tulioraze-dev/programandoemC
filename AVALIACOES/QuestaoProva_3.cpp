#include <stdio.h>
/* Dev Gustavo Dias do Nascimento
*  Data 20/11/2021
   Resumo: Esse programa tem por objetivo fazer um fatorial
		   Multiplicacao Sucessiva somente dos IMPARES
*/

int main() {
	//-- Definicao de Variaveis 
	int fat = 1; //-- Atribuindo valor como elemento neutro 
	int valor; //-- Numero Inteiro para Fatorial  
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &valor);

	for (int i = 1; i <= valor; i++) {
		if (i % 2 != 0)
			fat = fat * i;
	}

	printf("\nFatorial calculado: %d", fat);
	return 0;
}
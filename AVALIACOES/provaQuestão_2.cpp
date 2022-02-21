#include <stdio.h>
/* Dev Gustavo Dias do Nascimento
   Data 24/11/2021
   Resumo: Fazer  um laço de repeticao até 50 com FOR e somar os pares e decrementar de 2 (i-2) os imapares e somar

*/
int main()
{
	// -- Definição de Variaveis
	int somaPar = 0 //--  Atribuindo 0 pois e elemento neutro
		int somaImpar = 0; //--  Atribuindo 0 pois e elemento neutro

	for (int i = 1; i <= 50; i++) {

		if ((i % 2) == 0) {
			somaPar = somaPar + i;
		}
		else {
			somaImpar = somaImpar + (i - 2);
		}
	}
	printf("\n Somatorio do PAR :%d", somaPar);
	printf("\n Somatorio do IMPAR :%d", somaImpar);

}
#include <stdio.h>
/* Dev: Gustavo Dias do Nascimento
*  Data: 24/11/2021
*  Resumo Calculo da Coroa Circular concatenada
*/

int main(void)
{
	//--Definição das variáveis
	float area1;
	float area2;

	float pi = 3.14; //-- Constante  
	float raioA = 3; // Unidade convertidas em CM
	float raioB = 5;
	float raioC = 7;
	float raioD = 9;
	//--Entrada de dados
	printf("Calculo das areas");
	area1 = pi * ((raioB * raioB) - (raioA * raioA));
	area2 = pi * ((raioD * raioD) - (raioC * raioC));

	//-- Apresentação do resultado
	printf("AREA 1 = %.2f m2 \n", area1);
	printf("AREA 2 = %.2f m2 \n", area2);
	printf("A SOMA DAS AREAS OSS = %.2f m2 \n", (area1 + area2));


	return 0;
}
#include <stdio.h>
/*
   Dev: Gustavo Dias do Nascimento
   Data: 24/11/2021
   Resumo: Entrada de 3 valores inteiros e informar qual deles é o maior e menor
		   Temos:   a1 b1 c1
					2  2  2
					1  2  3
					3  2  1
					2  2  1
					1  2  2
					2  1  2
					1  3  2
					2  3  1
					2  1  3
					1  1  2
					3  1  2

*/
int main()
{
	// -- Definiao de Variaveis 
	int a1;
	int b1;
	int c1;
	//-- Inicio do Programa 
	printf("Insira o primeiro valor:");
	scanf("%d", &a1);
	printf("Insira o segundo valor:");
	scanf("%d", &b1);
	printf("Insira o terceiro valor:");
	scanf("%d", &c1);

	if ((a1 == b1) && (b1 == c1)) { // 2 2 2
		printf(" valores tudo igual !");
	}
	else if ((a1 > b1) && (b1 > c1)) { // 3 2 1
		printf("\n Maior Numero é :%d", a1);
		printf("\n Menor Numero é :%d", c1);

	}
	else if ((a1 == b1) && (b1 > c1)) { // 2 2 1
		printf("\n Maior Numero é :%d", a1);
		printf("\nMenor Numero é :%d", c1);


	}
	else if ((a1 < b1) && (b1 == c1)) { // 1 2 2
		printf("\n Maior Numero é :%d", b1);
		printf("\nMenor Numero é :%d", a1);

	}
	else if ((a1 > b1) && (b1 == c1)) { // 2 1 2 
		printf("\nMaior Numero é :%d", a1);
		printf("\nMenor Numero é :%d", b1);

	}
	else if ((a1 < b1) && (b1 < c1)) { //-- 1 2 3 
		printf("\n Maior Numero é :%d", c1);
		printf("\nMenor Numero é :%d", a1);
	}
	else if (a1 < b1) { // 1 3 2 | 2 3 1 
		printf("\n Maior Numero é :%d", b1);
		if (a1 < c1)
			printf("\nMenor Numero é :%d", a1);
		else if (c1 < a1)
			printf("\n Menor Numero é :%d", c1);
	}
	else if ((a1 > b1) && (c1 > b1)) { //-- 3 1 2  
		printf("\nMaior Numero é :%d", a1);
		printf("\nMenor Numero é :%d", b1);
	}
	else if ((a1 == b1) && (b1 < c1)) { // 1 1 2
		printf("\nMaior Numero é :%d", c1);
		printf("\nMenor Numero é :%d", a1);
	}
	else {
		printf("Combinação não contemplada");
		printf("\n Primeiro %d", a1);
		printf("\n Segundo %d", b1);
		printf("\n Terceiro %d", c1);
	}

	return 0;
}
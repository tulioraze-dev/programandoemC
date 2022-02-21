#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int DescubraMaior()
{
    int NumeroUm;
    int NumeroDois;
    int NumeroTres;
    int NumeroMaior;

    printf("Digite 3 números inteiros e descubra qual o Maior:\n");
    printf("Digite o Primeiro número: ");
    scanf("%d", &NumeroUm);
    printf("Digite o Segundo número: ");
    scanf("%d", &NumeroDois);
    printf("Digite o Terceiro número: ");
    scanf("%d", &NumeroTres);

    if (NumeroUm > NumeroDois)
    {
        NumeroMaior = NumeroUm;
    }
    else if (NumeroMaior > NumeroTres)
    {
        NumeroMaior = NumeroTres;
    }
    printf("O maior números entre os números digitados é : %d", NumeroMaior);
    printf("\n");
}

int intervalo()
{
    int SomatoriaPares = 0;
    int SomatoriaImpares = 0;

    printf("O intervalo de 0 a 50:\n");
    for (int i = 0; i <= 50; i++)
    {
        printf("%d", i);

        if (i % 2 == 0)
        {
            SomatoriaPares = SomatoriaPares + i;
        }
        else
        {
            SomatoriaImpares = SomatoriaImpares + (i - 2);
        }
    }
    printf("\nO valor da somatoria dos Pares é : %d\n", SomatoriaPares);
    printf("O valor da somatorias dos Impares de acordo com a condição é : %d\n", SomatoriaImpares);
    printf("\n");
}

int Fatorial()
{
    int NumeroDigitado;
    int Fatorial = 1;

    printf("Digite um numero e descubra a multiplicação dos numeros impares de seu fatorial: ");
    scanf("%d", &NumeroDigitado);

    for (int i = NumeroDigitado; i >= 0; i--)
    {

        if (i % 2 != 0)
        {

            Fatorial = Fatorial * i;
        }
    }
    printf("O valor da multiplicação é : %d", Fatorial);
    printf("\n");
}

float CoroaCircula()
{
    float CoroaCirculaD;
    float CoroaCirculaB;
    float Pi = 3.14;
    int RaioA = 3;
    int RaioB = 5;
    int RaioC = 7;
    int RaioD = 9;

    CoroaCirculaD = Pi * ((RaioD * RaioD) - (RaioC * RaioC));
    CoroaCirculaB = Pi * ((RaioB * RaioB) - (RaioA * RaioA));

    float SomaDasCoroas = CoroaCirculaD + CoroaCirculaB;

    printf("O Valor da Coroa Circular do circulo maior é: %.2lf\n", CoroaCirculaD);
    printf("O valor da Coroa Circular do circulo menor é: %.2lf\n", CoroaCirculaB);
    printf("O valor da Soma das Coroas Circulares é: %.2lf", SomaDasCoroas);
    printf("\n");
}

int main()
{
    SetConsoleOutputCP(65001);
    int rodar = 1;

    while (rodar)
    {

        int escolha;

        printf("\n---->> MENU <<----\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("(1) - Descubra o Maior\n");
        printf("(2) - Intervalo\n");
        printf("(3) - Fatorial\n");
        printf("(4) - Coroa Circula\n");
        printf("(5) - Sair\n");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha)
        {

        case 1:
            DescubraMaior();
            break;
        case 2:
            intervalo();
        case 3:
            Fatorial();
            break;
        case 4:
            CoroaCircula();
            break;
        case 5:
            rodar = 0;
            break;
        default:
            printf("Digite uma opção do menu");
            break;
        }
    }
}
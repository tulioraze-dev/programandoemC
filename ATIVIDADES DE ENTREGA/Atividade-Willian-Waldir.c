#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int maiornumero(){
    int a = 10;
    int b = 20; 
    int c = 30;

    if ((a > b) && (a > c)){
        printf("%d e o maior numero.", a);
    }else if((b > a) &&(b > c)){
        printf("%d e o maior numero.", b);
    }else{
        printf("%d e o maior numero.", c);
    }
}

void velocidade(){
    int metros = 10;
    double segundos = 1800;
    double resultado;

    resultado = metros / segundos;

    printf("A velocidade percorrida é %f", resultado);
}

void valoremprestado(){
    float valor = 1000;
    float dias = 30;
    float taxa = 0.08;
    float dias_pg;
    float quantidade;
    float quant;
    float resultado;
    float result;

    printf(" Informe a quantidade de dias.");
    scanf("%f", &dias_pg);

    if(dias_pg == 30){
    quantidade = valor * taxa;
    resultado = valor + quantidade;

    printf("Você vai pagar %.2f", resultado);
    } else{
    quantidade = dias_pg - 30;// 15
    result = quantidade * 0.33; //4.95
    quant = valor * 0.08; //80
    resultado = (valor + quant) + result;

    printf("Você vai pagar %.2f", resultado);
}

}

void fatorial(){
   
    int j = 1;
    
    for(int i = 1; i <= 4; i++){
        j = j*i;
        printf("%d\n", j);
    }
}

void vetor(){
        int vetor[5] = {3,1,2,4,5};
        int auxiliar;

        for(int i = 0; i < 5 ; i++){
            for (int j =0; j < vetor[i]; j++){
                
                if( vetor[i] < vetor[j]){
                    auxiliar = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = auxiliar;

            }
        }
    }

    for (int l = 0; l = vetor[l]; l++) {
        printf("Vetor em ordem: %d\n", vetor[l]);
        
    }
    
}

void calculacilindro(){
   double pi = 3.14;
   double raio = 225;
   double altura = 15;
   double litros = 1000;
   double transformalitro;
   double volume;

   volume = pi * raio * altura;
   transformalitro = volume * litros;


   printf("O volume do cilindro em litros é %.2f", transformalitro);

}

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char escolha;

    printf("Informe qual atividade vai ralizar? Escolha: \n a - [Maior número] \n b - [Velocidade] \n c - [Fatorial] \n d - [Valor Empresatado] \n e - [Vetor]\n f - [Cilindro]\n");
    scanf("%c", &escolha);


    switch (escolha){
    case 'a':
        maiornumero();
        break;

    case 'b':
        velocidade();
        break;
    
    case 'c':
        fatorial();
        break;
    
    case 'd':
        valoremprestado();
        break;

    case 'e':
        vetor();
        break;

    case 'f':
        calculacilindro();
        break;
    };
}

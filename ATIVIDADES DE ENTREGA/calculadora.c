#include<stdio.h>


double soma(double num1, double num2) {
    return num1 + num2;
}

double subtracao(double num1, double num2) {
    return num1 - num2;
}

double divisao(double num1, double num2) {
    return (double) num1 / num2;
}

double multiplicacao(double num1, double num2) {
    return num1 * num2;
}

double potencia(double base, double expoente) {
    double resultado = 1;

    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

double volumepiramide(double altura, double ladobase) {
    
    return potencia(ladobase, 2 ) * altura / 3.0;
     
}

double volumetronco(double altura, double alturatronco, double ladobase){

    double alturaPiramideMenor = altura - alturatronco;
    double ladoBaseMenor = ladobase * alturaPiramideMenor / altura;

    return volumepiramide(altura, ladobase) - volumepiramide(alturaPiramideMenor, ladoBaseMenor);

}

int main() {

    int rodar = 1;

    while(rodar) {

        printf("Qual operacao voce deseja realizar?\n");
        printf("\"+\" -> soma\n");
        printf("\"-\" -> subtracao\n");
        printf("\"*\" -> multiplicacao\n");
        printf("\"/\" -> divisao\n");
        printf("\"^\" -> potencia\n");
        printf("\"T\" -> volume do tronco\n");
        printf("\"S\" -> sair\n");

        char escolha;

        scanf(" %c", &escolha);

        double num1;
        double num2;
        double alturaTronco;

        switch (escolha){

        case '+' :

            printf("Digite os valores a serem somados : \n");
            scanf("%lf %lf", &num1 , &num2);
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, soma(num1, num2));

            break;
        
        case '-':

            printf("Digite os valores a serem subtraidos : \n");
            scanf("%lf %lf", &num1 , &num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtracao(num1, num2));

            break;
        
        case '*':

            printf("Digite os valores a serem multiplicados : \n");
            scanf("%lf %lf", &num1 , &num2);
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiplicacao(num1, num2));
    	    
            break;

        case '/':

            printf("Digite os valores a serem divididos : \n");
            scanf("%lf %lf", &num1 , &num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, divisao(num1, num2));

            break;

        case '^':

            printf("digite a base e depois um expoente inteiro : \n");
            scanf("%lf %lf", &num1 , &num2);
            printf("%.2lf ^ %.2f = %.2lf\n", num1 , num2 , potencia(num1, num2));

            break;

        case 'T':
        case 't':
            printf("Digite a atura da piramide, a atura do corte e o lado da base:\n");
            scanf("%lf %lf %lf", &num1, &alturaTronco, &num2);
            if(num1 > alturaTronco)
                printf("O volume do tronco eh igual a: %.2lf\n", volumetronco(num1, alturaTronco, num2));
            else   
                printf("A altura da piramide precisa ser maior do que a altura do corte.\n");

            break;

        case 'S':
        case 's':
    
            rodar = 0;
            break;  
        
        default: 
            printf("Opcao invalida, digite uma opcao do menu.\n");
            escolha = 'c';
            break;

        }

        while(escolha != 'c' && escolha != 'C') {

            printf("Aperte \'c\' para continuar. Ou \'s\' para sair\n");
            scanf(" %c", &escolha);

            if(escolha == 's' || escolha == 'S') {
                rodar = 0;
                break;
            }
            
        }

    }
}
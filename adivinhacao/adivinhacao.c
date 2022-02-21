#include <stdio.h>

int numerosecreto = 69;
int acertou = 0;
int errou = 1;
int nivel;
int tentativas;

int abertura(){

    printf("*********************************\n");
    printf("* Bem vindo ao \" Tente a sorte\" *\n");
    printf("*********************************\n");   
}

int escolhanivel(){

    printf("Escolha o nivel de dificuldade: \n");
    printf("(1)Facil (2)Medio (3)Dificil \n");
    scanf("%d", &nivel);
    printf("Nivel escolhido : %d\n", nivel);

        switch(nivel){
            case 1:
                tentativas = 15;
                tentativas--;
                break;
            case 2:
                tentativas = 10;
                tentativas--;
                break;
            case 3:
                tentativas = 5;
                tentativas--;
                break;
            default:
                if(nivel > 3 ) {
                    printf("Opcao errada Tente novamente: \n");
                }
        }
}

int main() {
    
    abertura();

    escolhanivel();

    while(errou || tentativas > 0){
        
        printf("* Chute um numero de 0 a 100 *\n");
        int chute;
        scanf("%d", &chute);

        if(chute == numerosecreto){
            printf("Parabens cara voce acertou !!\n");
            return acertou;
        }
        if(chute > numerosecreto){
            printf("Seu chute foi maio1r que o numero secreto\n");
        } else {
            printf("Seu chute foi menor que o numero secreto\n");
        }
    }
}

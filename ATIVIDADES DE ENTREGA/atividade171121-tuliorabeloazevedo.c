#include <stdio.h>
#include <stdlib.h>


void aocubo(){

        printf("Digite 10 numeros inteiros: \n");
        int vetor[10];
    
        for(int i = 0; i <= 9; i++){
        scanf(" %d", &vetor[i]);
        
        int resultado = vetor[i] * vetor[i] * vetor[i];
        
        printf("O resultado dos numeros digitados elevados ao cubo sao : %d\n", resultado); 
        }
}

void funcaoy(){
    
    printf("Digite 10 numeros reais : \n");

    float vetorx[10];

    for(int i = 0; i <= 9; i++){
        scanf(" %f", &vetorx[i]);

        float ya = 2 * vetorx[i] + 1;
        float yb =  vetorx[i] * vetorx[i];
        float yc = vetorx[i] * vetorx[i] * vetorx[i];

        printf("Os resultados das expressoes sao respectivamentes : %.2f %.2f %.2f\n", ya, yb, yc);
    }
}

void somandovetor(){
    printf("Digite 10 numeros inteiros : \n");
    
    int vetorsoma[10] , s = 0 ;

    for(int i = 0; i <= 9; i++){
        scanf(" %d", &vetorsoma[i]);
        s=s+vetorsoma[i];
    }
    printf("o resultado da soma de todos os numeros e igual a : %d", s );
}

void encontrachave(){
    
    int chave;
    printf("Informe a chave : \n");
    scanf("%d", &chave);

    int v[20];
    printf("Agora informe 20 numeros inteiros : \n");
    for(int i = 0; i <=19; i++){
        scanf("%d", &v[i]);
        if(v[i] == chave) {
            printf("Estou vendo a chave %d na posição %d \n", chave, i);
        }
    }
}

void matriz(){

    float matriz[2] [2];
    int i;
    int j; 
    float determinate;

    for(int i = 0; i < 2; i++){
        for(int j =0; j < 2; j++){
            printf("Matriz M[%d] [%d]= ", i+1,j+1);
            scanf("%f", &matriz[i][j]);

            determinate = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
        }
    }

    printf("Determinante da Matriz: %.1lf\n", determinate);

}

int main(){

    int rodar = 1;

    while(rodar) {

        printf("1 - Elevando ao cubo\n");
        printf("2 - Resolvendo as funcoes Y\n");
        printf("3 - Somando Vetor\n");
        printf("4 - Encontrando posicao da chave\n");
        printf("5 - Determinante Matriz");
        printf("6 - Sair\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha){

            case 1:

                aocubo();
                break;

            case 2:

                funcaoy();
                break;

            case 3:

                somandovetor();
                break;

            case 4:

                encontrachave();
                break;

            case 5:

                matriz();
                break;

            case 6:

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

            if(escolha == 5) {
                rodar = 0;
                break;
            }            
        }
    }

}
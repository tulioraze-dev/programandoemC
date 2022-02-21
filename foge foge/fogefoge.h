#define CIMA 'w'
#define ESQUERDA 'a'
#define BAIXO 's'
#define DIREITA 'd'
#define BOMBA 'b'


int acabou();
void move(char direcao);
int ehdirecao(char direcao);
void fantasmas();
void explodepilula2(int x, int y,int somax, int somay, int qtd);

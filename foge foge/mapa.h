#define VAZIO '.'
#define HEROI '@'
#define FANTASMA 'F'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'



struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

struct posicao {
    int x;
    int y;
};

typedef struct posicao POSICAO;

void alocamapa(MAPA* m);
void lermapa(MAPA* m);
void liberamapa(MAPA* m);
void imprimemapa(MAPA* m); 
int encontramapa(MAPA* m, POSICAO* p, char c);

int ehvazia(MAPA* m, int x, int y);
int ehvalida(MAPA* m, int x, int y);
void andanomapa(MAPA* m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(MAPA* destino, MAPA* origem);
int podeandar(MAPA* m, int x, int y, char personagem);
int ehparede(MAPA* m, int x, int y);
int ehpersonagem(MAPA*m, char personagem, int x, int y);
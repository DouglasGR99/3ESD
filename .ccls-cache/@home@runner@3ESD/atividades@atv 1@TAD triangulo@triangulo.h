typedef struct tri Triangulo;

Triangulo* tri_cria(char* nome, float x1, float y1,float x2, float y2,float x3, float y3);

float calc_perimetro(Triangulo* p);

void tri_bubble_sort(Triangulo** p, int tamanho);

void desenha_moldura(void);

void exibe_resposta(Triangulo** p, int tamanho);
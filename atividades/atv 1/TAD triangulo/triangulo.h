/* Estrutura do triangulo */
typedef struct tri Triangulo;

/* Funçao que cria um triangulo */
Triangulo* tri_cria(char* nome, float x1, float y1,float x2, float y2,float x3, float y3);

/* Função que libera a memória de um triangulo previamente criado */
void tri_libera(Triangulo* p);

/* Função que acessa os valores das coordenadas de um triangulo */
void tri_acessa(Triangulo* p, float* x1, float* y1,float* x2, float* y2,float* x3, float* y3);

/* Função que atribui novos valores às coordenadas de um triangulo */
void tri_atribui(Triangulo* p, float x1, float y1,float x2, float y2,float x3, float y3);

/* Função que calcula o perímetro do triangulo*/
float tri_calcPerimetro(Triangulo* p);

/* Função que calcula a área do triangulo*/
float tri_calcArea(Triangulo* p);

/* Função que organiza o vetor de triangulos por bubble sort */
void tri_bubbleSort(Triangulo** p, int tamanho);

/* Função que exibe o vetor de triangulos */
void tri_exibeVetor(Triangulo** p, int tamanho);
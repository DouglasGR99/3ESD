/* Tipo exportado */
#include "PONTO.h"
typedef struct circulo Circulo;


/* Funções exportadas */
/* Função cria - Aloca e retorna um círculo com centro (x,y) e raio r */
Circulo* circ_cria(float x, float y, float r);

/* Função libera - Libera a memória de um círculo previamente criado */
void circ_libera(Circulo* c);

/* Função area - Retorna o valor da área do círculo */
float circ_area(Circulo* c);

/* Função interior - Verifica se um dado ponto p está dentro do círculo */
int circ_interior(Circulo* c, Ponto* p);

/* Função getCirculo - Retorna uma string lo no formato (c:centro,r:raio)*/
char* circ_getCirculo(Circulo* p);

/* Função exibe -Escreve na tela o círculo no formato  (c:centro,r:raio)*/
void circ_exibe(Circulo* p);

/* Função compara - Retorna:
  valor<0 (negativo) se o 1º círculo é menor que o 2º,
  valor == 0, se são iguais
  valor>0 se o 1º círculo é maiorr que o 2º
  Um cículo é menor que outro se sua área for menor  que a do outro*/
int circ_compara(Circulo* c1, Circulo* c2);

/* Função clona – cria um novo cículo igual ao recebido*/
Circulo* circ_clona(Circulo* c1);

/* get e set do raio e do centro*/
float circ_getRaio(Circulo* c);
Ponto* circ_getCentro(Circulo* c);
void circ_setRaio(Circulo* const,float r);
void circ_setCentro(Circulo* c,Ponto *p);
/*
Aplicação utilizando o TAD CIRCULO onde
  o centro e raio de 2 círculos são peguntados ao usuário    xibir se os círculos são:

Circunferências internas: Uma circunferência C1 é interna a uma circunferência C2, se todos os pontos do círculo C1 estão contidos no círculo C2. 
Uma circunferência é externa à outra se todos os seus pontos são pontos externos à outra.



Circunferências concêntricas: Duas ou mais circunferências com o mesmo centro mas com raios diferentes são circunferências concêntricas.

Circunferências tangentes: Duas circunferências que estão no mesmo plano, são tangentes uma à outra, se elas são tangentes à mesma reta no mesmo ponto de tangência.

Tangentes externas	Tangentes internas
	
As circunferências são tangentes externas uma à outra se os seus centros estão em lados opostos da reta tangente comum e elas são tangentes internas uma à outra se os seus centros estão do mesmo lado da reta tangente comum.

Circunferências secantes: são aquelas que possuem somente dois pontos distintos em comum.



Segmentos tangentes: Se AP e BP são segmentos de reta tangentes à circunferência nos ponto A e B, então esses segmentos AP e BP são congruentes.

*/
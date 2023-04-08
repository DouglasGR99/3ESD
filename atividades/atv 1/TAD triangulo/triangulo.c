#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>

#include "ponto.h"
#include "triangulo.h"


struct tri{
    char nome[10];
    Ponto *A,*B,*C;
    float perimetro;
};


Triangulo* tri_cria(char* nome, float x1, float y1, float x2, float y2, float x3, float y3){
  Triangulo *p=(Triangulo*)malloc(sizeof(Triangulo));
  //considerando sempre que os ptos são não colineares
  p->A=pto_cria(x1,y1);
  p->B=pto_cria(x2,y2);
  p->C=pto_cria(x3,y3);
  strcpy(p->nome, nome);
  p->perimetro = calc_perimetro(p);
  return p;
}


float calc_perimetro(Triangulo* p)
{
    float dAB = pto_distancia(p->A,p->B);
    float dAC = pto_distancia(p->B,p->C);
    float dBC = pto_distancia(p->A,p->C);
    float perim = dAB + dAC + dBC;
    return perim;
}


void tri_bubble_sort(Triangulo** p, int tamanho) {
  int i, j;
  Triangulo* temp;
  for (i = 0; i < tamanho-1; i++) {
    for (j = 0; j < tamanho-i-1; j++) {
      if (p[j]->perimetro > p[j+1]->perimetro) {
        temp = p[j];
        p[j] = p[j+1];
        p[j+1] = temp;
      }
    }
  }
  return;
}


void desenha_moldura(void)
{
	printf("\n==============================");
	printf("\n==============================");
	return;
}


void exibe_resposta(Triangulo** p, int tamanho)
{
  int i;
  for(i=0; i < tamanho; i++){
    desenha_moldura();
    printf("\n %s - Perímetro: %.1f",p[i]->nome, p[i]->perimetro);
    printf("/ Coordenadas:");
  	pto_exibe(p[i]->A);
    pto_exibe(p[i]->B);
    pto_exibe(p[i]->C);
  }
  desenha_moldura();
	return;
}
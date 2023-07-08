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
  p->perimetro = tri_calcPerimetro(p);
  return p;
}

void tri_libera(Triangulo* p){
  pto_libera(p->A);
  pto_libera(p->B);
  pto_libera(p->C);
  free(p);
}

void tri_acessa(Triangulo* p, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3){
  pto_acessa(p->A,x1,y1);
  pto_acessa(p->B,x2,y2);
  pto_acessa(p->C,x3,y3);
}

void tri_atribui(Triangulo* p, float x1, float y1, float x2, float y2, float x3, float y3){
  pto_atribui(p->A,x1,y1);
  pto_atribui(p->B,x2,y2);
  pto_atribui(p->C,x3,y3);
  p->perimetro = tri_calcPerimetro(p);
}

float tri_calcArea(Triangulo* p)
{
    float dAB = pto_distancia(p->A,p->B);
    float dAC = pto_distancia(p->B,p->C);
    float dBC = pto_distancia(p->A,p->C);
    float pTemp = (dAB + dAC + dBC)/2;
    float area = sqrt(pTemp*(pTemp-dAB)*(pTemp-dAC)*(pTemp-dBC));
    return area;
}

float tri_calcPerimetro(Triangulo* p)
{
    float dAB = pto_distancia(p->A,p->B);
    float dAC = pto_distancia(p->B,p->C);
    float dBC = pto_distancia(p->A,p->C);
    float perim = dAB + dAC + dBC;
    return perim;
}

void tri_bubbleSort(Triangulo** p, int tamanho) {
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
}


void tri_exibeVetor(Triangulo** p, int tamanho)
{
  int i;
  for(i=0; i < tamanho; i++){
    printf("\n\n %s - Perímetro: %.1f",p[i]->nome, p[i]->perimetro);
      printf("\n Área: %.1f", tri_calcArea(p[i]));
    printf("\n Coordenadas:");
    pto_exibe(p[i]->A);
    pto_exibe(p[i]->B);
    pto_exibe(p[i]->C);
  }
}
#include "CIRCULO.h"
#include "PONTO.h"
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

struct circulo {
    Ponto*p;
    float r;
};

/* Funções exportadas */
/* Função cria - Aloca e retorna um círculo com centro (x,y) e raio r */
Circulo* circ_cria(float x, float y, float r){
    Circulo * c= (Circulo*) malloc(sizeof(Circulo));
    if (c){
        c->p= pto_cria(x,y);
        if (c->p){
            c->r=r;
            return c;
        }
    }
    circ_libera(c);
    return NULL;
}

/* Função libera - Libera a memória de um círculo previamente criado */
void circ_libera(Circulo* c){
    pto_libera(c->p);
    free(c);
}
int circ_compara(Circulo* c1, Circulo* c2){
    float a1=circ_area(c1);
    float a2=circ_area(c2);
    return a1-a2;
}
/* Função area - Retorna o valor da área do círculo */
float circ_area(Circulo* c){
    return PI * c->r * c->r;

}

/* Função interior - Verifica se um dado ponto p está dentro do círculo */
int circ_interior(Circulo* c, Ponto* p){
    float dist= pto_distancia(p,c->p);
    return (dist<=c->r);
}

/* Função getCirculo - Retorna uma string lo no formato (c:centro,r:raio)*/
char* circ_getCirculo(Circulo* c){
    int qt=sizeof(c->p);
    char* pt= (char*)malloc(sizeof(*c) +qt+17);
    sprintf(pt,"(centro:%s,raio:%.2f)",pto_getPonto(c->p),c->r);
    return pt;
}

/* Função exibe -Escreve na tela o círculo no formato  (c:centro,r:raio)*/
void circ_exibe(Circulo* c){
    printf("(centro:%s,raio:%.1f)",pto_getPonto(c->p),c->r);
}

void circ_exibeVetor(Circulo** c,int n){
    int i;
    for (i=0;i<n;i++){
        circ_exibe(c[i]);
        printf(" area: %.2f",circ_area(c[i]));
        printf("\n");
    }
}

/* Função compara - Retorna 1 se o 1º círculo é == ao 2º*/
int circ_compara(Circulo* c1, Circulo* c2);

/* Função compara posições: Compara se dois circulos sao tangentes, secantes ou não se tocam
    retorna:
    1 se são tangentes
    2 se são secantes
    3 se não se tocam*/
int circ_comparaPosicao(Circulo* c1, Circulo* c2) {
    float dist= pto_distancia(c1->p,c2->p); //distancia entre os centros
    if (dist == (c1->r+c2->r)){ //tangentes (caso a distancia entre os centros seja igual a soma dos raios)
        return 1;
    }
    else if (dist < (c1->r+c2->r)){ //secantes (caso a distancia entre os centros seja menor que a soma dos raios)
        return 2;
    }
    else{ //não se tocam
        return 3;
    }
}

/* Função clona – cria um novo cículo igual ao recebido*/
Circulo* circ_clona(Circulo* cOrigem){
    float x,y;
    pto_acessa(cOrigem-> p, &x, &y);
    return circ_cria(x,y,cOrigem->r);
}

float circ_getRaio(Circulo* c){
    return c->r;
}
Ponto* circ_getCentro(Circulo* c){
    return c->p;
}
void circ_setRaio(Circulo* c,float r){
    c->r=r;
}
void circ_setCentro(Circulo* c,Ponto *p){
    c->p=p;
}
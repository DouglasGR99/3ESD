//
// Created by Douglas on 30/04/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha {
    struct elemento *topo;
};

struct elemento {
    int dado;
    struct elemento *prox;
};

  
Pilha *criaPilha() {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    if (p != NULL) {
        p->topo = NULL;
    }
    return p;
}

int inserePilha(Pilha *p, int dado) {
    if (p == NULL) {
        return 0;
    }
    Elemento *no = (Elemento *) malloc(sizeof(Elemento));
    if (no == NULL) {
        return 0;
    }
    no->dado = dado;
    no->prox = p->topo;
    p->topo = no;
    return 1;
}

int removePilha(Pilha *p) {
    if (p == NULL) {
        return 0;
    }
    if (p->topo == NULL) {
        return 0;
    }
    Elemento *no = p->topo;
    p->topo = p->topo->prox;
    free(no);
    return 1;
}

int consultaPilha(Pilha *p, int *dado) {
    if (p == NULL) {
        return 0;
    }
    if (p->topo == NULL) {
        return 0;
    }
    *dado = p->topo->dado;
    return 1;
}

void liberaPilha(Pilha *p) {
    if (p != NULL) {
        Elemento *no;
        while (p->topo != NULL) {
            no = p->topo;
            p->topo = p->topo->prox;
            free(no);
        }
        free(p);
    }
}

int pilhaVazia(Pilha *p) {
    if (p == NULL) {
        return 1;
    }
    if (p->topo == NULL) {
        return 1;
    }
    return 0;
}
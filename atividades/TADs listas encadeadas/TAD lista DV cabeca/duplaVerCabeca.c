#include "duplaVerCabeca.h"
#include <stdio.h>
#include <stdlib.h>

/* Estrutura da lista */
struct lista {
    struct elemento *noCabeca;
    int ordenada;
    int semRepeticao;
};

/* Estrutura do elemento */
struct elemento {
    int dado;
    struct elemento *prox;
    struct elemento *ant;
};

/* vvv FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA vvv */

Lista *criaLista(int ordenada, int semRepeticao) {
    Lista *l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->noCabeca = (Elemento *) malloc(sizeof(Elemento));
        if (l->noCabeca != NULL) {
            l->noCabeca->prox = l->noCabeca;
            l->noCabeca->ant = l->noCabeca;
            l->ordenada = ordenada;
            l->semRepeticao = semRepeticao;
        } else {
            free(l);
            l = NULL;
        }
    }
    return l;
}

int liberaLista(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *no = l->noCabeca->prox;
    while (no != l->noCabeca) {
        Elemento *aux = no;
        no = no->prox;
        free(aux);
    }
    free(l->noCabeca);
    free(l);
    return 1;
}

void imprimeLista(Lista *l) {
    if (l == NULL) { return; }

    Elemento *no = l->noCabeca->prox;
    while (no != l->noCabeca) {
        printf("%d ", no->dado);
        no = no->prox;
    }
    printf("\n");
}

int tamanhoLista(Lista *l) {
    if (l == NULL) { return 0; }

    int cont = 0;
    Elemento *no = l->noCabeca->prox;
    while (no != l->noCabeca) {
        cont++;
        no = no->prox;
    }
    return cont;
}

/* ^^^ FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA ^^^ */

/* vvv FUNÇÕES QUE MANIPULAM ELEMENTOS DA LISTA vvv */

int existeElemento(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = l->noCabeca->prox;
    while (no != l->noCabeca && no->dado != dado) { no = no->prox; }
    if (no == l->noCabeca) { return 0; }
    return 1;
}

int insereLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    // se proibe repetição, não insere caso elemento já exista
    if (l->semRepeticao == 1 && existeElemento(l, dado) == 1) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));
    if (no == NULL) { return 0; }

    no->dado = dado;

    if (l->ordenada == 1) {
        Elemento *aux = l->noCabeca->prox;
        while (aux != l->noCabeca && aux->dado < dado) { aux = aux->prox; }
        no->prox = aux;
        no->ant = aux->ant;
        aux->ant->prox = no;
        aux->ant = no;
    } else { // insere no fim
        no->prox = l->noCabeca;
        no->ant = l->noCabeca->ant;
        l->noCabeca->ant->prox = no;
        l->noCabeca->ant = no;
    }
    return 1;
}

int removeLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = l->noCabeca->prox;
    while (no != l->noCabeca && no->dado != dado) { no = no->prox; }
    if (no == l->noCabeca) { return 0; }

    no->ant->prox = no->prox;
    no->prox->ant = no->ant;
    free(no);
    return 1;
}
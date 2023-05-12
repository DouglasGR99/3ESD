#include <stdio.h>
#include <stdlib.h>
#include "simplesmenteE.h"

/* Estrutura da lista */
struct lista {
    struct elemento *inicio;
    struct elemento *fim;
};

/* Estrutura do elemento */
struct elemento {
    int dado;
    struct elemento *prox;
};


Lista *criaLista() {
    Lista *l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->inicio = NULL;
        l->fim = NULL;
    }
    return l;
}

int insereLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));

    if (no == NULL) { return 0; }

    no->dado = dado;
    no->prox = NULL;

    if (l->inicio == NULL) { l->inicio = no;
    } else { l->fim->prox = no; }

    l->fim = no;
    return 1;
}

int insereListaOrdenada(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));

    if (no == NULL) { return 0; }

    no->dado = dado;
    no->prox = NULL;

    if (l->inicio == NULL) { l->inicio = no;
    } else {
        Elemento *ant = NULL;
        Elemento *atual = l->inicio;

        while (atual != NULL && atual->dado < dado) {
            ant = atual;
            atual = atual->prox;
        }

        if (ant == NULL) {
            no->prox = l->inicio;
            l->inicio = no;
        } else {
            no->prox = ant->prox;
            ant->prox = no;
        }
    }

    return 1;
}

int removeLista(Lista *l, int dado) {
    if (l == NULL || l->inicio == NULL) { return 0; }

    Elemento *ant = NULL;
    Elemento *atual = l->inicio;

    while (atual != NULL && atual->dado != dado) {
        ant = atual;
        atual = atual->prox;
    }

    if (atual == NULL) { return 0; }

    if (ant == NULL) { l->inicio = atual->prox;
    } else { ant->prox = atual->prox; }

    if (atual->prox == NULL) { l->fim = ant; }

    free(atual);
    return 1;
}

int consultaLista(Lista *l, int dado) {
    if (l == NULL || l->inicio == NULL) { return 0; }

    Elemento *atual = l->inicio;

    while (atual != NULL && atual->dado != dado) { atual = atual->prox; }

    if (atual == NULL) { return 0; }

    return 1;
}

void imprimeLista(Lista *l) {
    Elemento *atual = l->inicio;

    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }

    printf("\n");
}

int liberaLista(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *atual = l->inicio;

    while (atual != NULL) {
        Elemento *aux = atual->prox;
        free(atual);
        atual = aux;
    }

    free(l);
    return 1;
}

int listaVazia(Lista *l) {
    if (l == NULL) { return 0; }

    if (l->inicio == NULL) { return 1; }

    return 0;
}

int tamanhoLista(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *atual = l->inicio;

    int tam = 0;
    while (atual != NULL) {
        tam++;
        atual = atual->prox;
    }

    return tam;
}

/* Função que verifica se a lista está ordenada:
  caso não exista lista retorna 0
  caso esteja ordenada retorna 1
  caso contrário retorna 0 */
int listaOrdenada(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *atual = l->inicio;

    while (atual != NULL && atual->prox != NULL) {
        if (atual->dado > atual->prox->dado) { return 0; }
        atual = atual->prox;
    }

    return 1;
}

/* Função que verifica se a lista está ordenada de forma decrescente:
  caso não exista lista retorna 0
  caso esteja ordenada retorna 1
  caso contrário retorna 0 */
int listaOrdenadaDecrescente(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *atual = l->inicio;

    while (atual != NULL && atual->prox != NULL) {
        if (atual->dado < atual->prox->dado) { return 0; }
        atual = atual->prox;
    }

    return 1;
}
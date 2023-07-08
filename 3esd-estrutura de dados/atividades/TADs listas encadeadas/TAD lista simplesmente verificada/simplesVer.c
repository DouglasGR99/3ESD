#include "simplesVer.h"
#include <stdio.h>
#include <stdlib.h>

/* Estrutura da lista */
struct lista {
    struct elemento *inicio;
    struct elemento *fim;
    int ordenada;
    int semRepeticao;
};

/* Estrutura do elemento */
struct elemento {
    int dado;
    struct elemento *prox;
};

/* vvv FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA vvv */

Lista *criaLista(int ordenada, int semRepeticao) {
    Lista *l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->inicio = NULL;
        l->fim = NULL;
        l->ordenada = ordenada;
        l->semRepeticao = semRepeticao;
    }
    return l;
}

int liberaLista(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *no;

    while (l->inicio != NULL) {
        no = l->inicio;
        l->inicio = l->inicio->prox;
        free(no);
    }
    free(l);
    return 1;
}

int tamanhoLista(Lista *l) {
    if (l == NULL) { return 0; }

    Elemento *no = l->inicio;
    int tam = 0;

    while (no != NULL) {
        tam++;
        no = no->prox;
    }
    return tam;
}

void imprimeLista(Lista *l) {
    if (l == NULL) { return; }

    Elemento *no = l->inicio;

    while (no != NULL) {
        printf("%d ", no->dado);
        no = no->prox;
    }
    printf("\n");
}

/* vvv FUNÇÕES QUE MANIPULAM ELEMENTOS DA LISTA vvv */

/* função que verifica se um elemento já existe na lista (necessária para a próxima) */
int existeElemento(Lista *l, int dado) { // tambem pode ser chamada de busca ou consulta
    if (l == NULL || l->inicio == NULL) { return 0; }

    Elemento *atual = l->inicio;

    while (atual != NULL && atual->dado != dado) { atual = atual->prox; }

    if (atual == NULL) { return 0; }

    return 1;
}

int insereListaOrdenada(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    // verifica se o elemento já existe na lista e se não pode repetir
    if (l->semRepeticao && existeElemento(l, dado)) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));
    if (no == NULL) { return 0; }

    no->dado = dado;
    no->prox = NULL;

    if (l->inicio == NULL) { l->inicio = no;
    } else {
        Elemento *anterior = NULL;
        Elemento *atual = l->inicio;

        while (atual != NULL && atual->dado < dado) {
            anterior = atual;
            atual = atual->prox;
        }

        if (anterior == NULL) { // insere no início
            no->prox = l->inicio;
            l->inicio = no;
        } else if (atual == NULL) { // insere no fim
            l->fim->prox = no;
            l->fim = no;
        } else { // insere no meio
            anterior->prox = no;
            no->prox = atual;
        }
    }
    return 1;
}

int insereLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    // verifica se o elemento já existe na lista e se não pode repetir
    if (l->semRepeticao && existeElemento(l, dado)) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));
    if (no == NULL) { return 0; }

    // se a lista for ordenada, insere ordenado
    if (l->ordenada) {
        return insereListaOrdenada(l, dado);
    } else {
        no->dado = dado;
        no->prox = NULL;

        if (l->inicio == NULL) { l->inicio = no;
        } else { l->fim->prox = no; }

        l->fim = no;
        return 1;
    }
}

int removeLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *ant = NULL;
    Elemento *no = l->inicio;

    while (no != NULL && no->dado != dado) {
        ant = no;
        no = no->prox;
    }

    if (no == NULL) { return 0; }

    if (ant == NULL) { l->inicio = no->prox;
    } else { ant->prox = no->prox; }

    if (no->prox == NULL) { l->fim = ant; }

    free(no);
    return 1;
}
#include "duplamenteE.h"

#include <stdio.h>
#include <stdlib.h>

/* Estrutura da lista */
struct lista {
    struct elemento *inicio;
    struct elemento *fim;
};

/* Estrutura do elemento */
struct elemento {
    int dado;
    struct elemento *ant;
    struct elemento *prox;
};

/* Função que cria uma lista vazia */
Lista *criaLista() {
    Lista *l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->inicio = NULL;
        l->fim = NULL;
    }
    return l;
}

/* Função que insere um elemento na lista:
  caso não exista lista ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));

    if (no == NULL) { return 0; }

    no->dado = dado;
    no->ant = NULL;
    no->prox = NULL;

    if (l->inicio == NULL) { l->inicio = no;
    } else { l->fim->prox = no; no->ant = l->fim; }

    l->fim = no;
    return 1;
}

/* Função que insere um elemento na lista ordenadamente:
  caso não exista lista ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereListaOrdenada(Lista *l, int dado) {
    if (l == NULL) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));

    if (no == NULL) { return 0; }

    no->dado = dado;
    no->ant = NULL;
    no->prox = NULL;

    if (l->inicio == NULL) { l->inicio = no;
    } else {
        Elemento *aux = l->inicio;
        while (aux != NULL && aux->dado < dado) { aux = aux->prox; }

        if (aux == l->inicio) {
            no->prox = l->inicio;
            l->inicio->ant = no;
            l->inicio = no;
        } else if (aux == NULL) {
            l->fim->prox = no;
            no->ant = l->fim;
            l->fim = no;
        } else {
            no->prox = aux;
            no->ant = aux->ant;
            aux->ant->prox = no;
            aux->ant = no;
        }
    }
    return 1;
}

/* Função que remove um elemento da lista: */
int removeLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }
    if (l->inicio == NULL) { return 0; }

    Elemento *no = l->inicio;

    while (no != NULL && no->dado != dado) { no = no->prox; }

    if (no == NULL) { return 0; }

    if (no->ant == NULL) { l->inicio = no->prox;
    } else { no->ant->prox = no->prox; }

    if (no->prox == NULL) { l->fim = no->ant;
    } else { no->prox->ant = no->ant; }

    free(no);
    return 1;
}

/* Função que consulta algum elemento da lista */
int consultaLista(Lista *l, int dado) {
    if (l == NULL) { return 0; }
    if (l->inicio == NULL) { return 0; }

    Elemento *no = l->inicio;

    while (no != NULL && no->dado != dado) { no = no->prox; }

    if (no == NULL) { return 0; }

    return 1;
}

/* Função que libera a memória da lista */
void liberaLista(Lista *l) {
    if (l != NULL) {
        Elemento *no;
        while (l->inicio != NULL) {
            no = l->inicio;
            l->inicio = l->inicio->prox;
            free(no);
        }
        free(l);
    }
}

/* Função que verifica se a lista está vazia */
int listaVazia(Lista *l) {
    if (l == NULL) { return 1; }
    if (l->inicio == NULL) { return 1; }
    return 0;
}

/* Função que imprime a lista */
void imprimeLista(Lista *l) {
    if (l == NULL) { return; }
    if (l->inicio == NULL) { return; }

    Elemento *no = l->inicio;

    while (no != NULL) {
        printf("%d ", no->dado);
        no = no->prox;
    }
    printf("\n");
}

/* Função que imprime a lista ao contrário (de trás para frente) */
void imprimeListaContrario(Lista *l) {
    if (l == NULL) { return; }
    if (l->fim == NULL) { return; }

    Elemento *no = l->fim;

    while (no != NULL) {
        printf("%d ", no->dado);
        no = no->ant;
    }
    printf("\n");
}

/* Função que retorna o tamanho da lista */
int tamanhoLista(Lista *l) {
    if (l == NULL) { return 0; }
    if (l->inicio == NULL) { return 0; }

    int tam = 0;
    Elemento *no = l->inicio;

    while (no != NULL) {
        tam++;
        no = no->prox;
    }
    return tam;
}
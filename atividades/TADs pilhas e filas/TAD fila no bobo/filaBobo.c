#include <stdio.h>
#include <stdlib.h>
#include "filaBobo.h"

/* Estrutura da fila */
struct fila {
    struct elemento *inicio;
    struct elemento *fim;
};

/* Estrutura do elemento */
struct elemento {
    int dado;
    struct elemento *prox;
};


/* Função que cria uma fila vazia */
Fila *criaFila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    Elemento *noBobo = (Elemento *) malloc(sizeof(Elemento));
    if (f != NULL) {
        f->inicio = noBobo;
        f->fim = noBobo;
        noBobo->prox = NULL;
    }
    return f;
}

/* Função que insere um elemento na fila:
  caso não exista fila ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereFila(Fila *f, int dado) {
    if (f == NULL) { return 0; }

    Elemento *no = (Elemento *) malloc(sizeof(Elemento));

    if (no == NULL) { return 0; }

    no->dado = dado;
    no->prox = NULL;

    if (f->fim == NULL) { f->inicio = no;
    } else { f->fim->prox = no; }

    f->fim = no;
    return 1;
}

/* Função que remove um elemento da fila: */
int removeFila(Fila *f) {
    if (f == NULL) { return 0; }
    if (f->inicio == NULL) { return 0; }

    Elemento *no = f->inicio;
    f->inicio = f->inicio->prox;

    if (f->inicio == NULL) { f->fim = NULL; }
    free(no);
    return 1;
}

/* Função que consulta o elemento do inicio da fila */
int consultaFila(Fila *f, int *dado) {
    if (f == NULL) { return 0; }
    if (f->inicio == NULL) { return 0; }

    *dado = f->inicio->dado;
    return 1;
}

/* Função que libera a memória da fila */
void liberaFila(Fila *f) {
    if (f != NULL) {
        Elemento *no;
        while (f->inicio != NULL) {
            no = f->inicio;
            f->inicio = f->inicio->prox;
            free(no);
        }
        free(f);
    }
}

/* Função que verifica se a fila está vazia */
int filaVazia(Fila *f) {
    if (f == NULL) { return 1; }
    if (f->inicio == NULL) { return 1; }
    return 0;
}
#include "arvoreBinaria.h"
#include <stdio.h>
#include <stdlib.h>

// Estrutura que define um nó de uma árvore binária
struct NO{
    int info;
    struct NO *esq;
    struct NO *dir;
};


/* vvv Funções que manipulam nós da árvore binária vvv */

// Função que cria um nó de uma árvore binária
struct NO* cria_NO(int info) {
    struct NO* no = (struct NO*) malloc(sizeof(struct NO));
    no->info = info;
    no->esq = NULL;
    no->dir = NULL;
    return no;
}

// Função que insere um elemento em uma árvore binária
int insere_ArvBin(ArvBin* raiz, int info) {
    if(raiz == NULL) { return 0; } // árvore nula

    struct NO* no = cria_NO(info);

    if(*raiz == NULL) { *raiz = no; } // árvore vazia
    else{
        struct NO* atual = *raiz;
        struct NO* ant = NULL;

        while(atual != NULL){
            ant = atual;

            if(info == atual->info) {
                free(no);
                return 0; // elemento já existe
            }
            if(info > atual->info) { atual = atual->dir; }
            else { atual = atual->esq; }
        }
        if(info > ant->info) { ant->dir = no; }
        else { ant->esq = no; }
    }
    return 1;
}

// Função que remove o elemento atual de uma árvore binária
struct NO* remove_atual(struct NO* atual) {
    struct NO *no1, *no2;

    if(atual->esq == NULL) {
        no2 = atual->dir;
        free(atual);
        return no2;
    }

    no1 = atual;
    no2 = atual->esq;

    while(no2->dir != NULL) {
        no1 = no2;
        no2 = no2->dir;
    }

    if(no1 != atual){
        no1->dir = no2->esq;
        no2->esq = atual->esq;
    }

    no2->dir = atual->dir;
    free(atual);

    return no2;
}

// Função que remove um elemento de uma árvore binária
int remove_ArvBin(ArvBin* raiz, int info) {
    if(raiz == NULL) { return 0; }

    struct NO* ant = NULL;
    struct NO* atual = *raiz;

    while(atual != NULL) {
        if(info == atual->info) {
            if(atual == *raiz) { *raiz = remove_atual(atual); }
            else {
                if(ant->dir == atual) { ant->dir = remove_atual(atual); }
                else { ant->esq = remove_atual(atual); }
            }
            return 1;
        }
        ant = atual;

        if(info > atual->info) { atual = atual->dir; }
        else { atual = atual->esq; }
    }
    return 0;
}

/* ^^^ Funções que manipulam nós da árvore binária ^^^ */

/* vvv Funções que manipulam a árvore binária completa vvv */

// Função que cria uma árvore binária vazia
ArvBin* cria_ArvBin() {
    ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));

    if(raiz != NULL) { *raiz = NULL; }
    return raiz;
}

// Função que libera a memória de uma árvore binária
void libera_ArvBin(ArvBin* raiz) {
    if(raiz == NULL) { return; }

    libera_NO(*raiz); // libera cada nó
    free(raiz); // libera a raiz
}

// Função que libera a memória de cada nó de uma árvore binária
void libera_NO(struct NO* no) {
    if(no == NULL) { return; }

    libera_NO(no->esq); // libera a subárvore esquerda
    libera_NO(no->dir); // libera a subárvore direita
    free(no); // libera o nó
    no = NULL;
}

// Função que verifica a altura de uma árvore binária
int altura_ArvBin(ArvBin* raiz) {
    if(raiz == NULL) { return 0; }
    if(*raiz == NULL) { return 0; }

    int alt_esq = altura_ArvBin(&((*raiz)->esq));
    int alt_dir = altura_ArvBin(&((*raiz)->dir));

    if(alt_esq > alt_dir) { return (alt_esq + 1); }
    else { return (alt_dir + 1); }
}

// Função que verifica a quantidade de nós de uma árvore binária
int totalNO_ArvBin(ArvBin* raiz) {
    if(raiz == NULL) { return 0; }
    if(*raiz == NULL) { return 0; }

    int alt_esq = totalNO_ArvBin(&((*raiz)->esq));
    int alt_dir = totalNO_ArvBin(&((*raiz)->dir));

    return (alt_esq + alt_dir + 1);
}

// Função que verifica a quantidade de folhas de uma árvore binária
int folhas_ArvBin(ArvBin* raiz) {
    if(raiz == NULL) { return 0; }
    if(*raiz == NULL) { return 0; }
    if((*raiz)->esq == NULL && (*raiz)->dir == NULL) { return 1; }

    int folhas_esq = folhas_ArvBin(&((*raiz)->esq));
    int folhas_dir = folhas_ArvBin(&((*raiz)->dir));

    return (folhas_esq + folhas_dir);
}

// Função que imprime os elementos de uma árvore binária
void preOrdem_ArvBin(ArvBin* raiz) {
    if(raiz == NULL) { return; }
    if(*raiz != NULL) {
        printf("%d\n", (*raiz)->info);
        preOrdem_ArvBin(&((*raiz)->esq));
        preOrdem_ArvBin(&((*raiz)->dir));
    }
}
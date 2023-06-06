//
// Created by Douglas on 06/06/2023.
//

#ifndef TAD_ARVORE_MAIOR_MENOR_ARVOREBINARIA_H
#define TAD_ARVORE_MAIOR_MENOR_ARVOREBINARIA_H

typedef struct NO* ArvBin;

/* vvv Funções que manipulam nós da árvore binária vvv */

// Função que cria um nó de uma árvore binária
struct NO* cria_NO(int info);

// Função que insere um elemento em uma árvore binária
int insere_ArvBin(ArvBin* raiz, int info);

// Função que remove o elemento atual de uma árvore binária
struct NO* remove_atual(struct NO* atual);

// Função que remove um elemento de uma árvore binária
int remove_ArvBin(ArvBin* raiz, int info);

/* ^^^ Funções que manipulam nós da árvore binária ^^^ */

/* vvv Funções que manipulam a árvore binária completa vvv */

// Função que cria uma árvore binária vazia
ArvBin* cria_ArvBin();

// Função que libera a memória de uma árvore binária
void libera_ArvBin(ArvBin* raiz);

// Função que libera a memória de cada nó de uma árvore binária
void libera_NO(struct NO* no);

// Função que verifica a altura de uma árvore binária
int altura_ArvBin(ArvBin* raiz);

// Função que verifica a quantidade de nós de uma árvore binária
int totalNO_ArvBin(ArvBin* raiz);

// Função que verifica a quantidade de folhas de uma árvore binária
int folhas_ArvBin(ArvBin* raiz);

// Função que imprime os elementos de uma árvore binária
void preOrdem_ArvBin(ArvBin* raiz);

#endif //TAD_ARVORE_MAIOR_MENOR_ARVOREBINARIA_H

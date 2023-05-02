//
// Created by Douglas on 30/04/2023.
//

#ifndef TAD_PILHA_ENCADEADA_PILHA_H
#define TAD_PILHA_ENCADEADA_PILHA_H

/* Estrutura da pilha */
typedef struct pilha Pilha;

/* Estrutura do elemento */
typedef struct elemento Elemento;

/* Função que cria uma pilha vazia */
Pilha *criaPilha();

/* Função que insere um elemento na pilha:
 * caso não exista pilha ou nao consiga criar elemento retorna 0
 * caso consiga retorna 1 */
int inserePilha(Pilha *p, int dado);

/* Função que remove um elemento da pilha:
 * */
int removePilha(Pilha *p);

/* Função que consulta o elemento do topo da pilha */
int consultaPilha(Pilha *p, int *dado);

/* Função que libera a memória da pilha */
void liberaPilha(Pilha *p);

/* Função que verifica se a pilha está vazia */
int pilhaVazia(Pilha *p);

#endif //TAD_PILHA_ENCADEADA_PILHA_H

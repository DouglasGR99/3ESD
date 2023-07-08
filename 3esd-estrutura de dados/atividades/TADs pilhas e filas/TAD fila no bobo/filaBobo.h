//
// Created by Douglas on 04/05/2023.
//

#ifndef TAD_FILA_COM_NO_BOBO_FILABOBO_H
#define TAD_FILA_COM_NO_BOBO_FILABOBO_H

/* Estrutura da fila */
typedef struct fila Fila;

/* Estrutura do elemento */
typedef struct elemento Elemento;


/* Função que cria uma fila vazia */
Fila *criaFila();

/* Função que insere um elemento na fila:
  caso não exista fila ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereFila(Fila *f, int dado);

/* Função que remove um elemento da fila: */
int removeFila(Fila *f);

/* Função que consulta o elemento do inicio da fila */
int consultaFila(Fila *f, int *dado);

/* Função que libera a memória da fila */
void liberaFila(Fila *f);

/* Função que verifica se a fila está vazia */
int filaVazia(Fila *f);

#endif //TAD_FILA_COM_NO_BOBO_FILABOBO_H

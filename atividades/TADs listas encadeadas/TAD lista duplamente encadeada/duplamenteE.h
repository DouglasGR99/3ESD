#ifndef TAD_LISTA_DUPLAMENTE_ENCADEADA_DUPLAMENTEE_H
#define TAD_LISTA_DUPLAMENTE_ENCADEADA_DUPLAMENTEE_H

/* Estrutura da lista */
typedef struct lista Lista;

/* Estrutura do elemento */
typedef struct elemento Elemento;

/* Função que cria uma lista vazia */
Lista *criaLista();

/* Função que insere um elemento na lista:
  caso não exista lista ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereLista(Lista *l, int dado);

/* Função que insere um elemento na lista de forma ordenada:
  caso não exista lista ou nao consiga criar elemento retorna 0
  caso consiga retorna 1 */
int insereListaOrdenada(Lista *l, int dado);

/* Função que remove um elemento da lista: */
int removeLista(Lista *l, int dado);

/* Função que consulta algum elemento da lista */
int consultaLista(Lista *l, int dado);

/* Função que libera a memória da lista */
void liberaLista(Lista *l);

/* Função que verifica se a lista está vazia */
int listaVazia(Lista *l);

/* Função que imprime a lista */
void imprimeLista(Lista *l);

/* Função que imprime a lista ao contrário (de trás para frente) */
void imprimeListaContrario(Lista *l);

/* Função que retorna o tamanho da lista */
int tamanhoLista(Lista *l);

#endif //TAD_LISTA_DUPLAMENTE_ENCADEADA_DUPLAMENTEE_H

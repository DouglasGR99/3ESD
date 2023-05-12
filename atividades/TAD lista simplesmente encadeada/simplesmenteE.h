#ifndef TAD_LISTA_SIMPLESMENTE_ENCADEADA_SIMPLESMENTEE_H
#define TAD_LISTA_SIMPLESMENTE_ENCADEADA_SIMPLESMENTEE_H

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
int liberaLista(Lista *l);

/* Função que verifica se a lista está vazia */
int listaVazia(Lista *l);

/* Função que imprime a lista */
void imprimeLista(Lista *l);

/* Função que retorna o tamanho da lista */
int tamanhoLista(Lista *l);

/* Função que verifica se a lista está ordenada:
  caso não exista lista retorna 0
  caso esteja ordenada retorna 1
  caso contrário retorna 0 */
int listaOrdenada(Lista *l);

/* Função que verifica se a lista está ordenada de forma decrescente:
  caso não exista lista retorna 0
  caso esteja ordenada retorna 1
  caso contrário retorna 0 */
int listaOrdenadaDecrescente(Lista *l);

#endif //TAD_LISTA_SIMPLESMENTE_ENCADEADA_SIMPLESMENTEE_H

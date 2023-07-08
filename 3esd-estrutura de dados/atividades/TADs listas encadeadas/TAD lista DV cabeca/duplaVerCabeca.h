#ifndef TAD_LISTA_DV_CABECA_DUPLAVERCABECA_H
#define TAD_LISTA_DV_CABECA_DUPLAVERCABECA_H

/* Estrutura da lista */
typedef struct lista Lista;

/* Estrutura do elemento */
typedef struct elemento Elemento;

/* vvv FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA vvv */

/* Função que cria uma lista vazia */
Lista *criaLista(int ordenada, int semRepeticao);

/* Função que cria uma sublista */
Lista *criaSublista(Lista *l, int inicio, int fim);

/* Função que libera a memória da lista */
int liberaLista(Lista *l);

/* Função que imprime a lista */
void imprimeLista(Lista *l);

/* Função que retorna o tamanho da lista */
int tamanhoLista(Lista *l);

/* Função que remove elementos da lista 2 que estão na lista 1
    retorna 0 - caso não consiga
    retorna 1 - caso consiga */
int retiraSublista(Lista *l1, Lista *l2);

/* Função que concatena duas listas
    retorna 0 - caso não consiga
    retorna 1 - caso consiga */
int concatenaListas(Lista *l1, Lista *l2);

/* Função que copia uma lista para outra
    retorna 0 - caso não consiga
    retorna 1 - caso consiga */
int copiaLista(Lista *l1, Lista *l2);

/* Função que verifica se uma lista é sublista de outra
    retorna 0 - caso não seja
    retorna 1 - caso seja */
int verificaSublista(Lista *l1, Lista *l2);

/* ^^^ FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA ^^^ */

/* vvv FUNÇÕES QUE MANIPULAM ELEMENTOS DA LISTA vvv */

/* função que verifica se um elemento já existe na lista (necessária para a próxima):
    retorna 0 - caso não exista lista ou nao consiga encontrar elemento
    retorna 1 - caso encontre */
int existeElemento(Lista *l, int dado);

/* Função que insere um elemento na lista:
    retorna 0 - caso não exista lista ou nao consiga criar elemento
    retorna 1 - caso consiga */
int insereElemento(Lista *l, int dado);

/* Função que remove um elemento da lista:
    retorna 0 - caso não exista lista ou nao consiga remover elemento
    retorna 1 - caso consiga */
int removeElemento(Lista *l, int dado);

#endif //TAD_LISTA_DV_CABECA_DUPLAVERCABECA_H
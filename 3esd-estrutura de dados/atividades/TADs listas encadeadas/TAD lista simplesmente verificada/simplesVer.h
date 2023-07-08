#ifndef TAD_LISTA_SIMPLESMENTE_VERIFICADA_SIMPLESVER_H
#define TAD_LISTA_SIMPLESMENTE_VERIFICADA_SIMPLESVER_H

/* Estrutura da lista */
typedef struct lista Lista;

/* Estrutura do elemento */
typedef struct elemento Elemento;

/* vvv FUNÇÕES QUE MANIPULAM ESTRUTURA DA LISTA vvv */

/* Função que cria uma lista vazia */
Lista *criaLista(int ordenada, int semRepeticao);

/* Função que libera a memória da lista */
int liberaLista(Lista *l);

/* Função que retorna o tamanho da lista */
int tamanhoLista(Lista *l);

/* Função que imprime a lista */
void imprimeLista(Lista *l);


/* vvv FUNÇÕES QUE MANIPULAM ELEMENTOS DA LISTA vvv */

/* função que verifica se um elemento já existe na lista (necessária para a próxima):
    retorna 0 - caso não exista lista ou nao consiga encontrar elemento
    retorna 1 - caso encontre */
int existeElemento(Lista *l, int dado);

/* Função que insere um elemento na lista de forma ordenada:
    retorna 0 - caso não exista lista ou nao consiga criar elemento
    retorna 1 - caso consiga */
int insereListaOrdenada(Lista *l, int dado);

/* Função que insere um elemento na lista:
    retorna 0 - caso não exista lista ou nao consiga criar elemento
    retorna 1 - caso consiga */
int insereLista(Lista *l, int dado);

/* Função que remove um elemento da lista:
    retorna 0 - caso não exista lista ou nao consiga remover elemento
    retorna 1 - caso consiga */
int removeLista(Lista *l, int dado);

#endif //TAD_LISTA_SIMPLESMENTE_VERIFICADA_SIMPLESVER_H
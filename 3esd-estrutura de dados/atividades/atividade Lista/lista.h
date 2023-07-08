#ifndef ATIVIDADES_LISTA_H
#define ATIVIDADES_LISTA_H

/* Elementos da lista são acessados através do endereço de um de seus elementos */

/* Tipo noEstrutura de lista*/

typedef struct list Lista;
typedef struct noEstrutura No;

/* Função que cria uma lista vazia */
Lista* list_Cria(int maxNos);

/* Função que insere um noEstrutura no início da lista */
void list_InsereIni(Lista *p, int elem);

/* Função que insere um noEstrutura no fim da lista */
void listInsereFim(Lista *p, int elem);

/* Função que imprime os elementos da lista */
void list_Imprime(Lista *p);

/* Função que libera a memória alocada para a lista */
void list_Libera(Lista *p);

/* Função que insere um noEstrutura na lista de forma ordenada */
void list_InsereOrdenado(Lista *p, int elem);

/* Função que verifica se um elemento está na lista */
No* list_Busca(Lista *p, int elem);

/* Função que remove um noEstrutura da lista */
void list_Remove(Lista *p, int elem);

#endif //ATIVIDADES_LISTA_H

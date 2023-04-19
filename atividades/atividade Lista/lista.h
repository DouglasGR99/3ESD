#ifndef ATIVIDADES_LISTA_H
#define ATIVIDADES_LISTA_H

/* Elementos da lista são acessados através do endereço de um de seus elementos */

/* Tipo elemento de lista*/

typedef struct list Lista;
typedef struct elemento Elem;

/* Função que cria uma lista vazia */
Lista* list_Cria(void);

/* Função que insere um elemento no início da lista */
void list_Insere(Lista *p, int elem);

/* Função que imprime os elementos da lista */
void list_Imprime(Lista *p);

/* Função que libera a memória alocada para a lista */
void list_Libera(Lista *p);

#endif //ATIVIDADES_LISTA_H

#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct list{
    int maxNos; //tamanho maximo da lista
    int listaCheia; //se a lista esta cheia (0 ou 1)
    int quantNos; //quantidade de nos na lista
    int elementosRepet; //se a lista contem elementos repetidos (0 ou 1)
    int estaOrdenada; //se a lista esta ordenada (crescente) (0 ou 1)
    No*prim;
};

struct noEstrutura{
    int valorArmazenado;
    struct noEstrutura *prox;
};

//cria uma lista vazia com tamanho maximo maxNos
Lista* list_Cria(int maxNos)
{
    Lista *p;
    p=(Lista *)malloc(sizeof(Lista));
    p->maxNos=maxNos;
    p->quantNos=0;
    p->elementosRepet=0;
    p->estaOrdenada=0;
    p->prim=NULL;
    return p;
}


void list_InsereIni(Lista *p, int elem) //insere no inicio caso a lista nao esteja cheia
{
    No *novo;
    if(p->quantNos==p->maxNos)
    {
        printf("Lista cheia");
    }
    else
    {
        novo=(No *)malloc(sizeof(No));
        novo->valorArmazenado=elem;
        novo->prox=p->prim;
        p->prim=novo;
        p->quantNos++;
    }
}


void listInsereFim(Lista *p, int elem) //insere no fim caso a lista nao esteja cheia
{
    No *novo;
    if(p->quantNos==p->maxNos)
    {
        printf("Lista cheia");
    }
    else
    {
        novo=(No *)malloc(sizeof(No));
        novo->valorArmazenado=elem;
        novo->prox=NULL;
        if(p->prim==NULL) //se a lista estiver vazia
        {
            p->prim=novo;
        }
        else
        {
            No *aux; //auxiliar para percorrer a lista
            aux=p->prim; //aux aponta para o primeiro noEstrutura
            while(aux->prox!=NULL) //enquanto nao chegar no ultimo noEstrutura
            {
                aux=aux->prox;
            }
            aux->prox=novo;
        }
        p->quantNos++;
    }
}


void list_InsereOrdenado(Lista *p, int elem) //insere ordenado caso a lista nao esteja cheia
{
    No *novo;
    if(p->quantNos==p->maxNos)
    {
        printf("Lista cheia");
    }
    else
    {
        novo=(No *)malloc(sizeof(No));
        novo->valorArmazenado=elem;

        if(p->prim==NULL) //se a lista estiver vazia
        {
            novo->prox=NULL;
            p->prim=novo;
        }
        else
        {
            No *aux; //auxiliar para percorrer a lista
            aux=p->prim;
            if(aux->valorArmazenado>elem) //se o elemento for menor que o primeiro
            {
                novo->prox=aux; //insere no inicio
                p->prim=novo; //atualiza o primeiro
            }
            else
            {
                //enquanto nao chegar no ultimo noEstrutura e o proximo for menor que o elemento
                while(aux->prox!=NULL && aux->prox->valorArmazenado<elem)
                {
                    aux=aux->prox; //aux aponta para o proximo noEstrutura
                }
                novo->prox=aux->prox; //o proximo do novo noEstrutura aponta para o proximo do aux
                aux->prox=novo; //o proximo do aux aponta para o novo noEstrutura
            }
        }
        p->quantNos++;
    }
}


//busca um elemento na lista e retorna o endereco do noEstrutura que contem o elemento
No* list_Busca(Lista *p, int elem)
{
    No *aux;
    aux=p->prim;
    while(aux!=NULL) //enquanto nao chegar no ultimo noEstrutura
    {
        if(aux->valorArmazenado==elem) //se o valor armazenado for igual ao elemento
        {
            return aux;
        }
        aux=aux->prox;
    }
    return NULL; //se nao encontrar o elemento
}


//remove um elemento da lista
void list_Remove(Lista *p, int elem)
{
    No *aux;
    aux=p->prim; //aux aponta para o primeiro noEstrutura
    if(aux->valorArmazenado==elem) //se o primeiro noEstrutura for o elemento
    {
        p->prim=aux->prox; //o primeiro noEstrutura aponta para o proximo
        free(aux);
        p->quantNos--;
    }
    else
    {
        while(aux->prox!=NULL && aux->prox->valorArmazenado!=elem)
        {
            aux=aux->prox;
        }
        if(aux->prox!=NULL) //se o elemento estiver na lista
        {
            No *aux2; //auxiliar para guardar o noEstrutura a ser removido
            aux2=aux->prox; //aux2 aponta para o noEstrutura a ser removido
            aux->prox=aux2->prox; //o proximo do aux aponta para o proximo do aux2
            free(aux2);
            p->quantNos--;
        }
    }
}


void list_Imprime(Lista *p)
{
    No *aux;
    aux=p->prim;
    while(aux!=NULL)
    {
        printf("%d ", aux->valorArmazenado);
        aux=aux->prox;
    }
}


void list_Libera(Lista *p)
{
    No *aux;
    aux=p->prim;
    while(aux!=NULL)
    {
        No *aux2; //auxiliar para guardar o proximo noEstrutura
        aux2=aux->prox; //aux2 aponta para o proximo noEstrutura
        free(aux); //libera o noEstrutura atual
        aux=aux2; //aux aponta para o proximo noEstrutura
    }
    free(p);
}
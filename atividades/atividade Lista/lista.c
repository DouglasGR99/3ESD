#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct list{
    Elem*prim;
};

struct elemento{
    int valorArmazenado;
    struct elemento *prox;
};

Lista* list_Cria(void)
{
    Lista *p;
    p=(Lista *)malloc(sizeof(Lista));
    p->prim=NULL;
    return p;
}

void list_Insere(Lista *p, int elem) //insere no inicio
{
    Elem *novo;
    novo=(Elem *)malloc(sizeof(Elem));
    novo->valorArmazenado=elem;
    novo->prox=p->prim;
    p->prim=novo;
}

void list_InsereFim(Lista *p, int elem)
{
    Elem *novo;
    novo=(Elem *)malloc(sizeof(Elem));
    novo->valorArmazenado=elem;
    novo->prox=NULL;
    if(p->prim==NULL)
    {
        p->prim=novo;
    }
    else
    {
        Elem *aux;
        aux=p->prim;
        while(aux->prox!=NULL)
        {
            aux=aux->prox;
        }
        aux->prox=novo;
    }
}

void list_Imprime(Lista *p)
{
    Elem *aux;
    aux=p->prim;
    while(aux!=NULL)
    {
        printf("%d",aux->valorArmazenado);
        aux=aux->prox;
    }
}

void list_Libera(Lista *p)
{
    Elem *aux;
    while(p->prim!=NULL)
    {
        aux=p->prim;
        p->prim=aux->prox;
        free(aux);
    }
    free(p);
}


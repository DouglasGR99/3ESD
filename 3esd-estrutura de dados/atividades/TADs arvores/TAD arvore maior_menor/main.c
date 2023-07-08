#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){
    ArvBin* raiz = cria_ArvBin();
    int i;

    //insere numeros aleatorios entre 1 e 100 na arvore
    for(i = 0; i < 10; i++) {
        insere_ArvBin(raiz, rand() % 100);
    }

    printf("\nAltura da árvore: %d\n", altura_ArvBin(raiz));
    printf("Quantidade de folhas: %d\n", folhas_ArvBin(raiz));
    printf("Quantidade de nós: %d\n", totalNO_ArvBin(raiz));

    libera_ArvBin(raiz);
    return 0;
}
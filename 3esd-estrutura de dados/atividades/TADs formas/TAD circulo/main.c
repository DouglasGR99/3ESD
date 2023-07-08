#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

void bubbleOrdenaArea(Circulo* circulos[], int n) {
    int i, j;
    Circulo* aux;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (circ_compara(circulos[j], circulos[j + 1]) > 0) {
                aux = circulos[j];
                circulos[j] = circulos[j + 1];
                circulos[j + 1] = aux;
            }
        }
    }
}

typedef struct item Item;
struct item {
    int codigoMaterial;
    int quantidade;
    Item* maiorPrioridade;
    Item* menorPrioridade;
};

typedef struct filial Filial;
struct filial {
    Item* itemCabeca;
    int quantidadeItens;
};

typedef struct setor Setor;
struct setor {
    Item* listaItens[filial1->quantidadeItens + filial2->quantidadeItens];
};





int main(void) {
    //vetor de circulos
    Circulo* circulos[6]; //(a)
    int i = 0;


    //atribuindo valores aos circulos
    while (i<6){
        circulos[i]=circ_cria(rand()%10,rand()%10,rand()%10); //(b)
        i++;
    }


    //exibindo os circulos
    printf("Circulos:\n");
    circ_exibeVetor(circulos,6); //(c)


    //ordenando os circulos
    //bubbleOrdenaArea(circulos,6); //(d antiga)

    //questao 2 extra
    Circulo* cFora; //(d)
    cFora=circ_cria(rand()%10,rand()%10,rand()%10);
    printf("\n\nCirculo fora: ");
    circ_exibe(cFora);
    i = 0;
    while (i<6) {
        if (circ_comparaPosicao(cFora,circulos[i])==1){
            printf("\nO circulo %d eh tangente ao circulo fora",i+1);
        }
        else if (circ_comparaPosicao(cFora,circulos[i])==2){
            printf("\nO circulo %d eh secante ao circulo fora",i+1);
        }
        else{
            printf("\nO circulo %d nao se toca ao circulo fora",i+1);
        }
        i++;
    } //(e)


    /*//exibindo os circulos ordenados
    printf("\n\nOrdenados:\n");
    circ_exibeVetor(circulos,6);*/
    return 0;
}
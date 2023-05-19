#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

void bubbleOrdenaArea(Circulo* circulos[], int n) {
    int i, j;
    Circulo* aux;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - (i + 1); j++) {
            if (circ_compara(circulos[j], circulos[j + 1]) > 0) {
                aux = circulos[j];
                circulos[j] = circulos[j + 1];
                circulos[j + 1] = aux;
            }
        }
    }
}

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
    i=0;
    printf("Circulos:\n");
    while (i<6){
        circ_exibe(circulos[i]); //(c)
        printf(" area: %.2f",circ_area(circulos[i]));
        printf("\n");
        i++;
    }


    //ordenando os circulos
    bubbleOrdenaArea(circulos,5); //(d)


    //exibindo os circulos ordenados
    i=0;
    printf("\n\nOrdenados:\n");
    while (i<6){
        circ_exibe(circulos[i]); //(e)
        printf(" area: %.2f",circ_area(circulos[i]));
        printf("\n");
        i++;
    }
}
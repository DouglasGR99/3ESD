//
// Created by Douglas on 04/05/2023.
//

#include <stdio.h>
#include "filaBobo.h"

int main() {
    Fila *f = criaFila();
    int dado;

    if (filaVazia(f)) { printf("Fila vazia\n");
    } else { printf("Fila nao vazia\n"); }

    //preenchendo a fila
    for (int i = 1; i < 9; ++i) { insereFila(f, i * 5); }

    if (filaVazia(f)) { printf("Fila vazia\n");
    } else { printf("Fila nao vazia\n"); }

    //consultando o inicio e esvasiando a fila
    for (int i = 0; i < 8; ++i) {
        consultaFila(f, &dado);
        printf("Dado do inicio: %d\n", dado);
        removeFila(f);
    }

    if (filaVazia(f)) { printf("Fila vazia\n");
    } else { printf("Fila nao vazia\n"); }

    liberaFila(f);
    return 0;
}
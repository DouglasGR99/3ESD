//
// Created by Douglas on 30/04/2023.
//
#include <stdio.h>
#include "pilha.h"

void main() {
    Pilha *p = criaPilha();
    int dado;

    if (pilhaVazia(p)) { printf("Pilha vazia\n");
    } else { printf("Pilha nao vazia\n"); }

    //preenchendo a pilha
    for (int i = 1; i < 6; ++i) { inserePilha(p, i * 10); }

    if (pilhaVazia(p)) { printf("Pilha vazia\n");
    } else { printf("Pilha nao vazia\n"); }

    //consultando o topo e esvasiando a pilha
    for (int i = 0; i < 5; ++i) {
        consultaPilha(p, &dado);
        printf("Dado do topo: %d\n", dado);
        removePilha(p);
    }

    if (pilhaVazia(p)) { printf("Pilha vazia\n");
    } else { printf("Pilha nao vazia\n"); }

    liberaPilha(p);
}
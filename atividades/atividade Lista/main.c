#include <stdio.h>
#include "lista.h"

int main(void) {
    Lista *p;
    p=list_Cria();
    list_Insere(p, 1);
    list_Insere(p, 2);
    list_Insere(p, 3);
    list_Imprime(p);
    list_Libera(p);
    return 0;
}
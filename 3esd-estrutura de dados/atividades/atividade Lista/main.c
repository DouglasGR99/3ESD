#include <stdio.h>
#include "lista.h"

int main(void) {
    Lista *p;
    int maxNos, opcao, elem;
    printf("Digite o tamanho maximo da lista: ");
    scanf("%d", &maxNos);
    p = list_Cria(maxNos);

    do {
        printf("\nDigite a opcao desejada:\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Inserir ordenado\n");
        printf("4 - Buscar elemento\n");
        printf("5 - Remover elemento\n");
        printf("6 - Imprimir lista\n");
        printf("7 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);
                list_InsereIni(p, elem);
                break;
            case 2:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);
                listInsereFim(p, elem);
                break;
            case 3:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);
                list_InsereOrdenado(p, elem);
                break;
            case 4:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elem);
                if (list_Busca(p, elem)) {
                    printf("Elemento encontrado!\n");
                } else {
                    printf("Elemento nao encontrado!\n");
                }
                break;
            case 5:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elem);
                list_Remove(p, elem);
                break;
            case 6:
                printf("Lista: ");
                list_Imprime(p);
                break;
            case 7:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 7);
    list_Libera(p);
    return 0;
}
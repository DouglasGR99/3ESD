#include <stdio.h>
#include "simplesVer.h"

int mostraMenu();

int main() {
    int dado, opc = 1, ordenada, semRepeticao;
    Lista *l;
    printf("Deseja criar uma lista ordenada (1) ou não ordenada (0)? ");
    scanf("%d", &ordenada);
    printf("Deseja criar uma lista com repetição (0) ou sem repetição (1)? ");
    scanf("%d", &semRepeticao);
    l = criaLista(ordenada, semRepeticao);
    do {
        opc = mostraMenu();
        switch (opc) {
            case 1:
                printf("Digite o dado a ser inserido: ");
                scanf("%d", &dado);
                if (insereLista(l, dado)) { printf("Dado inserido com sucesso!\n");
                } else { printf("Erro ao inserir dado!\n"); }
                break;
            case 2:
                printf("Digite o dado a ser removido: ");
                scanf("%d", &dado);
                if (removeLista(l, dado)) { printf("Dado removido com sucesso!\n");
                } else { printf("Erro ao remover dado!\n"); }
                break;
            case 3:
                printf("Digite o dado a ser consultado: ");
                scanf("%d", &dado);
                if (consultaLista(l, dado)) { printf("Dado encontrado!\n");
                } else { printf("Dado nao encontrado!\n"); }
                break;
            case 4:
                imprimeLista(l);
                break;
            case 5:
                printf("Tamanho da lista: %d\n", tamanhoLista(l));
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while(opc != 0);
    liberaLista(l);
    return 0;
}

int mostraMenu() {
    int opc;
    printf("1 - Inserir\n");
    printf("2 - Remover\n");
    printf("3 - Consultar\n");
    printf("4 - Imprimir\n");
    printf("5 - Tamanho da lista\n");
    printf("0 - Sair\n");
    scanf("%d", &opc);
    return opc;
}
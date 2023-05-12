#include <stdio.h>
#include "simplesmenteE.h"

int mostraMenu();

int main() {
    Lista *l = criaLista();
    int dado, opc = 1;
    while(opc != 0) {
        opc = mostraMenu();
        switch (opc) {
            case 1:
                printf("Digite o dado a ser inserido: ");
                scanf("%d", &dado);
                if (insereLista(l, dado)) { printf("Dado inserido com sucesso!\n");
                } else { printf("Erro ao inserir dado!\n"); }
                break;
            case 2:
                printf("Digite o dado a ser inserido: ");
                scanf("%d", &dado);
                if (insereListaOrdenada(l, dado)) { printf("Dado inserido com sucesso!\n");
                } else { printf("Erro ao inserir dado!\n"); }
                break;
            case 3:
                printf("Digite o dado a ser removido: ");
                scanf("%d", &dado);
                if (removeLista(l, dado)) { printf("Dado removido com sucesso!\n");
                } else { printf("Erro ao remover dado!\n"); }
                break;
            case 4:
                printf("Digite o dado a ser consultado: ");
                scanf("%d", &dado);
                if (consultaLista(l, dado)) { printf("Dado encontrado!\n");
                } else { printf("Dado nao encontrado!\n"); }
                break;
            case 5:
                imprimeLista(l);
                break;
            case 6:
                if (listaVazia(l)) { printf("Lista vazia!\n");
                } else { printf("Lista nao é vazia!\n"); }
                break;
            case 7:
                printf("Tamanho da lista: %d\n", tamanhoLista(l));
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    liberaLista(l);
    return 0;
}

int mostraMenu() {
    int opc;
    printf("1 - Inserir\n");
    printf("2 - Inserir ordenado\n");
    printf("3 - Remover\n");
    printf("4 - Consultar\n");
    printf("5 - Imprimir\n");
    printf("6 - Verificar se a lista esta vazia\n");
    printf("7 - Tamanho da lista\n");
    printf("0 - Sair\n");
    scanf("%d", &opc);
    return opc;
}
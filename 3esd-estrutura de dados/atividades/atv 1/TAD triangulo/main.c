/*
        Obter as coordenadas dos pontos
        calc perim a partir dos ptos
        exibir perim bonitinho

        Mostre para cada uma das pessoas (total 4)
        seu nome , as coordenadas e perímetro de seu triângulo,
        classificados crescentemente pelo perímetro

  Altere o programa da atividade 1 para struct  e com o TAD    ponto    para as
  coordenadas ( vetor de pontos)

  altere o programa da atividade 1 para usar o TAD Triangulo
*/

#include "triangulo.h"
#include <stdio.h>

// evitando ter que alterar tudo caso mude o numero de triangulos
#define TAM 4

int main(void) {
  Triangulo *triangulos[TAM];

  //é possivel solicitar, mas preferi trabalhar com valores prontos.
  triangulos[0] = tri_cria("rato", 0, 3, 2, 3, 0, 0);
  triangulos[1] = tri_cria("doug", 2, 1, 2, 3, 0, 1);
  triangulos[2] = tri_cria("sapo", 3, 0, 2, 3, 0, 1);
  triangulos[3] = tri_cria("mico", 3, 3, 3, 2, 2, 2);
  // a ordem correta de impressao sera mico, doug, rato, sapo.

    //exibindo os triangulos
    tri_bubbleSort(triangulos, TAM);

    //exibindo os triangulos
    tri_exibeVetor(triangulos, TAM);

    //liberando a memoria
    for (int i = 0; i < TAM; i++) {
        tri_libera(triangulos[i]);
    }
  return 0;
}
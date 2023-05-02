/*
	Obter as coordenadas dos pontos
	calc perim a partir dos ptos
	exibir perim bonitinho

	Mostre para cada uma das pessoas (total 4)
	seu nome , a  s coordenadas e perímetro de seu triângulo,
	classificados crescentemente pelo perímetro
 
  Altere o programa da atividade 1 para struct  e com o TAD ponto    para as coordenadas ( vetor de pontos)
*/

#include<stdio.h>
#include "ponto.h"


struct Triangulo {
    Ponto *pontos[3];
    char nome[10];
    float perimetro;
};

void ordenaTriangulos(struct Triangulo* triangulos, int tamanho);
float calcPerimetro(struct Triangulo t);
void exibeResposta(struct Triangulo t);

int main(void)
{
    struct Triangulo triangulos[4];
    float x, y;

    //criar
    for (int i = 0; i < 4; i++) {
        printf("\nNome da %dª pessoa?\n", i + 1);
        scanf("%s", triangulos[i].nome);
        for (int j = 0; j < 3; j++) {
            printf("Digite a coordenada x%d: ", j + 1);
            scanf("%f", &x);
            printf("Digite a coordenada y%d: ", j + 1);
            scanf("%f", &y);
            triangulos[i].pontos[j] = pto_cria(x, y);
        }
        triangulos[i].perimetro = calcPerimetro(triangulos[i]);
    }

    //ordenar
    ordenaTriangulos(triangulos, 4);

    //exibir
    for (int i = 0; i < 4; i++) {
        printf("\n\n");
        exibeResposta(triangulos[i]);
    }

    return 0;
}


void ordenaTriangulos(struct Triangulo* triangulos, int tamanho) {
    int i, j;
    for (i = 1; i < tamanho; i++) {
        for (j = 0; j < tamanho - i; j++) {
            if (triangulos[j].perimetro > triangulos[j + 1].perimetro) {
                struct Triangulo tmp = triangulos[j];
                triangulos[j] = triangulos[j + 1];
                triangulos[j + 1] = tmp;
            }
        }
    }
}

float calcPerimetro(struct Triangulo t) {
    float perimetro = 0;
    for (int i = 0; i < 3; i++) {
        perimetro += pto_distancia(t.pontos[i], t.pontos[(i + 1) % 3]);
    }
    return perimetro;
}

void exibeResposta(struct Triangulo t) {
    int i;
    printf("\n %s - Perímetro: %.1f", t.nome, t.perimetro);
    printf("\nCoordenadas: ");
    for (i = 0; i < 3; i++) {
        pto_exibe(t.pontos[i]);
    }
}
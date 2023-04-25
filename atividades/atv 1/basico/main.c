/*
	Obter as coordenadas dos pontos
	calc perim a partir dos ptos
	exibir perim bonitinho

	Mostre para cada uma das pessoas (total 4)
	seu nome , as coordenadas e perímetro de seu triângulo,
	classificados crescentemente pelo perímetro
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

struct Ponto {
    int x;
    int y;
};

struct Triangulo {
    struct Ponto pontos[3];
    char nome[10];
    float perimetro;
};
void ordenaTriangulos(struct Triangulo* triangulos, int tamanho);
float calcDist(struct Ponto p1, struct Ponto p2);
float calcPerimetro(struct Triangulo t);
void desenhaMoldura(void);
void exibeResposta(struct Triangulo t);

int main(void)
{
    struct Triangulo triangulos[4];

    //criar
    for (int i = 0; i < 4; i++) {
        printf("\nNome da %dª pessoa?\n", i + 1);
        scanf("%s", triangulos[i].nome);
        for (int j = 0; j < 3; j++) {
            printf("Digite a coordenada x%d: ", j + 1);
            scanf("%d", &triangulos[i].pontos[j].x);
            printf("Digite a coordenada y%d: ", j + 1);
            scanf("%d", &triangulos[i].pontos[j].y);
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

float calcDist(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow((p1.x - p2.x), 2.0) + pow((p1.y - p2.y), 2.0));
}

float calcPerimetro(struct Triangulo t) {
    float perim;
    struct Ponto p1 = t.pontos[0];
    struct Ponto p2 = t.pontos[1];
    struct Ponto p3 = t.pontos[2];
    float dAB = calcDist(p1, p2);
    float dAC = calcDist(p1, p3);
    float dBC = calcDist(p2, p3);
    perim = dAB + dAC + dBC;
    return perim;
}

void exibeResposta(struct Triangulo t) {
    int i;
    printf("\n %s - Perímetro: %.1f", t.nome, t.perimetro);
    printf("\nCoordenadas: ");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d) ", t.pontos[i].x, t.pontos[i].y);
    }
}
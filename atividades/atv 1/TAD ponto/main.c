/*
	Obter as coordenadas dos pontos
	calc perim a partir dos ptos
	exibir perim bonitinho

	Mostre para cada uma das pessoas (total 4)
	seu nome , as coordenadas e perímetro de seu triângulo,
	classificados crescentemente pelo perímetro
 
  Altere o programa da atividade 1 para struct  e com o TAD ponto    para as coordenadas ( vetor de pontos)
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "ponto.h"

typedef struct {
    char nome[10];
    Ponto *A,*B,*C;
    float perimetro;
} Triangulo;

float calcDist(int x1, int y1, int x2, int y2);
float calcPerimetro(Triangulo t);
void desenhaMoldura(void);
void exibeResposta(Triangulo t);
void exibeCoordenadas(Triangulo t);

int main(void)
{
    Triangulo triangulos[4];
    int i, j;
    float coordenadas[6];

    for(i=0; i<4; i++)
    {
        printf("\nNome da %dª pessoa?\n", i+1);
        scanf("%s", triangulos[i].nome);
        for (j=0; j<6; j++)
        {
            printf("Digite a coordenada %d: ", j+1);
            scanf("%f", &coordenadas[j]);
        }
        triangulos[i].A = pto_cria(coordenadas[0],coordenadas[1]);
        triangulos[i].B = pto_cria(coordenadas[2],coordenadas[3]);
        triangulos[i].C = pto_cria(coordenadas[4],coordenadas[5]);
        triangulos[i].perimetro = calcPerimetro(triangulos[i]);
    }

    Triangulo triangulosOrg[4];
    memcpy(triangulosOrg, triangulos, sizeof(Triangulo) * 4);
    for(i=1;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(triangulosOrg[j].perimetro > triangulosOrg[j+1].perimetro)
            {
                Triangulo salvo = triangulosOrg[j];
                triangulosOrg[j] = triangulosOrg[j+1];
                triangulosOrg[j+1] = salvo;
            }
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(triangulos[j].perimetro == triangulosOrg[i].perimetro)
            {
                desenhaMoldura();
                exibeResposta(triangulos[j]);
                exibeCoordenadas(triangulos[j]);
                desenhaMoldura();
            }
        }
    }
    return 0;
}

float calcDist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1-x2),2.0) + pow((y1-y2),2.0));
}

float calcPerimetro(Triangulo t)
{
    float dAB = pto_distancia(t.A,t.B);
    float dAC = pto_distancia(t.B,t.C);
    float dBC = pto_distancia(t.A,t.C);
    float perim = dAB + dAC + dBC;
    return perim;
}


void exibeResposta(Triangulo t)
{
	printf("\n %s - Perímetro: %.1f",t.nome,t.perimetro);
	return;
}


void exibeCoordenadas(Triangulo t)
{
	int i,cont=1;
	printf("/ Coordenadas:");
	pto_exibe(t.A);
  pto_exibe(t.B);
  pto_exibe(t.C);
	return;
}


void desenhaMoldura(void)
{
	printf("\n==============================");
	printf("\n==============================");
	return;
}
/*
	Obter as coordenadas dos pontos
	calc perim a partir dos ptos
	exibir perim bonitinho

	Mostre para cada uma das pessoas (total 4)
	seu nome , as coordenadas e perímetro de seu triângulo,
	classificados crescentemente pelo perímetro
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

float calcDist(int x1,int y1, int x2, int y2);
float calcPerimetro(int linha[]);
void desenhaMoldura(void);
void exibeResposta(char nome[],float perim);
void exibeCoordenadas(int coord[]);

int main(void)
{
	int mCoordenadas[4][6];//coordenadas x e y de cada ponto do triangulo
	char  vNomes[4][10];//nome de cada pessoa
	float vPerim[4];//valor do perimetro
	float vPerimOrg[4];
	int i,j,tam=4;
	float salvo;
	/*
		o vetor de perimetros organizados foi criado para
		serem comparados sem mudar as posicoes de todos os
		vetores e matrizes, agilizando e barateando o codigo
	*/


	for(i=0;i<tam;i++)
	{
		printf("\nNome da %dª pessoa?\n",i+1);
		scanf("%s", vNomes[i]); // scanf("%s", vNomes+i)
		// obter as coordenadas dos pontos da pessoa i
		for (j=0;j<6;j++)
		{
			printf("Digite a coordenada %d: ",j+1);
			scanf("%d", &mCoordenadas[i][j]);
		}
		vPerim[i]=calcPerimetro(mCoordenadas[i]);
	}//recebendo os valores
	
	for(i=0;i<tam;i++)
	{
		vPerimOrg[i]=vPerim[i];
	}//copiando vetor desorganizado
	
	for(i=1;i<tam;i++)
	{
		for(j=0;j<tam-i;j++)
		{
			if(vPerimOrg[j]>vPerimOrg[j+1])
			{
				salvo = vPerimOrg[j];
				vPerimOrg[j] = vPerimOrg[j+1];
				vPerimOrg[j+1] = salvo;
			}
		}
	}//organizando vetor ordenado
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(vPerim[j]==vPerimOrg[i])
			{
				desenhaMoldura();
				exibeResposta(vNomes[j],vPerim[j]);
				exibeCoordenadas(mCoordenadas[j]);
				desenhaMoldura();
			}//ao percorrer o ordenado, busca e printa o desordenado
		}
	}//exibindo as coordenadas e perimetro de cada pessoa
	return 0;
}


float calcDist(int x1,int y1, int x2, int y2)
{
	 return sqrt(pow((x1-x2),2.0) +pow((y1-y2),2.0));
}


float calcPerimetro(int linha[])
{
	float perim;
	float dAB=calcDist(linha[0],linha[1],linha[2],linha[3]);
	float dAC=calcDist(linha[0],linha[1],linha[4],linha[5]);
	float dBC=calcDist(linha[2],linha[3],linha[4],linha[5]);
	perim= dAB+dAC+dBC;
	return perim;
}


void exibeResposta(char nome[],float perim)
{
	printf("\n %s - Perímetro: %.1f",nome,perim);
	return;
}


void exibeCoordenadas(int coord[])
{
	int i,cont=1;
	printf("/ Coordenadas:");
	for(i=0;i<6;i++)
	{
		if(i%2==0)
		{
			printf(" x%d: %d",cont,coord[i]);
		}
		else
		{
			printf(" y%d: %d /",cont,coord[i]);
			cont++;
		}
	}
	return;
}


void desenhaMoldura(void)
{
	printf("\n==============================");
	printf("\n==============================");
	return;
}

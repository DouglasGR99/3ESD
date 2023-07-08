/*
	FAETERJ-Rio
	FPR - Manhã - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exercícios VI (Matrizes):
	
	QUESTÃO 01:
	Faça uma função que, dada uma matriz M8×5 de reais, gere a 
	matriz Mt, sua transposta.
*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define L 8
#define C 5

//declaração de protótipos
void matrizTransposta (float m[L][C], float mt[C][L]);

void exibir (float m[L][C]);
void exibirTransposta (float m[C][L]);
void preencherMatriz (float m[L][C]);

//main
void main ()
{
	//declaração de variáveis
	float matriz[L][C], transposta[C][L];
	
	//preenchendo a matriz original
	preencherMatriz (matriz);
	
	//exibindo a matriz original
	exibir (matriz);
	
	//chamando a função
	matrizTransposta (matriz, transposta);
	
	//exibindo a matriz transposta
	exibirTransposta (transposta);	
}

//implementação das funções
void matrizTransposta (float m[L][C], float mt[C][L])
{
	//declaração de variáveis
	int i, j;
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			mt[j][i] = m[i][j];
		}
	}
	
}

void exibir (float m[L][C])
{
	//declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

void exibirTransposta (float m[C][L])
{	
	//declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz transposta:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<C;i++)
	{
		//varrendo as colunas
		for (j=0;j<L;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

void preencherMatriz (float m[L][C])
{
	//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
		}
	}
}

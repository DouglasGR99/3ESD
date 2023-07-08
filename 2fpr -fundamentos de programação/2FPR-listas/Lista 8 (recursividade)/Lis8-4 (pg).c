/*
	
	Quest�o 04: Pede-se a implementa��o de uma
	fun��o recursiva que exiba os n primeiros
	termos de uma PG (Progress�o Geom�trica),
	onde a1 � o seu primeiro termo e q a raz�o.
	
	Observa��o: uma PG consiste em uma
	sequ�ncia de valores, iniciadas pelo valor a1. Os
	demais elementos s�o definidos como o
	anterior multiplicado pela raz�o.

*/
#include <stdio.h>

int pg(int n,int a1,int q);

void main()
{
	int n,a1,q;
	printf("Insira o primeiro numero da pg: \n");
	scanf("%d",&a1);
	printf("Insira a razao da pg: \n");
	scanf("%d",&q);
	printf("Insira quantos numeros da pg: \n");
	scanf("%d",&n);
	printf("\n");
	pg(n,a1,q);
}


int pg(int n,int a1,int q)
{

	if(n>0)
	{
		printf(" %d",a1);
		a1=a1*q;
		pg((n-1),a1,q);
		return a1;
	}
}

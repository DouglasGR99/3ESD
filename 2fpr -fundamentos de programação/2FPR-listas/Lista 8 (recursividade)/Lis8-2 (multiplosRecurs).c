/*

	Quest�o 02: Desenvolver uma fun��o recursiva
	que exiba todos os m�ltiplos do n�mero N,
	inferiores ou iguais ao valor V.

*/
#include <stdio.h>

void mult(int n,int v);

void main()
{
	int n, v;
	printf("INsira n e v: \n");
	scanf("%d%d",&n,&v);
	mult(n,v);
}


void mult(int n,int v)
{
	if(v>0)
	{
		mult(n,(v-1));
		if(v%n==0)
		{
			printf("\n%d eh multiplo",v);
		}
	}
}

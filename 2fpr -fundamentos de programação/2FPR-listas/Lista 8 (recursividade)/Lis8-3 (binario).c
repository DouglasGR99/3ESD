
/*

	Quest�o 03: Fazer uma fun��o recursiva que,
	dado um n�mero inteiro N, exiba o mesmo na
	base 2 (bin�ria).

*/
#include <stdio.h>

void bin(int n);

void main()
{
	int n;
	printf("Insira n para formar binario: \n");
	scanf("%d",&n);
	bin(n);
}


void bin(int n)
{
	if(n<=1)
	{
		printf("%d",n);
	}
	else
	{
		bin((n/2));
		if(n%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}

	}
}

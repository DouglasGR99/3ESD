/*
<<<<<<< HEAD
<<<<<<< HEAD
	QUEST�O 03:
	Desenvolver uma fun��o que calcule o n-�simo
	termo da sequ�ncia de Fibonacci.
=======
=======
>>>>>>> efe64f14a34f4e7aea65e25eab4c892001ad3739

	QUEST�O 03:
	Desenvolver uma fun��o que calcule o n-�simo
	termo da sequ�ncia de Fibonacci.

<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> efe64f14a34f4e7aea65e25eab4c892001ad3739
*/

#include <stdio.h>

int fibonacci(int n);

void main()
{
	int n;
	printf("Insira o termo:\n");
	scanf("%d",&n);
	printf("\nO N-esimo termo e %d.",fibonacci(n));
}

int fibonacci(int n)
{
	int i,j=0,k=1,l=0;
	for(i=0;i<=n;i++)
	{
		
		l=k;
		k=j;
		j=k+l;
	
	}
	return l;
}

/*
	
	Quest�o 04:
	Desenvolver uma fun��o que remova de uma
	string s os caracteres compreendidos entre as
	posi��es p1 e p2.
	Caso p1 ou p2 seja uma posi��o inv�lida, a
	fun��o dever� retornar o valor 0 e a remo��o de
	caracteres solicitada n�o ser� realizada; caso
	contr�rio, dever� retornar 1 e proceder com o
	que foi pedido.

*/

#include <stdio.h>
#include <string.h>
int recorte(char s[],int p1,int p2);

void main()
{
	char s[30];
	int p1,p2;
	printf("\nInsira a palavra: ");
	fflush(stdin);
	gets(s);
	printf("\nInsira p1 e p2: ");
	scanf("%d%d",&p1,&p2);
	
	printf("\n o retorno e %d",recorte(s,p1,p2));
	printf("\n%s",s);
}

int recorte(char s[],int p1,int p2)
{
	int i,j;
	
	j=(p2-p1)-1;
	
	if(((p1||p2)<0)||(p1>p2)||((p1||p2)>strlen(s)))
	{
		return 0;
	}
	for(i=(p1+1);i<=strlen(s);i++)
	{
		s[i]=s[(i+j)];
	}
	s[i]=('\0');
	return 1;
}

	/*
	
	Quest�o 03:
	Desenvolver uma fun��o que, dada uma string
	s, crie uma substring que inicie na posi��o p de
	s e contenha n caracteres.
	Observa��es: se p e/ou n forem inv�lidos, a
	substring ser� vazia; ii) se s n�o possuir n
	caracteres al�m de p, a substring a ser criada
	come�ar� em p e terminar� no final de s.

*/

#include <stdio.h>
#include <string.h>

void strEdit(char s[],int p, int n,char s2[]);

void main()
{
	int p,n;
	char s[30],s2[30];
	printf("\nInsira a palavra: ");
	fflush(stdin);
	gets(s);
	printf("\nInsira a posicao de inicio: ");
	scanf("%d",&p);
	printf("\nInsira quantas letras: ");
	scanf("%d",&n);
	
	strEdit(s,p,n,s2);
	printf("%s",s2);
}

void strEdit(char s[],int p, int n,char s2[])
{
	int i,j;
	
	if((p>=0)&&(n>0)&&(p<=strlen(s)))
	{
		for(i=p,j=0;i<(n+p);i++,j++)
		{ 
			s2[j]=s[i];
		}
	}
	else
	{
		s2[0]='\0';
		printf("\ns2 esta vazio.");
	}

	
}

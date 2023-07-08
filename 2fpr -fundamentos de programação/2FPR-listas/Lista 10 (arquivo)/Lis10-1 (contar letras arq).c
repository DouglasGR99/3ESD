/*
	FAETERJ-Rio
	FPR - Manh� - 2022/2
	Data: 27/10/2022
	
	Lista de Exerc�cios X (Arquivos)
	
	Quest�o 03:
	Desenvolver uma fun��o que, dado um arquivo texto, verifique 
	o n�mero de letras existentes no mesmo (entendendo que no 
	arquivo podem existir letras, algarismos e s�mbolos).
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int numeroLetras (char nomeArq[]);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArq[20];
	int quant;
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo a ser lido: ");
	fflush (stdin);
	gets (nomeArq);

	//chamando a fun��o
	quant = numeroLetras (nomeArq);
	
	//testando o retorno da fun��o
	if (quant == -1)
	{
		printf ("\n\nErro na abertura do arquivo!");
	}
	else
	{
		printf ("\n\nForam encontradas %d letras no arquivo %s.", quant, nomeArq);
	}
}

//implementa��o das fun��es
int numeroLetras (char nomeArq[])
{
	//declara��o de vari�veis
	FILE *arq;		
	char caracter;
	int cont = 0;
		
	//abrindo o arquivo
	arq = fopen (nomeArq, "r");
	
	//testando se houve falha na abertura
	//if (arq == NULL)
	if (!arq)
	{
		return -1;
	}
	else
	{
		//lendo os elementos do arquivo
		while (fscanf (arq, "%c", &caracter) != EOF)    //EOF - End Of File
		{
			//verificando se o caracter lido � uma letra
			if ((toupper(caracter) >= 'A') && (toupper(caracter) <= 'Z')) 
			{
				cont++;
			}
		}
		
		//fechar o arquivo
		fclose (arq);
				
		//retornando a quantidade de caracteres do arquivo
		return cont;
	}
}

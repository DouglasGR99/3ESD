#include<stdio.h>
int main()
{
		//Cachorros vs gatos
	int cachorros,gatos,podercanino;
	printf("Ocorrera uma guerra entre caes e gatos, os caes sao duas vezes mais fortes que os gatos, declare quem vencera a guerra!");
	printf("De um valor que represente os caes: ");
	scanf("%d",&cachorros);
	printf("De um valor que represente os gatos: ");
	scanf("%d",&gatos);
	printf("O pau quebra.");
	podercanino=cachorros*2;
	if(podercanino>gatos)
	{printf("Os caes sao imbativeis!");
	}
	else
	{
		if(podercanino==gatos)
		{printf("Por incrivel que pareca, deu empate.");
		}
		else
		{printf("A vitoria pertence aos gatos!");
		}
	}
}

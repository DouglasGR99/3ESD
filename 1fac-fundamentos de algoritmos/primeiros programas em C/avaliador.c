#include <stdio.h>
void main( )
{
	//Calculadora de media escolar
	//variaveis
	float av1, av2, media;
	//pedindo as notas
	printf("entre com a nota da av1;");
	scanf("%f",&av1);
	printf("entre com a nota da av2: ");
	scanf("%f",&av2);
	/*printf("entre com as duas notas:");
	scanf("%f %f",&av1,&av2);*/
	//calculando media
	media=(av1+av2)/2;
	printf("sua media e 
	%f\n",media);
	if(media>=6)
	{
	printf("aprovado");
	}
	else
	{
		if(media<4)
		{printf("reprovado");
		}
		else
		{printf("em avf");
		}
	}
}

#include<stdio.h>
int main(){
	
	//declarou eles ja ganhou um ponto cmg
	int numero, primeiro;
	
	//lembra do & no scanf
	printf("insira um numero, vou contar do 1 ate ele: ");
	scanf("%d", &numero);
	
	//o numero que vai ser contado precisa ser declarado, pra ali em baixo vc ir somando
	primeiro = 1;
	
	// while = enquanto, enquanto o que vai ser somado nao chegar no seu numero, ele nao para
	while(primeiro <= numero)
	{
		printf(" %d", primeiro);
		primeiro = primeiro + 1;
	}
	//eeeeee
}





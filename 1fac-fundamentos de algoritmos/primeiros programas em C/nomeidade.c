#include <stdio.h>
int main(){
	char nome[99];
	int idade;
	printf("insira seu nome: ");
	scanf("%s", &nome);
	printf("\n agora insira sua idade: ");
	scanf("%d",&idade);
	if (idade<=18){
		printf("Parabens %s, voce tem muitos anos pela frente",nome);
	}
	else{
		if(18< idade && idade<=64){
			printf("Parabens %s, voce ainda tem tempo",nome);
		}
		else{
			printf("Lamentamos muito, %s",nome);
		}
	}
	
	
}

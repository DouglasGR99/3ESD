//dicas C
//operadores ternários 3
#include<stdio.h>
int ifelse(int media){
	if(media >= 6){
		printf("aprovado");
	}else{
		if(media < 4){
			printf("reprovado");
		}else{
			printf("em avf");
		}
	}
}

int operador(int media){
	printf((media>=6)?"aprovado":(media<4)?"reprovado":"avf");
}

//main
void main(){
	int num;
	printf("insira sua media: ");
	scanf("%d", &num);
	operador(num);
}

//dicas C
//operadores ternários 
#include<stdio.h>
int ifelse(int a){
	if(a % 2 == 0){
		printf("par");
	}else{
		printf("impar");
	}
}

int operador(int a){
	printf((a % 2 == 0)?"par":"impar");
}

//main
void main(){
	int num;
	printf("insira um numero para ver se e par: ");
	scanf("%d", &num);
	operador(num);
}

//dicas C
//operadores ternários
#include<stdio.h>
int ifelse(int a, int b){
	int menor;
	if(a < b){
		menor = a;
	}else{
		menor = b;
	}
	return menor;
}

//versao 1
int operador(int a, int b){
	int menor;
	menor = (a < b)? a : b;
	return menor;
}

//versao 2
int opera2(int a, int b){
	return (a < b)? a : b;
}

//main
void main(){
	int num1, num2;
	printf("insira dois numeros diferentes: ");
	scanf("%d%d", &num1, &num2);
	printf("\n%d e o menor", opera2(num1,num2));
}

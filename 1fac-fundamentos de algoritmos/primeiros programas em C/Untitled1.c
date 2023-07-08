#include <stdio.h>
int main(){
	
	/*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/
	int n, y, y2;
	printf("insira n: \n");
	scanf("%d", &n);
	printf("insira y: \n");
	scanf("%d", &y);
	do{
		printf("%d ",y2);
		y2 = y2 + y;
	}while(y2 < n);
}

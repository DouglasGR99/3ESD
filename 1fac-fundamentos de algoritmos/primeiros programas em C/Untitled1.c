#include <stdio.h>
int main(){
	
	/*Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio.*/
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

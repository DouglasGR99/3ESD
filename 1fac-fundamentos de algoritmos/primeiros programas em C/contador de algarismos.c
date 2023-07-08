#include <stdio.h>
int main(){
	
	int num, qtd = 1;
	printf("insira um numero para contar algaritmos: \n");
	scanf("%d", &num);
	/*
	do{
	num = num / 10;
		qtd ++;
	}while((num / 10 ) > 0);
	*/
	while(num / 10 > 0){
		num = num / 10;
		qtd ++;
	}
	printf("%.2d algarismos \n", qtd);
}






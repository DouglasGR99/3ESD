#include<stdio.h>
//Atividade 4 AV1 FAC
/*
Fazer uma função que permaneça lendo
números reais até que o usuário forneça o valor
-1. Ao final, retornar a quantidade de valores
lidos e o maior deles.
*/
//O -1 não foi considerado na contagem

void contador(int *quant,float *maiorNum );

void main(){
	int quant;
	float maiorNum;
	printf("insira numeros e quando estiver pronto insira '-1':\n");
	contador(&quant,&maiorNum);
	printf("%d numero(s) inserido(s), e o maior deles foi %.2f.",quant,maiorNum );
}



void contador(int *quant,float *maiorNum ){
	int q;
	float num, m;
	m = q = 0;
	while(num >= 0 || num <=(-2)){
		scanf("%f",&num);
		if(num >= m){
			m = num;
		}else{
			m = m;
		}
		q++;
	}
	q--;
	*quant = q;
	*maiorNum = m;
}

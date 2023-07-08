#include<stdio.h>
//Atividade 3 AV1 FAC
//Fazer leitor que determina quantos algarismos tem um numero

int leitor(int a);

int main(){
	int n;
	printf("Insira um valor para ter seus algarismos calculados:\n");
	scanf("%d",&n);
	printf("%d algarismo(s)",leitor(n));
}

int leitor(int a){
	int alg = 0;
	while(a!=0){
		a=a/10;
		alg++;
	}
	return alg;
}

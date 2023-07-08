#include<stdio.h>
//atividade 2 AV1
//S = N - (N-1)/2! + (N-2)/3! - (N-3)/4! + (N-4)/5! - ... 1/N!
/*
Como nao consegui imaginar um metodo para alternar as operacoes, 
calculei separadamente as que serao somadas e subtraidas, juntando
as duas no final.
*/

int fatorial(int n);
//Essa junta os que serao somados:
float soma(float n);
//Essa, os subtraidos:
float sub(float n);
//Essa o resultado final:
float operacao(float n);

int main(){
	float n;
	printf("insira n:");
	scanf("%f",&n);
	operacao(n);
}


int fatorial(int n){
	int fat;
	for(fat = 1;n > 1;n-- ){
		fat = fat * n;
	}
	return fat;
}

float soma(float n){
	int i, fat;
	float res, j = n, somat = 0;
//j e o numero a ser dividido, res o resultado individual
	for(i = 1; i<= n; i++){
		fat = fatorial(i); 
		res = j / fat;
		somat = somat + res;
		i++;
		j = j - 2;
	}
	return somat;
}

float sub(float n){
	int i, fat;
	float res, j = n, somat = 0;
	for(i = 2; i<= n; i++){
		j--;
		fat = fatorial(i);
		res = j / fat;
		somat = somat + res;
		i++;
		j--;
	}
	return somat;
}

float operacao(float n){
	printf("%f",(soma(n) - sub(n)));
}


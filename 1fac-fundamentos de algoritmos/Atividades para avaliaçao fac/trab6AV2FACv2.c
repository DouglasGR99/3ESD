/*
	Implementar uma função que, dado um vetor
	de inteiros, desloque os valores pares para o
	seu início e os ímpares para o final.
*/
#include<stdio.h>
#define TAM 10

void desloPar(int vetor[], int tamanho);
void exibirVet(int vetor[], int tamanho);

int main(){
	int vetor[TAM], i;
	printf("insira %d valores:\n",TAM);
	for(i=0;i<TAM;i++){
		scanf("%d",&vetor[i]);
	}
	desloPar(vetor,TAM);
	exibirVet(vetor,TAM);
}

void desloPar(int vetor[], int tamanho){
	 int i, j, salvo; 
 	for(i=1;i<tamanho;i++){
 		for(j=0; j<tamanho-i;j++){
 			if(vetor[j]%2!=0){
 				salvo = vetor[j];
 				vetor[j] = vetor[j+1];
 				vetor[j+1] = salvo;
 			}
		}
	}
}


void exibirVet(int vetor[], int tamanho){
	int i;
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++){
		printf ("%d ", vetor[i]);
	}
}

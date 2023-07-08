/*
	Atividade 7 para AV2 FAC
	
	Desenvolver uma função que, dado um vetor
	de reais e duas posições posI e posF, inverta os
	elementos do subvetor definido por essas
	posições.
*/

#include<stdio.h>
#define TAM 10

//Esssa e a funçao solicitada
void invertSubfunc(float vetor[], int posI, int posF);

void preencherVetor (float vetor[], int tamanho);
void exibirVet(float vetor[], int tamanho);

//Essa e uma funçao que trabalha para a funçao afim de evitar repetiçao
void inversor(float vetor[], int menor, int maior);


int main(){
	int posI,posF;
	float vetor[TAM];
	preencherVetor(vetor,TAM);
	
	printf("Por favor insira duas posiçoes dentro do vetor:\n");
	scanf("%d%d",&posI,&posF);
	
	invertSubfunc(vetor,posI,posF);
	exibirVet(vetor,TAM);
}



void invertSubfunc(float vetor[], int posI, int posF){
	if(posF>posI){
		inversor(vetor,posI,posF);
	}else{
		inversor(vetor,posF,posI);
	}
}


void preencherVetor (float vetor[], int tamanho){
	int i;	
	for (i=0;i<tamanho;i++){
		vetor[i] = i+1;
	}
}


void exibirVet(float vetor[], int tamanho){
	int i;
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++){
		printf ("%.2f   ", vetor[i]);
	}
}


void inversor(float vetor[], int menor, int maior){
	int i,j,salvo;
		for(i=menor,j=maior;i<j;i++,j--){
			salvo=vetor[j];
			vetor[j]=vetor[i];
			vetor[i]=salvo;
		}
}

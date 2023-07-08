/*
	Atividade 7 para AV2 FAC
	
	Desenvolver uma fun��o que, dado um vetor
	de reais e duas posi��es posI e posF, inverta os
	elementos do subvetor definido por essas
	posi��es.
*/

#include<stdio.h>
#define TAM 10

//Esssa e a fun�ao solicitada
void invertSubfunc(float vetor[], int posI, int posF);

void preencherVetor (float vetor[], int tamanho);
void exibirVet(float vetor[], int tamanho);

//Essa e uma fun�ao que trabalha para a fun�ao afim de evitar repeti�ao
void inversor(float vetor[], int menor, int maior);


int main(){
	int posI,posF;
	float vetor[TAM];
	preencherVetor(vetor,TAM);
	
	printf("Por favor insira duas posi�oes dentro do vetor:\n");
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

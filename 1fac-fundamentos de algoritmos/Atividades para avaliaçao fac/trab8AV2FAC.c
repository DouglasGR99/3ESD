/*
	Atividade 8 AV2 FAC
	Desenvolver uma função que, dado um vetor
	de reais, determine o número de valores
	distintos no vetor.
*/
#include<stdio.h>
#define TAM 10

int informar(float vetor[], int tamanho);
void escanearVetor(float vetor[], int tamanho);
void ordenar(float vetor[], int tamanho);

/*
	Eu nao sabia se podia por um if else na main,
	mas entendi que nao pode por printf na funçao,
	e a mesma deve retornar um valor, mas soaria estranho
	o printf na main dizer que ha "1 numeros diferentes no vetor".
*/
void main(){
	float vetor[TAM];
	int diferentes;
	escanearVetor(vetor, TAM);
	diferentes=informar(vetor, TAM);
	if(diferentes==0){
		printf("O vetor nao possui numeros diferentes.");
	}
	else{
		printf("\n\nO vetor tem %d numeros diferentes.",diferentes);
	}
}


// Essa e a funçao solicitada.
int informar(float vetor[], int tamanho){
	int i, j, cont=0;
	ordenar(vetor, tamanho);	
	for(i=0,j=1;i<tamanho;i++,j++){
		if(vetor[i]!=vetor[j]){
			cont++;
		}
	}
	if(cont==1){
		return 0;
	}
	else{
		return cont;
	}
}


void escanearVetor(float vetor[], int tamanho){
	int i;
	printf("insira %d valores:\n",tamanho);
	for(i=0;i<tamanho;i++){
		scanf("%f",&vetor[i]);
	}
}


void ordenar(float vetor[], int tamanho){
	int i, j, salvo;
	for(i=1;i<tamanho;i++){
		for(j=0;j<tamanho-i;j++){
			if(vetor[j]>vetor[j+1]){
				salvo = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = salvo;
			}
		}
	}
}


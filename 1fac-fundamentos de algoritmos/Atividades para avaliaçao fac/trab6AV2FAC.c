/*
	Implementar uma função que, dado um vetor
	de inteiros, desloque os valores pares para o
	seu início e os ímpares para o final.
*/
#include<stdio.h>
#define TAM 5

void desloPar(int vetor[], int quant, int ordenado[]);

void exibirVetor (int v[], int tamanho);

int main(){
	int vetor[TAM],ordenado[TAM], i, j;
	printf("insira %d valores:\n",TAM);
	for(i=0;i<TAM;i++){
		scanf("%d",&vetor[i]);
	}
desloPar(vetor,TAM,ordenado);
	exibirVetor(vetor,TAM);
	exibirVetor(ordenado,TAM);
}


void desloPar(int vetor[], int quant,int ordenado[]){
	int i, j, k=0 ,cont=0,restante;
	for(i=0;i<quant;i++){
		if(vetor[i]%2==0){
			ordenado[i]=vetor[i];
			cont++;
			printf(" %d ",ordenado[i]);
		}
	}
	restante=quant+cont;
	for(j=cont;j<restante;j++){
		if(vetor[k]%2>0){
			ordenado[j]=vetor[k];
					printf(" %d ",ordenado[j]);
		}
		k++;
	}
}

void exibirVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");
}

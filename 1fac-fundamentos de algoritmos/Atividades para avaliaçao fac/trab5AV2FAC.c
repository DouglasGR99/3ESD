#include<stdio.h>
/* Atividade 5 AV2 FAC
Implementar uma função que, dado um vetor
de inteiros, determine se os seus elementos
formam uma Progressão Geométrica (PG).
*/
#define TAM 5
#define TRUE 1
#define FALSE 0

int descobrirSePg(int vetor[], int quant);

int main(){
	int vetor[TAM], i;
	printf("insira %d valores:\n",TAM);
	for(i=0;i<TAM;i++){
		scanf("%d",&vetor[i]);
	}
	if(descobrirSePg(vetor,TAM)==TRUE){
		printf("\nOs elementos do vetor estao em pg.");
	}else{
		printf("\nOs elementos do vetor nao estao em pg.");
	}
}


int descobrirSePg(int vetor[], int quant){
	int i, j;
	for(i=0,j=1;j<quant;i++,j++){
		if(vetor[j]!=vetor[i]*vetor[0]){
			return FALSE;
		}
	}
	return TRUE;
}


#include <stdio.h>
void preencher(int vet[],int tam);
void verificarElemento(int vetA[], int vetB[]);
void exibirVetor(int vet[]);

int main(){
	
	int vetA[3], vetB[3];
	preencher(vetA,3);
	preencher(vetB,3);
	// chama fun��o para verificar se elemento de vetor A � igual aos do B
	
	// chama fun��o para exibir os elemento de vetor A
	
	
	
	// chama fun��o para exibir os elemento de vetor B
	
	return 0;	
}


void preencher(int vet[], int tam) {
	int i;
	for(i=0;i<tam;i++){
		printf("V[%d]\n",i);
		scanf("%d",&vet[i]);
	}
}

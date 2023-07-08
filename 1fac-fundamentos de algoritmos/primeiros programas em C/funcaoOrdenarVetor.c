// funçao ordenar vetor

void ordenar(int vetor[], int tamanho);

void ordenar(int vetor[], int tamanho){
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

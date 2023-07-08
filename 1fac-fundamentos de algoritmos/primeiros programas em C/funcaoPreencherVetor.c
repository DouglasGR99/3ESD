// funçao preencher vetor

void preencherVetor (int vetor[], int tamanho);

	preencherVetor(vetor,TAM);

void preencherVetor (int vetor[], int tamanho){
	int i;
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++){
		vetor[i] = rand()%10;
	}
}

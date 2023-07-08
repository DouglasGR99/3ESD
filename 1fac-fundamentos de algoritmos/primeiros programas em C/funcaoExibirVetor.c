// funçao exibir vetor

void exibirVet(int vetor[], int tamanho);

	exibirVet(vetor,TAM);

void exibirVet(int vetor[], int tamanho){
	int i;
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++){
		printf ("  %d ", vetor[i]);
	}
}

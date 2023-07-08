//Trabalho AV2 FAC Ana e Douglas

/*
Pede-se o desenvolvimento de um programa que
manipule um vetor de inteiros. Inicialmente, este
vetor, com capacidade para armazenamento de CAP
números, estará vazio.
Portanto, será necessário manter uma constante CAP
que representará a capacidade do vetor e uma
variável quant, inicialmente igual a 0, para controlar
quantas posições do vetor estão ocupadas, em
determinado momento. A cada inserção, quant será
incrementado; a cada remoção, decrementado.
Destaca-se que o programa deve garantir que os
elementos do vetor estejam sempre ordenados
crescentemente, além da restrição de que números
repetidos são proibidos no vetor.
A execução do programa deverá consistir na contínua
disponibilização ao usuário de um menu com
possíveis operações, de forma que a execução só
terminará quando for selecionada a opção de saída.
As operações que serão disponibilizadas ao usuário
são:
i. Inserção de um número no vetor;
ii. Remoção de determinado valor;
iii. Alteração de um valor por outro;
iv. Busca de determinado elemento no vetor,
retornando a sua posição, se encontrado no
vetor, ou o valor -1, caso contrário;
v. Exibição de todos os elementos do vetor;
vi. E, por último, a opção de sair do programa.
*/
/*
	Todos os valores começam valendo 0 e vao sendo modificados

	Tudo relacionado a printf, scanf e leitura de dados tem q
	estar na main, ela e o testador de funcao apenas

	O comando system("cls"); serve para limpar a tela apos cada operaçao
	pra nao ficar muita informaçao, coloquei ele antes dos breaks
*/


#include <stdio.h>

#define CAP 10
// A false e para caso nao possa retornar uma opcao
#define FALSE -1
#define TRUE 0
void zerarVetor(int vetor[],int tamanho);
int insercao(int valor, int vetor[],int tamanho);
int remocao(int valor, int vetor[],int tamanho);
int alteracao(int valor, int existente, int vetor[],int tamanho);
int posicao(int valor, int vetor[],int tamanho);
void exibicao(int vetor[],int tamanho);
int quant=0;
int main(){
	int opcoes, vetor[CAP];
	int valor,existente;
	zerarVetor(vetor,CAP);
    char c;
	while(opcoes!=6){
		printf("\n\nEscolha uma das opcoes a seguir:\n");
		printf("1 - insercao de elementos.\n");
		printf("2 - remocao de elementos.\n");
		printf("3 - alteracao de elementos.\n");
		printf("4 - busca por elemento e retorno de posicao.\n");
		printf("5 - exibir todos elementos.\n");
		printf("6 - sair do programa.\n\n");
		scanf("%d", &opcoes);
		switch(opcoes){

            //i. Inserção de um número no vetor;
			case 1:
				printf("\nDigite um valor a ser inserido no vetor:\n");
				scanf("%d",&valor);
				if(insercao(valor,vetor,CAP)==TRUE)
				{
					printf("\n Operaçao realizada.");
				}
				else
				{
					printf("\n Operaçao nao pode ser realizada.");
				}
				sleep(2);
				system("cls");
				break;

            //ii. Remoção de determinado valor;
			case 2:
				printf("\nDigite o valor a ser removido do vetor:\n");
				scanf("%d",&valor);
				if(remocao(valor,vetor,CAP)==TRUE)
				{
					printf("\n Operaçao realizada.");
				}
				else
				{
					printf("\n Operaçao nao pode ser realizada.");
				}
				sleep(2);
				system("cls");
				break;

            //iii. Alteração de um valor por outro;
			case 3:
				printf("\nDigite o valor a ser inserido no vetor:\n");
				scanf("%d",&valor);
				printf("\nDigite um valor existente a ser removido no vetor:\n");
				scanf("%d",&existente);
				if(alteracao(valor,existente,vetor,CAP)==TRUE)
				{
					printf("\n Operaçao realizada.");
				}
				else
				{
					printf("\n Operaçao nao pode ser realizada.");
				}
				sleep(2);
				system("cls");
				break;

            //iv. Busca de determinado elemento no vetor, retornando a sua posição, se encontrado no vetor, ou o valor -1, caso contrário;
			case 4:
				printf("\nDigite um dos valores do vetor para retornar sua posicao:\n");
				scanf("%d",&valor);
				int r=existe(valor,vetor,CAP);
				if(r != FALSE){
					printf("\nO valor encontra-se na posicao %d", r);
					}else{
						printf("\nO valor inserido nao se encontra no vetor.");
				}
                				printf("\n Aperte uma tecla para retornar ao menu: ");
				scanf("%s",&c);
				system("cls");
				break;

            //v. Exibição de todos os elementos do vetor;
			case 5:
				exibicao(vetor,quant);
				printf("\n Aperte uma tecla para retornar ao menu: ");
				scanf("%s",&c);
				system("cls");
				break;
		}
	}
}



void zerarVetor(int vetor[],int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		vetor[i]=0;
	}
}




/*
	nao pode ordenar o vetor depois de ele estar pronto,
	deixar em ordem assim q um valor e somado, subtraido ou
	alterado
*/
 //escaneia o número digitado, verifica se é menor ou maior que os existentes e move o vetor para abrir espaço para o número novo

int insercao(int valor, int vetor[],int tamanho){
   if(quant>=tamanho){
   	return FALSE;
   }
   if(quant==0){
    vetor[0]=valor;
    quant++;
    return TRUE;
   }
   if(vetor[quant-1]<valor){
        vetor[quant]=valor;
        quant++;
        return TRUE;
   }
   if(existe(valor,vetor,quant)==FALSE)
    {
        int i;
        for(i=quant-1;vetor[i]>valor;i--){
            vetor[i+1]=vetor[i];
        }
        vetor[i+1]=valor;
        quant++;
        return TRUE;
    }
    return FALSE;
}
//função para ver se o numero adicionado já existe no vetor.
// Retorna posição do vetor ou -1 se não encontrado
int existe(int valor, int vetor[],int tamanho){
	int i;
    for(i=0;i<=tamanho;i++){
        if(vetor[i]==valor){
            return i;
        }
    }
    return FALSE;
}

/*
	o valor inserido some do vetor mas nao pode haver espaço em branco
	entao todos que vem depois dele devem voltar uma posiçao
*/
int remocao(int valor, int vetor[],int tamanho){
   int i,e;
   e=existe(valor,vetor,tamanho);

       if(e!=FALSE)
        {
            for( i=e;i<quant;i++)
            {
                vetor[i]=vetor[i+1];
            }
            quant--;
            return TRUE;
       }
       return FALSE;
}





/*
	aqui pegamos um valor dentro do vetor e trocamos por um novo
	esse novo deve estar na posicao certa ja na hora que for inserido
*/
int alteracao(int valor, int existente, int vetor[],int tamanho){
	if(remocao(existente,vetor,tamanho)==TRUE){
		insercao(valor,vetor,tamanho);
		return TRUE;	
	}
	return FALSE;
}


//n sabia se tirava ou n, deixei ai pq n sei
/*
	essa funçao deve percorrer o vetor e procurar o valor inserido,
	se ele existir dentro do vetor retornar a posiçao, senão, retorna -1

int posicao(int valor, int vetor[],int tamanho){


}
*/


/*
	Essa so exibe mesmo
*/
void exibicao(int vetor[],int tamanho){
	int i;
	printf("\n\n Os elementos sao ");
	for(i=0;i<tamanho;i++){
		printf("%d ",vetor[i]);
	}
}






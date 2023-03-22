#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct exame
{
    char nome[20];
    float x,b,t;
};

void criarDados(struct exame *A[], int n);
void printTodos(struct exame A[], int n);
void printDados(struct exame A);
void printOpcoes();


int main()
{
	int n, i, opcao, resp;
	char paciente[20];
	printf("insira a quantidade total de exames: ");
	scanf("%d",&n);
	struct exame A[n];
	
    criarDados(A,n);
    
    while(opcao!=4)
    {
    	printOpcoes();
		scanf("%d", &opcao);
    	switch(opcao)
		{
			case 1:
				//mostrar todos
				printTodos(A,n);
				break;
			case 2:
				//mostrar paciente/criar exame
				printf("\nQual o nome do paciente? ");
				scanf("%s",paciente);
				for(i=0;i<n;i++){
					if(A[i].nome==paciente){
						//caso ja exista paciente
						printDados(A[i]);
						
					}else{
						//caso nao exista paciente
						printf("\nO paciente nao foi encontrado, deseja inclui-lo?\nSim: 1\nNao: 0\n");
						scanf("%d",&resp);
						if(resp){
						}
					}
				}
				break;
			case 3:
				//mostrar doentes
				break;
		}
	}
	
	
	return 0;
}


void criarDados(struct exame *A[], int n)
{
    int i;

    for(i= 0; i<n; i++)
    {
        printf("\nNome: ");
        scanf("%s",(*A[i]).nome);
        printf("\nTaxa de xolesterol(entre 0 e 100): ");
        scanf("%f",(*A[i]).x);
        printf("\nTaxa de broteinas(entre -10 e 10): ");
        scanf("%f",(*A[i]).x);
        printf("\nTaxa de toroteinas(entre 5000 e 10000): ");
        scanf("%f",(*A[i]).x);
        printf("\n");
    }
}


void printTodos(struct exame A[], int n)
{
    int i;

    for(i= 0; i<n; i++)
    {
        printf("Nome: %s\n", A[i].nome);
        printf("taxa de xolesterol: %.2f\n", A[i].x);
        printf("taxa de broteinas: %.2f\n", A[i].b);
        printf("taxa de toroteinas: %.2f\n", A[i].t);
        printf("\n");
    }
}


void printDados(struct exame A)
{
    printf("Name: %s\n", A.nome);
        printf("taxa de xolesterol: %.2f\n", A.x);
        printf("taxa de broteinas: %.2f\n", A.b);
        printf("taxa de toroteinas: %.2f\n", A.t);
    printf("\n");
}


void printOpcoes()
{
	printf("\n\nEscolha uma das opcoes a seguir:\n");
	printf("1 - imprimir todos os exames.\n");
	printf("2 - mostrar paciente.\n");
	printf("3 - imprimir todos os pacientes doentes.\n");
	printf("4 - sair do programa.\n\n");
}

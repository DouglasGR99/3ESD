#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char nome[20];
    float x,b,t;
    int doencaX,doencaB,doencaT;
    int caso;
}exame;

//as funcoes comentadas estao apresentando bugs
//void criarDados(exame *A, int n);
//void ordenar(exame *A[], int n);
void printTodos(exame A[], int n);
void printDoentes(exame A[], int n);
void printDados(exame A);
void printOpcoes();


int main()
{
	int n, i, opcao, resp;

	//nome para busca por nome
	char paciente[20];
	int posicao;

	//quantidade inicial de exames
	printf("insira a quantidade total de exames: ");
	scanf("%d",&n);
	
	//declarando o vetor de struvt
	exame A[n];
    //criarDados(A,n);
    
    //como nao consegui fazer na funcao por enquanto criacao na main
    for(i=0;i<n;i++){
    	printf("\nNome %d: ",i+1);
        scanf("%s",&A[i].nome);
        printf("\nTaxa de xolesterol %d(entre 0 e 100): ",i+1);
        scanf("%f",&A[i].x);
        printf("\nTaxa de broteinas%d(entre -10 e 10): ",i+1);
        scanf("%f",&A[i].b);
        printf("\nTaxa de toroteinas%d(entre 5000 e 10000): ",i+1);
        scanf("%f",&A[i].t);
        printf("\n");
	}
    
    //diagnosticando doenças
    for(i=0;i<n;i++){
    	//caso inicial
    	A[i].caso = 0;
    	
    	//hiper = 1
    	//hipo = -1
    	//saudavel = 0
    	//testando doencas no xolesterol
    	if(A[i].x>50){
    		A[i].doencaX = 1;
    		A[i].caso++;
    		//hiperxolesterol
		}else{
			if(A[i].x<30){
				A[i].doencaX = -1;
				A[i].caso++;
				//hipoxolesterol
			}else{
				A[i].doencaX = 0;
				//saudavel
			}
		}
		if(A[i].b>7){
    		A[i].doencaB = 1;
    		A[i].caso++;
    		//hiperbroteina
		}else{
			if(A[i].b<-3){
				A[i].doencaB = -1;
				A[i].caso++;
				//hipobroteina
			}else{
				A[i].doencaB = 0;
				//saudavel
			}
		}
		if(A[i].t>8000){
    		A[i].doencaT = 1;
    		A[i].caso++;
    		//hipertoroteina
		}else{
			if(A[i].t<6500){
				A[i].doencaT = -1;
				A[i].caso++;
				//hipotoroteina
			}else{
				A[i].doencaT = 0;
				//saudavel
			}
		}
	}

	//ordenar(*A[],n);
    
    //fazendo as opcoes
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
					if(strcmp(paciente,A[i].nome)==0){
						//caso ja exista paciente
						printDados(A[i]);
					}else{
						//caso nao exista paciente
						printf("\nO paciente nao foi encontrado, deseja inclui-lo?\nSim: 1\nNao: 0\n");
						scanf("%d",&resp);
						if(resp){
							//a preencher...
						}
					}
				}
				break;
			case 3:
				//mostrar doentes
				printDoentes(A,n);
				break;
		}
	}

	return 0;
}


//as funcoes auxiliares





void printDoentes(exame A[], int n)
{
	int i;
	printf("\n Todos os Pacientes Doentes:\n");
    for(i= 0; i<n; i++)
    {
    	if((A[i].caso)>0){
    		printf("Nome: %s\n", A[i].nome);
        	printf("taxa de xolesterol: %.2f\n", A[i].x);
        	printf("taxa de broteinas: %.2f\n", A[i].b);
        	printf("taxa de toroteinas: %.2f\n", A[i].t);
        	printf("\n");
        	printf("O paciente apresenta:\n");
        	//relacionado a xolesterol
        	if((A[i].doencaX)>0){
        		printf("hiperxolesterol \n");
			}else{
				if((A[i].doencaX)<0){
					printf("hipoxolesterol \n");
				}
			}
			//relacionado a broteina
        	if((A[i].doencaB)>0){
        		printf("hiperbroteina \n");
			}else{
				if((A[i].doencaB)<0){
					printf("hipobroteina \n");
				}
			}
			//relacionado a toroteina
        	if((A[i].doencaT)>0){
        		printf("hipertoroteina \n");
			}else{
				if((A[i].doencaT)<0){
					printf("hipotoroteina \n");
				}
			}
			//caso grave/gravissimo
			if((A[i].caso)==2){
				printf("caso grave \n");
			}
			if((A[i].caso)==3){
				printf("caso gravissimo \n");
			}
			printf("\n\n");
		}
    }
}

void printTodos(exame A[], int n)
{
    int i;
	printf("\n Todos os Pacientes:\n");
    for(i= 0; i<n; i++)
    {
        printf("Nome: %s\n", A[i].nome);
        printf("taxa de xolesterol: %.2f\n", A[i].x);
        printf("taxa de broteinas: %.2f\n", A[i].b);
        printf("taxa de toroteinas: %.2f\n", A[i].t);
        printf("\n");
    }
}


void printDados(exame A)
{
	printf("\n Paciente selecionado:\n");
    printf("Nome: %s\n", A.nome);
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


/*  nao esta funcionando
void criarDados(exame *A, int n)
{
    int i;
	float x,b,t;
	char nome[20];


    for(i= 0; i<n; i++)
    {
        printf("\nNome: ");
        gets(nome);
        printf("\nTaxa de xolesterol(entre 0 e 100): ");
        scanf("%f",&x);
        printf("\nTaxa de broteinas(entre -10 e 10): ");
        scanf("%f",&b);
        printf("\nTaxa de toroteinas(entre 5000 e 10000): ");
        scanf("%f",&t);
		A[n]->nome = nome;
		A[n].x = x;
		A[n].b = b;
		A[n].t = t;
        printf("\n");
    }
}


void ordenar(exame *A[], int n)
{
	exame aux;
	int i, j;

	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
			{
				//primeiro passo
				aux = A[j];
				//segundo passo
				A[j] = A[j+1];
				//terceiro passo
				A[j+1] = aux;
			}
		}
	}
}
*/

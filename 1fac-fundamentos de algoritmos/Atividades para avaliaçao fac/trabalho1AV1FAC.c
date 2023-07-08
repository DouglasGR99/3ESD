#include<stdio.h>
//atividade para av1 piramide de numeros
/*ex:
       1
      121
     12321
*/
int piramide(int n);

void main(){
	int n;
	printf("insira o numero de andares da piramide: ");
	scanf("%d",&n);
	int piramide(n);
}

int piramide(int n){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

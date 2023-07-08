#include <stdio.h>
int main(){
	int n;
	printf(" insira varios numeros, quando cansar digite 0: \n");
	do{
		scanf("%d",&n);
		
	}while(n != 0);
	printf("%d",n);
}

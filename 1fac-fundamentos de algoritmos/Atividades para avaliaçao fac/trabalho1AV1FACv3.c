#include<stdio.h>
int piramide(int num);

int main(){
	int num;
	printf(" insira o numero para formar o triangulo: \n");
	scanf("%d",&num);
	piramide(num);
}

int piramide(int num){
	int i, j, k, esp, ref;
	ref = num;
	for(i = 1; i <= num; i++){
		for(esp = ref; esp >= 1; esp --){
			printf("  ");
		}
		for(j = 1; j <= i; j++){
			printf(" %d",j);
		}
		for(k = i; k >= 1; k--){
			if(k == i){
			}else{
			printf(" %d",k);
			}
		}
	printf("\n");
	ref--;                                                                                                                                                                                                 
	}
}

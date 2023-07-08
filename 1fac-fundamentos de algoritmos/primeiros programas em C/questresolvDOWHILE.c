#include <stdio.h>
int main(){
	int n, i= 1;
	printf("insira um numero: \n");
	scanf("%d", &n);
	do{
		if(i <= (n / 2)){
			if(n % i != 0){
					printf(" %d", i);
			}
		}else{
			if(i % 2 == 0){
					printf(" %d", i);
			}
		}
	i++;
	}while(i <= n);
}

#include <stdio.h>
int main(){
		int n, i;
	printf("insira um numero: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(i <= (n / 2)){
			if(n % i != 0){
					printf(" %d", i);
			}
		}else{
			if(i % 2 == 0){
					printf(" %d", i);
			}
		}
	}
} 

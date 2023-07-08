#include<stdio.h>
int main(){
	int i,a,b;
	printf("insira dois numeros a e b: \n");
	scanf("%d \n %d",&a,&b);
	for(i=1;i<=b;i++){
		if(i%a==0){
			printf("# ");
		}else{
			printf("%d ",i);
		}
	}
} 

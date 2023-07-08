/*
  Faça um programa para emitir o carnê de pagamento de uma compra parcelada sem entrada.
  A data da compra, o valor a ser parcelado e o número (n) de parcelas será perguntado ao usuário.
  
  Em cada boleto deverá constar o número do boleto (1 a n), a data do vencimento e o valor do
  boleto.
  O intervalo entre as parcelas é de 20 dias.
*/

#include <stdio.h>
#include "data.h"

struct boleto {
	int num;
	float valor;
	tData* dtVenc;
};
typedef struct boleto tBoleto;

tBoleto* bol_cria(int n, float valor, tData* dtVenc);
void bol_exibe(tBoleto* p);
void bol_atribui(tBoleto* b, int n, float val, tData* dtVenc);
void pedir_dados(int* dd, int* mm, int* aa, int* n, float* valor);


int main(void) {
  int dd, mm, aa, i, n;
  float valor;
  
  pedir_dados(&dd, &mm, &aa, &n, &valor);
  tData* data = dta_cria(dd, mm, aa);
  tBoleto* bol = bol_cria( n, valor, data);
  
  printf("\n\nBoletos gerados:");
  for(i = 0; i < n; i++){
    data = dta_intervalo(data, 20);
    bol_atribui(bol, i+1, valor/n, data);
    printf("\n\n");
    bol_exibe(bol);
  }

  dta_libera(data);
  return 0;
}


//funcoes auxiliares

	tBoleto* bol_cria(int n, float valor, tData* dtVenc) {
		tBoleto* b = (tBoleto*)malloc(sizeof(struct boleto));
		b->num= n;
		b->valor = valor;
		b->dtVenc = dtVenc;	
		return b;
	}


	void bol_exibe(tBoleto* p) {
		printf("Num: %03d\t Valor R$%.2f\t Data de Vencimento: %s", p->num, p->valor, dta_getData(p->dtVenc));
		return;
	}


	void bol_atribui(tBoleto* b, int n, float val, tData* dtVenc) {
		b->num = n;
		b->valor = val;
		b->dtVenc = dtVenc;
		return ;
}


void pedir_dados(int* dd, int* mm, int* aa, int* n, float* valor){
  printf("Qual a data da compra?\n");
  scanf("%d%d%d",dd,mm,aa);
  printf("Qual o valor?\n");
  scanf("%f",valor);
  printf("Qual o numero de parcelas?\n");
  scanf("%d",n);
}
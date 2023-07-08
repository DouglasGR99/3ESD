#include "boleto.h"
#include "data.h"

/* TAD: Boleto (nº, valor, data de Vencimento) */

//--------------
// Implementação
//--------------

struct boleto {
	int num;
	float valor;
	tData* dtVenc;
};
	

/* Funções exportadas */
/* Função cria - Aloca e retorna um boleto*/
	tBoleto* bol_cria(int n, float valor, tData* dtVenc) {
		tBoleto* b = (tBoleto*)malloc(sizeof(struct boleto));
		b->num= n;
		b->valor = valor;
		b->dtVenc = dtVenc;	
		return b;
	}


/* Função libera – Libera  memória de um Boleto criado */
	void bol_libera(tBoleto* p) {
		free(p);
	}


/* Função acessa - Retorna os valores de um Boleto */
	void bol_acessa(tBoleto* p, int* n, float* val, tData* dtVenc) {
		*n = p->num;
		*val = p->valor;
		dtVenc = p->dtVenc;
		return;

	}


/* Função atribui - Atribui novos valores ao Boleto */
	void bol_atribui(tBoleto* b, int n, float val, tData* dtVenc) {
		b->num = n;
		b->valor = val;
		b->dtVenc = dtVenc;
		return ;
}


/* Função Exibe – Mostra os dados do Boleto na tela */
	void bol_exibe(tBoleto* p) {
		printf("Num: %03d Valor R$%.2f Data de Vencimento: %s", p->num, p->valor, dta_getData(p->dtVenc));
		return;
	}


/* Função getBoleto - Retorna uma string com os valores do boleto */
	char* bol_getBoleto(tBoleto* p) {
		char* b;
		b = (char*)malloc(sizeof(*p)+21);
		sprintf(b, "%03d - R$%.2f - %s", p->num, p->valor, dta_getData(p->dtVenc));
		return b;
	}


/* Função gerarBoleto - faz boletos de acordo com as parcelas */
void gerar_boletos(int n, float valor, tData* data) {
  tBoleto* p;
  int i;
  
  printf("\n\nBoletos gerados:");
  
  for(i = 0; i < n; i++){
    data = dta_intervalo(data, 20);
    p = bol_cria(n, valor, data);
    bol_atribui(p, i+1, valor/n, data);
    printf("\n\n");
    bol_exibe(p);
    bol_libera(p);
  }
  return;
}


/* Função pedirDados - pede os dados ao usuario para criar boleto*/
void pedir_dados(int* dd, int* mm, int* aa, int* n, float* valor){
  printf("Qual a data da compra?\n");
  scanf("%d%d%d",dd,mm,aa);
  printf("Qual o valor?\n");
  scanf("%f",valor);
  printf("Qual o numero de parcelas?\n");
  scanf("%d",n);
}
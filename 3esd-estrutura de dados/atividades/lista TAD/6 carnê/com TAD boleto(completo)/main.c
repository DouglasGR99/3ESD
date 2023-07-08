/*
  Faça um programa para emitir o carnê de pagamento de uma compra parcelada sem entrada.
  A data da compra, o valor a ser parcelado e o número (n) de parcelas será perguntado ao usuário.
  
  Em cada boleto deverá constar o número do boleto (1 a n), a data do vencimento e o valor do
  boleto.
  O intervalo entre as parcelas é de 20 dias.
*/

#include <stdio.h>
#include "boleto.h"


int main(void) {
  int dd, mm, aa, n;
  float valor;
  
  pedir_dados(&dd, &mm, &aa, &n, &valor);
  tData* data = dta_cria(dd, mm, aa);
  
  gerar_boletos(n, valor, data);

  dta_libera(data);
  return 0;
}
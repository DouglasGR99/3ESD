#pragma once
#include "data.h"
/* TAD: Folha Boleto (nº, valor, data de Vencimento) */
/* Tipo exportado */
typedef struct boleto tBoleto;

/* Funções exportadas */
/* Função cria - Aloca e retorna um boleto*/
tBoleto* bol_cria(int n, float valor, tData* dtVenc);

/* Função libera – Libera  memória de um Boleto criado */
void bol_libera(tBoleto* p);

/* Função acessa - Retorna os valores de um Boleto */
void bol_acessa(tBoleto* p, int* n, float* val, tData* dtVenc);

/* Função atribui - Atribui novos valores ao Boleto */
void bol_atribui(tBoleto* p, int n, float val, tData* dtVenc);

/* Função Exibe – Mostra os dados do Boleto na tela */
void bol_exibe(tBoleto* p1);

/* Função getBoleto - Retorna uma string com os valores do boleto */
char* bol_getBoleto(tBoleto* p);

/* Função gerarBoleto faz boletos de acordo com as parcelas */
void gerar_boletos(int n, float valor, tData* data);

/* Função pedirDados - pede os dados ao usuario para criar boleto*/
void pedir_dados(int* dd, int* mm, int* aa, int* n, float* valor);
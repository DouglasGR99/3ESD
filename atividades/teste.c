#include <stdio.h>

void main(void) {
  int a, b, c;
  printf("Digite os lados do triângulo: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a) {
    printf("É um triângulo");
  } else {
    printf("Não é um triângulo");
  }
}
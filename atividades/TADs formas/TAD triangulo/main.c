#include <stdio.h>
#include "tipoTriangulo.h"
int main(void) {
  Triangulo*t1;
  t1=tri_cria(1,1,0,1,1,0);
  tri_exibe(t1);
  printf("\nPerímetro: %.2f",tri_perimetro(t1));
  printf("\nÁrea: %.2f",tri_area(t1));
  return 0;
}
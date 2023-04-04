#include <stdio.h>

int main(void) {
  double qtd_dolar, valor_dolar;
  
  printf("Valor do dolar: ");
  scanf("%lf", &valor_dolar);
  printf("Quantidade de dolares: ");
  scanf("%lf", &qtd_dolar);
  
  double qtd_real = qtd_dolar * valor_dolar;
  
  printf("R$ %g", qtd_real);
}
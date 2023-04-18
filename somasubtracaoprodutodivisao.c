#include <stdio.h>

int main(void) {
  int n1, n2;
  printf("Digite N1: ");
  scanf("%d", &n1);
  printf("Digite N2: ");
  scanf("%d", &n2);

  int soma = n1 + n2, subtracao = n1 - n2, multiplicacao = n1 * n2,
      divisao = n1 / n2;

  printf("Soma=%d sub=%d mult=%d div=%d", soma, subtracao, multiplicacao,
         divisao);
  return 0;
}
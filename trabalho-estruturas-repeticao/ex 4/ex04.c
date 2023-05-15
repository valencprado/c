#include <stdio.h>

int main() {
  int n = 0, divisor = 2;
  printf("Digite um número: ");
  scanf("%d", &n);

  while (divisor <= n) {
    if (n % divisor == 0 && n != divisor) {
      printf("Não é primo");
      break;
    } else {
      if (n == divisor) {
        printf("É primo");
      }
      divisor++;
    }
  }
  return 0;
}
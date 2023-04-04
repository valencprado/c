#include <stdio.h>

int main(void) {
  int numero;
  printf("Entre com um numero inteiro: ");
  scanf("%d", &numero);
  int antecessor = numero - 1;
  printf("%d", antecessor);
}
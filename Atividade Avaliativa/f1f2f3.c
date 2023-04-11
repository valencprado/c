#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  if (n > 10 && n <= 100) {
    printf("F2");
  } else {
    if (n <= 10) {
      printf("F1");

    } else {
      printf("F3");
    }
  }
  return 0;
}
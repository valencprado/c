#include <stdio.h>

int main(void) {
    double a, b, c;
  printf("a: ");
  scanf("%lf", &a);
  printf("b: ");
  scanf("%lf", &b);
  printf("c: ");
  scanf("%lf", &c);
  if((a + b > c) && (a + c> b) && (b + c > a)) {
    printf("Pode ser um triangulo");
  } else {
    printf("Nao pode ser um triangulo");
    
  }
  return 0;
}
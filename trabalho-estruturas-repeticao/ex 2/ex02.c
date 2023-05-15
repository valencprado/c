#include <stdio.h>

int main() {
  int a = 5000000, b = 7000000, ano = 1;

  for (ano = 1; a > b; ano++) {
    a = a + (a * 0.03);
    b = b + (b * 0.02);
  }
  printf("Foram necessários %d anos para o país A ter mais habitantes do que o "
         "país B.",
         ano);
  return 0;
}
#include <stdio.h>

int main() {
  int n, linhas, contador_n, n_printados = 1;
  printf("Digite um número: ");
  scanf("%d", &n);

  while (linhas <= n) {
    for (contador_n = 1; contador_n <= linhas; contador_n++) {
      printf("%3d", n_printados);
      n_printados++;
    }

    printf("\n");
    linhas++;
  }
  return 0;
}
#include <stdio.h>

int main() {
  int vetor[12], i, x, y, soma;
  for (i = 0; i < 12; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < 12; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\nDigite um valor X entre 1 e 12: ");
  scanf("%d", &x);
  printf("\nDigite um valor Y entre 1 e 12: ");
  scanf("%d", &y);
  soma = vetor[x-1] + vetor[y-1];
  printf("\nSoma das posições %d e %d do vetor é: %d", x, y, soma);
   

}
#include <stdio.h>


int main() {
 int vetor[10], i;

  for (i = 1; i < 20; i+=2) {
    vetor[i] = i;
    printf("%d ", vetor[i]);
  }
}
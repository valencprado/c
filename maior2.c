#include <stdio.h>

int main(void) {
    int numeroA = 0, numeroB = 0;
  
  printf("Digite o numero A: ");
  scanf("%d", &numeroA);
  printf("Digite o numero B: ");
  scanf("%d", &numeroB);
//   int temp = ;
if(numeroA == numeroB) {
    printf("Numeros iguais");
} else {
    numeroA > numeroB ? printf("Primeiro maior") : printf("Segundo maior");
}
}
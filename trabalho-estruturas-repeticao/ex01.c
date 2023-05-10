#include <stdio.h>
int main() {

  int numero, i, maior_zero = 0, menor_zero = 0, soma_maior_zero = 0,
                 soma_menor_zero = 0;

  for (i = 1; i <= 10; i++) {
    printf("Digite número %d de 10 ", i);
    scanf("%d", &numero);
    if (numero >= 0) {
      maior_zero++;
      soma_maior_zero += numero;
    } else {
      menor_zero++;
      soma_menor_zero += numero;
    }
  }

  printf("Positivos:%d\n", maior_zero);
  printf("Negativos: %d\n", menor_zero);
  printf("Soma dos positivos: %d\n", soma_maior_zero);
  printf("Soma dos negativos %d\n", soma_menor_zero);
}
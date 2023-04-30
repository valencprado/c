#include <stdio.h>

int main() {
  int peso = 0, contador = 1, maior_peso = 0, numero_mais_pesado;
  double altura = 0, altura_mais_pesado = 0;
  while (contador < 6) {
    printf("Altura da pessoa %d: ", contador);
    scanf("%lf", &altura);
    printf("Peso da pessoa %d:\n", contador);
    scanf("%d", &peso);
    if (peso > maior_peso) {
      maior_peso = peso;
      altura_mais_pesado = altura;
      numero_mais_pesado = contador;
    }
    contador++;
  }
  printf("A pessoa mais pesada e' a de numero %d, com altura %g",
         numero_mais_pesado, altura_mais_pesado);
}

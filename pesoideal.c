#include <stdio.h>

int main(void) {
  double altura;
  int sexo;
  double peso_ideal;

  printf("Digite a altura em metros: ");
  scanf("%lf", &altura);
  printf("Digite 1 para sexo masculino e 2 para feminino: ");
  scanf("%d", &sexo);
  if (sexo == 1) {
    peso_ideal = (72.7 * altura) - 58;
    printf("%g", peso_ideal);

  } else {
    if (sexo == 2) {
      peso_ideal = (62.1 * altura) - 44.7;
      printf("%g", peso_ideal);
    }
  }

  return 0;
}
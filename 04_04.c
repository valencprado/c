#include <stdio.h>
// aula do dia 04/04

int main(void) {
// estruturas condicionais, operadores relacionais e operadores lógicos
  int idade = 0;

  printf("Digite a idade: ");
  scanf("%d", &idade);
  if(idade >= 18) {
      printf("Pode passar pois voce tem %d anos.", &idade);
  } else {
      printf("Nao pode passar pois voce tem %d anos.", &idade);
  }
  return 0;
}
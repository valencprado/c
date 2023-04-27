#include <stdio.h>
/*
Faça um programa que pergunte um número real com "Digite N: " e divida-o por dois
sucessivamente até que o resultado seja menor que 1. Mostre o resultado da última
divisão e a quantidade de divisões efetuadas. Siga exatamente os exemplos.
*/
int main(void)
{
  double real;
  int contador = 1;
  printf("Digite N: ");
  scanf("%lf", &real);
  real = real / 2;

  while (real >= 1)
  {
    real = real / 2;
    contador++;
  }
  printf("Ultimo resultado = %g \n", real);
  printf("Foram feitas %d divisoes", contador);
}
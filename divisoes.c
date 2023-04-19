#include <stdio.h>
/*
Faça um programa que pergunte um número real com "Digite N: " e divida-o por dois 
sucessivamente até que o resultado seja menor que 1. Mostre o resultado da última 
divisão e a quantidade de divisões efetuadas. Siga exatamente os exemplos.
*/
int main(void) {
  double n = 0, divisao = 0;
  int qtd_divisoes = 0;
  printf("Digite N: ");
  scanf("%lf", &n);
    divisao = n /2;

  while(divisao > 1) {
    divisao = n / 2;
      qtd_divisoes++;
  }
  printf("Ultimo resultado = %g \n", divisao);
  printf("Foram feitas %d divisoes", qtd_divisoes);
  
}
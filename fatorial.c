#include <stdio.h>
/*
Faça um programa que pergunte: "Digite N: ", calcule o fatorial de N e imprima:
"O fatorial de {n} e' {fatorial}". Veja os exemplos. Use números inteiros. Dica:
você pode calcular o fatorial tanto na ordem crescente, 1 * 2 * 3 * 4, quanto na
ordem decrescente, 4 * 3 * 2 * 1. Multiplicar por 1 é opcional, mas tem que
funcionar também para o fatorial de zero, que é igual a 1.
*/
int main(void) {
  int numero = 0,fatorial = 1, contador = 1;
  printf("Digite N: ");
  scanf("%d", &numero);

    while(contador <= numero) {
      fatorial = fatorial * contador;
      contador++;

    }
  
  printf("O fatorial de %d e' %d \n", numero, fatorial);
  return 0;
}   
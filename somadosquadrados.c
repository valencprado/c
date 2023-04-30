#include <stdio.h>
#include <math.h>
/* Faça um programa que pergunte: "Digite N: ", calcule a soma dos quadrados dos N primeiros
 números inteiros, começando em 1, e imprima esta soma, precedida de
 "A soma dos quadrados e' ". Siga exatamente o modelo dos exemplos*/
int main()
{
    int n = 0, quadrado = 0, contador = 0;
    printf("Digite N: ");
    scanf("%d", &n);
    while (contador <= n)
    {
        quadrado += pow(contador, 2);
        contador++;
    }
    printf("A soma dos quadrados e' %d", quadrado);
}
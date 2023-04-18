#include <stdio.h>

int main() {
    int numero = 0 ,soma = 0 , quantidade_numeros = 0;
    double media = 0;

    printf("Digite um numero ");
    scanf("%d", &numero);
    while(numero != 0) {
        soma = soma + numero;
        quantidade_numeros = quantidade_numeros + 1;
        printf("Digite um numero ");
        scanf("%d", &numero);
    }
    media = soma / quantidade_numeros;
    printf("A media e %g", media);
}
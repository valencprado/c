#include <stdio.h>

int main(void) {
    int quantidade_pares = 0, quantidade_impares = 0, numero = 0;

    printf("Digite um numero ou 0 para sair \n");
    scanf("%d", &numero);
    
    while( numero != 0) {
        if(numero % 2 == 0 ) {
            quantidade_pares = quantidade_pares + 1;
        } else {
            quantidade_impares = quantidade_impares + 1;
        }
    printf("Digite um numero ou 0 para sair \n");
    scanf("%d", &numero);
    }
    printf("Pares = %d impares = %d", quantidade_pares,quantidade_impares);
}
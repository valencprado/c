#include <stdio.h>

int main(void) {
    int numero = 0, maior = 0, contador = 0;
    while(contador < 15) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(contador == 0) {
            maior = numero;
        }
        else {
        if(numero > maior) {
            maior = numero;
        }
        }
        contador+=1;
    }

    printf("Maior: %d", maior);
    return 0;
}
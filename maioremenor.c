#include <stdio.h>

int main(void) {
    int numero = 0, maior = 0, menor = 0, contador = 0;
    while(contador < 5) {
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        if(contador == 0) {
            maior = numero;
            menor = numero;
        }
        else {
        if(numero > maior) {
            maior = numero;
        } else {
            if(numero < menor) {
                menor = numero;
            }
        }
        }
        contador+=1;
    }

    printf("%d %d", maior, menor);
    return 0;
}
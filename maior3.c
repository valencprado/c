#include <stdio.h>

int main(void) {
    int numero1 = 0, numero2 = 0, numero3 = 0, maior = 0;
   
    printf("Digite o 1 valor: ");
    scanf("%d", &numero1);
    printf("Digite o 2 valor: ");
    scanf("%d", &numero2);
    printf("Digite o 3 valor: ");
    scanf("%d", &numero3);
/*
    int maior = numero1;
    if(maior < numero2) {
        maior = numero2;
    } else {
        if(maior < numero3) {
            maior = numero3;
        }
    }
*/
    if((numero1 > numero2) && (numero1 > numero3)) {
        maior = numero1;

    } else {
        if((numero2 > numero1) && (numero2 > numero3)) {
            maior = numero2;
        } else {
            maior = numero3;
        }
    }
    
    
   
    printf("O maior numero e: %d", maior);

}
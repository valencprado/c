#include <stdio.h>

int main(void) {
    int numero = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if( numero % 2 == 0) {
        printf("O numero e parrr");
    } else {
        printf("O numero e IMparrr");
        
    }
}
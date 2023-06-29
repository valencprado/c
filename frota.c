#include <stdio.h>

int potencia(int base, int exp) {
    int contador = 1, potencia_final = 1;

    while(contador <= exp) {
        potencia_final *= base;
        contador++;
    }
    return potencia_final;
}

int calcularPoderTotal(int frota[]) {
    int poder = 0;

    for(int i = 0; i < 10; i++) {
        if(frota[i] == 0)
            break;
        else
            poder += potencia(frota[i], i + 1);
    }
    return poder;
}

int main(void) {
    int v[10] = {3, 5, 2, 4, 0};
    printf("Poder da frota: %d", calcularPoderTotal(v));
}
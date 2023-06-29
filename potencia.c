#include <stdio.h>
// #include <math.h>

int potencia(int base, int expoente) {
    int contador = 1, potencia = 1;
    while(contador <= expoente) {
        potencia *= base;
        contador++;
    }

    return potencia;
// return pow(base, expoente);
}

int main() {
    printf("%d", potencia(3, 4));
}
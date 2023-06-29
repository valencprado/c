#include <stdio.h>
int fatorial(int n) {
    int fatorial = 1, contador = 1;

    while(contador <= n) {
        fatorial *= contador;
        contador++;
    }
    return fatorial;
}

int main() {
    printf("%d\n", fatorial(3));
}
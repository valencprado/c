#include <stdio.h>

int main() {
    int n, contador = 1, resultado;
    printf("Digite N: ");
    scanf("%d", &n);

    while (contador <= 10) {
        resultado = n * contador;
        printf("%d x %d = %d\n", n, contador, resultado);
        contador++;
    }
    return 0;
}
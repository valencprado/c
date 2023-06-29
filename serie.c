#include <stdio.h>
#include <math.h>

int main(void) {
    double n = 0;
    int contador = 1;
    double serie_soma = 0;
    double termo = 1;

    printf("Digite um limite pequeno, menor do que 1: ");
    scanf("%lf, &n");

    while (termo >= n) {
        termo = 1 / (pow(contador, 2));
        serie_soma += termo;
        contador++;
    }
    printf("Foram somados %d termos \n", contador - 1);
    printf("Soma = %g", serie_soma);

    return 0;
}
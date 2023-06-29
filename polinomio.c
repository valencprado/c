#include <stdio.h>
#include <math.h>

int main(void) {
    double coeficientes[6], x, polinomio;

    for(int i = 0; i < 6; i++) {
        printf("Digite o coeficiente %d:\n", i);
        scanf("%lf", &coeficientes[i]);
    }

    while(x != 0) {
        printf("Digite X: ");
        scanf("%lf", &x);
        if(x == 0) {
            break;
        }
        polinomio = coeficientes[0];
        for(int i = 1; i < 6; i++) {
            polinomio += coeficientes[i] * pow(x, i);
        }
        printf("p(%g) = %g\n", x, polinomio);
    }
}
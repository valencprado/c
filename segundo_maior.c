#include <stdio.h>

int segundoMaior(int v[], int n) {
    int maior = 0, segundo_maior = 0, i;
    for(i = 0; i < n; i++) {
        if(v[i] > maior) {
            segundo_maior = maior;
            maior = v[i];
        } else if (v[i] < maior && v[i] > segundo_maior) {
            segundo_maior = v[i];
        }
    }
    return segundo_maior;
}

int main(void) {
    int v[] = {4, 2, 7, 5, 1, 6, 3};
    printf("O segundo maior é: %d", segundoMaior(v, 7));
}
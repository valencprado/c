#include <stdio.h>

int cont(int vetor[], int n) {
    int i = 0, pares = 0;
    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    return pares;
}

int main(void) {
    int v[] = {1, 2, 3, 4, 5, 6};
    printf("%d", cont(v, 6));
}
#include <stdio.h>

double somav(double vetor[], int n) {
    double soma = 0;
    for(int i = 0; i < n; i++)
        soma += vetor[i];
    return soma;
}

int main(void) {
    int i;
    double vetor[5], media;

    for (i = 0; i < 5; i++) {
        printf("Digite o elemento:\n");
        scanf("%lf", &vetor[i]);
    }

    media = somav(vetor, 5) / 5;

    for (i = 0; i < 5; i++) {
        if( vetor[i] > media) {
            printf("%g ", vetor[i]);
        }
    }
    return 0;
}
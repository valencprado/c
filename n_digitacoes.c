#include <stdio.h>

// quantas vezes número foi digitado

int main(void) {
    int vetor[6];

    for(int i = 0; i < 6; i++) {
        printf("Digite o numero:\n");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 6; i++) {
        int contador = 0;
        for(int j = 0; j < 6; j++) {
            if(vetor[j] == vetor[i])
                contador++;
        }
        printf("%d ", contador);
    }
    return 0;
}
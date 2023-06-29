#include <stdio.h>

int main(void) {
    int v[15], i, j, n, soma, soma_maior = 0, posicao_inicio;

    for(i = 0; i < 15; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &n);

        if(n = 999) {
            break;
        } else {
            v[i] = n;
        }
    }

    for(j = 0; j < (i - 3); j++) {
        soma = v[j] + v[j + 1] + v[j + 2] + v[j + 3];

        if(soma > soma_maior) {
            soma_maior = soma;
            posicao_inicio = j;
        }
    }
    printf("Soma=%d inicio=%d", soma_maior, posicao_inicio);
}
#include <stdio.h>


int temperaturasAbaixoMedia(int temperaturas[]) {
    double soma = 0, media = 0;
    int dias_abaixo = 0;

    for(int i = 0; i < 7; i++) {
        soma += temperaturas[i];
    }

    media = soma / 7;

    for(int i = 0; i < 7; i++) {
        if(temperaturas[i] < media)
            dias_abaixo++;
    }

    return dias_abaixo;
}

int main(void) {
    int v[] = {23,43,19,17,3,29,30};
    printf("%d", temperaturasAbaixoMedia(v));
}
#include <stdio.h>

int obterSegundos(int hor, int min) {
    int segundos = (hor * 3600) + (min * 60);
    return segundos;
}

int main(void) {
    printf("%d", obterSegundos(38,55));
}
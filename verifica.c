#include <stdio.h>
#include <string.h>

int verifica(char letra, char secreta[], char resultado[]) {
    int vezes_encontrada = 0;

    for(int i = 0; i < strlen(secreta); i++) {
        if(letra == secreta[i]) {
            vezes_encontrada++;
            resultado[i] = letra;
        }
    }
    return vezes_encontrada;
}

int main(void) {
    char secreta[] = "SECRET";
    char result[] = "_____T";
    char letra = 'T';
    printf("Encontrou '%c' %d vezes result=%.20s\n", letra, verifica(letra, secreta, result), result);
}
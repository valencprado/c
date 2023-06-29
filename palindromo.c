#include <stdio.h>
#include <string.h>
// somente função, sem exemplos
int verificarPalindromo(char palavra[]) {
    int qtd = 0, i = 0, flag = 0;

    qtd = strlen(palavra);
    qtd--;

    for(; qtd >= 1; qtd--, i++) {
        if(palavra[i] != palavra[qtd]) {
            flag++;
        }
    }

    if(flag != 0)
        return 0;
    else
        return 1;
}
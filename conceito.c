#include <stdio.h>

char conceito(double nota) {
    char nota_final;

    if (nota >= 0 && nota < 5)
        nota_final = 'D';
    if (nota >= 5 && nota < 7)
        nota_final = 'C';
    if (nota >= 7 && nota < 9)
        nota_final = 'B';
    else
        nota_final = 'A';
    
    return nota_final;
}

int main() {
    printf("%c", conceito(5));
}
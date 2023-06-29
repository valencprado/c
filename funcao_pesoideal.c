#include <stdio.h>

double ideal(double altura, char sexo) {
    double peso_ideal = 1;

    if (sexo == 'F')
        peso_ideal = 62.1 * altura - 44.7;
    else if(sexo == 'M')
        peso_ideal = 72.7 * altura - 58;
    
    return peso_ideal;
}

int main() {
    printf("%g", ideal(1.60, 'f'));
}
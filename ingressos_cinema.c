#include <stdio.h>

int main() {
    int idade = 0, n_2 = 0, n_12 = 0, n_13 = 0;
    double preco = 0, arrecadado = 0;

    while (idade >= 0) {
        printf("Idade: ");
        scanf("%d", &idade);
        if(idade < 0)
            break;
        if(idade < 3){
            printf("Preco=0\n");
            n_2++;
        } else{

         if (idade <= 12) {
            preco = 10;
            arrecadado += preco;
            n_12++;
        } else {
            preco = 15;
            arrecadado += preco;
            n_13++;
        }
        printf("Preco=%g\n", preco);
        }
    }
    printf("Total arrecadado = %g\n", arrecadado);
    printf("N 0 a 2 = %d\n", n_2);
    printf("N 3 a 12 = %d\n", n_12);
    printf("N 13 ou mais = %d\n", n_13);
}
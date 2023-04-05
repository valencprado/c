#include <stdio.h>
/// verifica o número maior
int main(void) {
    int numero_a = 0, numero_b = 0;
    printf("Digite o numero A: ");
    scanf("%d", &numero_a);
    printf("Digite o numero B: ");
    scanf("%d", &numero_b);
    if(numero_a > numero_b) {
        printf("%d", &numero_a);
    } else {
        printf("%d", &numero_b);

    }
}
#include <stdio.h>

int main(void) {
double n1, n2;
printf("Digite a primeira nota: ");
scanf("%lg", &n1);
printf("Digite a segunda nota: ");
scanf("%lg", &n2);

double media = (n1 + n2) / 2;
printf("Media=%g", media);
}
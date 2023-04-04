#include <stdio.h>

// códigos elaborados na aula do dia 28/03

int main(void) {

// conversão dólar para real   
double valor_dolar = 2.5;
double qtd_dolar = 2.5;

printf("Digite o valor do dolar: ");
scanf("%lf", &valor_dolar);
printf("Digite a quantidade de dolares: ");
scanf("%lf", &qtd_dolar);

double total = valor_dolar * qtd_dolar;
printf("$%g = R$%g\n", qtd_dolar, total);

// soma de dois números
int n1, n2;
printf("Digite o primeiro number: ");
scanf("%d", &n1);
printf("Digite o segundo number: ");
scanf("%d", &n2);
int soma = n1 + n2;

printf("Soma: %d", soma);

// média de 3 notas
int n1, n2, n3;
printf("Digite a primeira nota: ");
scanf("%d", &n1);
printf("Digite a segunda nota: ");
scanf("%d", &n2);
printf("Digite a terceira nota: ");
scanf("%d", &n3);
int media = (n1 + n2 + n3) / 3;
printf("Total: %d", soma);

}
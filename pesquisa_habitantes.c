#include <stdio.h>

int main() {

int idade = 0, sexo = 0, maior_idade = 0, menor_idade = 120, m_baixa_renda = 0, contador = 0;
double salario = 0, media_salarial = 0, soma_salario = 0;

while (idade >= 0) {
printf("Idade: ");
scanf("%d", &idade);
if( idade < 0) 
    break;
printf("Sexo (1=F 2=M): ");
scanf("%d", &sexo);
printf("Salario:\n");
scanf("%lf", &salario);

if(idade > maior_idade) 
    maior_idade = idade;
if( idade < menor_idade)
    menor_idade = idade;
if(salario <= 1000 && sexo == 1)
    m_baixa_renda++;

soma_salario += salario;
contador++;
}
media_salarial = soma_salario / contador;
printf("Media salarial = %g\n", media_salarial);
printf("Maior idade = %d ", maior_idade);
printf("Menor idade = %d\n", menor_idade);
printf("Mulheres de baixa renda = %d", m_baixa_renda);
}
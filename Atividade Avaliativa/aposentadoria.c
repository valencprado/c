#include <stdio.h>

int main(void) {
  int ano_nascimento, ano_ingresso, ano = 2021;
  printf("Ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Ano de ingresso: ");
  scanf("%d", &ano_ingresso);

  int idade = ano - ano_nascimento;
  int tempo_trabalho = ano - ano_ingresso;

  printf("Idade = %d Tempo de trabalho = %d\n", idade, tempo_trabalho);
  printf("Tempo de trabalho = %d\n", tempo_trabalho);
  if (idade >= 65 || tempo_trabalho >= 30) {
    printf("Requerer aposentadoria");
  } else {
    if (idade >= 60 && tempo_trabalho >= 25) {
      printf("Requerer aposentadoria");

    } else {
      printf("Nao requerer");
    }
  }

  return 0;
}
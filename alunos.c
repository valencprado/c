#include <stdio.h>
int main(void) {
  int idade;
  double altura, soma_1, soma_2;
  int alunos_20 = 0, alunos_170 = 0, alunos = 0;
  printf("Idade: ");
  scanf("%d", &idade);
  printf("Altura: ");
  scanf("%lf", &altura);
  while (idade != 0 && altura != 0) {
    if(idade == 0) {
      break;
    }
    if (idade > 20) {
      soma_1 += altura;
      alunos_20++;
    }
    if (altura < 1.7) {
      soma_2 += idade;
      alunos_170++;
    }
    printf("Idade: ");
  scanf("%d", &idade);
  printf("Altura: ");
  scanf("%lf", &altura);
    alunos++;
  }
  double media_1 = soma_1 / alunos_20;
  double media_2 = soma_2 / alunos_170;
  printf("A classe tem %d alunos \n", alunos);
  if (alunos_170 == 0) {
    printf("Nao ha' alunos com menos de 1,70m de altura \n");
  } else {
    printf("A idade media dos alunos com menos de 1,70m de altura e' %.2f \n",
           media_2);
  }
  if (alunos_20 == 0) {
    printf("Nao ha' alunos com mais de 20 anos \n");
  }
  printf("A altura media dos alunos com mais de 20 anos e' %.2f \n", media_1);
}
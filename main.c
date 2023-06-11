#include <stdio.h>
// feito por: VALENTINA CORRADINI PRADO PT302539X
int menu() {
  int opcao;
  printf("\n\n**MENU FRIGORÍFICO**\n\n\n");
  printf("Digite: \n");
  printf("1- Inserir dados de um animal \n");
  printf("2- Finalizar lançamento \n");
  printf("3- Resetar valores \n");
  printf("4- Sair \n");
  scanf("%d", &opcao);
  return opcao;
}

double media_peso(int qtd, double soma_peso) { return soma_peso / qtd; }

double media_idade(int qtd, int soma_idade) { return soma_idade / qtd; }

double preco_lote(double valor_arroba, double peso_kg) {
  double peso_arroba = peso_kg / 15;

  return peso_arroba * valor_arroba;
}

int main(void) {

  // variáveis "gerais"
  double preco_arroba, peso, peso_total;
  int escolha, id, idade;
  // variáveis do mais pesado/leve
  int id_pesado, idade_pesado, id_leve, idade_leve;
  double peso_pesado = 0, peso_leve = 10000;
  // variáveis do mais velho/novo
  int idade_velho = 0, idade_novo = 100;
  double peso_velho = 0, peso_novo = 0;
  // variáveis relacionadas às médias
  int qtd_bois = 0, total_idade;
  double total_peso;

  printf("Digite o valor atual da arroba: ");
  scanf("%lf", &preco_arroba);

  escolha = menu();
  while (escolha != 4) {
    if (escolha == 1) {
      // obter dados
      printf("Digite a identificação do boi: ");
      scanf("%d", &id);
      printf("Digite o peso (em Kg) do boi: ");
      scanf("%lf", &peso);
      printf("Digite a idade (em meses) do boi: ");
      scanf("%d", &idade);

      // acumuladores
      qtd_bois++;
      total_peso += peso;
      total_idade += idade;
      // verifica quem é o mais pesado/leve
      if (peso > peso_pesado) {
        peso_pesado = peso;
        id_pesado = id;
        idade_pesado = idade;
      }
      if (peso < peso_leve) {
        peso_leve = peso;
        id_leve = id;
        idade_leve = idade;
      }
      // verifica quem é o mais velho/novo
      if (idade > idade_velho) {
        idade_velho = idade;
        peso_velho = peso;
      }
      if (idade < idade_novo) {
        idade_novo = idade;
        peso_novo = peso;
      }

    } else if (escolha == 2) {
      printf("MAIS PESADO: \nID: %d \nPESO: %g, \nIDADE: %d", id_pesado,
             peso_pesado, idade_pesado);
      printf("\nMAIS LEVE: \nID: %d \nPESO: %g, \nIDADE: %d", id_leve,
             peso_leve, idade_leve);
      printf("\nMAIS VELHO: \nPESO: %g, \nIDADE: %d", peso_velho, idade_velho);
      printf("\nMAIS NOVO: \nPESO: %g, \nIDADE: %d", peso_novo, idade_novo);
      printf("\nMédia de peso: %g", media_peso(qtd_bois, total_peso));
      printf("\nMédia de idades: %g", (media_idade(qtd_bois, total_idade)));
      printf("\nPreço do lote: %g", preco_lote(preco_arroba, total_peso));
      break;
    } else if (escolha == 3) { 
      total_peso = 0;
      total_idade = 0;
      id_leve = 0;
      id_pesado = 0;
      peso_velho = 0;
      peso_novo = 0;
      peso_pesado = 0;
      peso_leve = 10000;
      idade_pesado = 0;
      idade_leve = 0;
      idade_novo = 100;
      idade_velho = 0;
    }
    escolha = menu(); // retomar menu
  }

  return 0;
}
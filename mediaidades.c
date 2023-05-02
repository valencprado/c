#include <stdio.h>
/* Faça um programa que pergunta a idade de várias pessoas,
encerrando quando for digitada uma idade negativa. Então
calcula a média das idades, respondendo "A média de idade é {média}."*/
int main()
{
    int idade, media = 0, contador = 0;
	while(idade >= 0)
	{
		printf("Idade: ");
		scanf("%d", &idade);
		if (idade < 0)
			break;
		contador++;
		media += idade;
	}
	media /= contador;
	printf("A media de idade e %d", media);
}
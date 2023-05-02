#include <stdio.h>

int main()
{
	int n, contador = 3, num1 = 1, num2 = 1, soma = 0;
	printf("Digite N: ");
	scanf("%d", &n);
	
	if (n > 2)
	{
		printf("0 1 1 ");
		while (contador != n)
		{
			soma = num1 + num2;
			if (num1 >= num2)
				num2 = soma;
			else
				num1 = soma;
			contador++;
			printf("%d ", soma);
		}
	}
	else
	{
		if (n == 1)
			printf("0");
		else
			printf("0 1");
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int n;
	int soma = 0;
	int maior = 0;	
	int div = 0;
	
	printf("Digite 10 n�meros! \n\n");
	
	for (i = 1; i <= 10; i++)
	{
		printf ("Digite o %d� n�mero: ", i);
		scanf("%d", &n);
		
		soma += n;
		
		if (n > 10)
		{
			maior++;
		}
		
		if (n % 2 == 0)
		{
			div++;
		}
	}
	
	printf("\nA soma dos 10 n�meros digitados � igual a %d! \n", soma);
	printf("Dentre os n�meros digitados, %d s�o maiores do que 10! \n", maior);
	printf("%d n�meros sao divis�veis por 2! \n", div);
	
	return 0;
}

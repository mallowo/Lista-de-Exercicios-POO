#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int i;
	int tabuada;
	
	printf("Escreve um n�mero maior que 0 para que o programa imprima a tabuada deste: ");
	scanf("%d", &n);
	
	if (n > 0)
	{
		for (i = 1; i < 11; i++ )
		{
			tabuada = n * i;
			
			printf("%d x %d = %d\n" , n, i, tabuada);
		}
	}
	
	else 
	{
		printf("N�mero inv�lido!");
	}
}

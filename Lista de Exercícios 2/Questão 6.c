#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int i = 0;
	
	printf("Escreva um n�mero maior que 0: ");
	scanf("%d",&n);
	
	if (n > 0)
	{
	
		while (i <= n)
		{
			printf("%d \n", i);
			
			i = i+2;
		}

	}
	
	else 
	{
		("N�mero inv�lido!");
	}
	
	return 0;
}

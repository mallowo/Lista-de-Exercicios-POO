#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_impares (int n)
{	
	
	int x = 0;
	int i, j;
	
	for(i = 0, j = 0; j < n; i++)
	{
		if (i % 2 != 0)
		{
			x += i;
			j++;
		}
	}
	
	printf("A soma dos %d primeiros n�meros �mpares � igual a %d!", n, x);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	soma_impares(n);
	
	return 0;
}

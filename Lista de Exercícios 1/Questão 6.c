#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Escreva um n�mero e o programa responder� se � par ou �mpar: ");
	scanf("%d",&n);
	
	if (n % 2 == 0)
	{
		printf("%d � um n�mero par!", n);
	}
	
	else 
	{
		printf("%d � um n�mero �mpar!", n);
	}
	
	return 0;
}

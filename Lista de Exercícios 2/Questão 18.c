#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	int num2;
	int soma;
	int i;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &num2);
	
	if ((num1 > 0) && (num2 > 0))
	{
	
		for (i = 1; i <= num2; i++)
		{
			soma += num1;
		}
		
	}
	
	else 
	{
		printf("Digite n�meros positivos!");
	}
	
	printf("%d x %d = %d", num1, num2, soma);
	
	return 0;
}

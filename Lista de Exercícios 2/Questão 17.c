#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	
	printf("Digite um segundo n�mero: ");
	scanf("%d", &y);
	
	if (x > 0 && y > 0)
	{
		x *= y;
		
		printf("A multiplica��o dos dois n�meros � igual a %d!",x);
	}
	
	else 
	{
		printf("Digite n�meros positivos!");
	}

	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Escreva sua idade para checarmos se pode votar ou n�o: ");
	scanf("%d", &idade);
	
	if ((idade >= 18) && (idade <= 65))
	{
		printf ("Voto Obrigat�rio!");
	}
	
	else if ((idade >= 16) && (idade < 18) || (idade > 65))
	{
		printf("Voto facultativo!");
	}
	
	else
	{
		printf("Voce n�o pode votar!");
	}
	
	return 0;
}

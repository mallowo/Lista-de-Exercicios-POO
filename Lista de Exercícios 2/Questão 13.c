#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	char a ,e ,i ,o ,u;
	
	printf("Digite uma letra e o programa informar� se � vogal ou consoante: ");
	scanf("%c", &letra);

	if ((letra >='a' && letra <='z') || (letra>='A' && letra<='Z'))
	{
	
		if ((letra == a) || (letra == e) || (letra == i) || (letra == o) || (letra == u))
		{
			printf("A letra '%c'' � uma vogal!", letra);
		}
		
		else
		{
			printf("A letra '%c' � uma consoante!" ,letra);
		}
	
	}
	
	else 
	{
		printf("Digte uma letra!");
	}
	
	
	
	return 0;
}

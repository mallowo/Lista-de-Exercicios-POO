#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int minuscula(char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		
		printf("O caractere digitado representa uma letra mai�scula, convertido pra min�scula fica %c!", c);
	}
	
	else
	{
		printf("O caractere digitado representa uma letra mai�scula logo ele n�o precisa de convers�o: %c!", c);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	
	printf("Digite um caractere: ");
	c = getc(stdin);
	
	minuscula(c);
	
	return 0;
}

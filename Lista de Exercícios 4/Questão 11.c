#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiuscula(char c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		
		printf("O caractere digitado representa uma letra min�scula, convertido pra mai�scula fica %c!", c);
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
	
	maiuscula(c);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float conta;
	float tip;
	
	printf("Qual foi o valor da refei��o? ");
	scanf("%f", &conta);
	fflush(stdin);
	
	tip = conta * 0.1;
	
	conta += tip;
	
	
	printf("Junto com a gorjeta do gar�om, no total sua conta deu %.2f!", conta);
	
	return 0;
	
}

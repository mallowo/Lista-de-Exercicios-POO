#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void divisao (double n1, double n2, double *resultado)
{
	*resultado = n1 / n2;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double resultado;
	double n1, n2;
	
	printf("Digite um dividendo (n�mero a ser dividido): ");
	scanf("%lf", &n1);
	
	printf("Digite um divisor (n�mero que divide): ");
	scanf("%lf", &n2);
	
	divisao(n1, n2, &resultado);
	
	printf("\nO resultado da divis�o � igual a %.2lf!", resultado);
	
	return 0;	
}


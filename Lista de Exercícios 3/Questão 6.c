#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int AreaRect (int a, int b)
{
	int area;
	
	area = a * b;
	
	printf("A �rea do ret�ngulo � igual a %d!", area);
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	
	printf("Digite a base do ret�ngulo: ");
	scanf("%d", &a);
	
	printf("Digite a altura do ret�ngulo: ");
	scanf("%d", &b);
	
	AreaRect(a, b);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int s = 1;
	int a = 1;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	s += n;
	a -= n;
	
	printf("O sucessor do n�mero %d � %d! \n", n, s );
	printf("O antecessor do n�mero %d � %d!", n, -a);
	
	return 0;
}

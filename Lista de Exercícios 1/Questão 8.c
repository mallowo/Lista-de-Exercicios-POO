#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	int w;
	
	printf("Digite um n�mero para elevarmos ao cubo: ");
	scanf("%d",&x);
	
	x = x * x * x;
	
	
	printf("Digite um outro n�mero: ");
	scanf("%d",&y);
	
	w = x + y;
	printf("A soma do primeiro n�mero ao cubo com o segundo n�mero � %d",w);
	
	return 0;
}

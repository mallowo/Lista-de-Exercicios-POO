#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int soma;
	int i;
	float media;
	
	printf("Digite quantos n�meros quiser, pra encerrar a contagem escreva o n�mero '30000'! \n\n");
	
	while(n != 30000)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		
		soma += n;
		
		i++;
		
	}
	
	soma -= 30000;
	printf("A soma dos n�meros digitados �: %d \n",soma);
	
	i = i-1;
	media = soma / i;
	printf("A m�dia dos n�meros digitados �: %.2f", media);
	
	return 0;
}

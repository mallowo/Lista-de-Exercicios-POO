#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float tempo;
	float velocidade;
	float distancia;
	float combustivel;
	
	printf("Digite quantas horas foram necess�rias pra realizar o trajeto: ");
	scanf("%f", &tempo);
	
	printf("Digite qual foi a velocidade m�dia em km/h durante o trajeto: ");
	scanf("%f", &velocidade);
	
	distancia = tempo * velocidade;
	printf("A dist�ncia percorrida durante o trajeto foi %.2f km!\n", distancia);
	
	combustivel = distancia / 12;
	printf("A quantidade de combust�vel usado durante o trajeto foi de %.2f litros!", combustivel);
	
	
	return 0;
}

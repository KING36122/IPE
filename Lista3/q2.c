#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float custoF,distribuidor,impostos;
	printf("Digite o valor do custo de f�brica do carro: ");
	scanf("%f",&custoF);
	distribuidor = custoF*0.12;
	impostos = custoF*0.45;
	printf("O custo ao consumidor ser� de %.2f", custoF+distribuidor+impostos);
}

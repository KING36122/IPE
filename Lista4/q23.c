#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float peso,k,v;
	printf("Digite a quantidade de peixes (em Kg): ");
	scanf("%f",&peso);
	if(peso <= 0){
		printf("Valor inv�lido!");
	}else{
		if(peso > 50){
			k = peso - 50;
			v = k*4;
			printf("Voc� ir� pagar R$%.2f reais de multa!",v);
		}else{
			printf("Voc� n�o pagar� nada!");
		}
	}
}

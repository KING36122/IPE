#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float qtd,valor;
	printf("Digite a quantidade de dias que ficar� no hotel: ");
	scanf("%f",&qtd);
	if(qtd <= 0){
		printf("Quantidade inv�lida!");
		valor = 0;
	}else if(qtd > 15){
		valor = 60 + 5.5*qtd;
	}else if(qtd == 15){
		valor = 60 + 6*qtd;
	}else{
		valor = 60 + 8*qtd;
	}
	printf("Sua conta por ficar %.0f dias no hotel � de R$%.2f",qtd,valor);
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[30],sexo;
	int idade;
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	fflush(stdin);
	printf("Digite M para masculino ou F para feminino: ");
	scanf("%c",&sexo);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if ((sexo == 'F' || sexo == 'f') && (idade < 25)){
		printf("Parab�ns, %s voc� foi aceita!",nome);
	}else if((sexo == 'M' || sexo == 'm') || (idade > 25 || idade <= 0)){
		printf("Voc�, %s n�o foi aceita(o)",nome);
	}else{
		printf("Sexo ou idade inv�lida!");
	}
}

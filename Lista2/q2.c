#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if(idade < 18){
		if(idade >= 16){
			printf("Eleitor Facultativo!");
		}else if(idade <= 0){
			printf("Idade Inv�lida!");
		}else{
			printf("N�o Eleitor!");
		}
	}else{
		if(idade <= 65){
			printf("Eleitor Obrigat�rio!");
		}else{
			printf("Eleitor Facultativo!");
		}
	}
}

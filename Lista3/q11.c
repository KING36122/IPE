#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	if(num == 5){
		printf("Seu n�mero � igual a 5!");
	}else if(num == 200){
		printf("Seu n�mero � igual a 200!");
	}else if(num == 400){
		printf("Seu n�mero � igual a 400!");
	}else if(num > 500 && num < 1000){
		printf("Seu n�mero est� entre 500 e 100!");
	}else{
		printf("Seu n�mero n�o est� em nenhuma das op��es anteriores!");
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float sf,n,saldo,dep,ret;
	char t;
	printf("Digite seu n�mero do cart�o (somente o n�mero): ");
	scanf("%f",&n);
	printf("Informe seu saldo: ");
	scanf("%f",&saldo);
	fflush(stdin);
	printf("Qual opera��o deseja usar?");
	printf("\nDigite D para dep�sito ou R para retirada: ");
	scanf("%c",&t);
	if(t == 'D' || t == 'd'){
		printf("Quanto deseja depositar?");
		printf("\nDep�sito de: ");
		scanf("%f",&dep);
		sf = saldo + dep;
		printf("Seu saldo � de R$%.2f", sf);
	}else if(t == 'R' || t == 'r'){
		printf("Quanto deseja retirar?");
		printf("\nRetirada de: ");
		scanf("%f",&ret);
		sf = saldo - ret;
		if (sf < 0){
			printf("Seu saldo est� negativo (R$%.2f), conta estourada!",sf);
		}else{
			printf("Seu novo saldo � de R$%.2f",sf);
		}
	}else{
		printf("Opera��o Inv�lida!");
	}
}

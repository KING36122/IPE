#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1,num2;
	char sinal;
	printf("Digite um n�mero: ");
	scanf("%f",&num1);
	printf("Digite outro n�mero: ");
	scanf("%f",&num2);
	printf("DIGITE:\n+ para somar \n- para subtrair \n* para multiplicar \n/ para dividir: ");
	scanf("%s",&sinal);
	switch(sinal){
		case('+'):
			printf("A soma de %.2f + %.2f � %.2f",num1,num2,num1+num2);
			break;
		case('-'):
			printf("A subtra��o de %.2f - %.2f � %.2f",num1,num2,num1-num2);
			break;
		case('*'):
			printf("A multiplica��o de %.2f * %.2f � %.2f",num1,num2,num1*num2);
			break;
		case('/'):
			if(num2 != 0){
			printf("A divis�o de %.2f por %.2f � %.2f",num1,num2,num1/num2);
			break;
			}else{
				printf("Divis�o por 0!");
				break;
			}
		default:
			printf("Op��o Inv�lida!");
			break;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal;
	printf("Digite seu sal�rio: ");
	scanf("%f",&sal);
	if(sal > 0 && sal <= 600){
		printf("Voc� est� isento, seu sal�rio � de R$%.2f", sal);
	}else if(sal > 600 && sal <= 1200){
		printf("Seu sal�rio sofrer� desconto de 20%, seu sal�rio � de R$ %.2f", (sal - (sal*0.2)));
	}else if(sal > 1200 && sal <= 2000){
		printf("Seu sal�rio sofrer� desconto de 25%, seu sal�rio � de R$ %.2f", (sal - (sal*0.25)));
	}else if(sal > 2000){
		printf("Seu sal�rio sofrer� desconto de 30%, seu sal�rio � de R$ %.2f", (sal - (sal*0.3)));
	}else{
		printf("Sal�rio Inv�lido!");
	}
}

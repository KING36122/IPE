#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float salarioBruto,emp;
	int qtd;
	printf("Digite seu sal�rio bruto: ");
	scanf("%f",&salarioBruto);
	printf("Digite o valor do empr�stimo: ");
	scanf("%f",&emp);	
	printf("Digite a quantidade de parcelas: ");
	scanf("%d",&qtd);
	if(qtd != 0){
		if((emp/qtd) <= (salarioBruto*0.3)){
			printf("Empr�stimo concedido!");
		}else{
			printf("Empr�stimo n�o concedido!");
		}
	}
}

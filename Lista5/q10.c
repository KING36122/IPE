#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd,i;
	float sal,soma,maior,menor;
	printf("Digite a quantidade de funcion�rios: ");
	scanf("%d",&qtd);
	printf("Digite o sal�rio: R$");
	scanf("%f",&sal);
	soma = sal;
	maior = sal;
	menor = sal;
	if(sal <= 0){
		printf("Sal�rio inv�lido!");
	}else{
		for(i=0;i<qtd-1;i++){
			printf("Digite o sal�rio: R$");
			scanf("%f",&sal);
			if(sal <= 0){
				printf("Sal�rio inv�lido!");
				break;
			}else{
				if (sal > maior){
					maior = sal;
				}else if(sal < menor){
					menor = sal;
				}
				soma+=sal;
			}
		}
		printf("\nM�dia dos sal�rios dos %d funcion�rios � de: R$%.2f",qtd,soma/qtd);
		printf("\nMaior sal�rio: R$%.2f",maior);
		printf("\nMenor sal�rio: R$%.2f",menor);
	}
}

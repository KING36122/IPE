#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int op;
	float a,n;
	printf("Digite um n�mero: ");
	scanf("%f",&n);
	printf("Escolha a op��o de c�lculo: ");
	printf("\nMENU");
	printf("\n101 - Raiz Quadrada\n102 - A Metade\n103 - 10% do n�mero\n104 - O Dobro");
	printf("\nEscolha a op��o: ");
	scanf("%d",&op);
	switch(op){
		case 101:
			if(n<0){
				printf("Resultado da raiz desse n�mero n�o existe nos n�meros Reais!");
			}else{
				printf("Raiz quadrada de %.2f � %.2f",n,sqrt(n));
			}
			break;
		case 102:
			a = n/2;
			printf("A metade de %.2f � %.2f",n,a);
			break;
		case 103:
			printf("10 porcento de %.2f � %.2f porcento",n,n*0.1);
			break;
		case 104:
			printf("O dobro de %.2f � %.2f",n,n*2);
			break;
		default:
			printf("Op��o Inv�lida!");
			break;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float i;
	printf("Informe o �ndice de polui��o: ");
	scanf("%f",&i);
	if(i < 0){
		printf("Nenhuma empresa notificada!");
	}else if(i >= 0.5){
		printf("Todos os grupos de ind�strias devem receber intima��o de paralisa��o!");
	}else if(i >= 0.4){
		printf("O 1� e 2� grupo de ind�strias devem receber intima��o de suspens�o!");
	}else if(i >= 0.3){
		printf("O 1� grupo de ind�stria deve receber intima��o de suspens�o!");
	}else if(i >= 0 && i <= 0.25){
		printf("N�vel aceit�vel!");
	}else{
		printf("N�o emite intima��o, mas est� acima do n�vel aceit�vel");
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float v,m=0;
	printf("Digite a sua velocidade (em Km/h): ");
	scanf("%f",&v);
	if(v<=0){
		printf("Velocidade inv�lida!");
	}else{
		m = v/3.6;
     	printf("Sua velocidade � de %.2f m/s",m);
	}
}

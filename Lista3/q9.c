#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float l1,l2,l3;
	printf("Digite um lado do tri�ngulo: ");
	scanf("%f",&l1);
	printf("Digite um outro lado do tri�ngulo: ");
	scanf("%f",&l2);
	printf("Digite um outro lado do tri�ngulo: ");
	scanf("%f",&l3);
	if(l1 <= 0 || l2 <= 0 || l3 <= 0){
		printf("Nenhum lado de tri�ngulo pode ser menor ou igual a 0!");
	}else if(l1 == l2 && l2 == l3){
		printf("Tri�ngulo Equil�tero!");
	}else if((l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l2 == l3 && l2 != l1)){
		printf("Tri�ngulo Is�sceles!");
	}else if(l1 != l2 && l2 != l3 && l3 != l1){
		printf("Tri�ngulo Escaleno!");
	}else{
		printf("As medidas n�o comp�em um tri�ngulo!");
	}
}

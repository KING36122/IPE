#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	if (num%2 == 0){
		printf("Ele � par!");
	}else{
		printf("Ele � �mpar!");
	}
}

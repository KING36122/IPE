#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float s,ns,sl;
	printf("Digite seu sal�rio bruto: ");
	scanf("%f",&s);
	if(s<=0){
		printf("Sal�rio inv�lido!");
	}else{
		ns = s - (s*0.1);
		sl = ns - (ns*0.05);
	    printf("Seu sal�rio l�quido � de R$%.2f", sl);
	}
}

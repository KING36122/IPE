#include<stdio.h>
int main(){
	float salario,perc,aumento,novoSalario;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	printf("Digite seu percentual de aumento (apenas o n�mero sem a porcentagem): ");
	scanf("%f",&perc);
	aumento = salario*(perc)/100;
	novoSalario = salario+aumento;
	printf("Seu aumento � de R$ %.2f e seu novo sal�rio � de: R$ %.2f",aumento,novoSalario);
}

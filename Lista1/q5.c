#include<stdio.h>
int main(){
	int horaAula,numeroDeAulas;
	float percDesconto,salarioLiquido;
	printf("Digite a quantidade de horas de aula dadas no m�s: ");
	scanf("%i",&horaAula);
	printf("Digite o n�mero de aulas dadas no m�s: ");
	scanf("%i",&numeroDeAulas);
	printf("Digite o percentual de desconto do INSS (apenas o n�mero, sem a porcentagem): ");
	scanf("%f",&percDesconto);
	salarioLiquido = horaAula*numeroDeAulas - ((horaAula*numeroDeAulas)*(percDesconto/100));
	printf("Seu sal�rio l�quido � de: R$ %.2f",salarioLiquido);
}


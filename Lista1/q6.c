#include<stdio.h>
#include<math.h>
int main(){
	int base,altura,pe,area,dia;
	printf("Digite o valor da base do ret�ngulo (em cm): ");
	scanf("%d",&base);
	printf("Digite o valor da altura do ret�ngulo (em cm): ");
	scanf("%d",&altura);
	pe = 2 * (base+altura);
	area = base*altura;
	dia = sqrt((base*base)+(altura*altura));
	printf("O per�metro do ret�ngulo � %d a �rea � %d e o di�metro � %d",pe,area,dia);
}


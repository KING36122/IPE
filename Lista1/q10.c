#include<stdio.h>
#include<math.h>
int main(){
	int h,vm;
	float d,litros;
	printf("Digite a quantidade de horas que voc� percorreu: ");
	scanf("%d",&h);
	printf("Digite sua velocidade m�dia em (Km/h): ");
	scanf("%d",&vm);
	d = vm*h;
	litros = (d/12);
	printf("Voc� precisar� de %.2f litros para sua viagem!",litros);
}

#include<stdio.h>
#include<math.h>
int main(){
	int d;
	float c,consumo;
	printf("Digite a quantidade percorrida (em Km): ");
	scanf("%d",&d);
	printf("Digite a quantidade de combust�vel consumido: ");
	scanf("%f",&c);
	consumo = d/round(c);
	printf("Seu consumo m�dio � de %.2f Km/l",consumo);
}


#include<stdio.h>
#include<math.h>
int main(){
	float x1,y1,x2,y2,d;
	printf("Digite a cordenada x do ponto 1: ");
	scanf("%f",&x1);
	printf("Digite a cordenada y do ponto 1: ");
	scanf("%f",&y1);
	printf("Digite a cordenada x do ponto 2: ");
	scanf("%f",&x2);
	printf("Digite a cordenada y do ponto 2: ");
	scanf("%f",&y2);
	d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	printf("A dist�ncia dos pontos 1 e 2 � %.2f", d);
}


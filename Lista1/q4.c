#include<stdio.h>
int main(){
	float altura,raio,pi,volume;
	printf("Digite a altura da lata de �leo (em cm): ");
	scanf("%f",&altura);
	printf("Digite o raio da lata de �leo (em cm): ");
	scanf("%f",&raio);
	pi=3.14;
	volume = pi * (raio*raio) * altura;
	printf("O volume da lata de �leo � %.2f cent�metros c�bicos",volume);
}

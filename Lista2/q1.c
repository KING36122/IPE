#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite um n�mero: ");
	scanf("%d",&a);
	printf("Digite um n�mero: ");
	scanf("%d",&b);
	printf("Digite um n�mero: ");
	scanf("%d",&c);
	if((a==b)&&(b==c)){
		printf("Os n�meros s�o iguais!");
	}else if((a<b)&&(b<c)){
		printf("%d - %d - %d",a,b,c);
	}else if((a<c)&&(c<b)){
		printf("%d - %d - %d",a,c,b);
	}else if((b<a)&&(a<c)){
		printf("%d - %d - %d",b,a,c);
	}else if((b<c)&&(c<a)){
		printf("%d - %d - %d",b,c,a);
	}else if((c<b)&&(b<a)){
		printf("%d - %d - %d",c,b,a);
	}else if((c<a)&&(a<b)){
		printf("%d - %d - %d",c,a,b);
	}
}

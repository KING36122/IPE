#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int par=0,im=0,n,i,num;
	printf("Informe quantos n�meros voc� vai digitar: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Digite: ");
		scanf("%d",&num);
		if(num%2==0 && num!=0){
			par += 1;
		}else if(num == 0){
			par+=0;
			im+=0;
		}else{
			im += 1;
		}
	}
	printf("N�meros pares: %d e n�meros �mpares: %d",par,im);
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite:");
	printf("\n5 para �timo");
	printf("\n4 para bom");
	printf("\n3 para regular");
	printf("\n2 para ruim");
	printf("\n1 para p�ssimo");
	float i,idade,bomRegular=0,media=0,c=0,maiorP=0,maiorO=0,maiorR=0,pe=0,n=3,op;
	for(i=0;i<n;i++){
		printf("\nInforme sua idade: ");
		scanf("%f",&idade);
		if(idade > 0){
			printf("\nDigite sua opini�o para o filme: ");
			scanf("%f",&op);
			if(op == 4 || op == 3){
				bomRegular++;
			}else if(op == 2){
				media=media+idade;
				c++;
				if(idade > maiorR){
					maiorR = idade;
				}
			}else if(op == 1){
				pe++;
				if(idade > maiorP){
					maiorP = idade;
				}
			}else if(op == 5){
				if(idade > maiorO){
					maiorO=idade;
				}
			}else{
				printf("Op��o inv�lida!");
				break;
			}
		}else{
			printf("Op��o inv�lida!");
			break;
		}
	}
	printf("\nQuantidade percentual de respostas boas e ruins: %.2f",(bomRegular/n)*100," porcento");
if (c > 0)
	printf("\nA m�dia das idades que responderam ruim: %.2f",(media/c));
printf("\nPorcentagem de respostas p�ssimo: %.2f",(pe/n)*100);
printf("\nMaior idade que marcou p�ssimo: %.2f",maiorP);
printf("\nA diferen�a: %.2f",(maiorO-maiorR));
}

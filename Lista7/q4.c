#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%1000;
		printf("%d ",v[i]);
	}
}

void b(int v[],int t){
	int i,maior=v[0],menor=v[0],m,n;
	for(i=0;i<t;i++){
		if(v[i]>maior){
			maior=v[i];
			m=i;
		}else if(v[i]<menor){
			menor=v[i];
			n=i;
		}
	}
	printf("\nO maior n�mero � %d (posi��o %d) e o menor � %d (posi��o %d)",maior,m,menor,n);
	printf("\nA diferen�a entre eles � de: %d",maior-menor);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,A[n];
	a(A,n);
	b(A,n);
}

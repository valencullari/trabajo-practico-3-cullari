/*2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.*/
#include <stdio.h>

void cuentas (int *a,int *b,int *c,int *d){
	
	int e=0;
	
	for(int i=0;i<*b;i++)
	{
		e+=*(a+i);
	}
	
	*c=e;
	*d=e/ *b;
}



int main(){

	int i,n,sum=0,prom=0;

	
	printf("ingrese la cantidad de valores del arreglo:\t");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el valor en la posicion %d:\t",i+1);
		scanf("%d",&num[i]);
	}
	cuentas(num,&n,&sum,&prom);
	
	printf("la suma es:\t%d\nel promedio es:\t%d",sum,prom);
	
	

}

/*copiar un arreglo en otro arreglo usando punteros y funciones. mostrando el resultado final */
#include <stdio.h>

void copiar (int *a, int *b, int *c){
	
	for(int i=0;i<*b;i++)
	{
		*(c+i)=*(a+i);
	}
	
	
}

int main(){
	
	int i,n;

	
	printf("ingrese la cantidad de valores del arreglo:\t");
	scanf("%d",&n);
	
	int num[n],num2[n];
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el valor en la posicion %d:\t",i+1);
		scanf("%d",&num[i]);
	}
	
	copiar(num,&n,num2);
	
	printf("primer arreglo\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
		
	}
	printf("\n\nsegundo arreglo\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",num2[i]);
		
	}
	
	
}

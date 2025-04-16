/*3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.*/
#include <stdio.h>

void mayor (int *a,int *b,int *c){
	
	int aux;
	
	aux=*a;
	for(int i=0;i<*b;i++)
	{
		if(aux<*(a+i))
		{
			aux=*(a+i);
		}
	}
	*c=aux;
	
}

void menor (int *a,int *b,int *c){
	int aux;
	
	aux=*a;
	for(int i=0;i<*b;i++)
	{
		if(aux>*(a+i))
		{
			aux=*(a+i);
		}
	}
	*c=aux;
}


int main(){
	int i,n,may,men;

	
	printf("ingrese la cantidad de valores del arreglo:\t");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el valor en la posicion %d:\t",i+1);
		scanf("%d",&num[i]);
	}
	
	mayor(num,&n,&may);
	menor(num,&n,&men);
	
	printf("el numero mayor es: %d\n",may);
	printf("el numero menor es: %d",men);
	
	
}

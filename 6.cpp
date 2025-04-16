#include <stdio.h>

int ocurrencias(int *a,int b,int c)
{
	
	int i,aux=0;
	
	for(i=0;i<b;i++)
	{
		if(*(a+i)==c)
		{
			aux++;
		}
	}
	return aux;
}
int main(){
	
	int i,n,ele;

	
	printf("ingrese la cantidad de valores del arreglo:\t");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el valor en la posicion %d:\t",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\ningrese el numero que desea contar sus ocurrencias:\t");
	scanf("%d",&ele);
	
	int ocu = ocurrencias(num,n,ele);
	printf("\nel numero %d se repite un total de [%d] veces",ele,ocu);
	
	
	
}

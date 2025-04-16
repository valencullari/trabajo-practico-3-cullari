#include <stdio.h>

void intercambio (int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}

int main(){
	
	int n1,n2;
	
	printf("ingresar el primer numero:\t");
	scanf("%d",&n1);
	printf("ingresar el segundo numero:\t");
	scanf("%d",&n2);
	
	printf("los valores originales son: (n1) %d y (n2) %d",n1,n2);
	intercambio(&n1,&n2);
	printf("\n\nlos valores finales son: (n1) %d y (n2) %d",n1,n2);	
	
}

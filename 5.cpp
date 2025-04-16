/*5. Concatenar dos cadenas usando punteros y funciones.*/
#include <stdio.h>
#include <string.h>

void unir(char *a,char *b,char *c){

	int canta = strlen(a);
	int cantb = strlen(b);
	int i,aux=0;
	
	for(i=0;i<canta;i++)
	{
		*(c+i)=*(a+i);	
	}	
	
	*(c+i)=' ';
	i++;
	
	for(int j=0;j<cantb;j++)
	{
		*(c+i)=*(b+j);
		i++;
	}
	*(c + i) = '\0';
	
}
void limpiarSaltoLinea(char *A) {
    char *nl = strchr(A, '\n');
    if (nl) *nl = '\0';
}



int main(){
	
	char cad1[40],cad2[40],cadu[80];
	
	printf("ingrese una cadena de caracteres:\n");
	fgets(cad1,sizeof(cad1),stdin);
	limpiarSaltoLinea(cad1);
	
	
	printf("ingrese una cadena de caracteres:\n");
	fgets(cad2,sizeof(cad2),stdin);
	limpiarSaltoLinea(cad2);
	
    
	unir(cad1,cad2,cadu);
	printf("el texto unido es:\t%s",cadu);
	
	return 0;
}











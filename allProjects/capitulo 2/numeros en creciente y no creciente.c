/*Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos tres números reales, identifique cuál es el mayor. Considera
que los números pueden ser iguales.*/


#include<stdio.h>

int main(){
	int n1,n2,n3;
	
	printf("Ingrese primer numero: ");scanf("%d",&n1);
	printf("Ingrese segundo numero: ");scanf("%d",&n2);
	printf("Ingrese tercer numero: ");scanf("%d",&n3);
	
	if ( (n1 < n2) && (n2 < n3) ){
		printf("\nLos estan orden creciente.");
	}
	else {
		printf("\nLos numeros no estan en creciente.");
	}
}

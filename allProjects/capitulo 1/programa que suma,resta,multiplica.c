/*Construye un diagrama de flujo y el correspondiente programa en C que
al recibir como datos dos números reales, calcule la suma, resta y
multiplicación de dichos números.*/


#include<stdio.h>

int main(){
	int suma,multi,resta,n1,n2;
	printf("Ingrese primer numero: ");
	scanf("%i",&n1);
	printf("Ingrese segundo numero: ");
	scanf("%i",&n2);
	
	suma = n1+n2;
	multi = n1*n2;
	resta = n1-n2;
	
	printf("\nLa suma es: %i \n",suma);
	printf("La multiplicacion es: %i \n",multi);
	printf("La resta es: %i \n",resta);
	
}

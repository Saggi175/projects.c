/*Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos tres números reales, identifique cuál es el mayor. Considera
que los números pueden ser iguales.*/


#include<stdio.h>

int main(){
	float n1,n2,n3;
	
	printf("Ingrese primer numero: ");scanf("%f",&n1);
	printf("Ingrese segundo numero: ");scanf("%f",&n2);
	printf("Ingrese tercer numero numero: ");scanf("%f",&n3);
	
	if (n1 > n2 && n1 > n3){
		printf("\nEl numero mayor es el primer numero: %.2f",n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("\nEl numero mayor es el segundo numero: %.2f",n2);
	}
	else if(n3 > n1 && n3 > n2){
		printf("\nEl numero mayor es el tercer numero: %.2f",n3);
	}
	
	else {
		printf("\nLos numero son iguales.");
	}	
}

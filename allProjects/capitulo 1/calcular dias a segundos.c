/*Construye un diagrama de flujo y el correspondiente programa en C que calcule
e imprima el número de segundos que hay en un determinado número de días.*/

#include<stdio.h>

int main(){
	long int segundos,dias;
	
	printf("Ingrese numero de dias: ");
	scanf("%ld",&dias);
	
	segundos = dias * 86400;
	
	printf("El resultado es: %ld segundos",segundos,dias);
	
	
	
	
}

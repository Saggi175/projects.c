/*En una casa de cambio necesitan construir un programa tal que al dar como dato
una cantidad expresada en dólares, convierta esa cantidad a pesos. Construye el
diagrama de flujo y el programa correspondiente.*/

#include<stdio.h>

int main(){
	float peso,dolar,precioDolar;
	
	printf("Ingrese el precio del dolar: ");
	scanf("%f",&precioDolar);
	printf("Ingrese dolares a convertir: ");
	scanf("%f",&dolar);
	
	
	peso = precioDolar * dolar;
	
	printf("Equivale a: %.2f",dolar,peso);
	
	
}

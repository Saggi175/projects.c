/*Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos el costo de un artículo vendido y la cantidad de dinero
entregada por el cliente, calcule e imprima el cambio que se debe entregar al
cliente.*/


#include<stdio.h>

int main(){
	float cambio,pagado,articulo;
	
	printf("Ingrese el precio del articulo: ");
	scanf("%f",&articulo);
	printf("Ingrese cantidad pagada por el cliente: ");
	scanf("%f",&pagado);
	
	cambio = pagado - articulo;
	
	printf("\nEl cambio es: %.2f",cambio);
	
	
	
	
}

/*Construye un diagrama de flujo y el correspondiente programa en C que permita
convertir de pulgadas a milímetros, de yardas a metros y de millas a kilómetros.*/

#include<stdio.h>

int main(){
	int opcion;
	float pulgadas,milimetros,yardas,metros,millas,kilometros;
	
	printf("\n***MENU***");
	printf("\n1. Pulgadas a milimetros");
	printf("\n2. Yardas a metros");
	printf("\n3. Millas a kilometros\n");
	printf("\nIngrese una opcion: ");
	scanf("%d",&opcion);
	
	switch (opcion){
		
		case 1: 
			printf("\n-------------------------------------\n");
			printf("\nIngresar pulgadas: ");
			scanf("%f",&pulgadas);
			milimetros = pulgadas * 25.40;
			printf("\n%.2f pulgadas equivalen a %.2f milimetros",pulgadas,milimetros);
			break;
		
		case 2: 
			printf("\n-------------------------------------");
			printf("\nIngresar yardas: ");
			scanf("%f",&yardas);
			metros = yardas * 0.9144;
			printf("\n%.2f yardas equivalen a %.2f metros",yardas,metros);
			break;
		
		case 3: 
			printf("\n-------------------------------------");
			printf("\nIngresar millas: ");
			scanf("%f",&millas);
			kilometros = millas * 1.6093;
			printf("\n%.2f millas equivalen a %.2f kilometros",millas,kilometros);
			break;
			
		default:
		
			printf("\nIngrese una opcion valida.");
			break;
		
	}
	
	
}

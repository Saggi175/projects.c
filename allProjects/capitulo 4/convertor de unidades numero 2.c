/*Construye un diagrama de flujo y el correspondiente programa en C que permita
realizar la conversión de medidas de pesos, longitud y volumen, de acuerdo con
la tabla 2.7. Se debe escribir el valor a convertir, la medida en que está expresado
el valor, el nuevo valor y la nueva medida correspondiente*/

#include<stdio.h>

int main(){
	int opcionSUBmenu,opcionMedidas;
	float pulg,mlm,yar,mtrs,kg,lb,onz,gr,mtrs3,pie3,yar3;
	
	printf("Ingrese la opcion que deseas: ");
	printf("\n1. Medidas de longitud");
	printf("\n2. Medidas de volumen");
	printf("\n3. Medidas de peso");
	printf("\n\nIngresa una opcion: ");
	scanf("%d",&opcionMedidas);
	
	switch (opcionMedidas){
		
		case 1:
			printf("\n---MEDIDAS DE LONGITUD---\n");
			printf("\nIngrese una opcion: ");
			printf("\n1. Pulgadas a milimetros");
			printf("\n2. Yardas a metros");
			printf("\n\nIngresa una opcion: ");
			scanf("%d",&opcionSUBmenu);
			
			switch (opcionSUBmenu){
				
				case 1:
					printf("\n---Pulgadas a milimetros---\n");
					printf("\nIngresa las pulgadas a convertir: ");
					scanf("%f",&pulg);
					mlm = pulg * 25.40;
					printf("\n%.2f pulgadas equivalen a %.2f milimetros",pulg,mlm);
					break;
					
				case 2:	
					printf("\n---Yardas a metros---");
					printf("\nIngresa las Yardas a convertir: ");
					scanf("%f",&yar);
					mtrs = yar * 0.9144;
					printf("\n%.2f yardas equivalen a %.2f metros",yar,mtrs);
					break;
					
				default:
					printf("\nLa opcion no es correcta.");
					break;	
			}
			
		case 2:
			printf("\n---MEIDAS DE VOLUMEN---\n");
			printf("\nIngrese una opcion: ");
			printf("\n1. Pies al cubo a metros al cubo");
			printf("\n2. Yardas al cubo a metros al cubo");
			printf("\n\nIngresa una opcion: ");
			scanf("%d",&opcionSUBmenu);
			
			switch (opcionSUBmenu){
				
				case 1:
					printf("\n---Pies al cubo a metros al cubo---\n");
					printf("\nIngresa las pies a convertir: ");
					scanf("%f",&pie3);
					mtrs = pie3 * 0.02832;
					printf("\n%.2f pies al cubo equivalen a %.2f metros al cubo",pulg,mlm);
					break;
					
				case 2:	
					printf("\n---Yardas al cubo a metros al cubo---");
					printf("\nIngresa las Yardas al cubo a convertir: ");
					scanf("%f",&yar3);
					mtrs = yar3 * 0.7646;
					printf("\n%.2f yardas equivalen a %.2f metros",yar3,mtrs3);
					
				default:
					printf("\nLa opcion no es correcta.");
					break;
			}
			
			
			
		case 3:
			printf("\n---MEDIDAS DE PESO---\n");
			printf("\nIngrese una opcion: ");
			printf("\n1. Onzas a gramos");
			printf("\n2. Libras a kilogramos\n");
			printf("\n\nIngresa una opcion: ");
			scanf("%d",&opcionSUBmenu);
			
			switch (opcionSUBmenu){
				
				case 1:
					printf("\n---Onzas a gramos---\n");
					printf("\nIngresa las onzas a convertir: ");
					scanf("%f",&onz);
					mlm = onz * 28.35;
					printf("\n%.2f onzas equivalen a %.2f gramos",onz,gr);
					break;
					
				case 2:	
					printf("\n---Libras a kilogramos---\n");
					printf("\nIngresa las libras a convertir: ");
					scanf("%f",&lb);
					mtrs = lb * 0.45359;
					printf("\n%.2f libras equivalen a %.2f kilogramos",lb,kg);
					break;
					
				default:
					printf("\nLa opcion no es correcta.");
					break;
			}
			break;
		
		default:
			
			printf("\nLa opcion no es correcta.");
			break;	
	}
		
	
}

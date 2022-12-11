/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir como datos el radio, la generatriz y la altura de un cono, calcule e imprima el
área de la base, el área lateral, el área total y su volumen..*/

#include<stdio.h>
#include<math.h>

int main(){
	float radioCONO,generatrizCONO,alt_cono,area_cono,volumen,areaLATERAL,area_total;
	
	printf("Ingrese el radio del cono: ");scanf("%f",&radioCONO);
	printf("Ingrese generatriz del cono: ");scanf("%f",&generatrizCONO);
	printf("Ingrese altura del cono: ");scanf("%f",&alt_cono);
	
	area_cono = M_PI * pow(radioCONO,2);
	areaLATERAL = M_PI * radioCONO * generatrizCONO;
	area_total = area_cono + areaLATERAL;
	volumen = (area_cono * alt_cono) / 3;
	
	printf("\nEl area base del cono es: %f",area_cono);
	printf("\nEl area lateral es: %f",areaLATERAL);
	printf("\nEl area total del cono es: %f",area_total);
	printf("\nEl volumen del cono es: %f",volumen);
	
	
	
	
}

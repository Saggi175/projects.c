/*Construye un diagrama de flujo y el respectivo programa en C que, al recibir como datos las coordenadas de los puntos P1, P2 y P3 que corresponden a los vértices de un triángulo
calcule su superficie.*/

#include<stdio.h>
#include<math.h>

int main(){
	float x1,x2,x3,y1,y2,y3,area;
	
	printf("Ingrese las coordenadas en 'x' del punto 1: ");
	scanf("%f",&x1);
	printf("Ingrese las coordenadas en 'y' del punto 1: ");
	scanf("%f",&y1);
	printf("Ingrese las coordenadas en 'x' del punto 2: ");
	scanf("%f",&x2);
	printf("Ingrese las coordenadas en 'y' del punto 2: ");
	scanf("%f",&y2);
	printf("Ingrese las coordenadas en 'x' del punto 3: ");
	scanf("%f",&x3);
	printf("Ingrese las coordenadas en 'y' del punto 3: ");
	scanf("%f",&y3);
	
	area = labs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) /2;
	
	printf("\nEl resultado es: %.3f",area);
	
	
}

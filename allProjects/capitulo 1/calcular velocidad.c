/*En las olimpíadas de invierno el tiempo que realizan los participantes en la
competencia de velocidad en pista se mide en minutos, segundos y centésimas.
La distancia que recorren se expresa en metros. Construye tanto un diagrama de
flujo como un programa en C que calcule la velocidad de los participantes en
kilómetros por hora de las diferentes competencias.*/

#include<stdio.h>


int main(){
	float veloci_kh,veloci_ms,time_seg,centesimas,seg,min,distancia;
	
	printf("Ingrese la distancia recorrida: ");
	scanf("%f",&distancia);
	printf("Ingrese la cantidad de minutos: ");
	scanf("%f",&min);
	printf("Ingrese la cantidad de segundos: ");
	scanf("%f",&seg);
	printf("Ingrese la de centesimas: ");
	scanf("%f",&centesimas);
	
	time_seg = (min * 60) + seg + (centesimas/100);
	veloci_ms = distancia / time_seg;
	veloci_kh = (veloci_ms * 3600) / 1000;
	
	printf("La velocidad es de: %.2f KM/H",veloci_kh);
	
	
	
	
}

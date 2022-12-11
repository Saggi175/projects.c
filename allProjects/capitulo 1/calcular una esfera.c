/*Construye un diagrama de flujo y el programa correspondiente en C que, al recibir como dato el radio de una esfera
calcule e imprima el área y su volumen.*/

#include<stdio.h>
#include<math.h>

int main(){
	float radio,area,volumen;
	
	printf("Ingrese el radio de la esfera: ");
	scanf("%f",&radio);
	
	area = 4 * M_PI * pow(radio,2);
	volumen = (4/3) * M_PI * pow(radio,3);
	
	printf("\nEl area de la esfera es: %.2f",area);
	printf("\nEl volumen de la esfera es: %.2f \n",volumen);
	
	
	
}

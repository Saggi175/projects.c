/*Construye un diagrama de flujo y el respectivo programa en C que, al recibir como
datos tres variables reales que representan los lados de un probable tri�ngulo,
determine si esos lados corresponden a un tri�ngulo. En caso de serlo, adem�s de
escribir el �rea correspondiente compruebe si el mismo es equil�tero, is�sceles o
escaleno. */

#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,area,s;
	
	printf("Ingrese el primer lado del triangulo: ");
	scanf("%f",&a);
	printf("Ingrese segundo lado del triangulo: ");
	scanf("%f",&b);
	printf("Ingrese tercer lado del triangulo: ");
	scanf("%f",&c);
	
	if ( ((a + b) > c) && ((a + c) > b ) && ((b + c) > a) ){
		
		s = (a + b + c) / 2.0;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		
		printf("\nEl area del triangulo es: %.2f",area);
		
		if (a == b && a == c){
			printf("\nEs triangulo equilatero.");
		}
		else if(a == b || b == c || a == c){
			printf("\nEs un triangulo isosceles.");
		}
		else{
			printf("\nEs un triangulo escaleno.");
		}
	}
	
	else{
		printf("\nNo corresponde a un triangulo.");
	}
	
	
}

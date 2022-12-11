/*Construye un diagrama de flujo y el programa correspondiente en C
que al recibir como dato el radio de un círculo
calcule e imprima tanto su área como la
longitud de su circunferencia.*/

#include<stdio.h>
#include<math.h>

int main(){
	float longitudCirculo,radio,area;
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f",&radio);
	
	area = M_PI * pow(radio,2);
	longitudCirculo = 2 * M_PI * radio;
	
	printf("El area del circulo es: %.2f \n",area);
	printf("La circunferencia es: %.2f",longitudCirculo);
	
}

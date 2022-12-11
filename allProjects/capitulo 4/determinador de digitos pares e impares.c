/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato un número entero de cuatro dígitos, determine si todos los dígitos del
número son pares. Por ejemplo, si el número fuera 5688, no cumpliría la condición
ya que el dígito más significativo —5— sería impar; si, por el contrario, el número
fuera 6244, sí cumpliría, ya que todos los dígitos son pares.*/

#include<stdio.h>

int main(){
	char numero[4];
	
	printf("Ingrese un numero de 4 digitos: ");
	scanf("%c",&numero);
	
	if ( ((numero[0] % 2) == 0) && ((numero[1] % 2) == 0) && ((numero[2] % 2) == 0) && ((numero[3] % 2) == 0)){
		printf("\nTodos los numeros son pares.");
	}
	else{
		printf("\nNo todos los numeros son pares.");
	}	
	
}

/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato un n�mero entero de cuatro d�gitos, determine si todos los d�gitos del
n�mero son pares. Por ejemplo, si el n�mero fuera 5688, no cumplir�a la condici�n
ya que el d�gito m�s significativo �5� ser�a impar; si, por el contrario, el n�mero
fuera 6244, s� cumplir�a, ya que todos los d�gitos son pares.*/

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

/* Escribe un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato un número entero N, calcule el resultado de la siguiente serie:
1 + 1 + 1 + 1 + . . . + 1 2 3 4 N
*/

#include<stdio.h>

int main(){
	int n,i;
	double resultado = 0;
	
	printf("Ingrese un numero entero positivo: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		resultado += 1 / i;
	}
	
	printf("\nEl resultado es: %.2f",resultado);
	
}

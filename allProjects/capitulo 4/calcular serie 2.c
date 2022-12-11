/*Escribe un programa en C que lea un número entero NUM y calcule el resultado de
la siguiente serie:

1 * 1 / 1 * 1 / ... (*,/) 1
2 34 N


*/

#include<stdio.h>

int main(){
	int n,i
	double resultado = 1;
	
	printf("Ingrese un numero entero positivo: ");
	scanf("%d",&n);
	
	for(i = 2; i <= n; i++){
		if (i % 2 == 0){
			resultado = resultado / (1.0 / i);
		}
		else{
			resultado = resultado * (1.0 / i);
		}
	}
	
	printf("\nEl resultado es: %.2f",resultado);
}

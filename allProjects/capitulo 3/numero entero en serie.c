/*Escribe un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato un número entero N, obtenga el resultado de la siguiente serie:
11 - 22 + 33 - . . . + NN*/

#include<stdio.h>
#include<math.h>

int main(){
	int n,i,resultado = 0;
	
	printf("Ingrese un numero entero: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		
		if (i % 2 == 0){
			resultado = resultado - pow(i, i);
		}
		else{
			resultado = resultado + pow(i, i);
		}
	}
	
	printf("\nEl resultado es: %d",resultado);
	
}

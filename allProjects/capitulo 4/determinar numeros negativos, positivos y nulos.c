/*Construye un diagrama de flujo y el
correspondiente programa en C que, al 
recibir como datos N números naturales
determine cuántos de ellos son positivos,
negativos o nulos.*/

#include<stdio.h>

int main(){
	int n,i,positivos = 0,negativos = 0,nulos = 0;
	float resultado;
	
	printf("Ingrese la cantidad de datos a procesar: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i = 1; i <= n; i++){
		
		printf("Ingrese un numero: ");
		scanf("%f",&resultado);
		
		if (resultado > 0){
			positivos++;
		}
		else if (dato == 0){
			nulos++;
		}
		else{
			negativos++;
		}
	}
	
	printf("\nLos numeros positivos son: %d",positivos);
	printf("\nLos numeros negativos son: %d",negativos);
	printf("\nLos numeros nulos son: %d",nulos);
	
}

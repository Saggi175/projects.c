/*Se dice que un número N es primo si los únicos enteros positivos que lo dividen
son exactamente 1 y N. Construye un diagrama de flujo y el correspondiente programa en C que lea un número entero positivo
NUM y escriba todos los números
primos menores a dicho número.*/

#include<stdio.h>

int main(){
	int n,i,creciente;
	
	printf("Ingrese un numero entero positivo: ");
	scanf("%d",&n);
	
	for (i = 2; i < n; i++){
		creciente = 2;
		int primo = 1; //verdadero
		
		while(primo == 1 && creciente < i){
			if(i % creciente == 0){
				primo = 0; //falso
			}
			else{
				creciente++;
			}
		}
		if(primo == 1){
			printf("\n%d es un numero primo",i);
		}
	}
	
	
	
	
	
	
}

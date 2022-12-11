/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como datos dos números enteros positivos, obtenga e imprima todos los números
primos gemelos comprendidos entre dichos números. Los primos gemelos son
una pareja de números primos con una diferencia entre sí de exactamente dos. El
3 y el 5 son primos gemelos.*/

#include<stdio.h>

int main(){
	int n1,n2,i;
	int a = 0, b;
	
	printf("Ingrese el primer entero: ");
	scanf("%d",&n1);
	printf("Ingrese segundo numero: ");
	scanf("%d",&n2);
	
	if(n1 == n2){
		printf("ERROR: Los numeros digitados son iguales.");
	}
	else{
		
		if(n1 > n2);{
			int aux = n1;
			n1 = n2;
			n2 = aux;	
		}
		
		for(i = n1; i <= n2; i++){
			
			int creciente = 2;
			int primo = 1;
			
			while(primo == 1 && creciente < i){
				
				if(i % creciente == 0){
					primo = 0;
				}
				else{
					creciente++;
				}	
			}
			
			if (primo == 1 && a == 0){
				a = i;
			}
			else if(primo == 1 && a != 0){
				b = i;
				if((b - a) == 2){
					printf("\n%d y %d son primos gemelos.",a,b);
				}
				a = i;
			}
		}
	}
}

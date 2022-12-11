/*Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos de entrada dos valores enteros diferentes entre sí, determine
si los mismos están en orden creciente.*/

#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Ingrese primer numero: ");
	scanf("%d",&n1);
	printf("Ingrese segundo numero: ");
	scanf("%d",&n2);
	
	if(n1 % n2 == 0){
		printf("\n%d es dividendo de %d ",n2,n1);
	}
	
	else {
		printf("\n%d no es dividendo de %d ",n2,n1);
	}
	
}

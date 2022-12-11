/*Escribe un diagrama de flujo y el correspondiente programa en C que permita generar la tabla de multiplicar
 de un número entero positivo N, comenzando desde 1.*/
 
 #include<stdio.h>
 
 
int main(){
	int n,i;
	
	printf("Ingrese un numero positivo: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i = 1; i <= 10; i++){
		printf("%d por %d es igual a %d\n",n,i, n*i);
	}
 	
 }

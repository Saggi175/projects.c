/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato un número entero positivo, escriba una figura como la que se muestra
a continuación (ejemplo para N = 6):

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1*/

#include<stdio.h>

int main(){
	int n,i,j;
	
	printf("Ingrese el numero: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("\n");
		
		for(j = 1; j <= i; j++){
			printf("%d",j);
		}
	}
	
	for(i = n - 1; i > 0; i--){
		printf("\n");
		
		for(j = 1; j <= i; j++){
			printf("%d",j);
		}
	}
			
}

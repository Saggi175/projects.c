/*Escribe un programa en C que, al recibir como dato un n�mero de cuatro d�gitos,
genere una impresi�n como la que se muestra a continuaci�n (el n�mero 6352)*/


#include<stdio.h>

int main(){
	char numero[4];
	
	printf("Ingrese numeros: ");
	scanf("%s",&numero);
	
	printf("%c \n",numero[0]);
	printf("%c \n",numero[1]);
	printf("%c \n",numero[2]);
	printf("%c",numero[3]);
	
}

/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato el salario de un profesor de una universidad, calcule el incremento del
salario de acuerdo con el siguiente criterio y escriba el nuevo salario del profesor.

Salario < $18,000 ? Incremento 12%.
$18,000  Salario  $30,000 ? Incremento 8%.
$30,000 < Salario  $50,000 ? Incremento 7%.
$50,000 < Salario ? Incremento 6%.


*/

#include<stdio.h>

int main(){
	
	float salario;
	
	printf("Ingrese salario de profesor: ");
	scanf("%f",&salario);
	
	if (salario < 18000){
		salario += (salario * 0.12);
	}
	
	else if ( (salario >= 18000) && (salario <= 30000) ){
		salario += (salario * 0.08);
	}
	
	else if ( (salario > 30000) && (salario <=50000)){
		salario += (salario * 0.07);
	}
	
	else{
		salario += (salario * 0.06);
	}
	
	
	printf("\nEl nuevo salario es: %.2f",salario);
	
	
}

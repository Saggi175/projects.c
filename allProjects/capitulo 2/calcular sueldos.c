/*En algunas oficinas del gobierno pagan horas extra a los burócratas, además del
salario correspondiente. Escribe un diagrama de flujo y el correspondiente
programa en C que permita calcular la cantidad a pagar a un trabajador tomando
en cuenta su salario y las horas extra trabajadas. Las horas extra se calculan en
función de la tabla 2.8. Cada trabajador puede tener como máximo 30 horas
extra, si tienen más, sólo se les pagarán las primeras 30. Los trabajadores con
categoría 4 o mayor a 4 no pueden recibir este beneficio.*/


#include<stdio.h>

int main(){
	int time_extras,rango;
	float sueldo;
	
	printf("Ingrese sueldo del empleado: ");
	scanf("%f",&sueldo);
	printf("Ingrese rango del empleado: ");
	scanf("%d",&rango);
	
	if (rango >= 1){
				if (rango <= 3){
					printf("\nIngrese las horas extras del empleado: ");
					scanf("%d",&time_extras);
			
					//rango 1
					if (rango == 1){
						
					if (time_extras < 30){
						sueldo += (time_extras * 40);
					}
					else{
						sueldo += (30 * 40);
					}
				}
			}
		
				//rango 2
			else if (rango == 2){
				
				if (time_extras < 30){
					sueldo += (time_extras * 50);
				}
				else{
					sueldo += (30 * 50);
				}
			}

				//rango 3
				else if (rango == 3){
				
					if (time_extras < 30){
						sueldo += (time_extras * 85);
					}
					else{
						sueldo += (30 * 85);
					}
				}
				
			else{
				;
			}
	
			printf("\nEl sueldo a pagar es: %.2f",sueldo);
		}
	
	else{
		printf("\nRango ingresado no es correcta.");
	}
}

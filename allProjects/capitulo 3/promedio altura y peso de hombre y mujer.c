/*Construye un diagrama de flujo y el correspondiente programa en C que, al recibir como datos el peso, la altura y el sexo de N personas que pertenecen a un
estado de la República Mexicana, obtenga el promedio del peso (edad = 18) y el
promedio de la altura (edad = 18), tanto de la población masculina como de la
femenina. */

#include<stdio.h>

int main(){
	int n,i;
	char sexualidad;
	float peso,altura;
	float peso_H = 0, alt_H;
	int cantidad_H;
	float peso_F = 0, alt_F = 0;
	int cantidad_F = 0;
	float promPeso_H,promAlt_H,promPeso_F,promAlt_F;
	
	printf("Ingrese cantidad de personas de evaluar: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("\nIngrese la sexualidad de la persona (M) (F): ");
		scanf("%c",&sexualidad);
		
		if (sexualidad == 'M' || sexualidad == 'm'){
			printf("\nIngrese peso: ");
			scanf("%f",&peso);
			peso_H += peso;
			printf("\nIngrese altura: ");
			scanf("%f",&altura);
			alt_H += altura;
			cantidad_H++;
		}
		
		else if (sexualidad == 'F' || sexualidad == 'f'){
			printf("\nIngrese peso: ");
			scanf("%f",&peso);
			printf("\nIngrese peso: ");
			scanf("%f",&peso);
			peso_F += peso;
			printf("\nIngrese altura: ");
			scanf("%f",&altura);
			alt_F += altura;
			cantidad_F++;
		}
		
		else {
			printf("\nDato no procesado. Sexualidad digitada incorrecta.");
		}
	}
	
	//hombre
	if(cantidad_H > 0){
		promPeso_H = peso_H / (float) (cantidad_H);
		promAlt_H = alt_H / (float) (cantidad_H);
	}
	else {
		promPeso_H = peso_H = 0;
		promAlt_H = alt_H = 0;
	}
	
	//mujer
	if(cantidad_F > 0){
		promPeso_F = peso_F / (float) (cantidad_F);
		promAlt_F = alt_F / (float) (cantidad_F);
	}
	else {
		promPeso_F = peso_F = 0;
		promAlt_F = alt_F = 0;
	}
	
	//promedio de ambos sexos
	printf("\nEl promedio de peso de los hombres es de: %.2f",promPeso_H);
	printf("\nRl promedio de peso de las mujeres es de: %.2f",promPeso_F);
	printf("\nEl promedio de altura de los hombres es: %.2f",promAlt_H);
	printf("\nEl promedio de altura de las mujeres es: %.2f",promAlt_F);
}

/*En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de
acuerdo con el monto de su compra. El criterio para establecer el descuento se
muestra abajo. Construye un diagrama de flujo y el correspondiente programa en
C que, al recibir como dato el monto de la compra del cliente, obtenga el precio
real que debe pagar luego de aplicar el descuento correspondiente. 


Compra < $800 ? Descuento 0%.
$800  Compra  $1500 ? Descuento 10%.
$1500 < Compra  $5000 ? Descuento 15%.
$5000 < Compra ? Descuento 20%

*/

#include<stdio.h>

int main(){
	float compra;
	
	printf("Ingrese monto de la compra: ");
	scanf("%f",&compra);
	
	if (compra > 5000){
		compra -= (compra * 0.02);
	}
	
	else if (compra <= 5000 && compra > 1500){
		compra -= (compra * 0.15);
	}
	
	else if (compra <= 1500 && compra >= 800){
		compra -= (compra * 0.1);
	}
	
	else{
		;
	}
	

	printf("\nEl precio total a pagar es: %.2f",compra);
}

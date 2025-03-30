/*Escribir una sentencia if-else que clasifique un entero x en una de las siguientes categorías y escriba un mensaje adecuado:
 x < 0    o bien    0 ≤ x ≤100 o bien    x > 100 */

#include <stdio.h>

int main(){
	
	int a;
	printf("\n\n\t introduzca un numero entero:");
	scanf("%d", &a);
	if ( a < 0)
	{
		printf("\n\n\t el numero introducido es menor que cero");
	}
	else if (a >=0 && a <= 100){
		printf("\n\n\t el numero introducido esta entre 0 y 100");
	}
	else if (a > 100){
		printf("\n\n\t el numero introducido es mayor a 100");
	}
	return 0;
}

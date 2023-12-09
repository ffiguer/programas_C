/*hacer un programa que pida por pantalla un numero del 1 al 10 y mediante un procedimiento muestre
por panalla el numero escrito en letras*/

//autor: Fabio Figueroa Benitez

#include <stdio.h>

	void numero_uno_al_diez()
	{
	
	int numero;
	printf("\n\n\t digite un numero del 1 al 10:");
	scanf("%i",& numero);
	if (numero == 1)
	{
		printf("uno");
	}
	if (numero == 2)
	{
		printf("dos");
	}
	if (numero == 3)
	{
		printf("tres");
	}
	if (numero == 4)
	{
		printf("cuatro");
	}
	if (numero == 5)
	{
		printf("cinco");
	}
	if (numero == 6)
	{
		printf("seis");
	}
	if (numero == 7)
	{
		printf("siete");
	}
	if (numero == 8)
	{
		printf("ocho");
	}
	if (numero == 9)
	{
		printf("nueve");
	}
	if (numero == 10)
	{
		printf("diez");
	}
  }
  
  int main()
  {
  	numero_uno_al_diez();
	  return 0;	
  }

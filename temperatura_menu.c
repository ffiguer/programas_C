/*programa con funciones para convertir de celsius a fahrenheit con funciones*/

#include <stdio.h>

void menu();
void celsiusFahrenheit();
void celsiusKelvin();

int main()

{
	menu();
	
}

void menu()
{
	int opcion;
	
do{
	printf("\n\n\t MENU");
	printf("\n\n\t 1. calcular la temperatura en Fahrenheit");
	printf("\n\n\t 2. calcular la temperatura en kelvin");
	scanf("%i",&opcion);
	
	switch(opcion)
	{
	case 1:celsiusFahrenheit();break;
	case 2:celsiusKelvin();break;
	}
	
  }
	while(opcion !=3);
	
	}

void celsiusFahrenheit(){
	float temperaturac, f;
	printf("\n\n\t digite el valor de temperatura el celsius:");
	scanf("%f",&temperaturac);
	f=((9*temperaturac)/5 ) +32;
	printf("\n\n\t el valor de la temperatura en fahrenheit es:%.2f",f);
	
}
void celsiusKelvin(){
	float c, k;
	printf("\n\n\t digite el valor de temperatura el celsius:");
	scanf("%f",& c);
	k=c+273;
	printf("\n\n\t el valor de la temperatura en kelvin es:%.2f",k);
	
}

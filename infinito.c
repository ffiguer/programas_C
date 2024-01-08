#include <stdio.h> 
int main(void)   //inicio del programa
{
	int i, suma=0, n=5; //declaracion de variables
	for(i=1; i < n; i--) //definicion del intervalo desde 1 hasta n
	{
	suma=suma+i;
	printf("sum = %d i=%d\n",suma,i);
	}
}

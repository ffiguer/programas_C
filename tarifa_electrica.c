# include <stdio.h>
int main()
{
	float tarifa1=1.2, tarifa2=1.0, tarifa3=0.9, gasto;   //definicion de variables
	printf("\n\n\t introduzca el gasto en KWh de este mes marcado por el contador:"); //introduzca el valor marcado por el contador
	scanf("%f",& gasto); //captura del dato
	if(gasto < 1000) //evaluación de la primera condicion
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa1); //imprime teniendo en cuenta la primera condición
	if(gasto >= 1000 && gasto <= 1850) //evaluación de la segunda condicion
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa2);  //imprime teniendo en cuenta la segunda condición
	if(gasto > 1850)  //evaluacion de la tercera condición
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa3);  //imprime teniendo en cuenta la tercera condición
	return 0; //retorne 0
}       //fin del programa

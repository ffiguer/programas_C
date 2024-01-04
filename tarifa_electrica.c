# include <stdio.h>
int main()
{
	float tarifa1=1.2, tarifa2=1.0, tarifa3=0.9, gasto;
	printf("\n\n\t introduzca el gasto en KWh de este mes marcado por el contador:");
	scanf("%f",& gasto);
	if(gasto < 1000)
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa1);
	if(gasto >= 1000 && gasto <= 1850)
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa2);
	if(gasto > 1850)
	printf("\n\n\t la tarifa a cobrar este mes es de: %.2f",tarifa3);
	return 0;
}

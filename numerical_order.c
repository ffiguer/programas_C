/* Write a program that reads three integers and outputs a message indicating whether they are in numerical order or not.*/

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("\n\n\t Please enter three integers:");
	scanf("%d" "%d" "%d",&a,&b,&c);
	if(a < b && b < c)
	{
		printf("\n\n\t They are in numerical order");
	}
	else if( a > b && b > c)
	{
		printf("\n\n\t They are not in numerical order");
	}
	
	else if ( a==b && b==c)
	{
		printf("\n\n\t They are equal");
	}
	
	else if ( a==b || b==c || a==c)
	{
		printf("\n\n\tThere are repeated numbers");
	}
	
	return 0;
}

//El siguiente programa imprime 1000 numeros pares bien sea que introduzcas un numero par o un numero impar
//ejemplo si introduzco 100, salen los numeros del 100 al 1000 pares
//si introduzco 51 el cual es un impar, salen los numeros desde el 52 al 1000
//autor: Fabio Figueroa Benitez
# include <stdio.h>
int main()
{
 int n, n_r;
 printf("\n\n\t introduce un numero:");
 scanf("%i",& n);
 if( n%2 == 0){
  while ( n <= 1000)
  {
     printf("%i\n",n);
     n=n+2; 
  }
     } else if (n% 2 == 1) {
      while ( n <= 1000){
      n=n+2;
      n_r=n-1;
      printf("%i\n",n_r);
  } 
 } 
}

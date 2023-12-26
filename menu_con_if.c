/*saludos: así quedó mi proyecto de menú hecho con if. Aunque la mejor opción es usar switch...espero les guste y sea de su agrado*/
# include <stdio.h>
# include <math.h>
# define   PI 3.141516
# include <string.h>
# include <stdlib.h>
# include <time.h>
/*char palabra [20];*/
int jugador, computadora;
int op1, opp1, A, B, C, D;
float x1, x2, xr, xi, radio, area, r;
float num_raiz, disc, resultado, nota_1, nota_2, nota_3, nota_4, nota_5, nota_6, nota_definitiva, nota_definitiva2, K, F, celsius, a,b,c,d, eq,eq2;
int n,x;
int main()
{
 srand(time(NULL));
 printf("\n\n\t MENU");
 printf("\n\n\t 1-Raiz Cuadrada \n");
 printf("\n\n\t 2-Calcula tus notas \n");
 printf("\n\n\t 3- visualizar letra F con asteriscos \n");
 printf("\n\n\t 4- pasar de grados celsius a kelvin y farhenheit \n");
 printf("\n\n\t 5- resolver la ecuacion cuadratica \n");
 printf("\n\n\t 6- calcular el area de una circunferencia \n");
 printf("\n\n\t 7- comparar 4 numeros e indicar quien es el mayor de ellos \n");
 printf("\n\n\t 8- piedra-papel-tijera\n");
 printf("\n\n\t 9- resolver la ecuacion a*b+c/d*a \n");
 printf("\n\n\t 10- introducir un numero, incrementarlo, decrementarlo \n");
 scanf("%d",& op1);
 if(op1==1)
 {
 printf("\n\n\t introduzca el numero: \n");
 scanf("%f",& num_raiz);
 resultado = sqrt(num_raiz);
 printf("\n\n\t el resultado de la raiz es:%.2f",resultado);
 }
 if(op1==2)
 {
 printf("\n\n\t elija un tipo de calculo para las notas: \n");
 printf("\n\n\t opcion 0 para promedio aritmetico \n");
 printf("\n\n\t opcion 1 para 4 notas 12.5% y dos del 25% \n");
 scanf("%d",& opp1);
 if(opp1 == 0)
 {
 printf("\n\n\t introduzca las 5 notas del semestre academico:");
 scanf("%f %f %f %f %f", &nota_1, &nota_2, &nota_3, &nota_4, &nota_5);
 nota_definitiva = (nota_1 + nota_2 + nota_3 + nota_4 + nota_5) / 5;
 printf("\n\n\t la nota definitiva es: %.2f", nota_definitiva);
 if( nota_definitiva >= 3.0) 
 {
 printf("\n\n\t aprobo");
 }
 else if( nota_definitiva < 3.0) {
 printf("\n\n\t reprobo");
 }
 }
 if(opp1 == 1)
 {
 printf("\n\n\t introduzca las 4 notas del semestre academico equivalentes al 12.5%:");
 scanf("%f %f %f %f", &nota_1, &nota_2, &nota_3, &nota_4);
 printf("\n\n\t introduzca las 4 notas del semestre academico equivalentes al 25%:");
 scanf("%f %f", &nota_5, &nota_6);
 nota_definitiva2 = ((nota_1*0.125)+(nota_2*0.125)+(nota_3*0.125)+(nota_4*0.125)+(nota_5*0.25)+(nota_6*0.125));
 printf("\n\n\t la nota definitiva es: %.2f", nota_definitiva2);
 if( nota_definitiva >= 3.0) 
 {
 printf("\n\n\t aprobo");
 }
 else if( nota_definitiva < 3.0) {
 printf("\n\n\t reprobo");
 }
 } 
 else {
 printf("\n\n\t ERROR AL DIGITAR OPCION");
 } 
      }
      if(op1==3)
 {
 printf("\n\n\t * * * * *");
 printf("\n\n\t* ");
 printf("\n\n\t* ");
 printf("\n\n\t* * * *");
 printf("\n\n\t* ");
 printf("\n\n\t* ");
 printf("\n\n\t* ");
 }
  if(op1==4)
 {
 printf("\n\n\t introduzca el valor de temperatura en °C:");
 scanf("%f", & celsius);
 K=celsius+273;
 F=((celsius*1.8 + 32);
 printf("\n\n\t temperatura en kelvin = %.2f", K);
 printf("\n\n\t temperatura en farhenheit = %.2f", F); 
 }
 if(op1==5)
 {
 printf("\n\n\t introduzca los 3 valores enteros a, b, c de la ecuacion cuadraica ax^2+bx+c:");
 scanf("%f %f %f", & a ,& b ,& c);
 disc=pow(b, 2.0)-(4*a*c);
             if(disc >0.0)
  {
              x1=((-b+sqrt(disc))/(2.0*a));
                x2=((-b-sqrt(disc))/(2.0*a));
                printf("\n\n\t las soluciones de la ecuacion cuadratica son:%.2f y %.2f ", x1, x2);
  }
   else if(disc ==0.0){
    x1=(-b)/(2.0*a);
     printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1);
   }
   else
   {
    xr=(-b/(2.0*a));
                xi=(sqrt(-disc)/(2.0*a));
                printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f i", xr, xi);
   }
 }
    if(op1==6)
    {
     printf("\n\n\t introduzca el radio de la circunferencia en cm: ");
     scanf("%f", & radio);
     area = PI*radio*radio;
     printf("\n\n\t el area de la circunferencia es: %.2f  cm^2 ", area);
    }
    if(op1==7)
    {
     printf("\n\n\t introduzca 4 numeros:");
     scanf("%d %d %d %d", &A , &B, &C, &D);
     if(A > B && A > C && A > D)
        {
     printf("\n\n\t el mayor es: %d",A);
    }
    else if(B > A && B > C && B > D)
        {
     printf("\n\n\t el mayor es: %d",B);
    }
    else if(C > A && C > B && C > D)
        {
     printf("\n\n\t el mayor es: %d",C);
    }
    else if(D > A && D > B && D > C)
        {
     printf("\n\n\t el mayor es: %d",D);
    }
    else
    {
     printf("\n\n\t\a todos los numeros son iguales");
    }
    }
    if(op1==8)
    {
     printf("\n\n\t para piedra marca 1, papel marca 2 o tijera marca 3 :");
     scanf("%d", & jugador);
     computadora = rand() % 3 + 1;
     printf("\n\n\t Jugador:");
     if(jugador ==1)
     {
     printf("\n\n\t piedra");
 }
 else if (jugador == 2)
 {
 printf("\n\n\t papel");
 }
 else if (jugador == 3)
 {
 printf("\n\n\t tijera");
 }
 else{
 printf("\n\n\t ERROR");
 }
 printf("\n\n\t computadora:");
 if(computadora ==1)
     {
     printf("\n\n\t piedra");
 }
 else if (computadora == 2)
 {
 printf("\n\n\t papel");
 }
 else if (computadora == 3)
 {
 printf("\n\n\t tijera");
     }
     if(jugador == 1 && computadora == 1)
     {    
         printf("\n\n\t jugador eligio piedra y computadora piedra ");
         printf("\n\n\t empate "); 
 }
 else if (jugador == 1 && computadora == 2)
     {
      printf("\n\n\t jugador eligio piedra y computadora papel ");
         printf("\n\n\t gana computadora"); 
 }
 else if (jugador == 1 && computadora == 3)
     {   printf("\n\n\t jugador eligio piedra y computadora tijera ");
         printf("\n\n\t gana jugador"); 
 }
 else if (jugador == 2 && computadora == 1)
     {
      printf("\n\n\t jugador eligio papel y computadora piedra ");
         printf("\n\n\t gana jugador"); 
 }
 else if (jugador == 2 && computadora == 2)
     {
      printf("\n\n\t jugador eligio papel y computadora papel ");
         printf("\n\n\t empate"); 
 }
 else if (jugador == 2 && computadora == 3)
     {   
         printf("\n\n\t jugador eligio papel y computadora tijera ");
         printf("\n\n\t gana computadora"); 
 }
 else if (jugador == 3 && computadora == 1)
     {   
         printf("\n\n\t jugador eligio tijera y computadora piedra ");
         printf("\n\n\t gana computadora"); 
 }
 else if (jugador == 3 && computadora == 2)
     {   
         printf("\n\n\t jugador eligio tijera y computadora papel ");
         printf("\n\n\t gana jugador"); 
 }
 else if (jugador == 3 && computadora == 3)
     {   
         printf("\n\n\t jugador eligio tijera y computadora tijera ");
         printf("\n\n\t gana empate"); 
 }
 }
    if(op1==9)
    {
     printf("\n\n\t introduzca a, b, c y d: ");
     scanf("%f %f %f %f",&a ,&b ,&c ,&d);
     r=(a*b)+c/(d*a);
     printf(" resultado es: %.2f",r);
    }
    if(op1==10)
    {
     printf("\n\n\t introduzca un numero: ");
     scanf("%d", &n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
     printf("\n\n\t a=%d",n);
     n--;
    }
  return 0;
}

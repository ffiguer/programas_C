#include <stdio.h>

void menu();
void sumar();
void restar();
void multiplicar();
void dividir();
int main(){
	
	menu();
	
	return 0;
}
	void menu(){
		int opc;
		
		do{
			printf("\n\n\t opcion 1. Sumar");
			printf("\n\n\t opcion 2. restar");
			printf("\n\n\t opcion 3. multiplicar");
			printf("\n\n\t opcion 4. dividir");
			printf("\n\n\t opcion 5. Salir");
			printf("\n\n\t opcion");
			scanf("%i",&opc);
			
			switch(opc){
				
				case 1:sumar();break;
				case 2:restar();break;
			    case 3:multiplicar();break;
			    case 4:dividir();break;
			}
			
			
		}while(opc !=5);
			
		}
	
	void sumar(){
		int a, b, sum=0;
		printf("\n\n\t digite el primer numero:");
		scanf("%i",&a);
		printf("\n\n\t digite el segundo numero:");
		scanf("%i",&b);
		sum=a+b;
		printf("\n\n\t resultado:%d",sum);
		scanf("%i",&a);
	}
	
		void restar(){
		int a, b, rest=0;
		printf("\n\n\t digite el primer numero:");
		scanf("%i",&a);
		printf("\n\n\t digite el segundo numero:");
		scanf("%i",&b);
		rest=a-b;
		printf("\n\n\t resultado:%d",rest);
		scanf("%i",&a);
	}
	
		void multiplicar(){
		int a, b, mult=0;
		printf("\n\n\t digite el primer numero:");
		scanf("%i",&a);
		printf("\n\n\t digite el segundo numero:");
		scanf("%i",&b);
		mult=a*b;
		printf("\n\n\t resultado:%d",mult);
		scanf("%i",&a);
	}
	
	    void dividir(){
		int a, b, div=0;
		printf("\n\n\t digite el primer numero:");
		scanf("%i",&a);
		printf("\n\n\t digite el segundo numero:");
		scanf("%i",&b);
		div=a/b;
		printf("\n\n\t resultado:%d",div);
		scanf("%i",&a);
	}

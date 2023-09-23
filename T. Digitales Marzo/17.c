#include <stdio.h>

int main()
{
   // Declarar una variable
   int num= 99;
   // Mostrar la variable
   printf( "%d\n" , num );
   // Declarar una segunda variable
   int num2= 12;
   printf("%d\n" , num2);
   // Declarar un tercera variable (Operar con variables)
   int resultado;
   resultado = num + num2;
   // Imprimir resultado 
   printf("%d + %d = %d\n" , num, num2, resultado);
   
}

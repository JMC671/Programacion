#include <stdio.h>
int main()
{
    printf("1)\n\n");
    
    int var1= 10, var2= 2;

    printf("Suma de variables= %d\n\n", var1 += var2);
    printf("Resta de variables= %d\n\n", var1 -= var2);
    printf("Multiplicacion de variables= %d\n\n", var1 *= var2);
    printf("Division de variables= %d\n\n", var1 /= var2);
    
    printf("\n2)\n\n");

    int var3= 1, var4= 2, var5= 3;

    printf("El resultado es= %d\n\n", var3 += var4 *= var5 += var3);

    printf("\n3)\n\n");

    int var6= 10;

    printf("Modulo de la variable con el valor 1= %d\n", var6 % 1);
    printf("Modulo de la variable con el valor 2= %d\n", var6 % 2);
    printf("Modulo de la variable con el valor 3= %d\n", var6 % 3);
    printf("Modulo de la variable con el valor 4= %d\n", var6 % 4);
    printf("Modulo de la variable con el valor 5= %d\n", var6 % 5);
    printf("Modulo de la variable con el valor 6= %d\n", var6 % 6);
    printf("Modulo de la variable con el valor 7= %d\n", var6 % 7);
    printf("Modulo de la variable con el valor 8= %d\n", var6 % 8);
    printf("Modulo de la variable con el valor 9= %d\n", var6 % 9);


}
#include <stdio.h>

int main(){

// Ejercicios

printf("1)\n\n");

printf("l\no\nr\ne\nm\n\ni\np\ns\nu\nm\n");

printf("\n2)\n\n");

printf(" 10 mediciones\n 11 mediciones\n 150 mediciones\n 123 mediciones\n 2000 mediciones\n 2022 mediciones\n 0 mediciones\n 9 mediciones\n\n");

printf("\n3)\n\n");

printf(" 10\tmediciones\n 11\tmediciones\n 150\tmediciones\n 123\tmediciones\n 2000\tmediciones\n 2022\tmediciones\n 0\tmediciones\n 9\tmediciones\n\n");

printf("\n4)\n\n");

printf("        *\n       ***\n      *****\n     *******\n    *********\n\n");

printf("\n5)\n\n");

// Variables

int var1= 20;
int var2= 5;
int res;
int res2;
int res3;
int res4;
res = var1 + var2;
res2 = var1 - var2;
res3 = var1 * var2;
res4 = var1/var2;

printf("La suma de %d y %d es igual a %d\nLa resta de %d y %d es igual a %d\nLa multiplicacion de %d y %d es igual a %d\nLa division entre %d y %d es igual a %d", var1, var2, res, var1, var2, res2, var1, var2, res3, var1, var2, res4);

printf("\n\n6)\n\n");

int cantusin= 1;
int cantusre= 2;
int cantuspre= 3;
{
printf("Cantidad de usuarios en linea= %d | ", cantusin);
printf("Cantidad de usuarios registrados= %d | ", cantusre);
printf("Cantidad de usuarios ayer= %d |", cantuspre);
}
}
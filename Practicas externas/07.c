#include <stdio.h>
#include <conio.h>

int main()
{
    float precio, importe;
    int cantidad;
    printf("Ingrese el precio del producto: $");
    scanf("%f", &precio);
    printf("Ingrese la cantidad de productos:");
    scanf("%i", &cantidad);
    importe= precio*cantidad;
    printf("Total a pagar: $");
    printf("%f", importe);
    getch();
    return 0;

}
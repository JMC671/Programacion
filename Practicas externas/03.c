#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    suma= num1+num2;
    producto= num1*num2;
    printf("La suma de los valores:");
    printf("%i", suma);
    printf("\n");
    printf("El producto de los dos valores:");
    printf("%i", producto);
    getch(); // Este comando hace que no se nos cierre la consola al aplicar los valores, se necesita de la libreria conio.h
    return 0;


}
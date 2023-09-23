#include <stdio.h>
#include <conio.h>

int main()
{
    int var1, var2, var3, var4, suma, producto;
    printf("Ingrese el valor de la primera variable:");
    scanf("%i", &var1);
    printf("Ingrese el valor de la segunda variable:");
    scanf("%i", &var2);
    printf("Ingrese el valor de la tercera variable:");
    scanf("%i", &var3);
    printf("Ingrese el valor de la cuarta variable:");
    scanf("%i", &var4);
    suma= var1+var2;
    producto= var3*var4;
    printf("El resultado de la suma es:");
    printf("%i", suma);
    printf("\n");
    printf("El resultado del producto es:");
    printf("%i", producto);
    getch();
    return 0;

}
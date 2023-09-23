#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3, num4, suma, promedio;
    printf("Ingrese el valor de el primer numero:");
    scanf("%i", &num1);
    printf("Ingrese el valor del segundo numero:");
    scanf("%i", &num2);
    printf("Ingrese el valor del tercer numero:");
    scanf("%i", &num3);
    printf("Ingrese el valor del cuarto numero:");
    scanf("%i", &num4);
    suma= num1 + num2 + num3 + num4;
    promedio= suma/4;
    printf("La suma es igual a:");
    printf("%i", suma);
    printf("\n");
    printf("El promedio es:");
    printf("%i", promedio);
    return 0;
    getch();

}
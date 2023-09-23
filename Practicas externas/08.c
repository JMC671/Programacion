#include <stdio.h>
#include <conio.h>
int main()
{

float sueldo;
printf("Ingrese su sueldo: $");
scanf("%f", &sueldo);
if(sueldo>3000)
{
    printf("Esta persona debe abonar impuestos");
}
else
{
    printf("Esta persona no debe abonar impuestos");
}

getch();
return 0;
}

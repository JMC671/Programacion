#include <stdio.h>
#include <conio.h>
int main()
{
int num1, num2;
printf("Ingrese el valor del primer numero:");
scanf("%i", &num1);
printf("Ingrese el valor del segundo numero:");
scanf("%i", &num2);
if (num1>num2)
{
    printf("%i", num1);
    
}
else
{
    printf("%i", num2);
}

getch();
return 0;
}
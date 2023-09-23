#include <stdio.h>
#include <conio.h>
int main()
{
int num1;
printf("Ingrese su edad:");
scanf("%i", &num1);

if (num1>18)
{
    printf("Su edad cumple con los requisitos");
    
    
}
else
{
    printf("Usted no cumple con los requisitos minimos");

}

getch();
return 0;
}
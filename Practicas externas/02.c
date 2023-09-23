#include <stdio.h>

int main()
{
    // Los errores sintacticos detienen el compilador, mientras que los errores logicos son mas dificiles de identificar.
    int lado, superficie;
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &lado);
    superficie= lado*lado; //Eror sintactico "Superficie"
    printf("La superficie del cuadrado es:");
    printf("%i", superficie);
}
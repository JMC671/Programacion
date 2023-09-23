#include <stdio.h>
int main()
{
    // int declara variables enteras, en cambio float se usa para variables con . o ,
    int horasTrabajadas;
    float costoHora;
    float Sueldo;
    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f", &costoHora);
    Sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f", Sueldo);
    getchar();
    return 0;


}
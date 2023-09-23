#include <stdio.h>
int main(){
    int var= 10;
    // 0: Ok
    // 1: Error
    // 2: Faltan datos
    // 3: En espera
    // Default
    switch (var)
    {
    case 0:
        printf("Ok\n");
        break;
    case 1:
        printf("Error\n");
        break;
    case 2:
        printf("Faltan datos\n");
        break;
    case 3: 
        printf("En espera\n");
        break;
    // switch se utiliza cuando tengamos que usar varias veces if.
    // Hay que empezar a desarrollar un criterio a la hora de codificar, o programar un codigo o algoritmo.

        default:
            printf("El valor es inesperado");
            
    //Default solo se ejecuta cuando ninguno de los valores corresponde al valor de la variable, y no es necesario un break.
    }
}
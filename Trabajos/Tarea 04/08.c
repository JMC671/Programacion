#include <stdio.h>

int var1(int num){
    switch (var1(int num))
        {
    case -1:
        printf("ERROR INESPERADO.");
        break;

    case 0:
    printf("El programa finalizo correctamente");
        break;

    case 1: 
        printf("El programa finalizo con valor debajo del esperado\n");
    break;

    case 2: 
        printf("El programa finalizo con valor por arriba del esperado\n");
    break;

    case 3:
        printf("El programa finalizo de manera inesperada sin error\n");
    break;

    case 4:
        printf("Programa terminado por overflow de memoria.\n");
    break;

    default:
        break;
    }
    
}

int main(){
    
    // Punto 1
    
    printf("Seleccione una opcion: (1-5).\n");
    printf("Para finalizar ingrese 0.\n");
    scanf("%i", var1(int num));
    

    // Punto 2


}
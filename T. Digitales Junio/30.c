#include <stdio.h>
int main(){
    // Declaracion y tipo de variables.
    int var= 456;

    printf("%d\n", var);

    float var1;

    var1 = 12.01;

    printf("%f\n", var1);

    printf("%.2f\n", var1);

    // Estructuras de control

    if(var1 > 100){ // Solo da resultados verdaderos (1) o falsos (0).
    printf("Var1 es mayor que 100"); // Si es verdadero se imprimira esto.
    }
    else{ // Si es falso se imprimira lo siguiente.
        printf("Var1 es menor o igual a 100\n");
    }

    // Estructura switch
    int intMain = 2;
    switch (intMain)
    {
    case 1:
        printf("Opcion elegida es: 1\n");
        break;
    
    case 2: 
        printf("Opcion elegida es: 2\n");
        break;
    
    case 3: 
        printf("Opcion elegida es: 3\n");
        break;
    
    default:
        break;
    }
    while (var1<20) // mientras
    {
        printf("%.2f\n", var1);
        var1+=0.1;

    }
    

}
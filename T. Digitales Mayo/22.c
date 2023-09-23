#include <stdio.h>
#include <conio.h>
int main(){
    // ARRAYS
    // Size = n(cantidad de datos)-1 (Ejemplo: 4-1)
    // Tipo de Dato + Nombre + [Tamaño] (Valores)
    int arr[5]; /*Tamaño*/ /*Declarar*/
    // Ventajas del array es que se pueden almacenar en una sola llamada a la funcion.

    arr[0]=1; /*índice*/ /*Escribir un valor al array*/
    arr[1]=11;
    arr[2]=111;
    arr[3]=1111;
    arr[4]=11111;

    printf("%d\n", arr[0]); /*Lectura del array*/
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    // Hardcoding es una mala practica de programacion que consiste en no automatizar el codigo
    

}
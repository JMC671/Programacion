#include <stdio.h>
#include <conio.h>
int main(){
    // Aumentar una variable desde 0 hasta 1000.
    for(int i=1969; i<=2023; i++) {
        printf("%d\n", i);
        // Mientras la condición sea verdadera el for seguira repitiendo
        // El for lo utilizamos cuando conocemos la cantidad exacta de repeticiones, en que momento va a dejar de repetirse el codigo, porque tenemos una idea sobre la cantidad de veces que vamos a ejecutarlo.
        // No se vigila que se cumple una condicion.
        // for ((definicion del contador); (Condicion de salida); (Modificacion del contador);)

        // SCOPE
        int j=0;
        while(j<=2023){
        j++;
        printf("%d\n", j);
        

        }
    
    }
}
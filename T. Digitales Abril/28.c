#include <stdio.h>
#include <conio.h>
int main() {
    // While se utiliza cuando no se conoce la cantidad de repeticiones a utilizar, se suele utilizar para vigilar sensores, estados, situaciones que pueden darse dentro de un hardware, o programas de alto nivel o juegos.
    // Utilizamos while cuando no sabemose n que momento una condicion se va a dar
    int var = 0;
    printf("Inicio del While\n");
    while (var < 10000)
    {
        var++;
        printf("var: %d\n", var);
    }
    printf("Fin del While\n");
    return 0;
}
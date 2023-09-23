#include <stdio.h>
#include <conio.h>
int main()
{
    int var1= -10;
    var1 ++; //Operador de incremento
    printf("%d\n", var1);
    var1--; // Operador de decrecimiento
    printf("%d\n", var1);
    // post vs pre
    var1= 0;
    printf("Pre: %d\n", ++var1);
    printf("Post: %d\n", var1++);
    printf("final: %d\n", var1);
    

}
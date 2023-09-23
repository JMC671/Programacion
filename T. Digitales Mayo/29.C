#include <stdio.h>
int main(){
    int arr[]={1, 4, 6, 7, 0, 124, 125, 652};

    printf("%d\n", arr[4]);
    for (int i = 0; i < sizeof arr/sizeof (int); i++)
    {
        printf("%d\n", arr[i]);
    }
    
}
// Sizeof te da el tamaño de la variable que ocupa un array
// Automatizacion de un for
// 
#include <stdio.h>

#include <stdio.h>

int main() {
    char letra;
    int posicion;

    printf("Ingrese una letra del abecedario: ");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z') {  // Letra minúscula
        posicion = letra - 'a' + 1;
        int i = 1;
        
        while (i <= posicion) {
            int j = 0;
            
            while (j < i) {
                printf("%c", letra);
                j++;
            }
            
            printf("\n");
            i++;
        }
    } else if (letra >= 'A' && letra <= 'Z') {  // Letra mayúscula
        posicion = letra - 'A' + 1;
        int i = 1;
        
        while (i <= posicion) {
            int j = 0;
            
            while (j < i) {
                printf("%c", letra);
                j++;
            }
            
            printf("\n");
            i++;
        }
    } else {
        printf("Error: Caracter ingresado no es una letra del abecedario.\n");
    }

    return 0;
}





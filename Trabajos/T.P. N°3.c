#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para lanzar un dado y obtener un número aleatorio entre 1 y 6
int lanzarDado() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));  // Inicializar la semilla para números aleatorios

    int puntosUsuario = 25000;
    int puntosCPU = 100000;
    int opcion;
    
    printf("Bienvenido al juego de apuestas contra la CPU!\n");
    
    do {
        printf("\nMenú:\n");
        printf("1. Iniciar juego\n");
        printf("2. Salir del juego\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            int apuestaMinima = puntosUsuario * 0.05;
            int apuestaUsuario;
            int adivinanzaUsuario;

            printf("Tienes %d puntos.\n", puntosUsuario);
            printf("La CPU tiene %d puntos.\n", puntosCPU);
            printf("La apuesta mínima es %d puntos.\n", apuestaMinima);

            do {
                printf("Ingresa tu apuesta (mínimo %d puntos): ", apuestaMinima);
                scanf("%d", &apuestaUsuario);
            } while (apuestaUsuario < apuestaMinima || apuestaUsuario > puntosUsuario);

            do {
                printf("Elige una adivinanza (un número entre 1 y 6): ");
                scanf("%d", &adivinanzaUsuario);
            } while (adivinanzaUsuario < 1 || adivinanzaUsuario > 6);

            int dadoUsuario = lanzarDado();
            int dadoCPU = lanzarDado();

            printf("Tiraste un %d\n", dadoUsuario);
            printf("La CPU tiró un %d\n", dadoCPU);

            if (adivinanzaUsuario == dadoCPU) {
                printf("¡Adivinaste el número! Ganaste %d puntos.\n", apuestaUsuario);
                puntosUsuario += apuestaUsuario;
                puntosCPU -= apuestaUsuario;
            } else {
                printf("Lo siento, no adivinaste el número. Pierdes %d puntos.\n", apuestaUsuario);
                puntosUsuario -= apuestaUsuario;
                puntosCPU += apuestaUsuario;
            }
        } else if (opcion == 2) {
            printf("Gracias por jugar. Tu puntuación final es: %d puntos.\n", puntosUsuario);
        } else {
            printf("Opción no válida. Por favor, selecciona una opción válida.\n");
        }
    } while (opcion != 2);

    return 0;
}

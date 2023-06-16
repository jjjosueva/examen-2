#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo();

int main() {
    char input;

    printf("-- MENÚ PRINCIPAL --\n");

    while (1) {
        printf("1. Juego Nuevo\n");
        printf("2. Salir\n");
        printf("Ingresa tu opción: ");
        scanf(" %c", &input);

        if (input == '1') {
            juegoNuevo();
        } else if (input == '2') {
            break;  // Salir del bucle y finalizar el programa
        } else {
            printf("Opción inválida. Por favor, selecciona nuevamente.\n");
        }
    }

    printf("¡Gracias por jugar!\n");

    return 0;
}

void juegoNuevo() {
    char input;
    int gameOver = 0;

    printf("-- JUEGO NUEVO --\n");
    printf("Instrucciones:\n");
    printf("Utiliza las teclas 'w' (arriba), 's' (abajo), 'a' (izquierda), 'd' (derecha) para moverte por el laberinto.\n");
    printf("Presiona 'q' para regresar al menú principal.\n");

    while (!gameOver) {
        printMaze();
        printf("\nMovimientos realizados: %d\n", getMoveCount());
        printf("Ingresa tu movimiento: ");
        scanf(" %c", &input);

        if (input == 'q') {
            gameOver = 1;
        } else {
            movePlayer(input);
        }

        if (hasWon()) {
            printf("\n¡Ganaste!\n");
            int moves = getMoveCount();
            if (moves <= 8) {
                printf("Eres un Pro!\n");
            } else if (moves <= 15) {
                printf("Eres novato\n");
            } else {
                printf("Eres un noob!\n");
            }
            
            // Solicitar al jugador si desea continuar o salir
            printf("Presiona 'q' para salir o cualquier otra tecla para continuar: ");
            scanf(" %c", &input);
            if (input == 'q') {
                gameOver = 1;  // Salir del juego
            }
        }
    }
}


        

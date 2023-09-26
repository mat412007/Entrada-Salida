#include <stdio.h>


void imprimirTablero(char tablero[3][3]){
    printf("Estado del tablero: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %c ", tablero[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("------------\n");
    }
}

int comprobarVictoria(char tablero[3][3], char jugador) {
    // Verticales y horizontales
    for(int i = 0; i < 3; i++){
        if(tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
            return 1; // Gano
        }
        if(tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador){
            return 1;// Gano
        }
    }

    // Diagnolaes
    if(tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
        return 1; // Gano
    }
    if(tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador){
        return 1; // Gano
    }

    return 0; // Perdio
}


int main() {
    char tablero[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    printf("Bievenido al tateti\n");

    int juegoEnCurso = 1;
    int fila, columna;
    int turno = 0; // 0 -> Juega la 'X', 1 -> Juega el 'O'

    while(juegoEnCurso) {
        imprimirTablero(tablero);

        printf("Jugador %c, ingrese la fila y columna: ", (turno == 0) ? 'X' : 'O');
        scanf("%d %d", &fila, &columna);

        if(fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero[fila][columna] == ' '){
            tablero[fila][columna] = (turno == 0) ? 'X' : 'O';

            if(comprobarVictoria(tablero, (turno == 0) ? 'X' : 'O')){
                imprimirTablero(tablero);
                printf("El jugador %c gana\n", (turno == 0) ? 'X' : 'O');
                juegoEnCurso = 0;
            }
            else {
                turno = 1 - turno;
            }
        }
        else {
            printf("Movimiento no valido\n");
        }
    }

    printf("Fin del juego");
}
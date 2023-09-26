#include <stdio.h>

int main (int argc, char* argv[]) {

    FILE *archivo = fopen(argv[1], "r");

    if(archivo == NULL){
        printf("No se encontro el archivo");
        return 1;
    }

    // En este caso a diferencia del anterior que queria leer solo una linea
    // y podia guardarla con un array unidimensional, en este caso voy a leer 10 lineas
    // y guardarlas todas juntas en una matriz que tiene como maximo 10 filas y cada una
    // de esas filas peude almacenar 1024 elementos (caracteres)
    char lineas[10][1024];
    // x
    // x
    int contador_linea = 0;
    int linea_actual = 0;

    while(fgets(lineas[linea_actual], 1024, archivo) != NULL){
        // en el primer ciclo linea_actual = (0 + 1) % 10 = 1
        //  linea_actual = (0 + ...) % 10 = ...
        // en el ultimo ciclo  linea_actual = (12 + 1) % 10 = 3
        linea_actual = (linea_actual + 1) % 10;
        contador_linea++;
    }

    int primer_linea_a_leer = (contador_linea <= 10) ? 0 : linea_actual;

    for(int i = 0; i < 10; i++){
        printf("%s", lineas[primer_linea_a_leer]);
        primer_linea_a_leer = (primer_linea_a_leer + 1) % 10;
    }

    fclose(archivo);

}
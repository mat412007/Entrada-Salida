#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){

    FILE *archivo = fopen(argv[1], "r");

    if(archivo == NULL){
        printf("No se encontro el archivo");
        return 1;
    }

    int caracter;
    // Usamos fgetc para obtener caracteres del archivo
    // y vamos a ejecutar el codigo del while mientras que ese
    // caracter que agarramos sea distinto de EOF
    while((caracter = fgetc(archivo)) != EOF) {
        // El caracter que agarramos en ese recorrido lo imprimimos en la consola
        putchar(caracter);
    }

    fclose(archivo);
}
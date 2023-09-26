#include <stdio.h>

int main (int argc, char* argv[]) {

    FILE *archivo = fopen(argv[1], "r");

    if(archivo == NULL){
        printf("No se encontro el archivo");
        return 1;
    }

    char linea[1024];
    int contador_linea = 0;

    // A este fgets le estoy indicando que (lo que lea lo va a guardar en mi array linea)
    // (como maximo va a leer 1024 caracteres de esa linea) y ademas (lo va a leer desde
    // mi archivo). Mientras que lo que agarra fgets sea distinto de nulo se repite el while
    // y ademas compruebo que la cantidad de lineas leidas (contador_linea) sea menor a 10
    while(fgets(linea, 1024, archivo) != NULL && contador_linea < 10){
        printf("%s", linea);
        contador_linea++;
    }

    fclose(archivo);


}
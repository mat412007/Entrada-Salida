#include <stdio.h>


int main(int argc, char* argv[]){

    FILE *origen = fopen(argv[1], "r");
    FILE *destino = fopen(argv[2], "w");

    if(origen == NULL || destino == NULL){
        printf("No se encontro uno o ambos de los archivos");
    }

    int caracter;
    // en este caso leemos con fgetc cada caracter del archivo de origen
    // y mientras que sea distino ese caracter de EOF lo vamos
    // a poner en nuestro archivo de destino con la funcion fputc
    while((caracter = fgetc(origen)) != EOF){
        fputc(caracter, destino);
    }

    fclose(origen);
    fclose(destino);

}
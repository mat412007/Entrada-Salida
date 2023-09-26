#include <stdio.h>

int main(int argc, char* argv[]){

    FILE *archivo = fopen(argv[1], "r");

    if(archivo == NULL){
        printf("No se encontro el archivo");
        return 1;
    }

    int caracter;
    int numeroLinea = 1;

    printf("%d- ", numeroLinea);
    numeroLinea++;
    while((caracter = fgetc(archivo)) != EOF){
        putchar(caracter);

        if(caracter == '\n'){
            printf("%d- ", numeroLinea);
            numeroLinea++;
        }
    }

}
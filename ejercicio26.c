#include <stdio.h>
#include <stdlib.h>

//CSV = Comma Separated Values
void sacarbarran(char *linea){
    for(int i = 0; linea[i] != 0; i++){
        if(linea[i] == '\n'){
            linea[i] = 0;
        }
    }
}

int main(int argc, char *argv[]){
    char *tabla = argv[1];
    char *archivo = argv[2];
    FILE *fp = fopen(archivo, "r");
    char linea[200];
    fgets(linea, 200, fp);
    //sacar el \n de linea
    sacarbarran(linea);
    //primera linea del INSERT
    printf("INSERT INTO %s(%s) VALUES\n", tabla, linea);
    //loopear el archivo y sacar cada una de las filas
    while(fgets(linea, 200, fp) != NULL){
        sacarbarran(linea);
        printf("(%s),\n", linea);
    }
    return 0;
}
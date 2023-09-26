// INSERT INTO <nombre_tabla> (Nombre, Edad, Sueldo) VALUES (1, 2, 3)

#include <stdio.h>


int main(int argc, char *argv[]) {


    FILE *archivo = fopen(argv[1], "r");

    char *nombreTabla = argv[2];

    char linea[200];

    while(fgets(linea, 200, archivo) != NULL){
        char nombre[100] = "";
        int edad = 0;
        int salario = 0;

        // sscanf() me sirve para leer datos desde un array con formato
        // En este caso leo desde el array de linea con el siguiente formato:
        // Texto hasta encontrar una coma, entero(edad), entero(salario)
        if(sscanf(linea, "%[^,],%d, %d", nombre, &edad, &salario) == 3) {
            printf("INSERT INTO %s (nombre, edad, salario) VALUES (%s, %d, %d)\n", nombreTabla, nombre, edad, salario);
        }
    }

    fclose(archivo);
}
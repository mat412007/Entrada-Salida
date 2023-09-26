#include <stdio.h>

int main(int argc, char* argv[]){

    FILE *archivo = fopen(argv[1], "r");

    int frecuencias[10] = {0};
    int numero;

    while(fscanf(archivo, "%d", &numero) != EOF){
        if(numero >= 1 && numero <= 10){
            frecuencias[numero - 1]++;
        }
    }

    fclose(archivo);

    printf("Histograma de numeros: \n");
    for(int i = 0; i < 10; i++){
        printf("%d: ", i + 1);
        for(int j = 0; j < frecuencias[i]; j++) {
            printf("*");
        }
        printf("\n");
    }


}
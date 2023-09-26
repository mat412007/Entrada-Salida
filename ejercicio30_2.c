/*
n -> Figuritas compradas 
m -> Numero maximo de figuritas en el album

Comandos:

Ej: 
gcc 29_1.c -o figus       
gcc 29_2.c -o completar   

figus.exe 50 5 | completar.exe 5 
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){


    int m = atoi(argv[1]);

    int album[m];

    for(int i = 0; i < m; i++){
        album[i] = 0;
    }

    int numero;
    int total_figuritas = 0;

    while(scanf("%d", &numero) == 1){
        if(numero >= 0 && numero < m && album[numero] == 0){
            album[numero] = 1;
        }
        total_figuritas++;
    }

    int figuritas_faltantes = 0;
    printf("figu -> ");
    for(int i = 0; i < m; i++){
        printf("%d ", i);
        if(album[i] == 0){
            figuritas_faltantes++;
        }
    }

    printf("\ncant -> ");
    for(int i = 0; i < m; i++){
        printf("%d ", album[i]);
    }


    if(figuritas_faltantes == 0){
        printf("\nComplete el album y compre %d figus", total_figuritas);
    }
    else {
        printf("\nNo completo el album y compro %d figus", total_figuritas);
    }





}
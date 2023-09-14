#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_palabra(char *palabra, int a[], int size){

    for(int i = 0; i < size; i++){
        if(a[i] == 0){
            printf("_ ");
        }
        else{
            printf("%c ", palabra[i]);
        }
    }
}

int main(int argc, char *argv[]){
    char *palabra = "javascript";
    int size = strlen(palabra);
    int intentos = atoi(argv[1]);
    int a[size];

    for(int i = 0; i < size; i++){
        a[i] = 0;
    }

    for(int i = 0; i < intentos; i++){
        puts("\nInserta tu letra");
        for(int j = 0; j < size; i++){
            if(palabra[i] == c){
            a[i] = 1;
            }
        }
        print_palabra(palabra, a, size);
    }
    printf("\n");
    return 0;
}
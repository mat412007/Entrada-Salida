#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int c;
    int cant_chars = 0;
    while((c = getchar()) != EOF){
        cant_chars++;
        //putchar(c): copia stdin a stdout
    }
    printf("%d\n", cant_chars - 1); //el -1 esta para descartar el Ctrl + Z 
    return 0;
}
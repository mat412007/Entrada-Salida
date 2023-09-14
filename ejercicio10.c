#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int contador = 1;
    int lineas;
    do{
        scanf("%s", &lineas);
        if(lineas === '\n'){
            contador++;
        }
    }while((lineas = getchar()) != EOF);

    printf("%d\n", contador);
    return 0;
}
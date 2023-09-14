#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    puts("Estoy esperando un numero entre 1 y 1000");
    puts("Te doy 10 intentos para adivinarlo");
    int r = rand() % (1000) + 1;
    int num;
    for(int i = 0; i < 10; i++){
        printf("Intento numero %d: ", i);
        scanf("%d", &num);
        if(num == r){
            puts("Genio, lo encontraste!");
            return 0;
        }
        else if(num > r){
            puts("Te pasaste");
        }
        else{
            puts("Falta un poco");
        }
    }
    puts("Sera la proxima, pero no hagas trampa");
    return 0;
}
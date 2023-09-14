#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    puts("Estoy esperando un numero entre 1 y 1000");
    puts("Te doy 10 intentos para adivinarlo");
    int r = rand() % (1000) + 1;
    srand(time(NULL));
    int num;
    for(int i = 0; i < 10; i++){
            //faltan las condiciones
            do {
            printf("Intento numero %d: ", i);
            scanf("%d", &num);
            } while(num < 1 || num > 1000);
            if(num == r){
                puts("Genio, lo encontraste!");
                return 0;
            }
            else if(num > r){
                puts("Te pasaste");
            }
            else if(num < 1 || num > 1000){
                puts("El número debe estar entre 1 y 1000");
            }
            else{
                puts("Falta un poco");
            }
        
    }
    puts("Sera la proxima, pero no hagas trampa");
    return 0;
}
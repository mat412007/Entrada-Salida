#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]){

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    srand(time(NULL));

    for(int i = 0; i < n; i++){
        int numero = rand() % (m + 1);
        printf("%d ", numero);
    }


}
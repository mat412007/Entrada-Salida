#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        int r = rand() % (b - a + 1) + a;
        printf("%d ", r);
    }
    printf("\n");
    return 0;
}
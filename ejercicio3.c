#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    int num;
    int suma = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        suma += num;
    }
    printf("%d\n", suma);
    return 0;
}
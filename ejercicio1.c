#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int suma = 0;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
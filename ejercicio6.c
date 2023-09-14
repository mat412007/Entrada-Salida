#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int num;
    do{
        scanf("%d", &num);
        if(num >= a && num <= b){
            printf("%d ", num);
        }
    }
    while(num != EOF);

    return 0;
}
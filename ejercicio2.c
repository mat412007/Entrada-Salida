#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num;
    int sum = 0;
    do{
        scanf("%d", &num);
        sum += num;
    }
    while(num != 0){
        printf("%d\n", sum);
        return 0;
    }
}
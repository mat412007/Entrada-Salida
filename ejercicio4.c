#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num; 
    int sum = 0;
    while(scanf("%d", &num) != EOF){
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
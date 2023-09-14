#include <stdiol.h>
#include <stdlib.h>
#define MAXCHARS 250

//falta verificar
int main(int argc, char *argv[]){
    /*
    int n = atoi(argv[1]);
    n *= -1;
    */
    int n = atoi(&argv[1][1]);

    char *filename = argv[2];
    FILE *fp = fopen(filename, "r"); //r de read (leer el archivo)
    char buffer[MAXCHARS];
    //strcpy(buffer, "alguna cosa\n");
    //printf("antes del fgets %s", buffer);
    for(int i = 0; i < n; i++){
        fgets(buffer, MAXCHARS, fp);
        printf("%s", buffer);
    }
    //fgets(buffer, MAXCHARS, fp);
    //printf("despues %s", buffer);
    //fgets(buffer, MAXCHARS, fp);
    //printf("2do fgets %s", buffer);
    return 0;
}
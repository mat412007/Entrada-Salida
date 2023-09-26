#include <stdio.h>

int main () {

    int opcion;
    do {
        printf("Menu: \n");
        printf("1. Inicio\n");
        printf("2. Perfil\n");
        printf("3. Configuracion\n");
        printf("4. Ayuda\n");
        printf("5. Salir\n");
        printf("Ingrese una de las opciones: ");

        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Bienvenido al inicio\n");
                break;
            case 2:
                printf("Bievenido a tu perfil\n");
                break;
            case 3:
                printf("Bienvenido a la configuracion\n");
                break;
            case 4:
                printf("Bienvenido a la ayuda\n");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida, elija otra\n");
        }
    } while(opcion != 5);
    

}
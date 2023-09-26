# putchar(): Esta función se utiliza para imprimir un solo carácter en la salida estándar (generalmente la consola).

Ejemplo:
char letra = 'A';
putchar(letra); // Imprime 'A' en la consola


# getchar(): Se usa para leer un solo carácter desde la entrada estándar (generalmente la consola).


Ejemplo:
char caracter;
caracter = getchar(); // Lee un carácter desde la consola


# fputc(): Escribe un carácter en un archivo especificado.

Ejemplo:
char ch = 'X';
FILE *archivo = fopen("archivo.txt", "w");
fputc(ch, archivo); // Escribe 'X' en el archivo
fclose(archivo);


# fgetc(): Lee un carácter desde un archivo especificado.

Ejemplo:
char ch;
FILE *archivo = fopen("archivo.txt", "r");
ch = fgetc(archivo); // Lee un carácter del archivo
fclose(archivo);


# fgets(): Lee una línea completa (hasta un número máximo de caracteres) desde la entrada estándar o un archivo.

Ejemplo:
char linea[100];
fgets(linea, sizeof(linea), stdin); // Lee una línea desde la consola


# scanf(): Lee datos formateados desde la entrada estándar.

Ejemplo:
int numero;
scanf("%d", &numero); // Lee un número entero desde la consola


# fscanf(): Lee datos formateados desde un archivo.

Ejemplo:
int numero;
FILE *archivo = fopen("datos.txt", "r");
fscanf(archivo, "%d", &numero); // Lee un número entero desde el archivo
fclose(archivo);


# printf(): Imprime datos formateados en la salida estándar.

Ejemplo:
int numero = 42;
printf("El número es %d\n", numero); // Imprime "El número es 42" en la consola


# fprintf(): Imprime datos formateados en un archivo.

Ejemplo:
intt numero = 42;
FILE *archivo = fopen("salida.txt", "w");
fprintf(archivo, "El número es %d\n", numero); // Escribe en el archivo
fclose(archivo);

    
# fopen(): Abre un archivo para su posterior lectura o escritura.

Ejemplo:
FILE *archivo = fopen("datos.txt", "r"); // Abre el archivo "datos.txt" para lectura


# fclose(): Cierra un archivo previamente abierto.

Ejemplo:
FILE *archivo = fopen("datos.txt", "r");
fclose(archivo); // Cierra el archivo


# puts(): Imprime una cadena de caracteres en la salida estándar seguida de un salto de línea.

Ejemplo:
char mensaje[] = "Hola, mundo";
puts(mensaje); // Imprime "Hola, mundo" en la consola seguido de un salto de lí
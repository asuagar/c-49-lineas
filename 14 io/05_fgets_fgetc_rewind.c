/*
 * fgets fgetc
 *
 * Para leer texto de un fichero, una de las funciones más seguras es fgets().
 * Esta función lee una línea completa (o hasta llenar el buffer) y garantiza
 * que la cadena resultante esté terminada en '\0'.
 *
 * fgets() recibe como argumentos: un buffer donde almacenar el texto, el tamaño 
 * del buffer y el fichero (FILE *). La lectura se realiza en un bucle hasta que 
 * fgets() devuelve EOF, lo que indica fin de fichero o error. 
 *
 * En algunos casos interesa procesar un fichero carácter a carácter.
 * La función fgetc() permite leer un carácter en cada llamada. 
 *
 */

 #include <stdio.h>

int main(void)
{
    /* abrir el fichero en modo lectura */
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("output.txt");
        return 1;
    }

    /* leer y mostrar bloques de texto */
    char line[64];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    /* volver al principio del fichero */
    rewind(fp);

    /* leer y mostrar carácter a carácter */
    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    /* cerrar el fichero */
    fclose(fp);

    return 0;
}

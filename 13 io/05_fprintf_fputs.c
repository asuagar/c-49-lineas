/*
 * fprintf
 *
 * Una vez abierto un fichero en modo escritura, es posible enviar texto
 * usando funciones como fprintf() o fputs(). Estas funciones escriben
 * en el fichero de forma similar a como printf() escribe en pantalla.
 *
 * El modo "w" crea el fichero si no existe y sobrescribe su contenido
 * si ya existía. Por ello, debe usarse con cuidado.
 * 
 * fprintf() permite formatear la salida mediante una cadena de formato.
 * En esa cadena aparecen especificadores de formato, que son secuencias
 * que comienzan con '%' (por ejemplo %d, %f, %c). fputs(), en cambio, 
 * escribe una cadena tal cual, sin formato.
 * 
 */

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("output.txt", "w");  /* abrir para escritura */

    if (fp == NULL) {
        printf("error opening file\n");
        return 1;
    }

    fprintf(fp, "value: %d\n", 42);  /* escritura con formato */
    fputs("hello file\n", fp);       /* escritura simple */

    fclose(fp);  /* cerrar fichero */

    return 0;
}

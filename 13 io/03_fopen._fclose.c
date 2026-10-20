/*
 * fopen fclose
 *
 * fopen() abre un fichero y devuelve un puntero de tipo FILE *,
 * que permite trabajar con él mediante las funciones de <stdio.h>.
 * El puntero no contiene los datos del fichero: da acceso a un flujo
 * que gestiona información como la posición de lectura y escritura,
 * los indicadores de error y los buffers asociados. Si la apertura 
 * falla, fopen() devuelve NULL. 

 * fopen() lecibe dos argumentos: la ruta del fichero y el modo 
 * de apertura. En fopen("example.txt", "r"), el modo "r" es para
 * lectura. La apertura falla si el fichero no existe o no puede
 * leerse. Otros modos habituales son "w", que crea el fichero o borra
 * su contenido si ya existe, y "a", que permite añadir datos al final.
 *
 * Cuando termina su uso, fclose() cierra el flujo y libera sus recursos.
 * Si hay datos de salida pendientes, intenta escribirlos antes del
 * cierre. Devuelve EOF si se produce un error durante esta operación.
 *
 */

#include <stdio.h>

int main(void)
{
    /* abrir fichero en modelo lectura */
    FILE *fp = fopen("example.txt", "r");  

    if (fp == NULL) {
        printf("error opening file\n");
        return 1;
    }

    /* uso del fichero */
    printf("file opened successfully\n");

    /* cerrar fichero */
    fclose(fp); 

    return 0;
}
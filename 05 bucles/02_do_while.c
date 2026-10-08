/*
 * do while
 *
 * El bucle do-while es similar a while, pero con una diferencia clave:
 * la condición se evalúa después de ejecutar el bloque.
 *
 * Esto garantiza que el código se ejecuta al menos una vez, incluso si
 * la condición es falsa desde el principio.  Se utiliza cuando queremos 
 * asegurar una primera ejecución.
 * 
 */

#include <stdio.h>

int main()
{
    int done = 0;

    do {
        printf("Running calibration at least once\n");
        done = 1;
    } while (!done);

    return 0;
}